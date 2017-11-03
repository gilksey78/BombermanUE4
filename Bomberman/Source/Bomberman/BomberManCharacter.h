// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BomberManCharacter.generated.h"

class ABombermanGameModeBase;

UCLASS()
class BOMBERMAN_API ABomberManCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABomberManCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UFUNCTION()
	//void OnCollision(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintImplementableEvent) 
	void SpawnBomb(bool upgradeActive);

	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	void ActivateSpeedBoots(float UpgradeDuration);

	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	void ActivateBombRadiusUpgrade(float UpgradeDuration);

	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	void ActivateMultipleBombs(float UpgradeDuration);

	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	void ActivateRemoteControlledBombs(float UpgradeDuration);

	UFUNCTION(BlueprintCallable, Category = "Bombs")
	void OnBombDestroy();

	UFUNCTION(BlueprintImplementableEvent)
	void RemoteDestroy();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayersInitialised();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bSpeedUpgradeActive;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bBombRadiusUpgradeActive;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bMultipleBombUpgradeActive;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bRemoteBombUpgradeActive;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 ControllerID;

	UPROPERTY(EditDefaultsOnly, BluePrintReadOnly)
	float SpeedBoostWalkSpeed;

	UPROPERTY(BlueprintReadOnly)
	int32 BombCount;

private:

	void MoveXAxis(float AxisValue);
	void MoveYAxis(float AxisValue);
	void PlaceBomb();

	void SpeedUpgradeComplete();
	void BombRadiusUpgradeComplete();
	void MultipleBombUpgradeComplete();
	void RemoteBombUpgradeComplete();

	ABombermanGameModeBase* GameMode;
	FVector CurrentVelocity;

	FTimerHandle SpeedUpgradeTimer;
	FTimerHandle RadiusUpgradeTimer;
	FTimerHandle MultipleBombUpgradeTimer;
	FTimerHandle RemoteBombUpgradeTimer;

	float CachedWalkSpeed;

};
