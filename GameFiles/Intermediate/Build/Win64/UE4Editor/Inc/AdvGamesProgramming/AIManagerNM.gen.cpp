// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/AIManagerNM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIManagerNM() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AAIManagerNM_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AAIManagerNM();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AEnemyCharacterNavMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AAIManagerNM::StaticRegisterNativesAAIManagerNM()
	{
	}
	UClass* Z_Construct_UClass_AAIManagerNM_NoRegister()
	{
		return AAIManagerNM::StaticClass();
	}
	struct Z_Construct_UClass_AAIManagerNM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllAgents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAgents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AgentToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIManagerNM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManagerNM_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIManagerNM.h" },
		{ "ModuleRelativePath", "AIManagerNM.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManagerNM_Statics::NewProp_NumAI_MetaData[] = {
		{ "Category", "AI Properties" },
		{ "ModuleRelativePath", "AIManagerNM.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAIManagerNM_Statics::NewProp_NumAI = { "NumAI", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManagerNM, NumAI), METADATA_PARAMS(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_NumAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_NumAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllAgents_MetaData[] = {
		{ "Category", "Agents" },
		{ "ModuleRelativePath", "AIManagerNM.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllAgents = { "AllAgents", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManagerNM, AllAgents), METADATA_PARAMS(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllAgents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllAgents_Inner = { "AllAgents", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemyCharacterNavMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllNodes_MetaData[] = {
		{ "Category", "Agents" },
		{ "ModuleRelativePath", "AIManagerNM.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManagerNM, AllNodes), METADATA_PARAMS(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManagerNM_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Agents" },
		{ "ModuleRelativePath", "AIManagerNM.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAIManagerNM_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManagerNM, SpawnPoint), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AgentToSpawn_MetaData[] = {
		{ "Category", "Agents" },
		{ "ModuleRelativePath", "AIManagerNM.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AgentToSpawn = { "AgentToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManagerNM, AgentToSpawn), Z_Construct_UClass_AEnemyCharacterNavMesh_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AgentToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AgentToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIManagerNM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManagerNM_Statics::NewProp_NumAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllAgents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AllNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManagerNM_Statics::NewProp_SpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManagerNM_Statics::NewProp_AgentToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIManagerNM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIManagerNM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIManagerNM_Statics::ClassParams = {
		&AAIManagerNM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIManagerNM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIManagerNM_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIManagerNM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManagerNM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIManagerNM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIManagerNM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIManagerNM, 1995081602);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AAIManagerNM>()
	{
		return AAIManagerNM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIManagerNM(Z_Construct_UClass_AAIManagerNM, &AAIManagerNM::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AAIManagerNM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIManagerNM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
