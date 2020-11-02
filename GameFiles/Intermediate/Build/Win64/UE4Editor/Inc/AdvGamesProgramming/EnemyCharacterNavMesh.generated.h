// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef ADVGAMESPROGRAMMING_EnemyCharacterNavMesh_generated_h
#error "EnemyCharacterNavMesh.generated.h already included, missing '#pragma once' in EnemyCharacterNavMesh.h"
#endif
#define ADVGAMESPROGRAMMING_EnemyCharacterNavMesh_generated_h

#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcKillApprox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalcKillApprox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Trigger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSensePlayer) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorSensed); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SensePlayer(Z_Param_ActorSensed,Z_Param_Stimulus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBCanSeeActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBCanSeeActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBSensed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBSensed(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcKillApprox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalcKillApprox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Trigger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSensePlayer) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorSensed); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SensePlayer(Z_Param_ActorSensed,Z_Param_Stimulus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBCanSeeActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBCanSeeActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBSensed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBSensed(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_EVENT_PARMS
#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_CALLBACK_WRAPPERS
#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacterNavMesh(); \
	friend struct Z_Construct_UClass_AEnemyCharacterNavMesh_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacterNavMesh, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacterNavMesh)


#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacterNavMesh(); \
	friend struct Z_Construct_UClass_AEnemyCharacterNavMesh_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacterNavMesh, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacterNavMesh)


#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacterNavMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacterNavMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacterNavMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacterNavMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacterNavMesh(AEnemyCharacterNavMesh&&); \
	NO_API AEnemyCharacterNavMesh(const AEnemyCharacterNavMesh&); \
public:


#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacterNavMesh(AEnemyCharacterNavMesh&&); \
	NO_API AEnemyCharacterNavMesh(const AEnemyCharacterNavMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacterNavMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacterNavMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacterNavMesh)


#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_PRIVATE_PROPERTY_OFFSET
#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_15_PROLOG \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_EVENT_PARMS


#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_CALLBACK_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_INCLASS \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_CALLBACK_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class AEnemyCharacterNavMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_EnemyCharacterNavMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
