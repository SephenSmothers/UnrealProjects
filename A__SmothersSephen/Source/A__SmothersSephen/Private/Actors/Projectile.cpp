// Fill out your copyright notice in the Description page of Project Settings.

#include "Actors/Projectile.h"
#include "Components/SphereComponent.h"
#include "Components/MeshComponent.h"
#include "../../A__SmothersSephen.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h" // Bad Habit
#include <Kismet/GameplayStatics.h>

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SetRootComponent(SphereCollision);

	//This is binding(addDynamic) and creating an event(this, &AProjectile::HandleOnHit); 
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::HandleOnHit);
	SphereCollision->SetCollisionProfileName("OverlapAllDynamic");
	SphereCollision->SetWorldScale3D(FVector(0.18f, 0.18f, 0.18f));

	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	SphereMesh->SetCollisionProfileName("NoCollision");
	SphereMesh->SetupAttachment(SphereCollision);

	Damage = 1.0f;

	//Eample Only
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	SphereMesh->SetStaticMesh(MeshAsset.Object);

	//End Bad Example



	//Projectile Movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->SetUpdatedComponent(SphereCollision);
	ProjectileMovement->InitialSpeed = 2000.0f;
	ProjectileMovement->MaxSpeed = 2000.0f;
	ProjectileMovement->ProjectileGravityScale = 0.f;
}

void AProjectile::HandleOnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(Game, Log, TEXT("Projectile Collided With: %s"), *OtherActor->GetName()); 
	UGameplayStatics::ApplyDamage(OtherActor, Damage, OwnerController, this, NULL);
	//OtherActor->TakeDamage(Damage, )
	Destroy();
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle timerHandle;
	GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &AProjectile::K2_DestroyActor, 3.0f);
	OwnerController = Cast<AController>(GetOwner());
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}