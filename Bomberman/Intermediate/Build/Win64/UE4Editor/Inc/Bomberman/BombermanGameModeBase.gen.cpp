// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BombermanGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanGameModeBase() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameModeBase_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
// End Cross Module References
	void ABombermanGameModeBase::StaticRegisterNativesABombermanGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABombermanGameModeBase_NoRegister()
	{
		return ABombermanGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABombermanGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Bomberman();
			OuterClass = ABombermanGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(GameInProgress, ABombermanGameModeBase);
				UProperty* NewProp_GameInProgress = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameInProgress"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(GameInProgress, ABombermanGameModeBase), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(GameInProgress, ABombermanGameModeBase), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<ABombermanGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BombermanGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BombermanGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_GameInProgress, TEXT("Category"), TEXT("BombermanGameModeBase"));
				MetaData->SetValue(NewProp_GameInProgress, TEXT("ModuleRelativePath"), TEXT("BombermanGameModeBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombermanGameModeBase, 691894897);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanGameModeBase(Z_Construct_UClass_ABombermanGameModeBase, &ABombermanGameModeBase::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
