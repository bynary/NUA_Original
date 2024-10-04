#pragma once

UENUM(BlueprintType)
enum class ECharacterAttackingState : uint8
{
	ECAS_Idle UMETA(DisplayName = "Idle"),
	ECAS_Attacking UMETA(DisplayName = "Attacking"),
	ECAS_UnderAttack UMETA(DisplayName = "Under Attack"),
	ECAS_Blocking UMETA(DisplayName = "Blocking")
};