// © 2024 Wulfhaven. All rights reserved.


#include "Climbable/Climbable.h"

// Sets default values
AClimbable::AClimbable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AClimbable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClimbable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

