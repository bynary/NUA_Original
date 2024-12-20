// © 2024 Wulfhaven. All rights reserved.


#include "Items/Weapon.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Characters/UnfamiliarCharacter.h"

AWeapon::AWeapon()
{
	WeaponBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Weapon Box"));
	WeaponBox->SetupAttachment(GetRootComponent());
	WeaponBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	WeaponBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	WeaponBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

	CollisionBox_Trace_Start = CreateDefaultSubobject<USceneComponent>(TEXT("Collision Box Trace Start"));
	CollisionBox_Trace_Start->SetupAttachment(GetRootComponent());

	CollisionBox_Trace_End = CreateDefaultSubobject<USceneComponent>(TEXT("Collision Box Trace End"));
	CollisionBox_Trace_End->SetupAttachment(GetRootComponent());
}

/// <summary>
/// 
/// </summary>
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	WeaponBox->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnBoxOverlap);
}

/// <summary>
/// 
/// </summary>
/// <param name="InParent"></param>
/// <param name="InSocketName"></param>
/// <param name="UnfamiliarCharacter"></param>
void AWeapon::Equip(USceneComponent* InParent, FName InSocketName, AUnfamiliarCharacter* UnfamiliarCharacter)
{
	AttachToSocket(InParent, InSocketName, UnfamiliarCharacter);

	if (EquipSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, EquipSound, GetActorLocation());
	}

	Bob = false;
	Rotate = false;

	if (CollisionSphere)
	{
		CollisionSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="InParent"></param>
/// <param name="InSocketName"></param>
/// <param name="UnfamiliarCharacter"></param>
void AWeapon::Unequip(USceneComponent* InParent, FName InSocketName, AUnfamiliarCharacter* UnfamiliarCharacter)
{
	AttachToSocket(InParent, InSocketName, UnfamiliarCharacter);
}


/// <summary>
/// 
/// </summary>
/// <param name="OverlappedComponent"></param>
/// <param name="OtherActor"></param>
/// <param name="OtherComp"></param>
/// <param name="OtherBodyIndex"></param>
/// <param name="bFromSweep"></param>
/// <param name="SweetResult"></param>
void AWeapon::OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnCollisionSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

/// <summary>
/// 
/// </summary>
/// <param name="OverlappedComponent"></param>
/// <param name="OtherActor"></param>
/// <param name="OtherComp"></param>
/// <param name="OtherBodyIndex"></param>
void AWeapon::OnCollisionSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnCollisionSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
}

/// <summary>
/// 
/// </summary>
/// <param name="OverlappedComponent"></param>
/// <param name="OtherActor"></param>
/// <param name="OtherComp"></param>
/// <param name="OtherBodyIndex"></param>
void AWeapon::OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	const FVector Start = CollisionBox_Trace_Start->GetComponentLocation();
	const FVector End = CollisionBox_Trace_End->GetComponentLocation();
	
	// Ignore the 
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.AddUnique(this);

	FHitResult BoxHit;

	UKismetSystemLibrary::BoxTraceSingle(
		this,
		Start,
		End,
		FVector(5.f, 5.f, 5.f),
		CollisionBox_Trace_Start->GetComponentRotation(),
		ETraceTypeQuery::TraceTypeQuery1,
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration,
		BoxHit,
		true
	);
}

/// <summary>
/// 
/// </summary>
void AWeapon::AttachToSocket(USceneComponent* InParent, FName InSocketName, AUnfamiliarCharacter* UnfamiliarCharacter)
{
	FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget, true);
	ItemMesh->AttachToComponent(InParent, TransformRules, InSocketName);
}
