// © 2024 Wulfhaven. All rights reserved.


#include "Items/Rune.h"

// Sets default values
ARune::ARune()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
}

// Called when the game starts or when spawned
void ARune::BeginPlay()
{
	Super::BeginPlay();
}

/// <summary>
/// 
/// </summary>
/// <returns></returns>
float ARune::TransformSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

/// <summary>
/// 
/// </summary>
/// <returns></returns>
float ARune::TransformCos()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}

// Called every frame
void ARune::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;

	// Rotate the item
	if (Rotate == true)
	{
		AddActorWorldRotation(FRotator(0.f, RotationSpeed, 0.f));
	}

	// Bob the item up and down on the Z axis
	if (Bob == true)
	{
		AddActorWorldOffset(FVector(0.f, 0.f, TransformSin()));
	}
}

