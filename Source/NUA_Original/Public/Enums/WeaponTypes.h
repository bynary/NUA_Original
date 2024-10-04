#pragma once

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_OneHanded UMETA(DisplayName = "Weapon - One-Handed"),
	EWT_TwoHanded UMETA(DisplayName = "Weapon - Two-Handed"),
	EWT_DualWield UMETA(DisplayName = "Weapon - Dual Wield")
};