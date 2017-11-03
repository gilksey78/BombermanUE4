// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_BomberManCharacter_generated_h
#error "BomberManCharacter.generated.h already included, missing '#pragma once' in BomberManCharacter.h"
#endif
#define BOMBERMAN_BomberManCharacter_generated_h

#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBombDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBombDestroy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateRemoteControlledBombs) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpgradeDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateRemoteControlledBombs(Z_Param_UpgradeDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateMultipleBombs) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpgradeDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateMultipleBombs(Z_Param_UpgradeDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateBombRadiusUpgrade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpgradeDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateBombRadiusUpgrade(Z_Param_UpgradeDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateSpeedBoots) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpgradeDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateSpeedBoots(Z_Param_UpgradeDuration); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBombDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBombDestroy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateRemoteControlledBombs) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpgradeDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateRemoteControlledBombs(Z_Param_UpgradeDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateMultipleBombs) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpgradeDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateMultipleBombs(Z_Param_UpgradeDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateBombRadiusUpgrade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpgradeDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateBombRadiusUpgrade(Z_Param_UpgradeDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateSpeedBoots) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpgradeDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateSpeedBoots(Z_Param_UpgradeDuration); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_EVENT_PARMS \
	struct BomberManCharacter_eventSpawnBomb_Parms \
	{ \
		bool upgradeActive; \
	};


#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_CALLBACK_WRAPPERS
#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomberManCharacter(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABomberManCharacter(); \
public: \
	DECLARE_CLASS(ABomberManCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABomberManCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABomberManCharacter(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABomberManCharacter(); \
public: \
	DECLARE_CLASS(ABomberManCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABomberManCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomberManCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomberManCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomberManCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomberManCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomberManCharacter(ABomberManCharacter&&); \
	NO_API ABomberManCharacter(const ABomberManCharacter&); \
public:


#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomberManCharacter(ABomberManCharacter&&); \
	NO_API ABomberManCharacter(const ABomberManCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomberManCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomberManCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomberManCharacter)


#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define Bomberman_Source_Bomberman_BomberManCharacter_h_11_PROLOG \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_EVENT_PARMS


#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_CALLBACK_WRAPPERS \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_INCLASS \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_BomberManCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_CALLBACK_WRAPPERS \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_BomberManCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_BomberManCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
