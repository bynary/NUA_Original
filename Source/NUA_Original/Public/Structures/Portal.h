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
class UNiagaraSystem;
class UNiagaraComponent;

UCLASS()
class NUA_ORIGINAL_API APortal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortal();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "Character")
	virtual void Interact(AUnfamiliarCharacter* UnfamiliarCharacter);

	UFUNCTION(BlueprintCallable, Category = "Portal Attributes")
	virtual TArray<APortal*> GetDestinationPortals();

	UFUNCTION(BlueprintCallable, Category = "Portal Attributes")
	virtual APortal* GetDestinationPortal(ECrystalElementType DestinationPortalElementType);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraSystem* TeleportAnimationNS;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* CollisionSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;

	// Item attributes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portal Attributes")
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Portal Attributes")
	ECrystalElementType IncomingCrystalElementType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Portal Attributes")
	TArray<ECrystalElementType> OutgoingCrystalElementTypes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Portal Attributes")
	TArray<APortal*> DestinationPortals;

	UFUNCTION()
	virtual void OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	virtual void OnCollisionSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:

	UPROPERTY(VisibleInstanceOnly)
	AUnfamiliarCharacter* OverlappingCharacter;

	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* TeleportAnimationComponent;
};
