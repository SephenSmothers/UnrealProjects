// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseCharacter.h"
#include "../../A__SmothersSephen.h"
#include "Components/HealthComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;
	GetMesh()->SetRelativeRotation(FRotator(0.0f, -90.0, 0.0f));
	GetMesh()->SetRelativeLocation(FVector(0.0f,0.0f,-90.0f));

	ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActorComponent"));
	ChildActorComponent->SetupAttachment(GetMesh(), "PlaceWeaponHere");
	ChildActorComponent->SetChildActorClass(WeaponClass);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	Weapon = Cast<ARifle>(ChildActorComponent->GetChildActor());
	AnimInstanceCore = Cast<UCharacterAnimation>(GetMesh()->GetAnimInstance());

	if (Weapon == nullptr)
	{
		UE_LOG(Game, Warning, TEXT("Failed to load BaseCharacter Weapon!"));
		Destroy();
	}
	
	if (AnimInstanceCore != nullptr)
	{
		Weapon->OnRifleFire.AddDynamic(AnimInstanceCore, &UCharacterAnimation::FireAnimation);
		Weapon->OnReloadStart.AddDynamic(AnimInstanceCore, &UCharacterAnimation::ReloadAnimation);
		HealthComponent->OnHurt.AddDynamic(AnimInstanceCore, &UCharacterAnimation::HurtAnimation);
		HealthComponent->OnDead.AddDynamic(AnimInstanceCore, &UCharacterAnimation::DeadAnimation);
		HealthComponent->OnDead.AddDynamic(this, &ABaseCharacter::HandleDeath);
		AnimInstanceCore->OnDeathEnded.AddDynamic(this, &ABaseCharacter::RemoveCharacter);
	}
	else
	{
		UE_LOG(Game, Warning, TEXT("Failed to load BaseCharacter Anim Instance!"));
	}
}

void ABaseCharacter::HandleDeath(float ratio)
{
	SetActorEnableCollision(false);
	Weapon->SetOwnerAlive(false);
	UE_LOG(Game, Warning, TEXT("Someone Died"));
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

bool ABaseCharacter::CanPickupHealth()
{
	return false;
}

void ABaseCharacter::RemoveCharacter()
{
	//Destroy();
}

ARifle* ABaseCharacter::GetWeapon()
{
	return Weapon;
}
