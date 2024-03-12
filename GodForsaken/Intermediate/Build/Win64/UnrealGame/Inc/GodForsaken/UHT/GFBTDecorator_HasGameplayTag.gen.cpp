// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/AI/GFBTDecorator_HasGameplayTag.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFBTDecorator_HasGameplayTag() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFBTDecorator_HasGameplayTag();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_NoRegister();
	GODFORSAKEN_API UEnum* Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching();
	GODFORSAKEN_API UEnum* Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGFBTDecoratorMatchType;
	static UEnum* EGFBTDecoratorMatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGFBTDecoratorMatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGFBTDecoratorMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("EGFBTDecoratorMatchType"));
		}
		return Z_Registration_Info_UEnum_EGFBTDecoratorMatchType.OuterSingleton;
	}
	template<> GODFORSAKEN_API UEnum* StaticEnum<EGFBTDecoratorMatchType>()
	{
		return EGFBTDecoratorMatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType_Statics::Enumerators[] = {
		{ "EGFBTDecoratorMatchType::GameplayTag", (int64)EGFBTDecoratorMatchType::GameplayTag },
		{ "EGFBTDecoratorMatchType::GameplayTagContainer", (int64)EGFBTDecoratorMatchType::GameplayTagContainer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "GameplayTag.Comment", "/**\n * \n */" },
		{ "GameplayTag.DisplayName", "Match against a single tag" },
		{ "GameplayTag.Name", "EGFBTDecoratorMatchType::GameplayTag" },
		{ "GameplayTagContainer.Comment", "/**\n * \n */" },
		{ "GameplayTagContainer.DisplayName", "Match against a gameplay tag container" },
		{ "GameplayTagContainer.Name", "EGFBTDecoratorMatchType::GameplayTagContainer" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_HasGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GodForsaken,
		nullptr,
		"EGFBTDecoratorMatchType",
		"EGFBTDecoratorMatchType",
		Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType()
	{
		if (!Z_Registration_Info_UEnum_EGFBTDecoratorMatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGFBTDecoratorMatchType.InnerSingleton, Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGFBTDecoratorMatchType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGFBTDecoratorGameplayTagContainerMatching;
	static UEnum* EGFBTDecoratorGameplayTagContainerMatching_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGFBTDecoratorGameplayTagContainerMatching.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGFBTDecoratorGameplayTagContainerMatching.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("EGFBTDecoratorGameplayTagContainerMatching"));
		}
		return Z_Registration_Info_UEnum_EGFBTDecoratorGameplayTagContainerMatching.OuterSingleton;
	}
	template<> GODFORSAKEN_API UEnum* StaticEnum<EGFBTDecoratorGameplayTagContainerMatching>()
	{
		return EGFBTDecoratorGameplayTagContainerMatching_StaticEnum();
	}
	struct Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching_Statics::Enumerators[] = {
		{ "EGFBTDecoratorGameplayTagContainerMatching::HasAny", (int64)EGFBTDecoratorGameplayTagContainerMatching::HasAny },
		{ "EGFBTDecoratorGameplayTagContainerMatching::HasAll", (int64)EGFBTDecoratorGameplayTagContainerMatching::HasAll },
		{ "EGFBTDecoratorGameplayTagContainerMatching::HasAnyExact", (int64)EGFBTDecoratorGameplayTagContainerMatching::HasAnyExact },
		{ "EGFBTDecoratorGameplayTagContainerMatching::HasAllExact", (int64)EGFBTDecoratorGameplayTagContainerMatching::HasAllExact },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasAll.DisplayName", "Has all of the tags in the container" },
		{ "HasAll.Name", "EGFBTDecoratorGameplayTagContainerMatching::HasAll" },
		{ "HasAllExact.DisplayName", "Has all of the tags in the container (exact)" },
		{ "HasAllExact.Name", "EGFBTDecoratorGameplayTagContainerMatching::HasAllExact" },
		{ "HasAny.DisplayName", "Has any of the tags in the container" },
		{ "HasAny.Name", "EGFBTDecoratorGameplayTagContainerMatching::HasAny" },
		{ "HasAnyExact.DisplayName", "Has any of the tags in the container (exact)" },
		{ "HasAnyExact.Name", "EGFBTDecoratorGameplayTagContainerMatching::HasAnyExact" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_HasGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GodForsaken,
		nullptr,
		"EGFBTDecoratorGameplayTagContainerMatching",
		"EGFBTDecoratorGameplayTagContainerMatching",
		Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching()
	{
		if (!Z_Registration_Info_UEnum_EGFBTDecoratorGameplayTagContainerMatching.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGFBTDecoratorGameplayTagContainerMatching.InnerSingleton, Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGFBTDecoratorGameplayTagContainerMatching.InnerSingleton;
	}
	void UGFBTDecorator_HasGameplayTag::StaticRegisterNativesUGFBTDecorator_HasGameplayTag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFBTDecorator_HasGameplayTag);
	UClass* Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_NoRegister()
	{
		return UGFBTDecorator_HasGameplayTag::StaticClass();
	}
	struct Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorForGameplayTagCheck_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorForGameplayTagCheck;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameplayTagMatchType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagMatchType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameplayTagMatchType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExact_MetaData[];
#endif
		static void NewProp_bExact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameplayTagContainerMatchingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainerMatchingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameplayTagContainerMatchingType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/GFBTDecorator_HasGameplayTag.h" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_HasGameplayTag.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_ActorForGameplayTagCheck_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_HasGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_ActorForGameplayTagCheck = { "ActorForGameplayTagCheck", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_HasGameplayTag, ActorForGameplayTagCheck), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_ActorForGameplayTagCheck_MetaData), Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_ActorForGameplayTagCheck_MetaData) }; // 3137324432
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagMatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagMatchType_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_HasGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagMatchType = { "GameplayTagMatchType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_HasGameplayTag, GameplayTagMatchType), Z_Construct_UEnum_GodForsaken_EGFBTDecoratorMatchType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagMatchType_MetaData), Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagMatchType_MetaData) }; // 1178577623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTag_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "EditCondition", "GameplayTagMatchType == EGFBTDecoratorMatchType::GameplayTag" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_HasGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_HasGameplayTag, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTag_MetaData), Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_bExact_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "EditCondition", "GameplayTagMatchType == EGFBTDecoratorMatchType::GameplayTag" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_HasGameplayTag.h" },
	};
#endif
	void Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_bExact_SetBit(void* Obj)
	{
		((UGFBTDecorator_HasGameplayTag*)Obj)->bExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_bExact = { "bExact", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGFBTDecorator_HasGameplayTag), &Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_bExact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_bExact_MetaData), Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_bExact_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "EditCondition", "GameplayTagMatchType == EGFBTDecoratorMatchType::GameplayTagContainer" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_HasGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_HasGameplayTag, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTags_MetaData), Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTags_MetaData) }; // 405371792
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagContainerMatchingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagContainerMatchingType_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "EditCondition", "GameplayTagMatchType == EGFBTDecoratorMatchType::GameplayTagContainer" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_HasGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagContainerMatchingType = { "GameplayTagContainerMatchingType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_HasGameplayTag, GameplayTagContainerMatchingType), Z_Construct_UEnum_GodForsaken_EGFBTDecoratorGameplayTagContainerMatching, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagContainerMatchingType_MetaData), Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagContainerMatchingType_MetaData) }; // 3151108941
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_ActorForGameplayTagCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagMatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagMatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_bExact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagContainerMatchingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::NewProp_GameplayTagContainerMatchingType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFBTDecorator_HasGameplayTag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::ClassParams = {
		&UGFBTDecorator_HasGameplayTag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFBTDecorator_HasGameplayTag()
	{
		if (!Z_Registration_Info_UClass_UGFBTDecorator_HasGameplayTag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFBTDecorator_HasGameplayTag.OuterSingleton, Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFBTDecorator_HasGameplayTag.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFBTDecorator_HasGameplayTag>()
	{
		return UGFBTDecorator_HasGameplayTag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFBTDecorator_HasGameplayTag);
	UGFBTDecorator_HasGameplayTag::~UGFBTDecorator_HasGameplayTag() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_Statics::EnumInfo[] = {
		{ EGFBTDecoratorMatchType_StaticEnum, TEXT("EGFBTDecoratorMatchType"), &Z_Registration_Info_UEnum_EGFBTDecoratorMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1178577623U) },
		{ EGFBTDecoratorGameplayTagContainerMatching_StaticEnum, TEXT("EGFBTDecoratorGameplayTagContainerMatching"), &Z_Registration_Info_UEnum_EGFBTDecoratorGameplayTagContainerMatching, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3151108941U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFBTDecorator_HasGameplayTag, UGFBTDecorator_HasGameplayTag::StaticClass, TEXT("UGFBTDecorator_HasGameplayTag"), &Z_Registration_Info_UClass_UGFBTDecorator_HasGameplayTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFBTDecorator_HasGameplayTag), 427205465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_3875103625(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
