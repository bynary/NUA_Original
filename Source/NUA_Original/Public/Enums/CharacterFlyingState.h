#pragma once

/// <summary>
/// Determines what state of flight the character is in
/// </summary>
UENUM(BlueprintType)
enum class ECharacterFlyingState : uint8
{
	ECFS_OnGround UMETA(DisplayName = "On Ground"),
	ECFS_Launching UMETA(DisplayName = "Launching"),
	ECFS_Flying UMETA(DisplayName = "Flying"),
	ECFS_Landing UMETA(DisplayName = "Landing")
};
