#pragma once

/// <summary>
/// Determines the characters health status
/// </summary>
UENUM(BlueprintType)
enum class ECharacterHealthState : uint8
{
	ECHS_Healthy UMETA(DisplayName = "Healthy"),
	ECHS_Healing UMETA(DisplayName = "Healing"),
	ECHS_Wounded UMETA(DisplayName = "Wounded"),
	ECHS_Dying UMETA(DisplayName = "Dying"),
	ECHS_Dead UMETA(DisplayName = "Dead")
};