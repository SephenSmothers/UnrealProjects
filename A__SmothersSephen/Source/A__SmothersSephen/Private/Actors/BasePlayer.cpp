// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

ABasePlayer::ABasePlayer()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetRelativeLocation(FVector(0.0f,0.0f,60.0f));
	SpringArm->SetupAttachment(GetRootComponent() /*, Only needed for objects attached to a socket*/);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm /*, Only needed for objects attached to a socket*/);
}

void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Turning/Camera
	PlayerInputComponent->BindAxis("TurnRight", this, &ABasePlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ABasePlayer::AddControllerPitchInput);

	//Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &ABasePlayer::InputAxisMoveForward);
}

void ABasePlayer::InputAxisMoveForward(float AxisValue)
{
	//Kepping Just For Reference
	//FRotator BreakRotator = GetControlRotation();
	//FRotator MakeRotation = FRotator(0.0f, BreakRotator.Yaw, 0.0f);
	//FVector WorldDirection = MakeRotation.Vector();
	//AddMovementInput(WorldDirection, AxisValue);

	AddMovementInput(FRotator(0.0f, GetControlRotation().Yaw, 0.0f).Vector(), AxisValue);
}

void ABasePlayer::InputAxisMoveRight(float AxisValue)
{


}
