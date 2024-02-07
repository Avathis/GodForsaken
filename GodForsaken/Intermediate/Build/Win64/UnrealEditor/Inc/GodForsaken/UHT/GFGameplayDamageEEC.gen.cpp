// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/CalculationClasses/GFGameplayDamageEEC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFGameplayDamageEEC() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayDamageEEC();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayDamageEEC_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFGameplayDamageEEC::StaticRegisterNativesUGFGameplayDamageEEC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFGameplayDamageEEC);
	UClass* Z_Construct_UClass_UGFGameplayDamageEEC_NoRegister()
	{
		return UGFGameplayDamageEEC::StaticClass();
	}
	struct Z_Construct_UClass_UGFGameplayDamageEEC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFGameplayDamageEEC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayDamageEEC_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayDamageEEC_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/CalculationClasses/GFGameplayDamageEEC.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/CalculationClasses/GFGameplayDamageEEC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFGameplayDamageEEC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFGameplayDamageEEC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFGameplayDamageEEC_Statics::ClassParams = {
		&UGFGameplayDamageEEC::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayDamageEEC_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFGameplayDamageEEC_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFGameplayDamageEEC()
	{
		if (!Z_Registration_Info_UClass_UGFGameplayDamageEEC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFGameplayDamageEEC.OuterSingleton, Z_Construct_UClass_UGFGameplayDamageEEC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFGameplayDamageEEC.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFGameplayDamageEEC>()
	{
		return UGFGameplayDamageEEC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFGameplayDamageEEC);
	UGFGameplayDamageEEC::~UGFGameplayDamageEEC() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayDamageEEC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayDamageEEC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFGameplayDamageEEC, UGFGameplayDamageEEC::StaticClass, TEXT("UGFGameplayDamageEEC"), &Z_Registration_Info_UClass_UGFGameplayDamageEEC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFGameplayDamageEEC), 839723657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayDamageEEC_h_1922918550(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayDamageEEC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayDamageEEC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
