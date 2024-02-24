// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/AI/GFAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFAIController();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void AGFAIController::StaticRegisterNativesAGFAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGFAIController);
	UClass* Z_Construct_UClass_AGFAIController_NoRegister()
	{
		return AGFAIController::StaticClass();
	}
	struct Z_Construct_UClass_AGFAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/GFAIController.h" },
		{ "ModuleRelativePath", "Public/AI/GFAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFAIController_Statics::NewProp_AIBehavior_MetaData[] = {
		{ "Category", "BT" },
		{ "ModuleRelativePath", "Public/AI/GFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFAIController_Statics::NewProp_AIBehavior = { "AIBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFAIController, AIBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFAIController_Statics::NewProp_AIBehavior_MetaData), Z_Construct_UClass_AGFAIController_Statics::NewProp_AIBehavior_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGFAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFAIController_Statics::NewProp_AIBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGFAIController_Statics::ClassParams = {
		&AGFAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGFAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGFAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGFAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGFAIController()
	{
		if (!Z_Registration_Info_UClass_AGFAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGFAIController.OuterSingleton, Z_Construct_UClass_AGFAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGFAIController.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<AGFAIController>()
	{
		return AGFAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFAIController);
	AGFAIController::~AGFAIController() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGFAIController, AGFAIController::StaticClass, TEXT("AGFAIController"), &Z_Registration_Info_UClass_AGFAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFAIController), 484840729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFAIController_h_507290751(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
