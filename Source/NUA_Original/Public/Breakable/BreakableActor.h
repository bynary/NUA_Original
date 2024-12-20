// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/HitInterface.h"
#include "BreakableActor.generated.h"

class UGeometryCollectionComponent;
class UCapsuleComponent;

UCLASS()
class NUA_ORIGINAL_API ABreakableActor : public AActor, public IHitInterface
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ABreakableActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(VisibleAnywhere)
	//UGeometryCollectionComponent* GeometryCollection;

	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* Capsule;

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AItem> SpawnedItemClass;
};
