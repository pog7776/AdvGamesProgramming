// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/MyAIControllerNM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAIControllerNM() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AMyAIControllerNM_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AMyAIControllerNM();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	void AMyAIControllerNM::StaticRegisterNativesAMyAIControllerNM()
	{
	}
	UClass* Z_Construct_UClass_AMyAIControllerNM_NoRegister()
	{
		return AMyAIControllerNM::StaticClass();
	}
	struct Z_Construct_UClass_AMyAIControllerNM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_btree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_btree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_btree_comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_btree_comp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyAIControllerNM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIControllerNM_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyAIControllerNM.h" },
		{ "ModuleRelativePath", "MyAIControllerNM.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyAIControllerNM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree = { "btree", nullptr, (EPropertyFlags)0x0040000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIControllerNM, btree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree_comp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyAIControllerNM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree_comp = { "btree_comp", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIControllerNM, btree_comp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree_comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree_comp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyAIControllerNM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIControllerNM_Statics::NewProp_btree_comp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyAIControllerNM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAIControllerNM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyAIControllerNM_Statics::ClassParams = {
		&AMyAIControllerNM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyAIControllerNM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIControllerNM_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyAIControllerNM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIControllerNM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyAIControllerNM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyAIControllerNM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyAIControllerNM, 347536280);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AMyAIControllerNM>()
	{
		return AMyAIControllerNM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyAIControllerNM(Z_Construct_UClass_AMyAIControllerNM, &AMyAIControllerNM::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AMyAIControllerNM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAIControllerNM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
