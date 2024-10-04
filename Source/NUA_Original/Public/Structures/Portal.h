// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
// Enum includes
#include "Enums/ElementTypes.h"

#include "Portal.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class AUnfamiliarCharacter;

UCLASS()
class NUA_ORIGINAL_API APortal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortal();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void Interact(AUnfamiliarCharacter* UnfamiliarCharacter);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* CollisionSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;

	// Item attributes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attributes")
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Attributes")
	ECrystalElementType IncomingCrystalElementType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Attributes")
	TArray<ECrystalElementType> OutgoingCrystalElementTypes;

	UFUNCTION()
	virtual void OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	virtual void OnCollisionSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:

	UPROPERTY(VisibleInstanceOnly)
	AUnfamiliarCharacter* OverlappingCharacter;
};
