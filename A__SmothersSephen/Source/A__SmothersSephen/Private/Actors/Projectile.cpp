// Fill out your copyright notice in the Description page of Project Settings.

#include "Actors/Projectile.h"
#include "Components/SphereComponent.h"
#include "Components/MeshComponent.h"
#include "../../A__SmothersSephen.h"
#include "UObject/ConstructorHelpers.h" // Bad Habit

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SetRootComponent(SphereCollision);

	//This is binding(addDynamic) and creating an event(this, &AProjectile::HandleOnHit); 
	SphereCollision->OnComponentHit.AddDynamic(this, &AProjectile::HandleOnHit);

	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	SphereMesh->SetCollisionProfileName("NoCollision");
	SphereMesh->SetupAttachment(SphereCollision);



	//Eample Only
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Asset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	SphereMesh->SetStaticMesh(Asset.Object);

	//End Bad Example



}

void AProjectile::HandleOnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//Will never get called
	UE_LOG(Game, Log, TEXT("Hello"));
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle timerHandle;
	GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &AProjectile::K2_DestroyActor, 3.0f);

}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

