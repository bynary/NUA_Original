// © 2024 Wulfhaven. All rights reserved.


#include "Breakable/BreakableActor.h"
#include "Components/CapsuleComponent.h"
#include "GeometryCollection/GeometryCollectionComponent.h"
#include "Items/Item.h"

// Sets default values
ABreakableActor::ABreakableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//GeometryCollection = CreateDefaultSubobject<UGeometryCollectionComponent>(TEXT("GeometryCollection"));
	//SetRootComponent(GeometryCollection);
	//GeometryCollection->SetGenerateOverlapEvents(true);
	//GeometryCollection->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	//GeometryCollection->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
	Capsule->SetupAttachment(GetRootComponent());
	Capsule->SetGenerateOverlapEvents(true);
	Capsule->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	Capsule->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
}

// Called when the game starts or when spawned
void ABreakableActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABreakableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/// <summary>
/// 
/// </summary>
/// <param name="ImpactPoint"></param>
/// <param name="Hitter"></param>
void ABreakableActor::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
{
	UWorld* World = GetWorld();

	if (World && SpawnedItemClass)
	{
		FVector Location = GetActorLocation();

		World->SpawnActor<AItem>(SpawnedItemClass, Location, GetActorRotation());
	}
}
