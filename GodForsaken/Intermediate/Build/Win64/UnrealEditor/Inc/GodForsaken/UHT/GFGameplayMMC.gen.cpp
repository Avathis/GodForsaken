// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/CalculationClasses/GFGameplayMMC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFGameplayMMC() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayMMC();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayMMC_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFGameplayMMC::StaticRegisterNativesUGFGameplayMMC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFGameplayMMC);
	UClass* Z_Construct_UClass_UGFGameplayMMC_NoRegister()
	{
		return UGFGameplayMMC::StaticClass();
	}
	struct Z_Construct_UClass_UGFGameplayMMC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFGameplayMMC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayMMC_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayMMC_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/CalculationClasses/GFGameplayMMC.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/CalculationClasses/GFGameplayMMC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFGameplayMMC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFGameplayMMC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFGameplayMMC_Statics::ClassParams = {
		&UGFGameplayMMC::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayMMC_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFGameplayMMC_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFGameplayMMC()
	{
		if (!Z_Registration_Info_UClass_UGFGameplayMMC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFGameplayMMC.OuterSingleton, Z_Construct_UClass_UGFGameplayMMC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFGameplayMMC.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFGameplayMMC>()
	{
		return UGFGameplayMMC::StaticClass();
	}
	UGFGameplayMMC::UGFGameplayMMC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFGameplayMMC);
	UGFGameplayMMC::~UGFGameplayMMC() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayMMC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayMMC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFGameplayMMC, UGFGameplayMMC::StaticClass, TEXT("UGFGameplayMMC"), &Z_Registration_Info_UClass_UGFGameplayMMC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFGameplayMMC), 82297075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayMMC_h_944891520(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayMMC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_CalculationClasses_GFGameplayMMC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
