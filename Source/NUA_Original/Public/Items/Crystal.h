// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/Item.h"

#include "Enums/ElementTypes.h"
#include "Enums/EffectTypes.h"

#include "Crystal.generated.h"

class UPointLightComponent;
class UNiagaraComponent;
class ARune;

/**
 * 
 */
UCLASS()
class NUA_ORIGINAL_API ACrystal : public AItem
{
	GENERATED_BODY()
public:
	ACrystal();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	ECrystalElementType CrystalElement;

protected:
	virtual void OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	ECrystalEffectType CrystalEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	TArray<ARune*> Runes;

private:
	UPROPERTY(EditInstanceOnly, Category = "Sounds")
	USoundBase* PickupSound;

	UPROPERTY(EditAnywhere, Category = "Effects")
	UNiagaraComponent* NiagaraComponent;

	UPROPERTY(EditInstanceOnly, Category = "Lighting")
	UPointLightComponent* PointLight;
};
