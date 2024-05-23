// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BP_CodeBasePickup.h"

// Sets default values
ABP_CodeBasePickup::ABP_CodeBasePickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(BoxCollider);
	/*Particles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles"));
	Particles->SetupAttachment(GetRootComponent());*/

	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ABP_CodeBasePickup::HandleOverlap); 
}

// Called when the game starts or when spawned
void ABP_CodeBasePickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_CodeBasePickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ABP_CodeBasePickup::CanPickup(AActor* OtherActor)
{
	return false;
}

void ABP_CodeBasePickup::HandlePickup(AActor* OtherActor, const FHitResult& SweepResult)
{

}

void ABP_CodeBasePickup::HandlePostPickup()
{
	Destroy();
}

void ABP_CodeBasePickup::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	int test = 0;
	test++;

	//if (CanPickup(OtherActor))
	//{
		HandlePickup(OtherActor, SweepResult);
		HandlePostPickup();
	//}
}

