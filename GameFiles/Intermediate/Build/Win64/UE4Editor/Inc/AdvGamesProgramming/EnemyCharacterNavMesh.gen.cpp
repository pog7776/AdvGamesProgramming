// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/EnemyCharacterNavMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacterNavMesh() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AEnemyCharacterNavMesh_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AEnemyCharacterNavMesh();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_Attack();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_Die();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_Trigger();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AMyAIControllerNM_NoRegister();
// End Cross Module References
	static FName NAME_AEnemyCharacterNavMesh_Attack = FName(TEXT("Attack"));
	void AEnemyCharacterNavMesh::Attack()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemyCharacterNavMesh_Attack),NULL);
	}
	static FName NAME_AEnemyCharacterNavMesh_Die = FName(TEXT("Die"));
	void AEnemyCharacterNavMesh::Die()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemyCharacterNavMesh_Die),NULL);
	}
	void AEnemyCharacterNavMesh::StaticRegisterNativesAEnemyCharacterNavMesh()
	{
		UClass* Class = AEnemyCharacterNavMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcKillApprox", &AEnemyCharacterNavMesh::execCalcKillApprox },
			{ "GetBCanSeeActor", &AEnemyCharacterNavMesh::execGetBCanSeeActor },
			{ "GetBSensed", &AEnemyCharacterNavMesh::execGetBSensed },
			{ "SensePlayer", &AEnemyCharacterNavMesh::execSensePlayer },
			{ "Trigger", &AEnemyCharacterNavMesh::execTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyCharacterNavMesh_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacterNavMesh_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacterNavMesh_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacterNavMesh, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacterNavMesh_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacterNavMesh_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics
	{
		struct EnemyCharacterNavMesh_eventCalcKillApprox_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacterNavMesh_eventCalcKillApprox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacterNavMesh, nullptr, "CalcKillApprox", nullptr, nullptr, sizeof(EnemyCharacterNavMesh_eventCalcKillApprox_Parms), Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacterNavMesh_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacterNavMesh_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacterNavMesh_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacterNavMesh, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacterNavMesh_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacterNavMesh_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics
	{
		struct EnemyCharacterNavMesh_eventGetBCanSeeActor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyCharacterNavMesh_eventGetBCanSeeActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyCharacterNavMesh_eventGetBCanSeeActor_Parms), &Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacterNavMesh, nullptr, "GetBCanSeeActor", nullptr, nullptr, sizeof(EnemyCharacterNavMesh_eventGetBCanSeeActor_Parms), Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics
	{
		struct EnemyCharacterNavMesh_eventGetBSensed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyCharacterNavMesh_eventGetBSensed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyCharacterNavMesh_eventGetBSensed_Parms), &Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacterNavMesh, nullptr, "GetBSensed", nullptr, nullptr, sizeof(EnemyCharacterNavMesh_eventGetBSensed_Parms), Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics
	{
		struct EnemyCharacterNavMesh_eventSensePlayer_Parms
		{
			AActor* ActorSensed;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorSensed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacterNavMesh_eventSensePlayer_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::NewProp_ActorSensed = { "ActorSensed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacterNavMesh_eventSensePlayer_Parms, ActorSensed), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::NewProp_ActorSensed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacterNavMesh, nullptr, "SensePlayer", nullptr, nullptr, sizeof(EnemyCharacterNavMesh_eventSensePlayer_Parms), Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacterNavMesh_Trigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacterNavMesh_Trigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacterNavMesh_Trigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacterNavMesh, nullptr, "Trigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacterNavMesh_Trigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterNavMesh_Trigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacterNavMesh_Trigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacterNavMesh_Trigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyCharacterNavMesh_NoRegister()
	{
		return AEnemyCharacterNavMesh::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacterNavMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsClient_MetaData[];
#endif
		static void NewProp_bIsClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSeeActor_MetaData[];
#endif
		static void NewProp_bCanSeeActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSeeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensed_MetaData[];
#endif
		static void NewProp_bSensed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSensed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyBlackboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyBlackboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacterNavMesh_Attack, "Attack" }, // 3870296112
		{ &Z_Construct_UFunction_AEnemyCharacterNavMesh_CalcKillApprox, "CalcKillApprox" }, // 519617946
		{ &Z_Construct_UFunction_AEnemyCharacterNavMesh_Die, "Die" }, // 662257130
		{ &Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBCanSeeActor, "GetBCanSeeActor" }, // 337978398
		{ &Z_Construct_UFunction_AEnemyCharacterNavMesh_GetBSensed, "GetBSensed" }, // 1337932753
		{ &Z_Construct_UFunction_AEnemyCharacterNavMesh_SensePlayer, "SensePlayer" }, // 3232314280
		{ &Z_Construct_UFunction_AEnemyCharacterNavMesh_Trigger, "Trigger" }, // 3198006351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacterNavMesh.h" },
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bIsClient_MetaData[] = {
		{ "Category", "EnemyCharacterNavMesh" },
		{ "Comment", "//void Fire(FVector FireDirection);\n" },
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
		{ "ToolTip", "void Fire(FVector FireDirection);" },
	};
#endif
	void Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bIsClient_SetBit(void* Obj)
	{
		((AEnemyCharacterNavMesh*)Obj)->bIsClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bIsClient = { "bIsClient", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyCharacterNavMesh), &Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bIsClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bIsClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bIsClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_DetectedActor_MetaData[] = {
		{ "Category", "EnemyCharacterNavMesh" },
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_DetectedActor = { "DetectedActor", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacterNavMesh, DetectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_DetectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_DetectedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bCanSeeActor_MetaData[] = {
		{ "Category", "EnemyCharacterNavMesh" },
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bCanSeeActor_SetBit(void* Obj)
	{
		((AEnemyCharacterNavMesh*)Obj)->bCanSeeActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bCanSeeActor = { "bCanSeeActor", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyCharacterNavMesh), &Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bCanSeeActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bCanSeeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bCanSeeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bSensed_MetaData[] = {
		{ "Category", "EnemyCharacterNavMesh" },
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bSensed_SetBit(void* Obj)
	{
		((AEnemyCharacterNavMesh*)Obj)->bSensed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bSensed = { "bSensed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyCharacterNavMesh), &Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bSensed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bSensed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bSensed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_EnemyBlackboard_MetaData[] = {
		{ "Category", "EnemyCharacterNavMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_EnemyBlackboard = { "EnemyBlackboard", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacterNavMesh, EnemyBlackboard), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_EnemyBlackboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_EnemyBlackboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//For Behaviour Tree\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
		{ "ToolTip", "For Behaviour Tree" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacterNavMesh, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_BehaviorTreeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_BehaviorTreeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "EnemyCharacterNavMesh" },
		{ "Comment", "//For Controller of itself\n" },
		{ "ModuleRelativePath", "EnemyCharacterNavMesh.h" },
		{ "ToolTip", "For Controller of itself" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacterNavMesh, AIController), Z_Construct_UClass_AMyAIControllerNM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_AIController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bIsClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_DetectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bCanSeeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_bSensed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_EnemyBlackboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_BehaviorTreeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::NewProp_AIController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacterNavMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::ClassParams = {
		&AEnemyCharacterNavMesh::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyCharacterNavMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyCharacterNavMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyCharacterNavMesh, 1031050043);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AEnemyCharacterNavMesh>()
	{
		return AEnemyCharacterNavMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyCharacterNavMesh(Z_Construct_UClass_AEnemyCharacterNavMesh, &AEnemyCharacterNavMesh::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AEnemyCharacterNavMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacterNavMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
