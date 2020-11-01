// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ADVGAMESPROGRAMMING_ProcedurallyGeneratedBuilding_generated_h
#error "ProcedurallyGeneratedBuilding.generated.h already included, missing '#pragma once' in ProcedurallyGeneratedBuilding.h"
#endif
#define ADVGAMESPROGRAMMING_ProcedurallyGeneratedBuilding_generated_h

#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBuildCity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBuildCity(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBuildCity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBuildCity(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_EVENT_PARMS \
	struct ProcedurallyGeneratedBuilding_eventInit_Parms \
	{ \
		AActor* Target; \
		float X; \
		float Y; \
		float Z; \
	};


#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_CALLBACK_WRAPPERS
#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProcedurallyGeneratedBuilding(); \
	friend struct Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics; \
public: \
	DECLARE_CLASS(AProcedurallyGeneratedBuilding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AProcedurallyGeneratedBuilding) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProcedurallyGeneratedBuilding(); \
	friend struct Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics; \
public: \
	DECLARE_CLASS(AProcedurallyGeneratedBuilding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AProcedurallyGeneratedBuilding) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProcedurallyGeneratedBuilding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProcedurallyGeneratedBuilding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProcedurallyGeneratedBuilding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProcedurallyGeneratedBuilding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProcedurallyGeneratedBuilding(AProcedurallyGeneratedBuilding&&); \
	NO_API AProcedurallyGeneratedBuilding(const AProcedurallyGeneratedBuilding&); \
public:


#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProcedurallyGeneratedBuilding(AProcedurallyGeneratedBuilding&&); \
	NO_API AProcedurallyGeneratedBuilding(const AProcedurallyGeneratedBuilding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProcedurallyGeneratedBuilding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProcedurallyGeneratedBuilding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProcedurallyGeneratedBuilding)


#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_PRIVATE_PROPERTY_OFFSET
#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_11_PROLOG \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_EVENT_PARMS


#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_CALLBACK_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_INCLASS \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_CALLBACK_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class AProcedurallyGeneratedBuilding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_ProcedurallyGeneratedBuilding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
