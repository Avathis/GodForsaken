// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFAbilitiesGEComponent.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFAbilitiesGEComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilitiesGEComponent();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilitiesGEComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFAbilitiesGEComponent::StaticRegisterNativesUGFAbilitiesGEComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFAbilitiesGEComponent);
	UClass* Z_Construct_UClass_UGFAbilitiesGEComponent_NoRegister()
	{
		return UGFAbilitiesGEComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGFAbilitiesGEComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilityTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilityTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilityTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitiesGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GFAbilitiesGEComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilitiesGEComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::NewProp_GrantedAbilityTags_Inner = { "GrantedAbilityTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::NewProp_GrantedAbilityTags_MetaData[] = {
		{ "Category", "GrantAbilities" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilitiesGEComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::NewProp_GrantedAbilityTags = { "GrantedAbilityTags", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFAbilitiesGEComponent, GrantedAbilityTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::NewProp_GrantedAbilityTags_MetaData), Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::NewProp_GrantedAbilityTags_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::NewProp_GrantedAbilityTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::NewProp_GrantedAbilityTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFAbilitiesGEComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::ClassParams = {
		&UGFAbilitiesGEComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::PropPointers),
		0,
		0x003130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFAbilitiesGEComponent()
	{
		if (!Z_Registration_Info_UClass_UGFAbilitiesGEComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFAbilitiesGEComponent.OuterSingleton, Z_Construct_UClass_UGFAbilitiesGEComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFAbilitiesGEComponent.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFAbilitiesGEComponent>()
	{
		return UGFAbilitiesGEComponent::StaticClass();
	}
	UGFAbilitiesGEComponent::UGFAbilitiesGEComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFAbilitiesGEComponent);
	UGFAbilitiesGEComponent::~UGFAbilitiesGEComponent() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilitiesGEComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilitiesGEComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFAbilitiesGEComponent, UGFAbilitiesGEComponent::StaticClass, TEXT("UGFAbilitiesGEComponent"), &Z_Registration_Info_UClass_UGFAbilitiesGEComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFAbilitiesGEComponent), 4037162878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilitiesGEComponent_h_759680770(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilitiesGEComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilitiesGEComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
