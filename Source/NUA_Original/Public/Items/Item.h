// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class USphereComponent;

UCLASS()
class NUA_ORIGINAL_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void Interact();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* CollisionSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	bool Bob = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	bool Rotate = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	float RotationSpeed = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	float Amplitude = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	float TimeConstant = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
	bool DrawDebugShapes = false;

	// Item attributes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attributes")
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attributes")
	float Cost = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attributes")
	float Weight = 1.0;

	UFUNCTION(BlueprintPure)
	float TransformSin();

	UFUNCTION(BlueprintPure)
	float TransformCos();

	UFUNCTION()
	virtual void OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnCollisionSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:

	UPROPERTY(VisibleInstanceOnly, meta = (AllowAbstract = "true"))
	float RunningTime;

};
