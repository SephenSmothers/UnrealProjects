// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CoreGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API ACoreGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<class UCoreResultsMenu> WidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCoreResultsMenu* ResultsWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class ABasePlayer* Player;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class ACorePlayerController* CurrentController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int NumEnemies;

public:
	virtual void BeginPlay() override;

	UFUNCTION()
	void RemovePlayer(AActor* Agent);

	UFUNCTION()
	void AddEnemy(AActor* Agent);

	UFUNCTION()
	void RemoveEnemy(AActor* DeadAgent);

};
