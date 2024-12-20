// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Enums/WeaponTypes.h"
#include "Weapon.generated.h"

class AUnfamiliarCharacter;
class USoundBase;
class UBoxComponent;
class USceneComponent;

/**
* 
*/
UCLASS()
class NUA_ORIGINAL_API AWeapon : public AItem
{
	GENERATED_BODY()

public:
	AWeapon();

	FORCEINLINE EWeaponType GetWeaponType() const { return WeaponType; }
	void Equip(USceneComponent* InParent, FName InSocketName, AUnfamiliarCharacter* UnfamiliarCharacter);
	void Unequip(USceneComponent* InParent, FName InSocketName, AUnfamiliarCharacter* UnfamiliarCharacter);

protected:
	virtual void BeginPlay() override;

	virtual void OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnCollisionSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

	UFUNCTION()
	void OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Weapon type
	UPROPERTY(BlueprintReadWrite)
	EWeaponType WeaponType;

private:
	UFUNCTION()
	void AttachToSocket(USceneComponent* InParent, FName InSocketName, AUnfamiliarCharacter* UnfamiliarCharacter);

	UPROPERTY(EditAnywhere, Category = "Audio")
	USoundBase* EquipSound;

	UPROPERTY(EditAnywhere, Category = "Hit Box")
	UBoxComponent* WeaponBox;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* CollisionBox_Trace_Start;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* CollisionBox_Trace_End;
};
