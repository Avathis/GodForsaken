// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/BaseClasses/Animation/GFAnimNotify_GameplayCue.h"
#include "GameplayCueInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFAnimNotify_GameplayCue() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTag();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAnimNotify_GameplayCue();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAnimNotify_GameplayCue_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAnimNotify_GameplayCueState();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAnimNotify_GameplayCueState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFAnimNotify_GameplayCue::StaticRegisterNativesUGFAnimNotify_GameplayCue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFAnimNotify_GameplayCue);
	UClass* Z_Construct_UClass_UGFAnimNotify_GameplayCue_NoRegister()
	{
		return UGFAnimNotify_GameplayCue::StaticClass();
	}
	struct Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayCueLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "GFGameplayCue - (Burst)" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "BaseClasses/Animation/GFAnimNotify_GameplayCue.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Animation/GFAnimNotify_GameplayCue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCueLevel_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GameplayCueLevel to Attribute\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseClasses/Animation/GFAnimNotify_GameplayCue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayCueLevel to Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCueLevel = { "GameplayCueLevel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFAnimNotify_GameplayCue, GameplayCueLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCueLevel_MetaData), Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCueLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCue_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GameplayCue tag to invoke.\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseClasses/Animation/GFAnimNotify_GameplayCue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayCue tag to invoke." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCue = { "GameplayCue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFAnimNotify_GameplayCue, GameplayCue), Z_Construct_UScriptStruct_FGameplayCueTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCue_MetaData), Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCue_MetaData) }; // 3292737162
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCueLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::NewProp_GameplayCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFAnimNotify_GameplayCue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::ClassParams = {
		&UGFAnimNotify_GameplayCue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFAnimNotify_GameplayCue()
	{
		if (!Z_Registration_Info_UClass_UGFAnimNotify_GameplayCue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFAnimNotify_GameplayCue.OuterSingleton, Z_Construct_UClass_UGFAnimNotify_GameplayCue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFAnimNotify_GameplayCue.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFAnimNotify_GameplayCue>()
	{
		return UGFAnimNotify_GameplayCue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFAnimNotify_GameplayCue);
	UGFAnimNotify_GameplayCue::~UGFAnimNotify_GameplayCue() {}
	void UGFAnimNotify_GameplayCueState::StaticRegisterNativesUGFAnimNotify_GameplayCueState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFAnimNotify_GameplayCueState);
	UClass* Z_Construct_UClass_UGFAnimNotify_GameplayCueState_NoRegister()
	{
		return UGFAnimNotify_GameplayCueState::StaticClass();
	}
	struct Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayCueLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "GFGameplayCue - (Looping)" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "BaseClasses/Animation/GFAnimNotify_GameplayCue.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Animation/GFAnimNotify_GameplayCue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCueLevel_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GameplayCueLevel to Attribute\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseClasses/Animation/GFAnimNotify_GameplayCue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayCueLevel to Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCueLevel = { "GameplayCueLevel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFAnimNotify_GameplayCueState, GameplayCueLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCueLevel_MetaData), Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCueLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GameplayCue tag to invoke\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseClasses/Animation/GFAnimNotify_GameplayCue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayCue tag to invoke" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue = { "GameplayCue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFAnimNotify_GameplayCueState, GameplayCue), Z_Construct_UScriptStruct_FGameplayCueTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue_MetaData), Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue_MetaData) }; // 3292737162
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCueLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFAnimNotify_GameplayCueState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::ClassParams = {
		&UGFAnimNotify_GameplayCueState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFAnimNotify_GameplayCueState()
	{
		if (!Z_Registration_Info_UClass_UGFAnimNotify_GameplayCueState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFAnimNotify_GameplayCueState.OuterSingleton, Z_Construct_UClass_UGFAnimNotify_GameplayCueState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFAnimNotify_GameplayCueState.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFAnimNotify_GameplayCueState>()
	{
		return UGFAnimNotify_GameplayCueState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFAnimNotify_GameplayCueState);
	UGFAnimNotify_GameplayCueState::~UGFAnimNotify_GameplayCueState() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimNotify_GameplayCue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimNotify_GameplayCue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFAnimNotify_GameplayCue, UGFAnimNotify_GameplayCue::StaticClass, TEXT("UGFAnimNotify_GameplayCue"), &Z_Registration_Info_UClass_UGFAnimNotify_GameplayCue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFAnimNotify_GameplayCue), 3174091691U) },
		{ Z_Construct_UClass_UGFAnimNotify_GameplayCueState, UGFAnimNotify_GameplayCueState::StaticClass, TEXT("UGFAnimNotify_GameplayCueState"), &Z_Registration_Info_UClass_UGFAnimNotify_GameplayCueState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFAnimNotify_GameplayCueState), 2240922341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimNotify_GameplayCue_h_4116427493(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimNotify_GameplayCue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimNotify_GameplayCue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
