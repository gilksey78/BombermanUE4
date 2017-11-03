// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BomberManCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberManCharacter() {}
// Cross Module References
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomberManCharacter_ActivateBombRadiusUpgrade();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABomberManCharacter();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomberManCharacter_ActivateMultipleBombs();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomberManCharacter_ActivateRemoteControlledBombs();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomberManCharacter_ActivateSpeedBoots();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomberManCharacter_OnBombDestroy();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomberManCharacter_PlayersInitialised();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomberManCharacter_RemoteDestroy();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomberManCharacter_SpawnBomb();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABomberManCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
// End Cross Module References
	static FName NAME_ABomberManCharacter_PlayersInitialised = FName(TEXT("PlayersInitialised"));
	void ABomberManCharacter::PlayersInitialised()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABomberManCharacter_PlayersInitialised),NULL);
	}
	static FName NAME_ABomberManCharacter_RemoteDestroy = FName(TEXT("RemoteDestroy"));
	void ABomberManCharacter::RemoteDestroy()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABomberManCharacter_RemoteDestroy),NULL);
	}
	static FName NAME_ABomberManCharacter_SpawnBomb = FName(TEXT("SpawnBomb"));
	void ABomberManCharacter::SpawnBomb(bool upgradeActive)
	{
		BomberManCharacter_eventSpawnBomb_Parms Parms;
		Parms.upgradeActive=upgradeActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABomberManCharacter_SpawnBomb),&Parms);
	}
	void ABomberManCharacter::StaticRegisterNativesABomberManCharacter()
	{
		UClass* Class = ABomberManCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ActivateBombRadiusUpgrade", (Native)&ABomberManCharacter::execActivateBombRadiusUpgrade },
			{ "ActivateMultipleBombs", (Native)&ABomberManCharacter::execActivateMultipleBombs },
			{ "ActivateRemoteControlledBombs", (Native)&ABomberManCharacter::execActivateRemoteControlledBombs },
			{ "ActivateSpeedBoots", (Native)&ABomberManCharacter::execActivateSpeedBoots },
			{ "OnBombDestroy", (Native)&ABomberManCharacter::execOnBombDestroy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABomberManCharacter_ActivateBombRadiusUpgrade()
	{
		struct BomberManCharacter_eventActivateBombRadiusUpgrade_Parms
		{
			float UpgradeDuration;
		};
		UObject* Outer = Z_Construct_UClass_ABomberManCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ActivateBombRadiusUpgrade"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(BomberManCharacter_eventActivateBombRadiusUpgrade_Parms));
			UProperty* NewProp_UpgradeDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UpgradeDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(UpgradeDuration, BomberManCharacter_eventActivateBombRadiusUpgrade_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Upgrades"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomberManCharacter_ActivateMultipleBombs()
	{
		struct BomberManCharacter_eventActivateMultipleBombs_Parms
		{
			float UpgradeDuration;
		};
		UObject* Outer = Z_Construct_UClass_ABomberManCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ActivateMultipleBombs"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(BomberManCharacter_eventActivateMultipleBombs_Parms));
			UProperty* NewProp_UpgradeDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UpgradeDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(UpgradeDuration, BomberManCharacter_eventActivateMultipleBombs_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Upgrades"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomberManCharacter_ActivateRemoteControlledBombs()
	{
		struct BomberManCharacter_eventActivateRemoteControlledBombs_Parms
		{
			float UpgradeDuration;
		};
		UObject* Outer = Z_Construct_UClass_ABomberManCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ActivateRemoteControlledBombs"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(BomberManCharacter_eventActivateRemoteControlledBombs_Parms));
			UProperty* NewProp_UpgradeDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UpgradeDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(UpgradeDuration, BomberManCharacter_eventActivateRemoteControlledBombs_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Upgrades"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomberManCharacter_ActivateSpeedBoots()
	{
		struct BomberManCharacter_eventActivateSpeedBoots_Parms
		{
			float UpgradeDuration;
		};
		UObject* Outer = Z_Construct_UClass_ABomberManCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ActivateSpeedBoots"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(BomberManCharacter_eventActivateSpeedBoots_Parms));
			UProperty* NewProp_UpgradeDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UpgradeDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(UpgradeDuration, BomberManCharacter_eventActivateSpeedBoots_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Upgrades"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomberManCharacter_OnBombDestroy()
	{
		UObject* Outer = Z_Construct_UClass_ABomberManCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBombDestroy"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Bombs"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomberManCharacter_PlayersInitialised()
	{
		UObject* Outer = Z_Construct_UClass_ABomberManCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayersInitialised"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomberManCharacter_RemoteDestroy()
	{
		UObject* Outer = Z_Construct_UClass_ABomberManCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoteDestroy"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomberManCharacter_SpawnBomb()
	{
		UObject* Outer = Z_Construct_UClass_ABomberManCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpawnBomb"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(BomberManCharacter_eventSpawnBomb_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(upgradeActive, BomberManCharacter_eventSpawnBomb_Parms);
			UProperty* NewProp_upgradeActive = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("upgradeActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(upgradeActive, BomberManCharacter_eventSpawnBomb_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(upgradeActive, BomberManCharacter_eventSpawnBomb_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UFUNCTION()\nvoid OnCollision(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABomberManCharacter_NoRegister()
	{
		return ABomberManCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABomberManCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Bomberman();
			OuterClass = ABomberManCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABomberManCharacter_ActivateBombRadiusUpgrade());
				OuterClass->LinkChild(Z_Construct_UFunction_ABomberManCharacter_ActivateMultipleBombs());
				OuterClass->LinkChild(Z_Construct_UFunction_ABomberManCharacter_ActivateRemoteControlledBombs());
				OuterClass->LinkChild(Z_Construct_UFunction_ABomberManCharacter_ActivateSpeedBoots());
				OuterClass->LinkChild(Z_Construct_UFunction_ABomberManCharacter_OnBombDestroy());
				OuterClass->LinkChild(Z_Construct_UFunction_ABomberManCharacter_PlayersInitialised());
				OuterClass->LinkChild(Z_Construct_UFunction_ABomberManCharacter_RemoteDestroy());
				OuterClass->LinkChild(Z_Construct_UFunction_ABomberManCharacter_SpawnBomb());

				UProperty* NewProp_BombCount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BombCount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BombCount, ABomberManCharacter), 0x0010000000000014);
				UProperty* NewProp_SpeedBoostWalkSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpeedBoostWalkSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpeedBoostWalkSpeed, ABomberManCharacter), 0x0010000000010015);
				UProperty* NewProp_ControllerID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ControllerID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ControllerID, ABomberManCharacter), 0x0010000000010015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRemoteBombUpgradeActive, ABomberManCharacter);
				UProperty* NewProp_bRemoteBombUpgradeActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bRemoteBombUpgradeActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRemoteBombUpgradeActive, ABomberManCharacter), 0x0010000000010015, CPP_BOOL_PROPERTY_BITMASK(bRemoteBombUpgradeActive, ABomberManCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMultipleBombUpgradeActive, ABomberManCharacter);
				UProperty* NewProp_bMultipleBombUpgradeActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bMultipleBombUpgradeActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMultipleBombUpgradeActive, ABomberManCharacter), 0x0010000000010015, CPP_BOOL_PROPERTY_BITMASK(bMultipleBombUpgradeActive, ABomberManCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBombRadiusUpgradeActive, ABomberManCharacter);
				UProperty* NewProp_bBombRadiusUpgradeActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bBombRadiusUpgradeActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBombRadiusUpgradeActive, ABomberManCharacter), 0x0010000000010015, CPP_BOOL_PROPERTY_BITMASK(bBombRadiusUpgradeActive, ABomberManCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSpeedUpgradeActive, ABomberManCharacter);
				UProperty* NewProp_bSpeedUpgradeActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSpeedUpgradeActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSpeedUpgradeActive, ABomberManCharacter), 0x0010000000010015, CPP_BOOL_PROPERTY_BITMASK(bSpeedUpgradeActive, ABomberManCharacter), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABomberManCharacter_ActivateBombRadiusUpgrade(), "ActivateBombRadiusUpgrade"); // 1460034399
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABomberManCharacter_ActivateMultipleBombs(), "ActivateMultipleBombs"); // 4186673206
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABomberManCharacter_ActivateRemoteControlledBombs(), "ActivateRemoteControlledBombs"); // 1709691579
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABomberManCharacter_ActivateSpeedBoots(), "ActivateSpeedBoots"); // 2262058628
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABomberManCharacter_OnBombDestroy(), "OnBombDestroy"); // 4262575751
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABomberManCharacter_PlayersInitialised(), "PlayersInitialised"); // 737058848
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABomberManCharacter_RemoteDestroy(), "RemoteDestroy"); // 1700943011
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABomberManCharacter_SpawnBomb(), "SpawnBomb"); // 3977376356
				static TCppClassTypeInfo<TCppClassTypeTraits<ABomberManCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_BombCount, TEXT("Category"), TEXT("BomberManCharacter"));
				MetaData->SetValue(NewProp_BombCount, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_SpeedBoostWalkSpeed, TEXT("Category"), TEXT("BomberManCharacter"));
				MetaData->SetValue(NewProp_SpeedBoostWalkSpeed, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_ControllerID, TEXT("Category"), TEXT("BomberManCharacter"));
				MetaData->SetValue(NewProp_ControllerID, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_bRemoteBombUpgradeActive, TEXT("Category"), TEXT("BomberManCharacter"));
				MetaData->SetValue(NewProp_bRemoteBombUpgradeActive, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_bMultipleBombUpgradeActive, TEXT("Category"), TEXT("BomberManCharacter"));
				MetaData->SetValue(NewProp_bMultipleBombUpgradeActive, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_bBombRadiusUpgradeActive, TEXT("Category"), TEXT("BomberManCharacter"));
				MetaData->SetValue(NewProp_bBombRadiusUpgradeActive, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
				MetaData->SetValue(NewProp_bSpeedUpgradeActive, TEXT("Category"), TEXT("BomberManCharacter"));
				MetaData->SetValue(NewProp_bSpeedUpgradeActive, TEXT("ModuleRelativePath"), TEXT("BomberManCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberManCharacter, 2940586068);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberManCharacter(Z_Construct_UClass_ABomberManCharacter, &ABomberManCharacter::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABomberManCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberManCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
