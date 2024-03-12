// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFAbilityFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilityFunctionLibrary();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilityFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execSetEffectContextSourceIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSourceIndex);
		P_GET_STRUCT(FGameplayEffectContextHandle,Z_Param_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectContextHandle*)Z_Param__Result=UGFAbilityFunctionLibrary::SetEffectContextSourceIndex(Z_Param_InSourceIndex,Z_Param_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execSetEffectContextSourceSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSourceSocket);
		P_GET_STRUCT(FGameplayEffectContextHandle,Z_Param_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectContextHandle*)Z_Param__Result=UGFAbilityFunctionLibrary::SetEffectContextSourceSocket(Z_Param_InSourceSocket,Z_Param_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execSetEffectContextEffectStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEffectStrength);
		P_GET_STRUCT(FGameplayEffectContextHandle,Z_Param_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectContextHandle*)Z_Param__Result=UGFAbilityFunctionLibrary::SetEffectContextEffectStrength(Z_Param_InEffectStrength,Z_Param_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execSetEffectContextSourceLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSourceLevel);
		P_GET_STRUCT(FGameplayEffectContextHandle,Z_Param_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectContextHandle*)Z_Param__Result=UGFAbilityFunctionLibrary::SetEffectContextSourceLevel(Z_Param_InSourceLevel,Z_Param_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execSetSourceIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSourceIndex);
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectSpecHandle*)Z_Param__Result=UGFAbilityFunctionLibrary::SetSourceIndex(Z_Param_InSourceIndex,Z_Param_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execSetSourceSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSourceSocket);
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectSpecHandle*)Z_Param__Result=UGFAbilityFunctionLibrary::SetSourceSocket(Z_Param_InSourceSocket,Z_Param_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execSetEffectStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEffectStrength);
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectSpecHandle*)Z_Param__Result=UGFAbilityFunctionLibrary::SetEffectStrength(Z_Param_InEffectStrength,Z_Param_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execSetSourceLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSourceLevel);
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectSpecHandle*)Z_Param__Result=UGFAbilityFunctionLibrary::SetSourceLevel(Z_Param_InSourceLevel,Z_Param_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execGetSourceIndex)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGFAbilityFunctionLibrary::GetSourceIndex(Z_Param_Out_EffectContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execGetSourceSocket)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UGFAbilityFunctionLibrary::GetSourceSocket(Z_Param_Out_EffectContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execGetEffectStrength)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGFAbilityFunctionLibrary::GetEffectStrength(Z_Param_Out_EffectContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFAbilityFunctionLibrary::execGetSourceLevel)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGFAbilityFunctionLibrary::GetSourceLevel(Z_Param_Out_EffectContext);
		P_NATIVE_END;
	}
	void UGFAbilityFunctionLibrary::StaticRegisterNativesUGFAbilityFunctionLibrary()
	{
		UClass* Class = UGFAbilityFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectStrength", &UGFAbilityFunctionLibrary::execGetEffectStrength },
			{ "GetSourceIndex", &UGFAbilityFunctionLibrary::execGetSourceIndex },
			{ "GetSourceLevel", &UGFAbilityFunctionLibrary::execGetSourceLevel },
			{ "GetSourceSocket", &UGFAbilityFunctionLibrary::execGetSourceSocket },
			{ "SetEffectContextEffectStrength", &UGFAbilityFunctionLibrary::execSetEffectContextEffectStrength },
			{ "SetEffectContextSourceIndex", &UGFAbilityFunctionLibrary::execSetEffectContextSourceIndex },
			{ "SetEffectContextSourceLevel", &UGFAbilityFunctionLibrary::execSetEffectContextSourceLevel },
			{ "SetEffectContextSourceSocket", &UGFAbilityFunctionLibrary::execSetEffectContextSourceSocket },
			{ "SetEffectStrength", &UGFAbilityFunctionLibrary::execSetEffectStrength },
			{ "SetSourceIndex", &UGFAbilityFunctionLibrary::execSetSourceIndex },
			{ "SetSourceLevel", &UGFAbilityFunctionLibrary::execSetSourceLevel },
			{ "SetSourceSocket", &UGFAbilityFunctionLibrary::execSetSourceSocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics
	{
		struct GFAbilityFunctionLibrary_eventGetEffectStrength_Parms
		{
			FGameplayEffectContextHandle EffectContext;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventGetEffectStrength_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::NewProp_EffectContext_MetaData), Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::NewProp_EffectContext_MetaData) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventGetEffectStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "GetEffectStrength", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::GFAbilityFunctionLibrary_eventGetEffectStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::GFAbilityFunctionLibrary_eventGetEffectStrength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics
	{
		struct GFAbilityFunctionLibrary_eventGetSourceIndex_Parms
		{
			FGameplayEffectContextHandle EffectContext;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventGetSourceIndex_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::NewProp_EffectContext_MetaData), Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::NewProp_EffectContext_MetaData) }; // 3768813396
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventGetSourceIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "GetSourceIndex", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::GFAbilityFunctionLibrary_eventGetSourceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::GFAbilityFunctionLibrary_eventGetSourceIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics
	{
		struct GFAbilityFunctionLibrary_eventGetSourceLevel_Parms
		{
			FGameplayEffectContextHandle EffectContext;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventGetSourceLevel_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::NewProp_EffectContext_MetaData), Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::NewProp_EffectContext_MetaData) }; // 3768813396
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventGetSourceLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "GetSourceLevel", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::GFAbilityFunctionLibrary_eventGetSourceLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::GFAbilityFunctionLibrary_eventGetSourceLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics
	{
		struct GFAbilityFunctionLibrary_eventGetSourceSocket_Parms
		{
			FGameplayEffectContextHandle EffectContext;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventGetSourceSocket_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::NewProp_EffectContext_MetaData), Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::NewProp_EffectContext_MetaData) }; // 3768813396
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventGetSourceSocket_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "GetSourceSocket", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::GFAbilityFunctionLibrary_eventGetSourceSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::GFAbilityFunctionLibrary_eventGetSourceSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics
	{
		struct GFAbilityFunctionLibrary_eventSetEffectContextEffectStrength_Parms
		{
			float InEffectStrength;
			FGameplayEffectContextHandle EffectSpec;
			FGameplayEffectContextHandle ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InEffectStrength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::NewProp_InEffectStrength = { "InEffectStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextEffectStrength_Parms, InEffectStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextEffectStrength_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextEffectStrength_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::NewProp_InEffectStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "SetEffectContextEffectStrength", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::GFAbilityFunctionLibrary_eventSetEffectContextEffectStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::GFAbilityFunctionLibrary_eventSetEffectContextEffectStrength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics
	{
		struct GFAbilityFunctionLibrary_eventSetEffectContextSourceIndex_Parms
		{
			int32 InSourceIndex;
			FGameplayEffectContextHandle EffectSpec;
			FGameplayEffectContextHandle ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSourceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::NewProp_InSourceIndex = { "InSourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextSourceIndex_Parms, InSourceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextSourceIndex_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextSourceIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::NewProp_InSourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "SetEffectContextSourceIndex", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::GFAbilityFunctionLibrary_eventSetEffectContextSourceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::GFAbilityFunctionLibrary_eventSetEffectContextSourceIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics
	{
		struct GFAbilityFunctionLibrary_eventSetEffectContextSourceLevel_Parms
		{
			float InSourceLevel;
			FGameplayEffectContextHandle EffectSpec;
			FGameplayEffectContextHandle ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSourceLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::NewProp_InSourceLevel = { "InSourceLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextSourceLevel_Parms, InSourceLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextSourceLevel_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextSourceLevel_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::NewProp_InSourceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "SetEffectContextSourceLevel", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::GFAbilityFunctionLibrary_eventSetEffectContextSourceLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::GFAbilityFunctionLibrary_eventSetEffectContextSourceLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics
	{
		struct GFAbilityFunctionLibrary_eventSetEffectContextSourceSocket_Parms
		{
			FName InSourceSocket;
			FGameplayEffectContextHandle EffectSpec;
			FGameplayEffectContextHandle ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSourceSocket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::NewProp_InSourceSocket = { "InSourceSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextSourceSocket_Parms, InSourceSocket), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextSourceSocket_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectContextSourceSocket_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::NewProp_InSourceSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "SetEffectContextSourceSocket", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::GFAbilityFunctionLibrary_eventSetEffectContextSourceSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::GFAbilityFunctionLibrary_eventSetEffectContextSourceSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics
	{
		struct GFAbilityFunctionLibrary_eventSetEffectStrength_Parms
		{
			float InEffectStrength;
			FGameplayEffectSpecHandle EffectSpec;
			FGameplayEffectSpecHandle ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InEffectStrength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::NewProp_InEffectStrength = { "InEffectStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectStrength_Parms, InEffectStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectStrength_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetEffectStrength_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::NewProp_InEffectStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "SetEffectStrength", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::GFAbilityFunctionLibrary_eventSetEffectStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::GFAbilityFunctionLibrary_eventSetEffectStrength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics
	{
		struct GFAbilityFunctionLibrary_eventSetSourceIndex_Parms
		{
			int32 InSourceIndex;
			FGameplayEffectSpecHandle EffectSpec;
			FGameplayEffectSpecHandle ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSourceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::NewProp_InSourceIndex = { "InSourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetSourceIndex_Parms, InSourceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetSourceIndex_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetSourceIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::NewProp_InSourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "SetSourceIndex", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::GFAbilityFunctionLibrary_eventSetSourceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::GFAbilityFunctionLibrary_eventSetSourceIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics
	{
		struct GFAbilityFunctionLibrary_eventSetSourceLevel_Parms
		{
			float InSourceLevel;
			FGameplayEffectSpecHandle EffectSpec;
			FGameplayEffectSpecHandle ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSourceLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::NewProp_InSourceLevel = { "InSourceLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetSourceLevel_Parms, InSourceLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetSourceLevel_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetSourceLevel_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::NewProp_InSourceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "SetSourceLevel", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::GFAbilityFunctionLibrary_eventSetSourceLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::GFAbilityFunctionLibrary_eventSetSourceLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics
	{
		struct GFAbilityFunctionLibrary_eventSetSourceSocket_Parms
		{
			FName InSourceSocket;
			FGameplayEffectSpecHandle EffectSpec;
			FGameplayEffectSpecHandle ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSourceSocket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::NewProp_InSourceSocket = { "InSourceSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetSourceSocket_Parms, InSourceSocket), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetSourceSocket_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFAbilityFunctionLibrary_eventSetSourceSocket_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::NewProp_InSourceSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectContextSection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFAbilityFunctionLibrary, nullptr, "SetSourceSocket", nullptr, nullptr, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::GFAbilityFunctionLibrary_eventSetSourceSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::GFAbilityFunctionLibrary_eventSetSourceSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFAbilityFunctionLibrary);
	UClass* Z_Construct_UClass_UGFAbilityFunctionLibrary_NoRegister()
	{
		return UGFAbilityFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetEffectStrength, "GetEffectStrength" }, // 3059053982
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceIndex, "GetSourceIndex" }, // 313406141
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceLevel, "GetSourceLevel" }, // 1970533370
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_GetSourceSocket, "GetSourceSocket" }, // 1171793917
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextEffectStrength, "SetEffectContextEffectStrength" }, // 3481680421
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceIndex, "SetEffectContextSourceIndex" }, // 4164771632
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceLevel, "SetEffectContextSourceLevel" }, // 2987182499
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectContextSourceSocket, "SetEffectContextSourceSocket" }, // 3110108192
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetEffectStrength, "SetEffectStrength" }, // 2717377138
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceIndex, "SetSourceIndex" }, // 2963474447
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceLevel, "SetSourceLevel" }, // 375399115
		{ &Z_Construct_UFunction_UGFAbilityFunctionLibrary_SetSourceSocket, "SetSourceSocket" }, // 4150700072
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFAbilityFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::ClassParams = {
		&UGFAbilityFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFAbilityFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGFAbilityFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFAbilityFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGFAbilityFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFAbilityFunctionLibrary.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFAbilityFunctionLibrary>()
	{
		return UGFAbilityFunctionLibrary::StaticClass();
	}
	UGFAbilityFunctionLibrary::UGFAbilityFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFAbilityFunctionLibrary);
	UGFAbilityFunctionLibrary::~UGFAbilityFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFAbilityFunctionLibrary, UGFAbilityFunctionLibrary::StaticClass, TEXT("UGFAbilityFunctionLibrary"), &Z_Registration_Info_UClass_UGFAbilityFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFAbilityFunctionLibrary), 3796659845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityFunctionLibrary_h_1691469688(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
