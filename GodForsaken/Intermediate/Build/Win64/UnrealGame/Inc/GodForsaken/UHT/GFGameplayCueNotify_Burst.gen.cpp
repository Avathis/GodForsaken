// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFGameplayCueNotify_Burst.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFGameplayCueNotify_Burst() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Burst();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayCueNotify_Burst();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayCueNotify_Burst_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFGameplayCueNotify_Burst::StaticRegisterNativesUGFGameplayCueNotify_Burst()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFGameplayCueNotify_Burst);
	UClass* Z_Construct_UClass_UGFGameplayCueNotify_Burst_NoRegister()
	{
		return UGFGameplayCueNotify_Burst::StaticClass();
	}
	struct Z_Construct_UClass_UGFGameplayCueNotify_Burst_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFGameplayCueNotify_Burst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayCueNotify_Burst,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayCueNotify_Burst_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayCueNotify_Burst_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "GCN GFBurst" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayAbilitySystem/GFGameplayCueNotify_Burst.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayCueNotify_Burst.h" },
		{ "ShortTooltip", "A one-off GameplayCueNotify that is never spawned into the world." },
		{ "ShowWorldContextPin", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFGameplayCueNotify_Burst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFGameplayCueNotify_Burst>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFGameplayCueNotify_Burst_Statics::ClassParams = {
		&UGFGameplayCueNotify_Burst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayCueNotify_Burst_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFGameplayCueNotify_Burst_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFGameplayCueNotify_Burst()
	{
		if (!Z_Registration_Info_UClass_UGFGameplayCueNotify_Burst.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFGameplayCueNotify_Burst.OuterSingleton, Z_Construct_UClass_UGFGameplayCueNotify_Burst_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFGameplayCueNotify_Burst.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFGameplayCueNotify_Burst>()
	{
		return UGFGameplayCueNotify_Burst::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFGameplayCueNotify_Burst);
	UGFGameplayCueNotify_Burst::~UGFGameplayCueNotify_Burst() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Burst_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Burst_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFGameplayCueNotify_Burst, UGFGameplayCueNotify_Burst::StaticClass, TEXT("UGFGameplayCueNotify_Burst"), &Z_Registration_Info_UClass_UGFGameplayCueNotify_Burst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFGameplayCueNotify_Burst), 1632555410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Burst_h_3144881773(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Burst_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Burst_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
