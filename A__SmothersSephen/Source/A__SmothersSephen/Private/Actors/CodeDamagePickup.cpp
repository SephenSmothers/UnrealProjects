// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CodeDamagePickup.h"

ACodeDamagePickup::ACodeDamagePickup()
{
	Particles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles"));
	Particles->SetupAttachment(GetRootComponent());
	Particles->SetRelativeLocation(FVector{0.0f, 0.0f,-30.0f});
}

bool ACodeDamagePickup::CanPickup(AActor* OtherActor)
{
	return true;
}

void ACodeDamagePickup::HandlePickup(AActor* OtherActor, const FHitResult& SweepResult)
{
	Super::HandlePickup(OtherActor, SweepResult);
	UGameplayStatics::ApplyDamage(OtherActor, BaseDamage, nullptr, this, nullptr); 
}

void ACodeDamagePickup::HandlePostPickup()
{

}
