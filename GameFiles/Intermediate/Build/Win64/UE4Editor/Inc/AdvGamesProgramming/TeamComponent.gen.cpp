// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/TeamComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamComponent() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_UTeamComponent_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_UTeamComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
// End Cross Module References
	void UTeamComponent::StaticRegisterNativesUTeamComponent()
	{
	}
	UClass* Z_Construct_UClass_UTeamComponent_NoRegister()
	{
		return UTeamComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTeamComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThreatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnfriendlyFactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnfriendlyFactions;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UnfriendlyFactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyFactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FriendlyFactions;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FriendlyFactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedFactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwnedFactions;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OwnedFactions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTeamComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeamComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TeamComponent.h" },
		{ "ModuleRelativePath", "TeamComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeamComponent_Statics::NewProp_ThreatValue_MetaData[] = {
		{ "Category", "Threat" },
		{ "ModuleRelativePath", "TeamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTeamComponent_Statics::NewProp_ThreatValue = { "ThreatValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeamComponent, ThreatValue), METADATA_PARAMS(Z_Construct_UClass_UTeamComponent_Statics::NewProp_ThreatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeamComponent_Statics::NewProp_ThreatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeamComponent_Statics::NewProp_UnfriendlyFactions_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "TeamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTeamComponent_Statics::NewProp_UnfriendlyFactions = { "UnfriendlyFactions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeamComponent, UnfriendlyFactions), METADATA_PARAMS(Z_Construct_UClass_UTeamComponent_Statics::NewProp_UnfriendlyFactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeamComponent_Statics::NewProp_UnfriendlyFactions_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTeamComponent_Statics::NewProp_UnfriendlyFactions_Inner = { "UnfriendlyFactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeamComponent_Statics::NewProp_FriendlyFactions_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "TeamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTeamComponent_Statics::NewProp_FriendlyFactions = { "FriendlyFactions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeamComponent, FriendlyFactions), METADATA_PARAMS(Z_Construct_UClass_UTeamComponent_Statics::NewProp_FriendlyFactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeamComponent_Statics::NewProp_FriendlyFactions_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTeamComponent_Statics::NewProp_FriendlyFactions_Inner = { "FriendlyFactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeamComponent_Statics::NewProp_OwnedFactions_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "TeamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTeamComponent_Statics::NewProp_OwnedFactions = { "OwnedFactions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeamComponent, OwnedFactions), METADATA_PARAMS(Z_Construct_UClass_UTeamComponent_Statics::NewProp_OwnedFactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeamComponent_Statics::NewProp_OwnedFactions_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTeamComponent_Statics::NewProp_OwnedFactions_Inner = { "OwnedFactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTeamComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamComponent_Statics::NewProp_ThreatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamComponent_Statics::NewProp_UnfriendlyFactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamComponent_Statics::NewProp_UnfriendlyFactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamComponent_Statics::NewProp_FriendlyFactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamComponent_Statics::NewProp_FriendlyFactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamComponent_Statics::NewProp_OwnedFactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamComponent_Statics::NewProp_OwnedFactions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTeamComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeamComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTeamComponent_Statics::ClassParams = {
		&UTeamComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTeamComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTeamComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTeamComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTeamComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTeamComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTeamComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTeamComponent, 732471764);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<UTeamComponent>()
	{
		return UTeamComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTeamComponent(Z_Construct_UClass_UTeamComponent, &UTeamComponent::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("UTeamComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTeamComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
