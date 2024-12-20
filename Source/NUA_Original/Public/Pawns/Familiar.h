// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Familiar.generated.h"

UCLASS()
class NUA_ORIGINAL_API AFamiliar : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFamiliar();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Collision Capsule
	UPROPERTY(VisibleAnywhere)
	class UCapsuleComponent* CollisionCapsule;

	// Familiar class mesh component
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* Mesh;

	//UPROPERTY(VisibleAnywhere)

};
