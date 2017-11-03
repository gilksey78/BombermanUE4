// Fill out your copyright notice in the Description page of Project Settings.

#include "BomberManCharacter.h"
#include "BombermanGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Classes/Engine/LocalPlayer.h"
#include "TimerManager.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ABomberManCharacter::ABomberManCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BombCount = 1;
}

// Called when the game starts or when spawned
void ABomberManCharacter::BeginPlay()
{
	Super::BeginPlay();

	GameMode		= Cast<ABombermanGameModeBase>(UGameplayStatics::GetGameMode(this));
	BombCount		= 1;
}

// Called every frame
void ABomberManCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABomberManCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	APlayerController* playerController = Cast<APlayerController>(GetController());
	ControllerID = playerController->GetLocalPlayer()->GetControllerId();
	if (ControllerID == 0)
	{
		InputComponent->BindAxis("MoveForward_P1", this, &ABomberManCharacter::MoveYAxis);
		InputComponent->BindAxis("MoveRight_P1", this, &ABomberManCharacter::MoveXAxis);
		InputComponent->BindAction("PlaceBomb_P1", IE_Pressed, this, &ABomberManCharacter::PlaceBomb);
	}
	else if (ControllerID == 1)
	{
		InputComponent->BindAxis("MoveForward_P2", this, &ABomberManCharacter::MoveYAxis);
		InputComponent->BindAxis("MoveRight_P2", this, &ABomberManCharacter::MoveXAxis);
		InputComponent->BindAction("PlaceBomb_P2", IE_Pressed, this, &ABomberManCharacter::PlaceBomb);
	}
	PlayersInitialised();
}

void ABomberManCharacter::MoveXAxis(float AxisValue)
{
	CurrentVelocity.X = AxisValue;
	AddMovementInput(CurrentVelocity);
}

void ABomberManCharacter::MoveYAxis(float AxisValue)
{
	CurrentVelocity.Y = AxisValue;
	AddMovementInput(CurrentVelocity);
}

void ABomberManCharacter::PlaceBomb()
{
	if (!GameMode->GameInProgress)
		return;

	if (BombCount > 0)
	{
		SpawnBomb(bBombRadiusUpgradeActive);

		BombCount--;
	}
	else
	if (bRemoteBombUpgradeActive)
	{
		RemoteDestroy();
	}
}

void ABomberManCharacter::OnBombDestroy()
{
	BombCount		= bMultipleBombUpgradeActive ? 50 : 1;
}

void ABomberManCharacter::ActivateSpeedBoots(float UpgradeDuration)
{
	if (bSpeedUpgradeActive == false)
	{
		CachedWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
	}

	GetWorldTimerManager().ClearTimer(SpeedUpgradeTimer);
	GetWorldTimerManager().SetTimer(SpeedUpgradeTimer, this, &ABomberManCharacter::SpeedUpgradeComplete, UpgradeDuration, false);
	bSpeedUpgradeActive = true;

	GetCharacterMovement()->MaxWalkSpeed = SpeedBoostWalkSpeed;

}

void ABomberManCharacter::ActivateBombRadiusUpgrade(float UpgradeDuration)
{
	GetWorldTimerManager().ClearTimer(RadiusUpgradeTimer);
	GetWorldTimerManager().SetTimer(RadiusUpgradeTimer, this, &ABomberManCharacter::BombRadiusUpgradeComplete, UpgradeDuration, false);
	bBombRadiusUpgradeActive = true;
}

void ABomberManCharacter::ActivateMultipleBombs(float UpgradeDuration)
{
	GetWorldTimerManager().ClearTimer(MultipleBombUpgradeTimer);
	GetWorldTimerManager().SetTimer(MultipleBombUpgradeTimer, this, &ABomberManCharacter::MultipleBombUpgradeComplete, UpgradeDuration, false);
	bMultipleBombUpgradeActive = true;

	BombCount = 50;

	if (bRemoteBombUpgradeActive)
	{
		RemoteBombUpgradeComplete();
	}
}

void ABomberManCharacter::ActivateRemoteControlledBombs(float UpgradeDuration)
{
	GetWorldTimerManager().ClearTimer(RemoteBombUpgradeTimer);
	GetWorldTimerManager().SetTimer(RemoteBombUpgradeTimer, this, &ABomberManCharacter::RemoteBombUpgradeComplete, UpgradeDuration, false);
	bRemoteBombUpgradeActive = true;

	if (bMultipleBombUpgradeActive)
	{
		MultipleBombUpgradeComplete();
	}
}

void ABomberManCharacter::SpeedUpgradeComplete()
{
	GetWorldTimerManager().ClearTimer(SpeedUpgradeTimer);
	bSpeedUpgradeActive = false;

	GetCharacterMovement()->MaxWalkSpeed = CachedWalkSpeed;
}

void ABomberManCharacter::BombRadiusUpgradeComplete()
{
	GetWorldTimerManager().ClearTimer(RadiusUpgradeTimer);
	bBombRadiusUpgradeActive = false;
}

void ABomberManCharacter::MultipleBombUpgradeComplete()
{
	GetWorldTimerManager().ClearTimer(MultipleBombUpgradeTimer);
	bMultipleBombUpgradeActive = false;
	BombCount = 1;
}

void ABomberManCharacter::RemoteBombUpgradeComplete()
{
	GetWorldTimerManager().ClearTimer(RemoteBombUpgradeTimer);
	bRemoteBombUpgradeActive = false;
}
