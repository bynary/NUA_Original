// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Vehicle.generated.h"

class UBoxComponent;
class USkeletalMeshComponent;
class USplineComponent;

UCLASS()
class NUA_ORIGINAL_API AVehicle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVehicle();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	USplineComponent* MovementPath;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	UPROPERTY(EditAnywhere, Category = "Hit Box")
	UBoxComponent* HitBox;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* Mesh;
};
