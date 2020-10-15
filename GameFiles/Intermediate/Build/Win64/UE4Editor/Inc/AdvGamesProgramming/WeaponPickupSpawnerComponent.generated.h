// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_WeaponPickupSpawnerComponent_generated_h
#error "WeaponPickupSpawnerComponent.generated.h already included, missing '#pragma once' in WeaponPickupSpawnerComponent.h"
#endif
#define ADVGAMESPROGRAMMING_WeaponPickupSpawnerComponent_generated_h

#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSpawn(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSpawn(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponPickupSpawnerComponent(); \
	friend struct Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponPickupSpawnerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(UWeaponPickupSpawnerComponent)


#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponPickupSpawnerComponent(); \
	friend struct Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponPickupSpawnerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(UWeaponPickupSpawnerComponent)


#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponPickupSpawnerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponPickupSpawnerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponPickupSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponPickupSpawnerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponPickupSpawnerComponent(UWeaponPickupSpawnerComponent&&); \
	NO_API UWeaponPickupSpawnerComponent(const UWeaponPickupSpawnerComponent&); \
public:


#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponPickupSpawnerComponent(UWeaponPickupSpawnerComponent&&); \
	NO_API UWeaponPickupSpawnerComponent(const UWeaponPickupSpawnerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponPickupSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponPickupSpawnerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponPickupSpawnerComponent)


#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_11_PROLOG
#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_INCLASS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class UWeaponPickupSpawnerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_WeaponPickupSpawnerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
