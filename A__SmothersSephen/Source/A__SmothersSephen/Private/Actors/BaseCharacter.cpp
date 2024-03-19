// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseCharacter.h"
#include "../../A__SmothersSephen.h"

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
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	auto rifle = Cast<ARifle>(ChildActorComponent->GetChildActor());
	auto anim = Cast<UCharacterAnimation>(GetMesh()->GetAnimInstance());

	if (rifle)
	{
		Weapon = rifle;
	}
	else
	{
		UE_LOG(Game, Warning, TEXT("Failed to load BaseCharacter Weapon!"));
	}
	
	if (anim)
	{
		AnimInstanceCore = anim;
	}
	else
	{
		UE_LOG(Game, Warning, TEXT("Failed to load BaseCharacter Anim Instance!"));
	}
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






