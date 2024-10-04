#pragma once

/// <summary>
/// Determines what armed state the character is in
/// </summary>
UENUM(BlueprintType)
enum class ECharacterArmedState : uint8
{
	ECAS_Unarmed UMETA(DisplayName = "Unarmed"),
	ECAS_ArmedOneHandedWeapon UMETA(DisplayName = "Armed One-Handed Weapon"),
	ECAS_ArmedTwoHandedWeapon UMETA(DisplayName = "Armed Two-Handed Weapon"),
	ECAS_ArmedDualWield UMETA(DisplayName = "Armeded Dual-Wield Weapon"),
	ECAS_ArmedMelee UMETA(DisplayName = "Armed Melee")
};