// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/BaseClasses/Input/GFInputConfig.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFInputConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFInputConfig();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFInputConfig_NoRegister();
	GODFORSAKEN_API UScriptStruct* Z_Construct_UScriptStruct_FGFInputAction();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GFInputAction;
class UScriptStruct* FGFInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GFInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GFInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGFInputAction, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("GFInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_GFInputAction.OuterSingleton;
}
template<> GODFORSAKEN_API UScriptStruct* StaticStruct<FGFInputAction>()
{
	return FGFInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGFInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Input/GFInputConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGFInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGFInputAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "GFInputAction" },
		{ "ModuleRelativePath", "Public/BaseClasses/Input/GFInputConfig.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputAction_MetaData), Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "GFInputAction" },
		{ "ModuleRelativePath", "Public/BaseClasses/Input/GFInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputTag_MetaData), Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGFInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFInputAction_Statics::NewProp_InputTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGFInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
		nullptr,
		&NewStructOps,
		"GFInputAction",
		Z_Construct_UScriptStruct_FGFInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFInputAction_Statics::PropPointers),
		sizeof(FGFInputAction),
		alignof(FGFInputAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGFInputAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFInputAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGFInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_GFInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GFInputAction.InnerSingleton, Z_Construct_UScriptStruct_FGFInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GFInputAction.InnerSingleton;
	}
	DEFINE_FUNCTION(UGFInputConfig::execFindAbilityInputActionForTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
		P_GET_UBOOL(Z_Param_bLogNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UInputAction**)Z_Param__Result=P_THIS->FindAbilityInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFInputConfig::execFindNativeInputActionForTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
		P_GET_UBOOL(Z_Param_bLogNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UInputAction**)Z_Param__Result=P_THIS->FindNativeInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
		P_NATIVE_END;
	}
	void UGFInputConfig::StaticRegisterNativesUGFInputConfig()
	{
		UClass* Class = UGFInputConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAbilityInputActionForTag", &UGFInputConfig::execFindAbilityInputActionForTag },
			{ "FindNativeInputActionForTag", &UGFInputConfig::execFindNativeInputActionForTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics
	{
		struct GFInputConfig_eventFindAbilityInputActionForTag_Parms
		{
			FGameplayTag InputTag;
			bool bLogNotFound;
			const UInputAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static void NewProp_bLogNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFInputConfig_eventFindAbilityInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag_MetaData), Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
	{
		((GFInputConfig_eventFindAbilityInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GFInputConfig_eventFindAbilityInputActionForTag_Parms), &Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFInputConfig_eventFindAbilityInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Input/GFInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFInputConfig, nullptr, "FindAbilityInputActionForTag", nullptr, nullptr, Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::GFInputConfig_eventFindAbilityInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::GFInputConfig_eventFindAbilityInputActionForTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics
	{
		struct GFInputConfig_eventFindNativeInputActionForTag_Parms
		{
			FGameplayTag InputTag;
			bool bLogNotFound;
			const UInputAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static void NewProp_bLogNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFInputConfig_eventFindNativeInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag_MetaData), Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
	{
		((GFInputConfig_eventFindNativeInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GFInputConfig_eventFindNativeInputActionForTag_Parms), &Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFInputConfig_eventFindNativeInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Input/GFInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFInputConfig, nullptr, "FindNativeInputActionForTag", nullptr, nullptr, Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::GFInputConfig_eventFindNativeInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::GFInputConfig_eventFindNativeInputActionForTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFInputConfig);
	UClass* Z_Construct_UClass_UGFInputConfig_NoRegister()
	{
		return UGFInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGFInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFInputConfig_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGFInputConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFInputConfig_FindAbilityInputActionForTag, "FindAbilityInputActionForTag" }, // 2334319791
		{ &Z_Construct_UFunction_UGFInputConfig_FindNativeInputActionForTag, "FindNativeInputActionForTag" }, // 2119615189
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFInputConfig_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFInputConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseClasses/Input/GFInputConfig.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Input/GFInputConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFInputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGFInputAction, METADATA_PARAMS(0, nullptr) }; // 4063835201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFInputConfig_Statics::NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "GFInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound.\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseClasses/Input/GFInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFInputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFInputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFInputConfig_Statics::NewProp_NativeInputActions_MetaData), Z_Construct_UClass_UGFInputConfig_Statics::NewProp_NativeInputActions_MetaData) }; // 4063835201
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGFInputAction, METADATA_PARAMS(0, nullptr) }; // 4063835201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFInputConfig_Statics::NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "GFInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags.\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseClasses/Input/GFInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFInputConfig_Statics::NewProp_AbilityInputActions_MetaData), Z_Construct_UClass_UGFInputConfig_Statics::NewProp_AbilityInputActions_MetaData) }; // 4063835201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFInputConfig_Statics::NewProp_NativeInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFInputConfig_Statics::NewProp_NativeInputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFInputConfig_Statics::NewProp_AbilityInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFInputConfig_Statics::NewProp_AbilityInputActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFInputConfig_Statics::ClassParams = {
		&UGFInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGFInputConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFInputConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFInputConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFInputConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFInputConfig()
	{
		if (!Z_Registration_Info_UClass_UGFInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFInputConfig.OuterSingleton, Z_Construct_UClass_UGFInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFInputConfig.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFInputConfig>()
	{
		return UGFInputConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFInputConfig);
	UGFInputConfig::~UGFInputConfig() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Input_GFInputConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Input_GFInputConfig_h_Statics::ScriptStructInfo[] = {
		{ FGFInputAction::StaticStruct, Z_Construct_UScriptStruct_FGFInputAction_Statics::NewStructOps, TEXT("GFInputAction"), &Z_Registration_Info_UScriptStruct_GFInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGFInputAction), 4063835201U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Input_GFInputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFInputConfig, UGFInputConfig::StaticClass, TEXT("UGFInputConfig"), &Z_Registration_Info_UClass_UGFInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFInputConfig), 3030038135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Input_GFInputConfig_h_3475942777(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Input_GFInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Input_GFInputConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Input_GFInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Input_GFInputConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
