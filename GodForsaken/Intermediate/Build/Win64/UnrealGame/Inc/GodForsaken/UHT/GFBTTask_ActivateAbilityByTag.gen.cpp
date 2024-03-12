// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/AI/GFBTTask_ActivateAbilityByTag.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFBTTask_ActivateAbilityByTag() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_NoRegister();
	GODFORSAKEN_API UEnum* Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGFExecuteGameplayAbilityAbortBehaviour;
	static UEnum* EGFExecuteGameplayAbilityAbortBehaviour_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGFExecuteGameplayAbilityAbortBehaviour.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGFExecuteGameplayAbilityAbortBehaviour.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("EGFExecuteGameplayAbilityAbortBehaviour"));
		}
		return Z_Registration_Info_UEnum_EGFExecuteGameplayAbilityAbortBehaviour.OuterSingleton;
	}
	template<> GODFORSAKEN_API UEnum* StaticEnum<EGFExecuteGameplayAbilityAbortBehaviour>()
	{
		return EGFExecuteGameplayAbilityAbortBehaviour_StaticEnum();
	}
	struct Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour_Statics::Enumerators[] = {
		{ "EGFExecuteGameplayAbilityAbortBehaviour::CancelAbility", (int64)EGFExecuteGameplayAbilityAbortBehaviour::CancelAbility },
		{ "EGFExecuteGameplayAbilityAbortBehaviour::Nothing", (int64)EGFExecuteGameplayAbilityAbortBehaviour::Nothing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CancelAbility.Comment", "/**\n * \n */" },
		{ "CancelAbility.DisplayName", "Cancel Ability on Abort" },
		{ "CancelAbility.Name", "EGFExecuteGameplayAbilityAbortBehaviour::CancelAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/AI/GFBTTask_ActivateAbilityByTag.h" },
		{ "Nothing.Comment", "/**\n * \n */" },
		{ "Nothing.DisplayName", "Do Nothing on Abort" },
		{ "Nothing.Name", "EGFExecuteGameplayAbilityAbortBehaviour::Nothing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GodForsaken,
		nullptr,
		"EGFExecuteGameplayAbilityAbortBehaviour",
		"EGFExecuteGameplayAbilityAbortBehaviour",
		Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour()
	{
		if (!Z_Registration_Info_UEnum_EGFExecuteGameplayAbilityAbortBehaviour.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGFExecuteGameplayAbilityAbortBehaviour.InnerSingleton, Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGFExecuteGameplayAbilityAbortBehaviour.InnerSingleton;
	}
	void UGFBTTask_ActivateAbilityByTag::StaticRegisterNativesUGFBTTask_ActivateAbilityByTag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFBTTask_ActivateAbilityByTag);
	UClass* Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_NoRegister()
	{
		return UGFBTTask_ActivateAbilityByTag::StaticClass();
	}
	struct Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToActivate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityToActivate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbortBehaviour_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbortBehaviour_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbortBehaviour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/GFBTTask_ActivateAbilityByTag.h" },
		{ "ModuleRelativePath", "Public/AI/GFBTTask_ActivateAbilityByTag.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "ActivateAbility" },
		{ "ModuleRelativePath", "Public/AI/GFBTTask_ActivateAbilityByTag.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTTask_ActivateAbilityByTag, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_TargetActorKey_MetaData), Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_TargetActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbilityToActivate_MetaData[] = {
		{ "Category", "ActivateAbility" },
		{ "ModuleRelativePath", "Public/AI/GFBTTask_ActivateAbilityByTag.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbilityToActivate = { "AbilityToActivate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTTask_ActivateAbilityByTag, AbilityToActivate), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbilityToActivate_MetaData), Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbilityToActivate_MetaData) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbortBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbortBehaviour_MetaData[] = {
		{ "Category", "ActivateAbility" },
		{ "ModuleRelativePath", "Public/AI/GFBTTask_ActivateAbilityByTag.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbortBehaviour = { "AbortBehaviour", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTTask_ActivateAbilityByTag, AbortBehaviour), Z_Construct_UEnum_GodForsaken_EGFExecuteGameplayAbilityAbortBehaviour, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbortBehaviour_MetaData), Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbortBehaviour_MetaData) }; // 3070221402
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_TargetActorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbilityToActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbortBehaviour_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::NewProp_AbortBehaviour,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFBTTask_ActivateAbilityByTag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::ClassParams = {
		&UGFBTTask_ActivateAbilityByTag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag()
	{
		if (!Z_Registration_Info_UClass_UGFBTTask_ActivateAbilityByTag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFBTTask_ActivateAbilityByTag.OuterSingleton, Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFBTTask_ActivateAbilityByTag.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFBTTask_ActivateAbilityByTag>()
	{
		return UGFBTTask_ActivateAbilityByTag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFBTTask_ActivateAbilityByTag);
	UGFBTTask_ActivateAbilityByTag::~UGFBTTask_ActivateAbilityByTag() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_Statics::EnumInfo[] = {
		{ EGFExecuteGameplayAbilityAbortBehaviour_StaticEnum, TEXT("EGFExecuteGameplayAbilityAbortBehaviour"), &Z_Registration_Info_UEnum_EGFExecuteGameplayAbilityAbortBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3070221402U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag, UGFBTTask_ActivateAbilityByTag::StaticClass, TEXT("UGFBTTask_ActivateAbilityByTag"), &Z_Registration_Info_UClass_UGFBTTask_ActivateAbilityByTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFBTTask_ActivateAbilityByTag), 2531130729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_1564355003(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
