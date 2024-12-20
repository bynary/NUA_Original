// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rune.generated.h"

UCLASS()
class NUA_ORIGINAL_API ARune : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARune();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	bool Bob = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	bool Rotate = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	float RotationSpeed = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	float Amplitude = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Parameters")
	float TimeConstant = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
	bool DrawDebugShapes = false;

	// Item attributes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attributes")
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attributes")
	float Cost = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attributes")
	float Weight = 1.0;

	UFUNCTION(BlueprintPure)
	float TransformSin();

	UFUNCTION(BlueprintPure)
	float TransformCos();

private:

	UPROPERTY(VisibleInstanceOnly, meta = (AllowAbstract = "true"))
	float RunningTime;
};
