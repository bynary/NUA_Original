// © 2024 Wulfhaven. All rights reserved.


#include "Items/Crystal.h"
#include "Characters/UnfamiliarCharacter.h"
#include "Components/PointLightComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraComponent.h"

/// <summary>
/// Public constructor
/// </summary>
ACrystal::ACrystal()
{
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
	PointLight->SetupAttachment(GetRootComponent());

	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara Component"));
	NiagaraComponent->SetupAttachment(GetRootComponent());
}

/// <summary>
/// Determine what happens when actors overlap the collision sphere for the Crystal
/// </summary>
/// <param name="OverlappedComponent"></param>
/// <param name="OtherActor"></param>
/// <param name="OtherComp"></param>
/// <param name="OtherBodyIndex"></param>
/// <param name="bFromSweep"></param>
/// <param name="SweepResult"></param>
void ACrystal::OnCollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AUnfamiliarCharacter* UnfamiliarCharacter = Cast<AUnfamiliarCharacter>(OtherActor);
	if (UnfamiliarCharacter)
	{
		if (PickupSound)
		{
			UGameplayStatics::PlaySoundAtLocation(
				this,
				PickupSound,
				GetActorLocation()
			);
		}

		UnfamiliarCharacter->AddCrystalToInventory(this->CrystalElement);

		Destroy();
	}
}
