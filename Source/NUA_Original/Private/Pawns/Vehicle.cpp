// © 2024 Wulfhaven. All rights reserved.


#include "Pawns/Vehicle.h"
#include "Components/SplineComponent.h"

// Sets default values
AVehicle::AVehicle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MovementPath = CreateDefaultSubobject<USplineComponent>(TEXT("MovementPath"));
	RootComponent = MovementPath;

	MovementPath->UpdateSpline();
}

// Called when the game starts or when spawned
void AVehicle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

