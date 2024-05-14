// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Actors/Rifle.h"
#include "Both_BP_Code/GameHUD.h"


ABasePlayer::ABasePlayer()
{
	//Super::ABaseCharacter(); 

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetRelativeLocation(FVector(30.0f,50.0f,60.0f));
	SpringArm->SetupAttachment(GetRootComponent() /*, Only needed for objects attached to a socket*/);
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm /*, Only needed for objects attached to a socket*/);

	//HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
}

void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<APlayerController>(GetController());

	if (PlayerController)
	{
		//PlayerController = pController;

		UGameHUD* hud = CreateWidget<UGameHUD>(PlayerController, HUDClassType);

		if (hud) 
		{
			hud->AddToViewport();

			HealthComponent->OnHurt.AddDynamic(hud, &UGameHUD::SetHealthComponent);
			HealthComponent->OnDead.AddDynamic(hud, &UGameHUD::SetHealthComponentDead);
		}
	}
	else
	{
		Destroy();
	}
}

void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Turning/Camera
	PlayerInputComponent->BindAxis("TurnRight", this, &ABasePlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ABasePlayer::AddControllerPitchInput);

	//Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &ABasePlayer::InputAxisMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABasePlayer::InputAxisMoveRight);
	PlayerInputComponent->BindAction("AttackInput", IE_Pressed, this, &ABasePlayer::InputActionAttack);
}

void ABasePlayer::InputAxisMoveForward(float AxisValue)
{
	AddMovementInput(FRotator(0.0f, GetControlRotation().Yaw, 0.0f).Vector(), AxisValue);
}

void ABasePlayer::InputAxisMoveRight(float AxisValue)
{
	AddMovementInput(FRotationMatrix(FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetScaledAxis(EAxis::Y), AxisValue);
}

void ABasePlayer::InputActionAttack()
{
	if (Weapon)
	{
		Weapon->Attack();
	}

	//if (AnimInstanceCore)
	//{
	//	AnimInstanceCore->FireAnimation();
	//}
}

void ABasePlayer::HandleDeath(float ratio)
{
	Super::HandleDeath(ratio);
	DisableInput(PlayerController);
}





