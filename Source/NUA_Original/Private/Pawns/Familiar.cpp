// © 2024 Wulfhaven. All rights reserved.


#include "Pawns/Familiar.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AFamiliar::AFamiliar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
	SetRootComponent(CollisionCapsule);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FamiliarMesh"));
	Mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AFamiliar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFamiliar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFamiliar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

