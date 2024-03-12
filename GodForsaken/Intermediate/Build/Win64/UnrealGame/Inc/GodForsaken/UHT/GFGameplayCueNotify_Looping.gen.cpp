// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFGameplayCueNotify_Looping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFGameplayCueNotify_Looping() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Looping();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFGameplayCueNotify_Looping();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFGameplayCueNotify_Looping_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void AGFGameplayCueNotify_Looping::StaticRegisterNativesAGFGameplayCueNotify_Looping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGFGameplayCueNotify_Looping);
	UClass* Z_Construct_UClass_AGFGameplayCueNotify_Looping_NoRegister()
	{
		return AGFGameplayCueNotify_Looping::StaticClass();
	}
	struct Z_Construct_UClass_AGFGameplayCueNotify_Looping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFGameplayCueNotify_Looping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayCueNotify_Looping,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFGameplayCueNotify_Looping_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFGameplayCueNotify_Looping_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayAbilitySystem/GFGameplayCueNotify_Looping.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayCueNotify_Looping.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFGameplayCueNotify_Looping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFGameplayCueNotify_Looping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGFGameplayCueNotify_Looping_Statics::ClassParams = {
		&AGFGameplayCueNotify_Looping::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFGameplayCueNotify_Looping_Statics::Class_MetaDataParams), Z_Construct_UClass_AGFGameplayCueNotify_Looping_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGFGameplayCueNotify_Looping()
	{
		if (!Z_Registration_Info_UClass_AGFGameplayCueNotify_Looping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGFGameplayCueNotify_Looping.OuterSingleton, Z_Construct_UClass_AGFGameplayCueNotify_Looping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGFGameplayCueNotify_Looping.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<AGFGameplayCueNotify_Looping>()
	{
		return AGFGameplayCueNotify_Looping::StaticClass();
	}
	AGFGameplayCueNotify_Looping::AGFGameplayCueNotify_Looping() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFGameplayCueNotify_Looping);
	AGFGameplayCueNotify_Looping::~AGFGameplayCueNotify_Looping() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Looping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Looping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGFGameplayCueNotify_Looping, AGFGameplayCueNotify_Looping::StaticClass, TEXT("AGFGameplayCueNotify_Looping"), &Z_Registration_Info_UClass_AGFGameplayCueNotify_Looping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFGameplayCueNotify_Looping), 1707568717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Looping_h_1394509215(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Looping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_Looping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
