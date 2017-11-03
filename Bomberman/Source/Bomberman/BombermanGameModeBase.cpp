// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"


ABombermanGameModeBase::ABombermanGameModeBase()
{

}

void ABombermanGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (GetNumPlayers() < 2)
	{
		UGameplayStatics::CreatePlayer(GetWorld(), -1, true);
	}
}

