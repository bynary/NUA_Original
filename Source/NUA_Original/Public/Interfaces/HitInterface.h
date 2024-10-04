// © 2024 Wulfhaven. All rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HitInterface.generated.h"

// This class does not need to be modified
UINTERFACE(MinimalAPI)
class UHitInterface : public UInterface
{
	GENERATED_BODY()
};

class NUA_ORIGINAL_API IHitInterface
{
	GENERATED_BODY()

	// Add interface functions to this class.
public:
	UFUNCTION(BlueprintNativeEvent)
	void GetHit(const FVector& ImpactPoint, AActor* Hitter);
};