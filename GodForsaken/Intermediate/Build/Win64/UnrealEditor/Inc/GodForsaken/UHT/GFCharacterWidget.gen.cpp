// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/UI/GFCharacterWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFCharacterWidget() {}
// Cross Module References
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFCharacterWidget();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFCharacterWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	struct GFCharacterWidget_eventSetHealthPercentage_Parms
	{
		float HealthPercentage;
	};
	static FName NAME_UGFCharacterWidget_SetHealthPercentage = FName(TEXT("SetHealthPercentage"));
	void UGFCharacterWidget::SetHealthPercentage(float HealthPercentage)
	{
		GFCharacterWidget_eventSetHealthPercentage_Parms Parms;
		Parms.HealthPercentage=HealthPercentage;
		ProcessEvent(FindFunctionChecked(NAME_UGFCharacterWidget_SetHealthPercentage),&Parms);
	}
	void UGFCharacterWidget::StaticRegisterNativesUGFCharacterWidget()
	{
	}
	struct Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacterWidget_eventSetHealthPercentage_Parms, HealthPercentage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GFCharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFCharacterWidget, nullptr, "SetHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::PropPointers), sizeof(GFCharacterWidget_eventSetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFCharacterWidget_eventSetHealthPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFCharacterWidget);
	UClass* Z_Construct_UClass_UGFCharacterWidget_NoRegister()
	{
		return UGFCharacterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGFCharacterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFCharacterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFCharacterWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGFCharacterWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFCharacterWidget_SetHealthPercentage, "SetHealthPercentage" }, // 3381943357
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFCharacterWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFCharacterWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/GFCharacterWidget.h" },
		{ "ModuleRelativePath", "Public/UI/GFCharacterWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFCharacterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFCharacterWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFCharacterWidget_Statics::ClassParams = {
		&UGFCharacterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFCharacterWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFCharacterWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFCharacterWidget()
	{
		if (!Z_Registration_Info_UClass_UGFCharacterWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFCharacterWidget.OuterSingleton, Z_Construct_UClass_UGFCharacterWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFCharacterWidget.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFCharacterWidget>()
	{
		return UGFCharacterWidget::StaticClass();
	}
	UGFCharacterWidget::UGFCharacterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFCharacterWidget);
	UGFCharacterWidget::~UGFCharacterWidget() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFCharacterWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFCharacterWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFCharacterWidget, UGFCharacterWidget::StaticClass, TEXT("UGFCharacterWidget"), &Z_Registration_Info_UClass_UGFCharacterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFCharacterWidget), 3113347035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFCharacterWidget_h_2999563162(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFCharacterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFCharacterWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
