// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/CalculationClasses/GFGameplayEffectExecCalculation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFGameplayEffectExecCalculation() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayEffectExecCalculation();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayEffectExecCalculation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFGameplayEffectExecCalculation::StaticRegisterNativesUGFGameplayEffectExecCalculation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFGameplayEffectExecCalculation);
	UClass* Z_Construct_UClass_UGFGameplayEffectExecCalculation_NoRegister()
	{
		return UGFGameplayEffectExecCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UGFGameplayEffectExecCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFGameplayEffectExecCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayEffectExecCalculation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayEffectExecCalculation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/CalculationClasses/GFGameplayEffectExecCalculation.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/CalculationClasses/GFGameplayEffectExecCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFGameplayEffectExecCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFGameplayEffectExecCalculation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFGameplayEffectExecCalculation_Statics::ClassParams = {
		&UGFGameplayEffectExecCalculation::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayEffectExecCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFGameplayEffectExecCalculation_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFGameplayEffectExecCalculation()
	{
		if (!Z_Registration_Info_UClass_UGFGameplayEffectExecCalculation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFGameplayEffectExecCalculation.OuterSingleton, Z_Construct_UClass_UGFGameplayEffectExecCalculation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFGameplayEffectExecCalculation.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFGameplayEffectExecCalculation>()
	{
		return UGFGameplayEffectExecCalculation::StaticClass();
	}
	UGFGameplayEffectExecCalculation::UGFGameplayEffectExecCalculation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFGameplayEffectExecCalculation);
	UGFGameplayEffectExecCalculation::~UGFGameplayEffectExecCalculation() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayEffectExecCalculation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayEffectExecCalculation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFGameplayEffectExecCalculation, UGFGameplayEffectExecCalculation::StaticClass, TEXT("UGFGameplayEffectExecCalculation"), &Z_Registration_Info_UClass_UGFGameplayEffectExecCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFGameplayEffectExecCalculation), 1223076574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayEffectExecCalculation_h_801309518(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayEffectExecCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayEffectExecCalculation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
