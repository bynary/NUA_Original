#pragma once

/// <summary>
/// Determines what kind(s) of weapon(s) the character possesses
/// </summary>
UENUM(BlueprintType)
enum class EWeaponEquippedState : uint8
{
	EWES_Unequipped UMETA(DisplayName = "Unequipped"),
	EWES_Equipped UMETA(DisplayName = "Equipped")
};