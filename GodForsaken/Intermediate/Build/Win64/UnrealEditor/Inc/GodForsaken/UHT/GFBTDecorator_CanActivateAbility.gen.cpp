// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/AI/GFBTDecorator_CanActivateAbility.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFBTDecorator_CanActivateAbility() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFBTDecorator_CanActivateAbility();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFBTDecorator_CanActivateAbility::StaticRegisterNativesUGFBTDecorator_CanActivateAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFBTDecorator_CanActivateAbility);
	UClass* Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_NoRegister()
	{
		return UGFBTDecorator_CanActivateAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/GFBTDecorator_CanActivateAbility.h" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_CanActivateAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AvatarActor_MetaData[] = {
		{ "Category", "CanActivateAbility" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_CanActivateAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AvatarActor = { "AvatarActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_CanActivateAbility, AvatarActor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AvatarActor_MetaData), Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AvatarActor_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "Category", "CanActivateAbility" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_CanActivateAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_CanActivateAbility, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::NewProp_AbilityTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFBTDecorator_CanActivateAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::ClassParams = {
		&UGFBTDecorator_CanActivateAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFBTDecorator_CanActivateAbility()
	{
		if (!Z_Registration_Info_UClass_UGFBTDecorator_CanActivateAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFBTDecorator_CanActivateAbility.OuterSingleton, Z_Construct_UClass_UGFBTDecorator_CanActivateAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFBTDecorator_CanActivateAbility.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFBTDecorator_CanActivateAbility>()
	{
		return UGFBTDecorator_CanActivateAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFBTDecorator_CanActivateAbility);
	UGFBTDecorator_CanActivateAbility::~UGFBTDecorator_CanActivateAbility() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_CanActivateAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_CanActivateAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFBTDecorator_CanActivateAbility, UGFBTDecorator_CanActivateAbility::StaticClass, TEXT("UGFBTDecorator_CanActivateAbility"), &Z_Registration_Info_UClass_UGFBTDecorator_CanActivateAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFBTDecorator_CanActivateAbility), 566353556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_CanActivateAbility_h_1927610569(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_CanActivateAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_CanActivateAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
