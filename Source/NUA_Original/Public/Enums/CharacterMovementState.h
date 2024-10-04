#pragma once
UENUM(BlueprintType)
enum class ECharacterMovementState :uint8
{
	ECMS_Idle UMETA(DisplayName = "Movement - Idle"),
	ECMS_Running UMETA(DispalyName = "Movement - Running"),
	ECMS_Sprinting UMETA(DisplayName = "Movement - Sprinting"),
	ECMS_Walking UMETA(DisplayName = "Movement - Walking")
};