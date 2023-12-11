// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/Player/GFPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayerController();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayerController_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	DEFINE_FUNCTION(AGFPlayerController::execGetGFAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGFAbilitySystemComponent**)Z_Param__Result=P_THIS->GetGFAbilitySystemComponent();
		P_NATIVE_END;
	}
	void AGFPlayerController::StaticRegisterNativesAGFPlayerController()
	{
		UClass* Class = AGFPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGFAbilitySystemComponent", &AGFPlayerController::execGetGFAbilitySystemComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics
	{
		struct GFPlayerController_eventGetGFAbilitySystemComponent_Parms
		{
			UGFAbilitySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFPlayerController_eventGetGFAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Public/Player/GFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFPlayerController, nullptr, "GetGFAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::GFPlayerController_eventGetGFAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::GFPlayerController_eventGetGFAbilitySystemComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGFPlayerController);
	UClass* Z_Construct_UClass_AGFPlayerController_NoRegister()
	{
		return AGFPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGFPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGFPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent, "GetGFAbilitySystemComponent" }, // 120404125
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/GFPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/GFPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGFPlayerController_Statics::ClassParams = {
		&AGFPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGFPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGFPlayerController()
	{
		if (!Z_Registration_Info_UClass_AGFPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGFPlayerController.OuterSingleton, Z_Construct_UClass_AGFPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGFPlayerController.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<AGFPlayerController>()
	{
		return AGFPlayerController::StaticClass();
	}
	AGFPlayerController::AGFPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFPlayerController);
	AGFPlayerController::~AGFPlayerController() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGFPlayerController, AGFPlayerController::StaticClass, TEXT("AGFPlayerController"), &Z_Registration_Info_UClass_AGFPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFPlayerController), 3469797945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_891518722(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
