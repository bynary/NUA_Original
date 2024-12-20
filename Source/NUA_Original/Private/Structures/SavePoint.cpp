// © 2024 Wulfhaven. All rights reserved.


#include "Structures/SavePoint.h"
#include "Components/SphereComponent.h"
#include "../DebugMacros.h"

#include "Characters/UnfamiliarCharacter.h"

// Sets default values
ASavePoint::ASavePoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	CollisionSphere->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ASavePoint::BeginPlay()
{
	Super::BeginPlay();

	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ASavePoint::OnCollisionSphereOverlap);
	CollisionSphere->OnComponentEndOverlap.AddDynamic(this, &ASavePoint::OnCollisionSphereEndOverlap);
}

// Called every frame
void ASavePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
void ASavePoint::OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AUnfamiliarCharacter* UnfamiliarCharacter = Cast<AUnfamiliarCharacter>(OtherActor);
	if (UnfamiliarCharacter)
	{
		OverlappingCharacter = UnfamiliarCharacter;
		UnfamiliarCharacter->SetOverlappingSavePoint(this);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Character arrived at save point")));
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
void ASavePoint::OnCollisionSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AUnfamiliarCharacter* UnfamiliarCharacter = Cast<AUnfamiliarCharacter>(OtherActor);
	if (UnfamiliarCharacter)
	{
		OverlappingCharacter = nullptr;
		UnfamiliarCharacter->SetOverlappingSavePoint(nullptr);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Character left save point")));
		}
	}
}