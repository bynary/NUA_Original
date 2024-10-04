#pragma once

#include "ISaveGameInterface.generated.h"

class UNuaSaveGame;

UINTERFACE(MinimalAPI, Blueprintable)
class USaveGameInterface : public UInterface
{
	GENERATED_BODY()
};

class ISaveGameInterface
{
	GENERATED_BODY()
	
public:
	void LoadGameData(bool bIsAsync);
	void SaveGameData(bool bIsAsync);
	UNuaSaveGame* GetGameData();
};