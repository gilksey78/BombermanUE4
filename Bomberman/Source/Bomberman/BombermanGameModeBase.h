// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BombermanGameModeBase.generated.h"

UCLASS()
class BOMBERMAN_API ABombermanGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	ABombermanGameModeBase();

	UPROPERTY(EditAnywhere,BluePrintReadWrite)
	bool GameInProgress;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
