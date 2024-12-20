// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Delegates/DelegateCombinations.h"
#include "Engine/GameInstance.h"
#include "ISaveGameInterface.h"

#include "NuaGameInstance.generated.h"

class UNuaSaveGame;
class USaveGame;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoadGameDataEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSaveGameDataEvent);

/**
 * 
 */
UCLASS()
class NUA_ORIGINAL_API UNuaGameInstance : public UGameInstance, public ISaveGameInterface
{
	GENERATED_BODY()
	
public:
	UNuaGameInstance();

	FORCEINLINE UNuaSaveGame* GetGameData() { return SaveNuaGameData; }

	void LoadGameData(bool bIsAsync);
	void SaveGameData(bool bIsAsync);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FLoadGameDataEvent LoadGameDataComplete;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FSaveGameDataEvent SaveGameDataComplete;

private:

	virtual void Init() override;

	FString SaveGameSlot = "";
	int32 UserIndex = 0;

	UNuaSaveGame* SaveNuaGameData;

	void OnGameLoaded(const FString& SlotName, const int32 UserIndex, USaveGame* LoadedGameData);
	void OnGameSaved(const FString& SavedSlotName, const int32 UserIndex, bool bSuccess);
};
