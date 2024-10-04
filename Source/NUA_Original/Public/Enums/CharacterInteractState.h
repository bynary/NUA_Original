#pragma once
UENUM(BlueprintType)
enum class ECharacterInteractState :uint8
{
	ECIS_Idle UMETA(DisplayName = "Idle"),
	ECIS_Interacting UMETA(DisplayName = "Interacting"),
	ECIS_EquippingWeapon UMETA(DisplayName = "Equipping Weapon")
};