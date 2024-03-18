// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Rifle.h"

//#include "GameFramework/Pawn.h" 

// Sets default values
ARifle::ARifle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SetRootComponent(SkeletalMesh);


}

// Called when the game starts or when spawned
void ARifle::BeginPlay()
{
	Super::BeginPlay();


	ParentPawn = Cast<APawn>(GetParentActor());


	if (ParentPawn)
	{
		//isValid
		
	}
	else
	{
		Destroy();
	}
}

// Called every frame
void ARifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void ARifle::Attack_Implementation()
{
	if (SkeletalMesh && SkeletalMesh->DoesSocketExist("MuzzleFlashSocket"))
	{


		// Spawn the projectile
		//AProjectile* SpawnedProjectile = GetWorld()->SpawnActor<AProjectile>(Projectile,SpawnTransform,pawn->GetBaseAimRotation(),pawn->GetController());
		GetWorld()->SpawnActor<AProjectile>(Projectile, SkeletalMesh->GetSocketTransform("MuzzleFlashSocket"));
	}
	
}






