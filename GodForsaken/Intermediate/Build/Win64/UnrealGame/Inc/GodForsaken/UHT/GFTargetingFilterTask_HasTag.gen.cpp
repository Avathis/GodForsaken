// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/AbilityTasks/GFTargetingFilterTask_HasTag.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFTargetingFilterTask_HasTag() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFTargetingFilterTask_HasTag();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFTargetingFilterTask_HasTag_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFTargetingFilterTask_HasTag::StaticRegisterNativesUGFTargetingFilterTask_HasTag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFTargetingFilterTask_HasTag);
	UClass* Z_Construct_UClass_UGFTargetingFilterTask_HasTag_NoRegister()
	{
		return UGFTargetingFilterTask_HasTag::StaticClass();
	}
	struct Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainerToHave_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainerToHave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainerToNotHave_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainerToNotHave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/AbilityTasks/GFTargetingFilterTask_HasTag.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingFilterTask_HasTag.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToHave_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "Targeting Filter | Tags" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingFilterTask_HasTag.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToHave = { "TagContainerToHave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingFilterTask_HasTag, TagContainerToHave), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToHave_MetaData), Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToHave_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToNotHave_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "Targeting Filter | Tags" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingFilterTask_HasTag.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToNotHave = { "TagContainerToNotHave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingFilterTask_HasTag, TagContainerToNotHave), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToNotHave_MetaData), Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToNotHave_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToHave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::NewProp_TagContainerToNotHave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFTargetingFilterTask_HasTag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::ClassParams = {
		&UGFTargetingFilterTask_HasTag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFTargetingFilterTask_HasTag()
	{
		if (!Z_Registration_Info_UClass_UGFTargetingFilterTask_HasTag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFTargetingFilterTask_HasTag.OuterSingleton, Z_Construct_UClass_UGFTargetingFilterTask_HasTag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFTargetingFilterTask_HasTag.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFTargetingFilterTask_HasTag>()
	{
		return UGFTargetingFilterTask_HasTag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFTargetingFilterTask_HasTag);
	UGFTargetingFilterTask_HasTag::~UGFTargetingFilterTask_HasTag() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingFilterTask_HasTag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingFilterTask_HasTag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFTargetingFilterTask_HasTag, UGFTargetingFilterTask_HasTag::StaticClass, TEXT("UGFTargetingFilterTask_HasTag"), &Z_Registration_Info_UClass_UGFTargetingFilterTask_HasTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFTargetingFilterTask_HasTag), 1125603684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingFilterTask_HasTag_h_645101633(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingFilterTask_HasTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingFilterTask_HasTag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
