// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_SpawnerComponent_generated_h
#error "SpawnerComponent.generated.h already included, missing '#pragma once' in SpawnerComponent.h"
#endif
#define ADVGAMESPROGRAMMING_SpawnerComponent_generated_h

#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSpawn(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSpawn(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpawnerComponent(); \
	friend struct Z_Construct_UClass_USpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(USpawnerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(USpawnerComponent)


#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSpawnerComponent(); \
	friend struct Z_Construct_UClass_USpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(USpawnerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(USpawnerComponent)


#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpawnerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpawnerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawnerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpawnerComponent(USpawnerComponent&&); \
	NO_API USpawnerComponent(const USpawnerComponent&); \
public:


#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpawnerComponent(USpawnerComponent&&); \
	NO_API USpawnerComponent(const USpawnerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawnerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpawnerComponent)


#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_12_PROLOG
#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_INCLASS \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class USpawnerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_SpawnerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
