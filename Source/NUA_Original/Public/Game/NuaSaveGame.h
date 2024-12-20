// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"

#include "NuaSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class NUA_ORIGINAL_API UNuaSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UNuaSaveGame();
	
	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	FVector SavePointLocation;

	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	int16 SavePointId;
};
