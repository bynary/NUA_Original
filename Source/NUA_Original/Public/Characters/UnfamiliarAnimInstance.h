// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UnfamiliarAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class NUA_ORIGINAL_API UUnfamiliarAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	class AUnfamiliarCharacter* UnfamiliarCharacter;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	class UCharacterMovementComponent* UnfamiliarCharacterMovement;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float GroundSpeed;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector CharacterVelocity;

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	bool bIsFalling;
};
