// © 2024 Wulfhaven. All rights reserved.


#include "Characters/UnfamiliarCharacter.h"

#include "Animation/AnimMontage.h"

#include "Items/Item.h"
#include "Items/Weapon.h"
#include "Items/Crystal.h"

#include "Structures/Portal.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
AUnfamiliarCharacter::AUnfamiliarCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Create a camera boom (pulls in towards the player if there is a collision)
	ThirdPersonCameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("TPP_CameraBoom"));
	ThirdPersonCameraBoom->SetupAttachment(RootComponent);
	ThirdPersonCameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	ThirdPersonCameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TPP_Camera"));
	ThirdPersonCamera->SetupAttachment(ThirdPersonCameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	ThirdPersonCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Create a camera boom (pulls in towards the player if there is a collision)
	FirstPersonCameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("FPP_CameraBoom"));
	FirstPersonCameraBoom->SetupAttachment(RootComponent);
	FirstPersonCameraBoom->TargetArmLength = -80.0f; // The camera follows at this distance behind the character	
	FirstPersonCameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPP_Camera"));
	FirstPersonCamera->SetupAttachment(FirstPersonCameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FirstPersonCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// ------------------------------------------ //
	// Set Character State
	// 
	// TODO: Check loaded save state to determine character states
	// ------------------------------------------ //
	MovementState = ECharacterMovementState::ECMS_Idle;
	HealthState = ECharacterHealthState::ECHS_Healthy;
	StaminaState = ECharacterStaminaState::ECSS_Rested;
	TemperatureState = ECharacterTemperatureState::ECTS_Normal;
	CombatState = ECharacterCombatState::ECCS_Peaceful;
	AttackingState = ECharacterAttackingState::ECAS_Idle;
	CharacterArmedState = ECharacterArmedState::ECAS_Unarmed;
	WeaponEquippedState = EWeaponEquippedState::EWES_Unequipped;
	InteractState = ECharacterInteractState::ECIS_Idle;
}

/// <summary>
/// Determine if the player has the given crystal type in their inventory
/// </summary>
/// <param name="CrystalType"></param>
/// <returns></returns>
bool AUnfamiliarCharacter::HasCrystal(ECrystalElementType CrystalType)
{
	if (CrystalInventory.Contains(CrystalType))
	{
		return true;
	}

	return false;
}

// Called when the game starts or when spawned
void AUnfamiliarCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetWorld())
	{
		PlayTeleportMontage();
	}

}

// ------------------------------------------ //
// Add Input Mapping Context and Input Actions
// ------------------------------------------ //

/// <summary>
/// Setup the Player input component and bind actions
/// </summary>
/// <param name="PlayerInputComponent"></param>
void AUnfamiliarCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMappingContext, 0);
		}
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Move);

		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Sprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AUnfamiliarCharacter::StopSprinting);

		EnhancedInputComponent->BindAction(WalkAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Walk);
		//EnhancedInputComponent->BindAction(WalkAction, ETriggerEvent::Completed, this, &AUnfamiliarCharacter::StopWalking);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Look);

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AUnfamiliarCharacter::StopJumping);

		// Forward Lock
		EnhancedInputComponent->BindAction(ForwardLockAction, ETriggerEvent::Started, this, &AUnfamiliarCharacter::ForwardLock);

		// Attacking
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &AUnfamiliarCharacter::Attack);
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Completed, this, &AUnfamiliarCharacter::StopAttack);

		EnhancedInputComponent->BindAction(AttackSecondaryAction, ETriggerEvent::Started, this, &AUnfamiliarCharacter::AttackSecondary);
		EnhancedInputComponent->BindAction(AttackSecondaryAction, ETriggerEvent::Completed, this, &AUnfamiliarCharacter::StopAttackSecondary);

		EnhancedInputComponent->BindAction(MeleeAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Melee);

		// Interacting
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Interact);

		// Dodging
		EnhancedInputComponent->BindAction(DodgeAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Dodge);

		// Crouching
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Crouching);

		// Scroll Runes
		EnhancedInputComponent->BindAction(ScrollRunesAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::ScrollRunes);

		// Debug
		EnhancedInputComponent->BindAction(DebugAction, ETriggerEvent::Triggered, this, &AUnfamiliarCharacter::Debug);
	}
}

