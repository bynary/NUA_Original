#pragma once

/// <summary>
/// Determines what combat state the character is in
/// </summary>
UENUM(BlueprintType)
enum class ECharacterCombatState : uint8
{
	ECCS_Peaceful UMETA(DisplayName = "Peaceful"),
	ECCS_Threatened UMETA(DisplayName = "Threatened"),
	ECCS_Tracking UMETA(DisplayName = "Tracking"),
	ECCS_Alerted UMETA(DisplayName = "Alerted"),
	ECCS_Fighting UMETA(DisplayName = "Fighting"),
	ECCS_Victorious UMETA(DisplayName = "Victorious"),
	ECCS_Defeated UMETA(DisplayName = "Defeated")
};