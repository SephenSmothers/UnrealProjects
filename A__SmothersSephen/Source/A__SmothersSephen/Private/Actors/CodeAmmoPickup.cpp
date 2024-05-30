// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CodeAmmoPickup.h"
#include "Actors/BasePlayer.h"
#include "Components/MeshComponent.h"

ACodeAmmoPickup::ACodeAmmoPickup()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoChestMesh"));
	Mesh->SetCollisionProfileName("NoCollision");
	Mesh->SetupAttachment(GetRootComponent());
}

bool ACodeAmmoPickup::CanPickup(AActor* OtherActor)
{
	return false;
}

void ACodeAmmoPickup::HandlePickup(AActor* OtherActor, const FHitResult& SweepResult)
{
	Super::HandlePickup(OtherActor, SweepResult);

	ABasePlayer* player = Cast<ABasePlayer>(OtherActor);
	if (player != nullptr)
	{
		if (player->GetWeapon() != nullptr)
		{
			float newAmmo = ExtraAmmo + player->GetWeapon()->GetMaxAmmo(); 
			player->GetWeapon()->SetMaxAmmo(newAmmo);
			player->GetWeapon()->OnAmmoChanged.Broadcast(player->GetWeapon()->GetCurrentAmmo(), newAmmo); 
		}
	}
}

void ACodeAmmoPickup::HandlePostPickup()
{
	Super::HandlePostPickup();
}
