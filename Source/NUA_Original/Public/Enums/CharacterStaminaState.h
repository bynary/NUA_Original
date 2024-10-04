#pragma once

/// <summary>
/// Determines what state the character's stamina is in
/// </summary>
UENUM(BlueprintType)
enum class ECharacterStaminaState : uint8
{
	ECSS_Rested UMETA(DisplayName = "Stamina - Rested"),
	ECSS_Resting UMETA(DisplayName = "Stamina - Resting"),
	ECSS_Depleting UMETA(DisplayName = "Stamina - Depleting"),
	ECSS_Depleted UMETA(DisplayName = "Stamina - Depleted")
};