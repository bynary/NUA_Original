// © 2024 Wulfhaven. All rights reserved.


#include "Structures/Portal.h"
#include "Components/SphereComponent.h"
#include "../DebugMacros.h"

#include "Items/Crystal.h"

#include "Characters/UnfamiliarCharacter.h"

// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	CollisionSphere->SetupAttachment(GetRootComponent());

	OutgoingCrystalElementTypes.Add(ECrystalElementType::ECT_Io);
	OutgoingCrystalElementTypes.Add(ECrystalElementType::ECT_Kel);
	OutgoingCrystalElementTypes.Add(ECrystalElementType::ECT_Eos);
}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();
	
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &APortal::OnCollisionSphereOverlap);
	CollisionSphere->OnComponentEndOverlap.AddDynamic(this, &APortal::OnCollisionSphereEndOverlap);
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APortal::Interact(AUnfamiliarCharacter* UnfamiliarCharacter)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::White, FString::Printf(TEXT("Character is interacting with %s platform"), *ItemName));
	}

	if (!UnfamiliarCharacter->HasCrystal(IncomingCrystalElementType))
	{
		return;
	}

	for (ECrystalElementType CrystalElementType : OutgoingCrystalElementTypes)
	{
		// If the player has the appropriate crystal(s), light up the associated pillars.
		bool bHasCrystal = UnfamiliarCharacter->HasCrystal(CrystalElementType);

		// TODO: Light up associated crystal
		// TODO: Prompt player for which platform to jump to

		if (bHasCrystal)
		{
			// TODO: Light up associated crystal on portal
			// Teleport
			OverlappingCharacter->Teleport();
		}
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="OverlappedComponent"></param>
/// <param name="OtherActor"></param>
/// <param name="OtherComp"></param>
/// <param name="OtherBodyIndex"></param>
/// <param name="bFromSweep"></param>
/// <param name="SweepResult"></param>
void APortal::OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AUnfamiliarCharacter* UnfamiliarCharacter = Cast<AUnfamiliarCharacter>(OtherActor);
	if (UnfamiliarCharacter)
	{
		OverlappingCharacter = UnfamiliarCharacter;
		UnfamiliarCharacter->SetOverlappingPortal(this);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Character at portal %i!"), this->IncomingCrystalElementType));
		}
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="OverlappedComponent"></param>
/// <param name="OtherActor"></param>
/// <param name="OtherComp"></param>
/// <param name="OtherBodyIndex"></param>
void APortal::OnCollisionSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AUnfamiliarCharacter* UnfamiliarCharacter = Cast<AUnfamiliarCharacter>(OtherActor);
	if (UnfamiliarCharacter)
	{
		OverlappingCharacter = nullptr;
		UnfamiliarCharacter->SetOverlappingPortal(nullptr);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Character left portal %i!"), this->IncomingCrystalElementType));
		}
	}
}
