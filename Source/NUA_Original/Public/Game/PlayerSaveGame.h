#pragma once

#include "CoreMinimal.h"

#include "Containers/Map.h"

#include "../Enums/ElementTypes.h"
#include "../Enums/WeaponEquippedState.h"
#include <UObject/ObjectMacros.h>

#include "PlayerSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSaveGame
{
	GENERATED_BODY()

public:
	// Character properties (health, stamina, etc.)
	// Health
	UPROPERTY(VisibleAnywhere, Category = "Character Properties")
	float CharacterHealth;

	// Stamina
	UPROPERTY(VisibleAnywhere, Category = "Character Properties")
	float CharacterStamina;

	UPROPERTY(VisibleAnywhere, Category = "Character Location")
	FTransform CharacterLocation;

	UPROPERTY(VisibleAnywhere, Category = "Character Location")
	FRotator CharacterRotation;

	// Total minutes played
	UPROPERTY(VisibleAnywhere, Category = "Player Metadata")
	uint32 TotalMinutesPlayed;

	// Total minutes idle
	UPROPERTY(VisibleAnywhere, Category = "Player Metadata")
	uint32 TotalMinutesIdle;

	// Character Level
	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
	float CharacterLevel;

	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
	TMap<ECrystalElementType, uint16> CharacterRunes;

	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
	float CharacterMetersWalked;

	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
	uint16 CharacterEnemiesKilled;

	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
	uint16 CharacterDeaths;

	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
	uint32 CharacterTotalDamageTaken;

	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
	EWeaponEquippedState CharacterWeaponEquippedState;
};