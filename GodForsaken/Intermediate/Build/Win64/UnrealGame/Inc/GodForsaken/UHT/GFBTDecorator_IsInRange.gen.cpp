// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/AI/GFBTDecorator_IsInRange.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFBTDecorator_IsInRange() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFBTDecorator_IsInRange();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFBTDecorator_IsInRange_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFBTDecorator_IsInRange::StaticRegisterNativesUGFBTDecorator_IsInRange()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFBTDecorator_IsInRange);
	UClass* Z_Construct_UClass_UGFBTDecorator_IsInRange_NoRegister()
	{
		return UGFBTDecorator_IsInRange::StaticClass();
	}
	struct Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceActorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/GFBTDecorator_IsInRange.h" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_IsInRange.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_IsInRange.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_IsInRange, Range), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_Range_MetaData), Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_Range_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_SourceActorKey_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_IsInRange.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_SourceActorKey = { "SourceActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_IsInRange, SourceActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_SourceActorKey_MetaData), Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_SourceActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/AI/GFBTDecorator_IsInRange.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFBTDecorator_IsInRange, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_TargetActorKey_MetaData), Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_TargetActorKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_SourceActorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::NewProp_TargetActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFBTDecorator_IsInRange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::ClassParams = {
		&UGFBTDecorator_IsInRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFBTDecorator_IsInRange()
	{
		if (!Z_Registration_Info_UClass_UGFBTDecorator_IsInRange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFBTDecorator_IsInRange.OuterSingleton, Z_Construct_UClass_UGFBTDecorator_IsInRange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFBTDecorator_IsInRange.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFBTDecorator_IsInRange>()
	{
		return UGFBTDecorator_IsInRange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFBTDecorator_IsInRange);
	UGFBTDecorator_IsInRange::~UGFBTDecorator_IsInRange() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_IsInRange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_IsInRange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFBTDecorator_IsInRange, UGFBTDecorator_IsInRange::StaticClass, TEXT("UGFBTDecorator_IsInRange"), &Z_Registration_Info_UClass_UGFBTDecorator_IsInRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFBTDecorator_IsInRange), 2235789157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_IsInRange_h_2246373353(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_IsInRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_IsInRange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
