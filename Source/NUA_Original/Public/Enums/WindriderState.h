#pragma once

/// <summary>
/// Determines whether or not the character possesses the WindRider
/// </summary>
UENUM(BlueprintType)
enum class EWindriderState : uint8
{
	EWRS_Unequipped UMETA(DisplayName = "Windrider Unequipped"),
	EWRS_Equipped UMETA(DisplayName = "Windrider Equipped")
};