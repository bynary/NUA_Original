// © 2024 Wulfhaven. All rights reserved.


#include "Game/NuaGameInstance.h"
#include "Game/NuaSaveGame.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/SaveGame.h"
#include "UObject/NoExportTypes.h"

// Sets default values
UNuaGameInstance::UNuaGameInstance()
{
}

/// <summary>
/// 
/// </summary>
void UNuaGameInstance::Init()
{
	Super::Init();

	SaveNuaGameData = Cast<UNuaSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveGameSlot, UserIndex));
}

/// <summary>
/// 
/// </summary>
/// <param name="SlotName"></param>
/// <param name="UserIndex"></param>
/// <param name="LoadedGameData"></param>
void UNuaGameInstance::OnGameLoaded(const FString& LoadedSlotName, const int32 LoadedUserIndex, USaveGame* LoadedGameData)
{
	if (LoadedGameData)
	{
		SaveNuaGameData = Cast<UNuaSaveGame>(LoadedGameData);

		UE_LOG(LogTemp, Error, TEXT("Successfully loaded game from slot: %s for user %i"), *LoadedSlotName, LoadedUserIndex);
	}
	else
	{
		// Handle the error
		UE_LOG(LogTemp, Error, TEXT("Failed to load game from slot: %s for user %i"), *LoadedSlotName, LoadedUserIndex);
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="bIsAsync"></param>
void UNuaGameInstance::LoadGameData(bool bIsAsync)
{
	if (UGameplayStatics::DoesSaveGameExist(SaveGameSlot, UserIndex))
	{
		if (bIsAsync)
		{
			FAsyncLoadGameFromSlotDelegate GameLoadedDelegate;
			GameLoadedDelegate.BindUObject(this, &UNuaGameInstance::OnGameLoaded);
			UGameplayStatics::AsyncLoadGameFromSlot(SaveGameSlot, UserIndex, GameLoadedDelegate);

			LoadGameDataComplete.Broadcast();
		}
		else
		{
			USaveGame* LoadedGameData = UGameplayStatics::LoadGameFromSlot(SaveGameSlot, UserIndex);
			SaveNuaGameData = Cast<UNuaSaveGame>(LoadedGameData);
		}
	}
	else
	{
		TSubclassOf<USaveGame> NuaSaveGameClass = UNuaSaveGame::StaticClass();
		USaveGame* NueSaveGame = UGameplayStatics::CreateSaveGameObject(NuaSaveGameClass);
	}

}

/// <summary>
/// 
/// </summary>
/// <param name="NuaSaveGame"></param>
/// <param name="SlotName"></param>
/// <param name="UserIndex"></param>
void UNuaGameInstance::OnGameSaved(const FString& SavedSlotName, const int32 SavedUserIndex, bool bSuccess)
{
	if (bSuccess)
	{
		UE_LOG(LogTemp, Log, TEXT("Game saved successfully to slot: %s for user %i"), *SavedSlotName, SavedUserIndex);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to save game to slot: %s for user %i"), *SavedSlotName, SavedUserIndex);
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="bIsAsync"></param>
void UNuaGameInstance::SaveGameData(bool bIsAsync)
{
	if (bIsAsync)
	{
		FAsyncSaveGameToSlotDelegate GameSavedDelegate;
		GameSavedDelegate.BindUObject(this, &UNuaGameInstance::OnGameSaved);
		UGameplayStatics::AsyncSaveGameToSlot(SaveNuaGameData, SaveGameSlot, UserIndex, GameSavedDelegate);

		SaveGameDataComplete.Broadcast();
	}
	else
	{
		bool bGameSaved = UGameplayStatics::SaveGameToSlot(SaveNuaGameData, SaveGameSlot, UserIndex);

		if (bGameSaved)
		{
			SaveGameDataComplete.Broadcast();
		}
		else
		{

		}
	}
}