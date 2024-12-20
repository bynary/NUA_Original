// © 2024 Wulfhaven. All rights reserved.


#include "Characters/UnfamiliarAnimInstance.h"
#include "Characters/UnfamiliarCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

/// <summary>
/// Initialize the animation instance
/// </summary>
void UUnfamiliarAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	UnfamiliarCharacter = Cast<AUnfamiliarCharacter>(TryGetPawnOwner());
	if (UnfamiliarCharacter)
	{
		UnfamiliarCharacterMovement = UnfamiliarCharacter->GetCharacterMovement();
	}
}

/// <summary>
/// Update the animation instance
/// </summary>
/// <param name="DeltaTime"></param>
void UUnfamiliarAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (UnfamiliarCharacterMovement)
	{
		CharacterVelocity = UnfamiliarCharacterMovement->Velocity;
		GroundSpeed = UKismetMathLibrary::VSizeXY(CharacterVelocity);

		bIsFalling = UnfamiliarCharacterMovement->IsFalling();
	}
}