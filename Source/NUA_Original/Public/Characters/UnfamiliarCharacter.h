// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
// Equipment state includes
#include "Enums/WeaponTypes.h"
#include "Enums/WeaponEquippedState.h"
#include "Enums/CharacterArmedState.h"
#include "Enums/WindriderState.h"
// Character state includes
#include "Enums/CharacterMovementState.h"
#include "Enums/CharacterStaminaState.h"
#include "Enums/CharacterTemperatureState.h"
#include "Enums/CharacterFlyingState.h"
#include "Enums/CharacterHealthState.h"
#include "Enums/CharacterCombatState.h"
#include "Enums/CharacterAttackingState.h"
#include "Enums/CharacterInteractState.h"
// Crystal Element includes
#include "Enums/ElementTypes.h"

#include "UnfamiliarCharacter.generated.h"

// Forward-declared class types
class UAnimMontage;
class UCameraComponent;
class UCapsuleComponent;
class USkeletalMeshComponent;
class USpringArmComponent;
class UInputAction;
class UInputComponent;
class UInputMappingContext;

class ACrystal;
class AItem;
class APortal;
class ASavePoint;

UCLASS()
class NUA_ORIGINAL_API AUnfamiliarCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Set default values for character's properties
	AUnfamiliarCharacter();

	UPROPERTY(BlueprintReadWrite, Category = "Character State | Movement")
	ECharacterMovementState MovementState;

	UPROPERTY(BlueprintReadWrite, Category = "Character State | Health")
	ECharacterHealthState HealthState;
	
	UPROPERTY(BlueprintReadWrite, Category = "Character State | Stamina")
	ECharacterStaminaState StaminaState;
	
	UPROPERTY(BlueprintReadWrite, Category = "Character State | Temperature")
	ECharacterTemperatureState TemperatureState;
	
	UPROPERTY(BlueprintReadWrite, Category = "Equipment State | Weapon")
	EWeaponEquippedState WeaponEquippedState;
	
	UPROPERTY(BlueprintReadWrite, Category = "Character State | Weapon")
	ECharacterArmedState CharacterArmedState;
	
	UPROPERTY(BlueprintReadWrite, Category = "Equipment State | Windrider")
	EWindriderState WindriderState;
	
	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	ECharacterFlyingState FlyingState;
	
	UPROPERTY(BlueprintReadWrite, Category = "Character State | Combat")
	ECharacterCombatState CombatState;

	UPROPERTY(BlueprintReadWrite, Category = "Character State | Attacking")
	ECharacterAttackingState AttackingState;

	UPROPERTY(BlueprintReadWrite, Category = "Character State | Interact")
	ECharacterInteractState InteractState;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	// Teleport Character
	void Teleport(ECrystalElementType TeleportCrystalType);

	// Run timers (tracking amount of time elapsed while bIsRun == true)
	int RunTimer = 0;
	int PreRunTimer = 0;
	int DebugMode = 0;

	// Injury type integer property
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int InjuryType = 0;

	// Condition (boolean) properties
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsSprint = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsWalk = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsJump = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsHoldSpace = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsRoll = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsDodge = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsForwardLock = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsDebug = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsHurt = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsLocomotion = true;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsSnapRotation = false;

	// Attack condition (boolean) properties
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsAttack = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsAim = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsMelee = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsAttackInput = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsAimInput = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsAttackCombo = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsBattleMage = false;

	// Movement speed float properties
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float Speed_Run = 500.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float Speed_Sprint = 900.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float Speed_Walk = 100.f;

	// Input Float properties
	float InputX = 0.f;
	float InputY = 0.f;

	// Movement Float properties
	float BaseTurnRate = 65.f;
	float BaseLookUpRate = 65.f;

	// Input Vector properties
	FVector InputVector = FVector(0.0, 0.0, 0.0);
	FVector InputVector_Local = FVector(0.0, 0.0, 0.0);

	// Don't know what this is for yet
	FVector LineEndTemp = FVector(0.0, 0.0, 0.0);

	// Character damage position vector
	FVector DamagePosition = FVector(0.0, 0.0, 0.0);

	// ------------------------------------------
	// Public Getters and Setters
	// ------------------------------------------
	
	// OverlappingItem
	FORCEINLINE void SetOverlappingItem(AItem* Item) { OverlappingItem = Item; }
	FORCEINLINE AItem* GetOverlappingItem() { return OverlappingItem; }

	// OverlappingPortal
	FORCEINLINE void SetOverlappingPortal(APortal* Portal) { OverlappingPortal = Portal; }
	FORCEINLINE APortal* GetOverlappingPortal() { return OverlappingPortal; }

	// OverlappingPortal
	FORCEINLINE void SetOverlappingSavePoint(ASavePoint* SavePoint) { OverlappingSavePoint = SavePoint; }
	FORCEINLINE ASavePoint* GetOverlappingSavePoint() { return OverlappingSavePoint; }

	// SelectedWeapon
	FORCEINLINE void SetSelectedWeapon(AWeapon* Weapon) { SelectedWeapon = Weapon; }
	FORCEINLINE AWeapon* GetSelectedWeapon(AWeapon* Weapon) { return SelectedWeapon; }

	// Arsenal (weapon collection)
	FORCEINLINE void AddWeaponToArsenal(AWeapon* Weapon) { Arsenal.AddUnique(Weapon); }
	FORCEINLINE void SetArsenal(TArray<AWeapon*> WeaponArray) { Arsenal = WeaponArray; }
	FORCEINLINE TArray<AWeapon*> GetArsenal() { return Arsenal; }

	// Armed weapon 
	FORCEINLINE void SetArmedWeapon(AWeapon* Weapon) { ArmedWeapon = Weapon; }
	FORCEINLINE AWeapon* GetArmedWeapon() { return ArmedWeapon; }

	// CrystalInventory
	FORCEINLINE void AddCrystalToInventory(ECrystalElementType Crystal) { CrystalInventory.Add(Crystal, 0); }
	FORCEINLINE void SetCrystalInventory(TMap<ECrystalElementType, uint16> CrystalArray) { CrystalInventory = CrystalArray; }
	FORCEINLINE TMap<ECrystalElementType, uint16> GetCrystalInventory() { return CrystalInventory; }
	
	UFUNCTION(BlueprintCallable)
	bool HasCrystal(ECrystalElementType CrystalType);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// ------------------------------------------
	// Add Input Mapping Context and Input Actions
	// ------------------------------------------

	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* InputMappingContext;

	// Move
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* MoveAction;

	void Move(const FInputActionValue& Value);

	// Run
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* SprintAction;

	void Sprint(const FInputActionValue& Value);
	void StopSprinting(const FInputActionValue& Value);

	// Walk
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* WalkAction;

	void Walk(const FInputActionValue& Value);
	void StopWalking(const FInputActionValue& Value);

	// Look
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* LookAction;

	void Look(const FInputActionValue& Value);

	// Jump
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* JumpAction;

	virtual void Jump() override;
	virtual void StopJumping() override;

	// Forward Lock
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* ForwardLockAction;

	void ForwardLock(const FInputActionValue& Value);

	// Attack
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* AttackAction;

	void Attack(const FInputActionValue& Value);
	void StopAttack(const FInputActionValue& Value);

	// Secondary Attack
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* AttackSecondaryAction;

	void AttackSecondary(const FInputActionValue& Value);
	void StopAttackSecondary(const FInputActionValue& Value);

	// Melee
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* MeleeAction;

	void Melee(const FInputActionValue& Value);
	void StopMelee(const FInputActionValue& Value);

	// Interact
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* InteractAction;

	void Interact();

	// Dodge
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* DodgeAction;

	void Dodge();

	// Crouch Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* CrouchAction;

	void Crouching();

	// Debug Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* DebugAction;

	void Debug();

	// Scroll Runes
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* ScrollRunesAction;

	void ScrollRunes(const FInputActionValue& Value);
	int ScrollDown(int CurrentIndex, int ArraySize);
	int ScrollUp(int CurrentIndex, int ArraySize);

	// ------------------------------------------ //

	UFUNCTION(BlueprintCallable)
	void Disarm();

	UFUNCTION(BlueprintCallable)
	void Arm();

