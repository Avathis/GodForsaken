// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFGameplayAbility() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayAbility();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFGameplayAbility::StaticRegisterNativesUGFGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFGameplayAbility);
	UClass* Z_Construct_UClass_UGFGameplayAbility_NoRegister()
	{
		return UGFGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGFGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GFGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFGameplayAbility_Statics::ClassParams = {
		&UGFGameplayAbility::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFGameplayAbility_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UGFGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFGameplayAbility.OuterSingleton, Z_Construct_UClass_UGFGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFGameplayAbility.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFGameplayAbility>()
	{
		return UGFGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFGameplayAbility);
	UGFGameplayAbility::~UGFGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFGameplayAbility, UGFGameplayAbility::StaticClass, TEXT("UGFGameplayAbility"), &Z_Registration_Info_UClass_UGFGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFGameplayAbility), 396755378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_3485097355(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
