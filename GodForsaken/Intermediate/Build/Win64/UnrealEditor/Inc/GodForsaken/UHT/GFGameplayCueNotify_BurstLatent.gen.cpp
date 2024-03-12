// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFGameplayCueNotify_BurstLatent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFGameplayCueNotify_BurstLatent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	DEFINE_FUNCTION(AGFGameplayCueNotify_BurstLatent::execCancelHitStop)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelHitStop(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFGameplayCueNotify_BurstLatent::execInitiateHitStop)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitiateHitStop(Z_Param_Target);
		P_NATIVE_END;
	}
	void AGFGameplayCueNotify_BurstLatent::StaticRegisterNativesAGFGameplayCueNotify_BurstLatent()
	{
		UClass* Class = AGFGameplayCueNotify_BurstLatent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelHitStop", &AGFGameplayCueNotify_BurstLatent::execCancelHitStop },
			{ "InitiateHitStop", &AGFGameplayCueNotify_BurstLatent::execInitiateHitStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics
	{
		struct GFGameplayCueNotify_BurstLatent_eventCancelHitStop_Parms
		{
			AActor* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFGameplayCueNotify_BurstLatent_eventCancelHitStop_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "HitStop" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayCueNotify_BurstLatent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent, nullptr, "CancelHitStop", nullptr, nullptr, Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::GFGameplayCueNotify_BurstLatent_eventCancelHitStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::GFGameplayCueNotify_BurstLatent_eventCancelHitStop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics
	{
		struct GFGameplayCueNotify_BurstLatent_eventInitiateHitStop_Parms
		{
			AActor* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFGameplayCueNotify_BurstLatent_eventInitiateHitStop_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "HitStop" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayCueNotify_BurstLatent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent, nullptr, "InitiateHitStop", nullptr, nullptr, Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::GFGameplayCueNotify_BurstLatent_eventInitiateHitStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::GFGameplayCueNotify_BurstLatent_eventInitiateHitStop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGFGameplayCueNotify_BurstLatent);
	UClass* Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_NoRegister()
	{
		return AGFGameplayCueNotify_BurstLatent::StaticClass();
	}
	struct Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitStopTimeDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitStopTimeDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayCueNotify_BurstLatent,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_CancelHitStop, "CancelHitStop" }, // 1516833364
		{ &Z_Construct_UFunction_AGFGameplayCueNotify_BurstLatent_InitiateHitStop, "InitiateHitStop" }, // 4194662552
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayAbilitySystem/GFGameplayCueNotify_BurstLatent.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayCueNotify_BurstLatent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::NewProp_HitStopTimeDelay_MetaData[] = {
		{ "Category", "HitStop" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayCueNotify_BurstLatent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::NewProp_HitStopTimeDelay = { "HitStopTimeDelay", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFGameplayCueNotify_BurstLatent, HitStopTimeDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::NewProp_HitStopTimeDelay_MetaData), Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::NewProp_HitStopTimeDelay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::NewProp_HitStopTimeDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFGameplayCueNotify_BurstLatent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::ClassParams = {
		&AGFGameplayCueNotify_BurstLatent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::Class_MetaDataParams), Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent()
	{
		if (!Z_Registration_Info_UClass_AGFGameplayCueNotify_BurstLatent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGFGameplayCueNotify_BurstLatent.OuterSingleton, Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGFGameplayCueNotify_BurstLatent.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<AGFGameplayCueNotify_BurstLatent>()
	{
		return AGFGameplayCueNotify_BurstLatent::StaticClass();
	}
	AGFGameplayCueNotify_BurstLatent::AGFGameplayCueNotify_BurstLatent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFGameplayCueNotify_BurstLatent);
	AGFGameplayCueNotify_BurstLatent::~AGFGameplayCueNotify_BurstLatent() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_BurstLatent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_BurstLatent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGFGameplayCueNotify_BurstLatent, AGFGameplayCueNotify_BurstLatent::StaticClass, TEXT("AGFGameplayCueNotify_BurstLatent"), &Z_Registration_Info_UClass_AGFGameplayCueNotify_BurstLatent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFGameplayCueNotify_BurstLatent), 410556160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_BurstLatent_h_3131296895(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_BurstLatent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueNotify_BurstLatent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