private:
	// Input Float properties
	float InputX_Local = 0.f;
	float InputY_Local = 0.f;

	// ------------------------------------------ //
	// Character's Private Properties
	// ------------------------------------------ //

	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* CharacterMesh;

	UPROPERTY(VisibleInstanceOnly)
	AItem* OverlappingItem;

	UPROPERTY(VisibleInstanceOnly)
	APortal* OverlappingPortal;

	UPROPERTY(VisibleInstanceOnly)
	ASavePoint* OverlappingSavePoint;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	AWeapon* SelectedWeapon = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	AWeapon* ArmedWeapon;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	TArray<AWeapon*> Arsenal;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	uint8 MaxWeaponCount = 1;

	UPROPERTY(VisibleAnywhere, Category = "Items")
	TMap<ECrystalElementType, uint16> CrystalInventory;

	UPROPERTY(VisibleAnywhere, Category = "Items")
	ECrystalElementType CurrentlyEquippedCrystal = ECrystalElementType::ECT_None;

	// ------------------------------------------ //
	// Add Cameras and Camera Boom
	// ------------------------------------------ //

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* ThirdPersonCameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* ThirdPersonCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* FirstPersonCameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCamera;

	// ------------------------------------------ //
	// Character's private functions
	// ------------------------------------------ //

	UFUNCTION()
	FVector GetEndPoint(int LengthFromOrigin);

	UFUNCTION()
	void SnapRotation();

	UFUNCTION()
	void SetArmedState(AWeapon* Weapon);

	UFUNCTION()
	bool CanAttack();

	UFUNCTION()
	bool CanArm();

	UFUNCTION()
	bool CanDisarm();

	UFUNCTION()
	bool CanAddWeapon();

	UFUNCTION()
	bool CanMove();

	UFUNCTION()
	bool CanInteract();

	// ------------------------------------------ //
	// Animation Montages
	// ------------------------------------------ //
	
	// Attack Montage
	UPROPERTY(EditDefaultsOnly, Category = "Animation | Montages")
	UAnimMontage* AttackMontage;
	
	// Melee (unarmed) Montage
	UPROPERTY(EditDefaultsOnly, Category = "Animation | Montages")
	UAnimMontage* MeleeMontage;

	// Equip Montage
	UPROPERTY(EditDefaultsOnly, Category = "Animation | Montages")
	UAnimMontage* EquipMontage;

	// Teleport Montage
	UPROPERTY(EditDefaultsOnly, Category = "Animation | Montages")
	UAnimMontage* TeleportMontage;

	UFUNCTION()
	void PlayAttackMontage();

	UFUNCTION()
	void PlayMeleeMontage();

	UFUNCTION()
	void PlayEquipMontage(FName SectionName);

	UFUNCTION()
	void PlayTeleportMontage();

	UFUNCTION(BlueprintCallable)
	void AttackEnd();

	UFUNCTION(BlueprintCallable)
	void StartInteracting();

	UFUNCTION(BlueprintCallable)
	void FinishInteracting();
};
