#pragma once

/// <summary>
/// Determines what temperature state the character is currently in
/// </summary>
UENUM(BlueprintType)
enum class ECharacterTemperatureState : uint8
{
	ECTS_Normal UMETA(DisplayName = "Player Temperature - Normal"),
	ECTS_Hot UMETA(DisplayName = "Player Temperature - Hot"),
	ECTS_Cold UMETA(DisplayName = "Player Temperature - Cold"),
	ECTS_Freezing UMETA(DisplayName = "Player Temperature - Freezing"),
	ECTS_Frozen UMETA(DisplayName = "Player Temperature - Frozen"),
	ECTS_Burning UMETA(DisplayName = "Player Temperature - Burning")
};