/// <summary>
/// Bind Move (forward) Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Move(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();

	// Return immediately if the character can't move
	if (!CanMove()) return;
	
	if (Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(ForwardDirection, MovementVector.Y);

		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}

	if (bIsWalk || TemperatureState == ECharacterTemperatureState::ECTS_Freezing)
	{
		GetCharacterMovement()->MaxWalkSpeed = Speed_Walk;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = Speed_Run;
	}
}

/// <summary>
/// Bind Run Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Sprint(const FInputActionValue& Value)
{
	if (!CanMove()) return;

	if (MovementState != ECharacterMovementState::ECMS_Walking)
	{
		bIsHoldSpace = true;
		MovementState = ECharacterMovementState::ECMS_Sprinting;
		bIsAim = false;

		GetCharacterMovement()->MaxWalkSpeed = Speed_Sprint;
	}

	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Walk speed is set to %f"), GetCharacterMovement()->MaxWalkSpeed));
	//}
}

/// <summary>
/// 
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::StopSprinting(const FInputActionValue& Value)
{
	bIsHoldSpace = false;
	MovementState = ECharacterMovementState::ECMS_Running;

	GetCharacterMovement()->MaxWalkSpeed = Speed_Run;
}

/// <summary>
/// Bind Walk Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Walk(const FInputActionValue& Value)
{
	// Can transition to walking if character is sprinting
	if (MovementState == ECharacterMovementState::ECMS_Sprinting) return;

	bIsWalk = !bIsWalk;

	if (bIsWalk)
	{
		MovementState = ECharacterMovementState::ECMS_Walking;
		GetCharacterMovement()->MaxWalkSpeed = Speed_Walk;
	}
	else
	{
		MovementState = ECharacterMovementState::ECMS_Running;
		GetCharacterMovement()->MaxWalkSpeed = Speed_Run;
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="Value"></param>
//void AUnfamiliarCharacter::StopWalking(const FInputActionValue& Value)
//{
//	bIsWalk = false;
//
//	if (GEngine)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Walk speed is set to %f"), GetCharacterMovement()->MaxWalkSpeed));
//	}
//
//	
//}

/// <summary>
/// Bind Look Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisValue = Value.Get<FVector2D>();

	if (GetController())
	{
		AddControllerYawInput(Value.Get<FVector2D>().X);
		AddControllerPitchInput(Value.Get<FVector2D>().Y);
	}
}

/// <summary>
/// Bind Jump Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Jump()
{
	Super::Jump();
}

/// <summary>
/// Run when Jump Input Action completed event is fired
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::StopJumping()
{
	Super::StopJumping();
}

/// <summary>
/// 
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::ForwardLock(const FInputActionValue& Value)
{
	bIsForwardLock = !bIsForwardLock;
}

/// <summary>
/// Bind Attack Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Attack(const FInputActionValue& Value)
{
	bIsAttack = true;
	bIsAttackInput = true;

	if (CanAttack())
	{
		if (WeaponEquippedState == EWeaponEquippedState::EWES_Unequipped && CharacterArmedState == ECharacterArmedState::ECAS_ArmedMelee)
		{
			bIsMelee = true;

			AttackingState = ECharacterAttackingState::ECAS_Attacking;
			PlayMeleeMontage();
		}
		else
		{
			if (CharacterArmedState == ECharacterArmedState::ECAS_Unarmed)
			{
				// Player can't attack if they are unarmed.
				//  Equip a weapon
				//  and determine the brandishing state based on weapon type enum
				if (CanArm())
				{
					PlayEquipMontage(FName("Equip"));
				}
			}

			AttackingState = ECharacterAttackingState::ECAS_Attacking;
			PlayAttackMontage();
		}
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::StopAttack(const FInputActionValue& Value)
{
	bIsAttack = false;
	bIsAttackInput = false;
}

/// <summary>
/// Bind Secondary Attack Input Action to the appropriate user action
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::AttackSecondary(const FInputActionValue& Value)
{
	bIsAim = true;
	bIsAimInput = true;
}

/// <summary>
/// 
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::StopAttackSecondary(const FInputActionValue& Value)
{
	bIsAim = false;
	bIsAimInput = false;
}

/// <summary>
/// Bind Melee Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Melee(const FInputActionValue& Value)
{
}

/// <summary>
/// 
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::StopMelee(const FInputActionValue& Value)
{
	bIsMelee = false;
}

/// <summary>
/// 
/// </summary>
void AUnfamiliarCharacter::Interact()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Interacting!"));
	}

	if (InteractState == ECharacterInteractState::ECIS_Idle)
	{
		InteractState = ECharacterInteractState::ECIS_Interacting;

		if (OverlappingItem)
		{
			AWeapon* OverlappingWeapon = Cast<AWeapon>(OverlappingItem);
			if (OverlappingWeapon)
			{
				OverlappingWeapon->Equip(GetMesh(), FName("RightHandSocket"), this);

				// If the character can add another weapon to their inventory...
				//	add the weapon, and...
				// if the character does not currently have a selected weapon,
				//	set the selected weapon to the recently added weapon, and...
				// if the current weapon equipped state is unequipped,
				//  set to equipped
				if (CanAddWeapon())
				{
					// clear the overlapping item so we don't try to equip it again
					OverlappingItem = nullptr;

					Arsenal.AddUnique(OverlappingWeapon);

					if (SelectedWeapon == nullptr)
					{
						SelectedWeapon = OverlappingWeapon;
					}

					if (WeaponEquippedState == EWeaponEquippedState::EWES_Unequipped)
					{
						WeaponEquippedState = EWeaponEquippedState::EWES_Equipped;
					}
				}
			}
		}
		else if (OverlappingPortal)
		{
			OverlappingPortal->Interact(this);
		}
		else
		{
			// There are no overlapping items to interact with, so...
			//  character can arm a weapon if all checks pass

			// if character can disarm,
			//  set the armed state to unarmed, and...
			//  clear the armed weapon
			if (CanDisarm())
			{
				PlayEquipMontage(FName("Unequip"));
			}
			// if character can arm a weapon, 
			//  set the armed state to the selected weapon's armed state, and...
			//  set the armed state to the selected weapon
			else if (CanArm())
			{
				PlayEquipMontage(FName("Equip"));
			}

		}

		InteractState = ECharacterInteractState::ECIS_Idle;
	}
}

void AUnfamiliarCharacter::Teleport(ECrystalElementType TeleportCrystalType)
{	
	if (OverlappingPortal)
	{
		APortal* DestinationPortal = OverlappingPortal->GetDestinationPortal(TeleportCrystalType);
		
		PlayTeleportMontage();
		if (DestinationPortal)
		{
			SetActorLocation(DestinationPortal->GetActorLocation());
		}
	}
	
	OverlappingPortal = nullptr;
}

/// <summary>
/// Bind Dodge Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Dodge()
{
	if (bIsRoll)
	{
		LineEndTemp = AUnfamiliarCharacter::GetEndPoint(100);
	}
	else
	{
		InputVector = FVector(InputX_Local, InputY_Local, 0.0);
	}

	if (Super::GetCharacterMovement()->IsMovingOnGround())
	{
		if (bIsDodge)
		{
			bIsRoll = true;
		}
		else
		{
			if (!bIsRoll)
			{
				bIsDodge = true;
			}
		}
	}
}

/// <summary>
/// Bind Crouch Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Crouching()
{
	Super::Crouch(true);
}

/// <summary>
/// Bind Crouch Input Action to the appropriate user input
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::ScrollRunes(const FInputActionValue& Value)
{
	int CrystalCount = CrystalInventory.Num();

	// If the player has no crystals, we can't scroll
	if (CrystalCount == 0)
	{
		return;
	}

	int32 CrystalIndex = 0;

	TArray<ECrystalElementType> CrystalInventoryArray;
	CrystalInventory.GenerateKeyArray(CrystalInventoryArray);
	CrystalInventoryArray.Find(CurrentlyEquippedCrystal, CrystalIndex);
	
	// Determine if scrolling is up or down
	FString direction = "up";

	if (Value.GetMagnitude() < 0.f)
	{
		direction = "down";
		CrystalIndex = ScrollDown(CrystalIndex, CrystalCount);
	}
	else if (Value.GetMagnitude() > 0.f)
	{
		CrystalIndex = ScrollUp(CrystalIndex, CrystalCount);
	}

	CurrentlyEquippedCrystal = CrystalInventoryArray[CrystalIndex];

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Scrolled mouse wheel %s."), *direction));
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Crystal Element %i."), CurrentlyEquippedCrystal));
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="CurrentIndex"></param>
/// <param name="ArraySize"></param>
/// <returns></returns>
int AUnfamiliarCharacter::ScrollDown(int CurrentIndex, int ArraySize)
{
	return (CurrentIndex - 1 + ArraySize) % ArraySize;
}

/// <summary>
/// 
/// </summary>
/// <param name="CurrentIndex"></param>
/// <param name="ArraySize"></param>
/// <returns></returns>
int AUnfamiliarCharacter::ScrollUp(int CurrentIndex, int ArraySize)
{
	return (CurrentIndex + 1) % ArraySize;
}

/// <summary>
/// DEBUG Action
/// </summary>
/// <param name="Value"></param>
void AUnfamiliarCharacter::Debug()
{
}

// ------------------------------------------ //

/// <summary>
/// 
/// </summary>
void AUnfamiliarCharacter::Arm()
{
	if (CanArm())
	{
		SelectedWeapon->Equip(GetMesh(), FName("RightHandSocket"), this);
		ArmedWeapon = SelectedWeapon;
		SetArmedState(ArmedWeapon);
	}
}

/// <summary>
/// 
/// </summary>
void AUnfamiliarCharacter::Disarm()
{
	if (ArmedWeapon)
	{
		ArmedWeapon->Unequip(GetMesh(), FName("SpineSocket"), this);
		ArmedWeapon = nullptr;
		CharacterArmedState = ECharacterArmedState::ECAS_Unarmed;
	}
}


/// <summary>
/// 
/// </summary>
FVector AUnfamiliarCharacter::GetEndPoint(int LengthFromOrigin)
{
	FVector EndPoint = FVector(0.0, 0.0, 0.0);

	if (AController* PlayerController = GetController())
	{
		FRotator ControlRotation = PlayerController->GetPawn()->GetControlRotation();
		FVector PawnForwardVector = UKismetMathLibrary::GetForwardVector(FRotator(0.0, 0.0, ControlRotation.Yaw));
		FVector PawnRightVector = UKismetMathLibrary::GetRightVector(FRotator(0.0, 0.0, ControlRotation.Yaw));

		FVector NewPawnControlVector = UKismetMathLibrary::Add_VectorVector(UKismetMathLibrary::Multiply_VectorFloat(PawnForwardVector, InputY), 
											 UKismetMathLibrary::Multiply_VectorFloat(PawnRightVector, InputX));

		UKismetMathLibrary::Vector_Normalize(NewPawnControlVector, 0.0001);

		EndPoint = UKismetMathLibrary::Multiply_VectorInt(UKismetMathLibrary::Multiply_VectorInt(NewPawnControlVector, LengthFromOrigin), -1);
	}

	return EndPoint;
}

/// <summary>
/// Snap character rotation
/// </summary>
void AUnfamiliarCharacter::SnapRotation()
{
	if (AController* PlayerController = GetController())
	{
		FRotator ControlRotation = PlayerController->GetPawn()->GetControlRotation();
		FRotator NewControlRotator = FRotator(0.0, 0.0, ControlRotation.Yaw);
		FRotator ActorRotation = PlayerController->GetPawn()->GetActorRotation();

		if(GetWorld())
		{
			double RotationAlpha = UKismetMathLibrary::FInterpTo(0.0, 1.0, UGameplayStatics::GetWorldDeltaSeconds(GetWorld()), 5.0);
			FRotator NewActorRotation = UKismetMathLibrary::RLerp(ActorRotation, NewControlRotator, RotationAlpha, true);

			PlayerController->GetPawn()->SetActorRotation(NewActorRotation);
		}
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="Weapon"></param>
void AUnfamiliarCharacter::SetArmedState(AWeapon* Weapon)
{
	switch (Weapon->GetWeaponType())
	{
	case(EWeaponType::EWT_OneHanded):
		CharacterArmedState = ECharacterArmedState::ECAS_ArmedOneHandedWeapon;
		break;
	case(EWeaponType::EWT_TwoHanded):
		CharacterArmedState = ECharacterArmedState::ECAS_ArmedTwoHandedWeapon;
		break;
	case(EWeaponType::EWT_DualWield):
		CharacterArmedState = ECharacterArmedState::ECAS_ArmedDualWield;
		break;
	default:
		break;
	}
}

/// <summary>
/// Determine if the player can attack 
/// True if Character Attacking State is Idle and Weapon Brandishing State is not Unbrandished
/// </summary>
/// <returns></returns>
bool AUnfamiliarCharacter::CanAttack()
{
	return AttackingState == ECharacterAttackingState::ECAS_Idle && 
		CharacterArmedState != ECharacterArmedState::ECAS_Unarmed &&
		TemperatureState != ECharacterTemperatureState::ECTS_Frozen &&
		InteractState == ECharacterInteractState::ECIS_Idle &&
		AttackMontage;
}

/// <summary>
/// Determine if player can arm a weapon
/// </summary>
/// <returns>Boolean indicating if player can arm a weapon</returns>
bool AUnfamiliarCharacter::CanArm()
{
	return TemperatureState != ECharacterTemperatureState::ECTS_Frozen &&
		HealthState != ECharacterHealthState::ECHS_Dead &&
		SelectedWeapon &&
		EquipMontage;
}

/// <summary>
/// Determine if the player can disarm
/// </summary>
/// <returns>Boolean indicating if player can disarm</returns>
bool AUnfamiliarCharacter::CanDisarm()
{
	return AttackingState == ECharacterAttackingState::ECAS_Idle &&
		CharacterArmedState != ECharacterArmedState::ECAS_Unarmed &&
		TemperatureState != ECharacterTemperatureState::ECTS_Frozen &&
		ArmedWeapon &&
		EquipMontage;
}

/// <summary>
/// Determine if player has capacity in weapon inventory for another weapon
/// </summary>
/// <returns>Boolean indicating if player weapon inventory is full</returns>
bool AUnfamiliarCharacter::CanAddWeapon()
{
	return Arsenal.Num() < MaxWeaponCount;
}

/// <summary>
/// Determine if player can move
/// </summary>
/// <returns>Boolean indicating if player can move</returns>
bool AUnfamiliarCharacter::CanMove()
{
	return (AttackingState != ECharacterAttackingState::ECAS_Attacking &&
		AttackingState != ECharacterAttackingState::ECAS_Blocking &&
		TemperatureState != ECharacterTemperatureState::ECTS_Frozen) ||
		InteractState == ECharacterInteractState::ECIS_Idle;
}

/// <summary>
/// 
/// </summary>
/// <returns></returns>
bool AUnfamiliarCharacter::CanInteract()
{
	return InteractState == ECharacterInteractState::ECIS_Idle;
}

/// <summary>
/// Play the Attack Animation Montage, selecting a random attack section each time
/// </summary>
void AUnfamiliarCharacter::PlayAttackMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	UAnimMontage* AnimMontage = AttackMontage;

	if (AnimInstance && AnimMontage)
	{
		AnimInstance->Montage_Play(AnimMontage);

		// Get the name of a random selection from all available sections in the animation montage
		int32 MontageSelection = FMath::RandRange(0, AnimMontage->GetNumSections() - 1);
		FName MontageSectionName = AnimMontage->GetSectionName(MontageSelection);

		// Play the randomized section selection
		AnimInstance->Montage_JumpToSection(MontageSectionName, AnimMontage);
	}
}

/// <summary>
/// Play the Melee Animation Montage
/// </summary>
void AUnfamiliarCharacter::PlayMeleeMontage()
{
}

/// <summary>
/// Play the Equip Animation Montage for the given SectionName
/// </summary>
/// <param name="SectionName">Name of Section to Play</param>
void AUnfamiliarCharacter::PlayEquipMontage(FName SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	UAnimMontage* AnimMontage = EquipMontage;

	if (AnimInstance && AnimMontage)
	{
		AnimInstance->Montage_Play(AnimMontage);

		AnimInstance->Montage_JumpToSection(SectionName, AnimMontage);
	}
}

/// <summary>
/// Play the Teleport Montage
/// </summary>
void AUnfamiliarCharacter::PlayTeleportMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	UAnimMontage* AnimMontage = TeleportMontage;

	if (AnimInstance && AnimMontage)
	{
		AnimInstance->Montage_Play(AnimMontage);
	}
}

/// <summary>
/// Perform action when attack end is triggered
/// </summary>
void AUnfamiliarCharacter::AttackEnd()
{
	AttackingState = ECharacterAttackingState::ECAS_Idle;
}

/// <summary>
/// Set Character Interact state to interacting
/// </summary>
void AUnfamiliarCharacter::StartInteracting()
{
	InteractState = ECharacterInteractState::ECIS_Interacting;
}

/// <summary>
/// Set Character interact state to idle
/// </summary>
void AUnfamiliarCharacter::FinishInteracting()
{
	InteractState = ECharacterInteractState::ECIS_Idle;
}

// Called every frame
void AUnfamiliarCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Don't move the character based on player input if the character is falling
	if (Super::GetCharacterMovement()->IsFalling())
	{
		Super::GetCharacterMovement()->bOrientRotationToMovement = false;
	}
	else
	{
		Super::GetCharacterMovement()->bOrientRotationToMovement = true;
	}

	if (bIsSnapRotation)
	{

	}
}
