// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/MyBP_CodeHealthPickup.h"

AMyBP_CodeHealthPickup::AMyBP_CodeHealthPickup()
{
	Particles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles")); 
	Particles->SetupAttachment(GetRootComponent());  
}

bool AMyBP_CodeHealthPickup::CanPickup(AActor* OtherActor)
{
	// Check if the OtherActor implements the ICanPickup interface
	if (OtherActor->GetClass()->ImplementsInterface(UBPI_CorePickupInterface::StaticClass()))
	{
		IBPI_CorePickupInterface* CanPickupActor = Cast<IBPI_CorePickupInterface>(OtherActor);
		if (CanPickupActor)
		{
			// Call the CanPickup function on the OtherActor
			return CanPickupActor->CanPickupHealth(); 
		}
	}
	return false;
}

void AMyBP_CodeHealthPickup::HandlePickup(AActor* OtherActor, const FHitResult& SweepResult)
{
	Super::HandlePickup(OtherActor, SweepResult);
	UGameplayStatics::ApplyDamage(OtherActor, BaseDamage, nullptr, this, nullptr);
}

void AMyBP_CodeHealthPickup::HandlePostPickup()
{
	Super::HandlePostPickup();
}
