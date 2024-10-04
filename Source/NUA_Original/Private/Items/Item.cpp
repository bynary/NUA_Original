// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "Components/SphereComponent.h"
#include "../DebugMacros.h"
#include "Characters/UnfamiliarCharacter.h"

/// <summary>
/// Sets default values
/// </summary>
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	CollisionSphere->SetupAttachment(GetRootComponent());
}

/// <summary>
/// Called when the game starts or when spawned
/// </summary>
void AItem::BeginPlay()
{
	Super::BeginPlay();

	// Add begin and end overlap delegates for the item's collision sphere
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnCollisionSphereOverlap);
	CollisionSphere->OnComponentEndOverlap.AddDynamic(this, &AItem::OnCollisionSphereEndOverlap);
}

/// <summary>
/// 
/// </summary>
/// <returns></returns>
float AItem::TransformSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

/// <summary>
/// 
/// </summary>
/// <returns></returns>
float AItem::TransformCos()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
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
void AItem::OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{	
	AUnfamiliarCharacter* UnfamiliarCharacter = Cast<AUnfamiliarCharacter>(OtherActor);
	if (UnfamiliarCharacter)
	{
		UnfamiliarCharacter->SetOverlappingItem(this);
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="OverlappedComponent"></param>
/// <param name="OtherActor"></param>
/// <param name="OtherComp"></param>
/// <param name="OtherBodyIndex"></param>
void AItem::OnCollisionSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AUnfamiliarCharacter* UnfamiliarCharacter = Cast<AUnfamiliarCharacter>(OtherActor);
	if (UnfamiliarCharacter)
	{
		UnfamiliarCharacter->SetOverlappingItem(nullptr);
	}
}

/// <summary>
/// Called every frame
/// </summary>
/// <param name="DeltaTime"></param>
void AItem::Tick(float DeltaTime)
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

void AItem::Interact()
{
}
