// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "ScalableFloat.h"
#include "Types/TargetingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFTargetingTask_AOE() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFTargetingTask_AOE();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFTargetingTask_AOE_NoRegister();
	GODFORSAKEN_API UEnum* Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGFTargetingAOEShape;
	static UEnum* EGFTargetingAOEShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGFTargetingAOEShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGFTargetingAOEShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("EGFTargetingAOEShape"));
		}
		return Z_Registration_Info_UEnum_EGFTargetingAOEShape.OuterSingleton;
	}
	template<> GODFORSAKEN_API UEnum* StaticEnum<EGFTargetingAOEShape>()
	{
		return EGFTargetingAOEShape_StaticEnum();
	}
	struct Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape_Statics::Enumerators[] = {
		{ "EGFTargetingAOEShape::Box", (int64)EGFTargetingAOEShape::Box },
		{ "EGFTargetingAOEShape::Cylinder", (int64)EGFTargetingAOEShape::Cylinder },
		{ "EGFTargetingAOEShape::Sphere", (int64)EGFTargetingAOEShape::Sphere },
		{ "EGFTargetingAOEShape::Capsule", (int64)EGFTargetingAOEShape::Capsule },
		{ "EGFTargetingAOEShape::SourceComponent", (int64)EGFTargetingAOEShape::SourceComponent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape_Statics::Enum_MetaDataParams[] = {
		{ "Box.Comment", "/**\n * \n */" },
		{ "Box.Name", "EGFTargetingAOEShape::Box" },
		{ "Capsule.Comment", "/**\n * \n */" },
		{ "Capsule.Name", "EGFTargetingAOEShape::Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Cylinder.Comment", "/**\n * \n */" },
		{ "Cylinder.Name", "EGFTargetingAOEShape::Cylinder" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
		{ "SourceComponent.Comment", "/**\n * \n */" },
		{ "SourceComponent.Name", "EGFTargetingAOEShape::SourceComponent" },
		{ "Sphere.Comment", "/**\n * \n */" },
		{ "Sphere.Name", "EGFTargetingAOEShape::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GodForsaken,
		nullptr,
		"EGFTargetingAOEShape",
		"EGFTargetingAOEShape",
		Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape()
	{
		if (!Z_Registration_Info_UEnum_EGFTargetingAOEShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGFTargetingAOEShape.InnerSingleton, Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGFTargetingAOEShape.InnerSingleton;
	}
	DEFINE_FUNCTION(UGFTargetingTask_AOE::execGetSourceRightVector)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSourceRightVector_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFTargetingTask_AOE::execGetSourceForwardVector)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSourceForwardVector_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFTargetingTask_AOE::execGetSourceRotation)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetSourceRotation_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFTargetingTask_AOE::execGetSourceOffset)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSourceOffset_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFTargetingTask_AOE::execGetSourceLocation)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSourceLocation_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	struct GFTargetingTask_AOE_eventGetSourceForwardVector_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GFTargetingTask_AOE_eventGetSourceForwardVector_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GFTargetingTask_AOE_eventGetSourceLocation_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GFTargetingTask_AOE_eventGetSourceLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GFTargetingTask_AOE_eventGetSourceOffset_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GFTargetingTask_AOE_eventGetSourceOffset_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GFTargetingTask_AOE_eventGetSourceRightVector_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GFTargetingTask_AOE_eventGetSourceRightVector_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GFTargetingTask_AOE_eventGetSourceRotation_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FQuat ReturnValue;

		/** Constructor, initializes return property only **/
		GFTargetingTask_AOE_eventGetSourceRotation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	static FName NAME_UGFTargetingTask_AOE_GetSourceForwardVector = FName(TEXT("GetSourceForwardVector"));
	FVector UGFTargetingTask_AOE::GetSourceForwardVector(FTargetingRequestHandle const& TargetingHandle) const
	{
		GFTargetingTask_AOE_eventGetSourceForwardVector_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UGFTargetingTask_AOE*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGFTargetingTask_AOE_GetSourceForwardVector),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGFTargetingTask_AOE_GetSourceLocation = FName(TEXT("GetSourceLocation"));
	FVector UGFTargetingTask_AOE::GetSourceLocation(FTargetingRequestHandle const& TargetingHandle) const
	{
		GFTargetingTask_AOE_eventGetSourceLocation_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UGFTargetingTask_AOE*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGFTargetingTask_AOE_GetSourceLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGFTargetingTask_AOE_GetSourceOffset = FName(TEXT("GetSourceOffset"));
	FVector UGFTargetingTask_AOE::GetSourceOffset(FTargetingRequestHandle const& TargetingHandle) const
	{
		GFTargetingTask_AOE_eventGetSourceOffset_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UGFTargetingTask_AOE*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGFTargetingTask_AOE_GetSourceOffset),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGFTargetingTask_AOE_GetSourceRightVector = FName(TEXT("GetSourceRightVector"));
	FVector UGFTargetingTask_AOE::GetSourceRightVector(FTargetingRequestHandle const& TargetingHandle) const
	{
		GFTargetingTask_AOE_eventGetSourceRightVector_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UGFTargetingTask_AOE*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGFTargetingTask_AOE_GetSourceRightVector),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGFTargetingTask_AOE_GetSourceRotation = FName(TEXT("GetSourceRotation"));
	FQuat UGFTargetingTask_AOE::GetSourceRotation(FTargetingRequestHandle const& TargetingHandle) const
	{
		GFTargetingTask_AOE_eventGetSourceRotation_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UGFTargetingTask_AOE*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGFTargetingTask_AOE_GetSourceRotation),&Parms);
		return Parms.ReturnValue;
	}
	void UGFTargetingTask_AOE::StaticRegisterNativesUGFTargetingTask_AOE()
	{
		UClass* Class = UGFTargetingTask_AOE::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSourceForwardVector", &UGFTargetingTask_AOE::execGetSourceForwardVector },
			{ "GetSourceLocation", &UGFTargetingTask_AOE::execGetSourceLocation },
			{ "GetSourceOffset", &UGFTargetingTask_AOE::execGetSourceOffset },
			{ "GetSourceRightVector", &UGFTargetingTask_AOE::execGetSourceRightVector },
			{ "GetSourceRotation", &UGFTargetingTask_AOE::execGetSourceRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceForwardVector_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::NewProp_TargetingHandle_MetaData), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::NewProp_TargetingHandle_MetaData) }; // 1101311214
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target AOE Selection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFTargetingTask_AOE, nullptr, "GetSourceForwardVector", nullptr, nullptr, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::PropPointers), sizeof(GFTargetingTask_AOE_eventGetSourceForwardVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFTargetingTask_AOE_eventGetSourceForwardVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceLocation_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle_MetaData), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle_MetaData) }; // 1101311214
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target AOE Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Native Event to get the source location for the AOE */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Native Event to get the source location for the AOE" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFTargetingTask_AOE, nullptr, "GetSourceLocation", nullptr, nullptr, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::PropPointers), sizeof(GFTargetingTask_AOE_eventGetSourceLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFTargetingTask_AOE_eventGetSourceLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceOffset_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle_MetaData), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle_MetaData) }; // 1101311214
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target AOE Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Native Event to get a source location offset for the AOE */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Native Event to get a source location offset for the AOE" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFTargetingTask_AOE, nullptr, "GetSourceOffset", nullptr, nullptr, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::PropPointers), sizeof(GFTargetingTask_AOE_eventGetSourceOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFTargetingTask_AOE_eventGetSourceOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceRightVector_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::NewProp_TargetingHandle_MetaData), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::NewProp_TargetingHandle_MetaData) }; // 1101311214
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target AOE Selection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFTargetingTask_AOE, nullptr, "GetSourceRightVector", nullptr, nullptr, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::PropPointers), sizeof(GFTargetingTask_AOE_eventGetSourceRightVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFTargetingTask_AOE_eventGetSourceRightVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceRotation_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::NewProp_TargetingHandle_MetaData), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::NewProp_TargetingHandle_MetaData) }; // 1101311214
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFTargetingTask_AOE_eventGetSourceRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target AOE Selection" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFTargetingTask_AOE, nullptr, "GetSourceRotation", nullptr, nullptr, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::PropPointers), sizeof(GFTargetingTask_AOE_eventGetSourceRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFTargetingTask_AOE_eventGetSourceRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFTargetingTask_AOE);
	UClass* Z_Construct_UClass_UGFTargetingTask_AOE_NoRegister()
	{
		return UGFTargetingTask_AOE::StaticClass();
	}
	struct Z_Construct_UClass_UGFTargetingTask_AOE_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionProfileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionObjectTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSourceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOffsetDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceOffsetDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSourceRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSourceActor_MetaData[];
#endif
		static void NewProp_bIgnoreSourceActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInstigatorActor_MetaData[];
#endif
		static void NewProp_bIgnoreInstigatorActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInstigatorActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotation_MetaData[];
#endif
		static void NewProp_bUseControllerRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFTargetingTask_AOE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetingTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGFTargetingTask_AOE_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceForwardVector, "GetSourceForwardVector" }, // 3497212213
		{ &Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceLocation, "GetSourceLocation" }, // 394844053
		{ &Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceOffset, "GetSourceOffset" }, // 3175959234
		{ &Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRightVector, "GetSourceRightVector" }, // 1386337995
		{ &Z_Construct_UFunction_UGFTargetingTask_AOE_GetSourceRotation, "GetSourceRotation" }, // 1946961283
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ShapeType_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The shape type to use for the AOE */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The shape type to use for the AOE" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, ShapeType), Z_Construct_UEnum_GodForsaken_EGFTargetingAOEShape, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ShapeType_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ShapeType_MetaData) }; // 1216213302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The collision channel to use for the overlap check (as long as Collision Profile Name is not set) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The collision channel to use for the overlap check (as long as Collision Profile Name is not set)" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionChannel_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The collision profile name to use for the overlap check */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The collision profile name to use for the overlap check" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, CollisionProfileName), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionProfileName_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionProfileName_MetaData) }; // 3144723258
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionObjectTypes_Inner = { "CollisionObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionObjectTypes_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The collision profile name to use for the overlap check */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The collision profile name to use for the overlap check" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionObjectTypes = { "CollisionObjectTypes", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, CollisionObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionObjectTypes_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionObjectTypes_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceOffset_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default source location offset used by GetSourceOffset */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default source location offset used by GetSourceOffset" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceOffset = { "DefaultSourceOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, DefaultSourceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceOffset_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_SourceOffsetDirection_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_SourceOffsetDirection = { "SourceOffsetDirection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, SourceOffsetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_SourceOffsetDirection_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_SourceOffsetDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceRotation_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceRotation = { "DefaultSourceRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, DefaultSourceRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceRotation_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreSourceActor_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates the trace should ignore the source actor */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the trace should ignore the source actor" },
#endif
	};
#endif
	void Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreSourceActor_SetBit(void* Obj)
	{
		((UGFTargetingTask_AOE*)Obj)->bIgnoreSourceActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreSourceActor = { "bIgnoreSourceActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGFTargetingTask_AOE), &Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreSourceActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreSourceActor_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreSourceActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates the trace should ignore the source actor */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the trace should ignore the source actor" },
#endif
	};
#endif
	void Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_SetBit(void* Obj)
	{
		((UGFTargetingTask_AOE*)Obj)->bIgnoreInstigatorActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreInstigatorActor = { "bIgnoreInstigatorActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGFTargetingTask_AOE), &Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bUseControllerRotation_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
	};
#endif
	void Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bUseControllerRotation_SetBit(void* Obj)
	{
		((UGFTargetingTask_AOE*)Obj)->bUseControllerRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bUseControllerRotation = { "bUseControllerRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGFTargetingTask_AOE), &Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bUseControllerRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bUseControllerRotation_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bUseControllerRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "Category", "Target AOE Selection | Box and Cylinder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The half extent to use for box and cylinder */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The half extent to use for box and cylinder" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfExtent_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfExtent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Target AOE Selection | Sphere and Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The radius to use for sphere and capsule overlaps */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius to use for sphere and capsule overlaps" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, Radius), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_Radius_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_Radius_MetaData) }; // 4070660376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfHeight_MetaData[] = {
		{ "Category", "Target AOE Selection | Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The half height to use for capsule overlap checks */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The half height to use for capsule overlap checks" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, HalfHeight), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfHeight_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfHeight_MetaData) }; // 4070660376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ComponentTag_MetaData[] = {
		{ "Category", "Target AOE Selection | Custom Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The component tag to use if a custom component is desired as the overlap shape. \n\x09\x09Use to look up the component on the source actor */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The component tag to use if a custom component is desired as the overlap shape.\n              Use to look up the component on the source actor" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ComponentTag = { "ComponentTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFTargetingTask_AOE, ComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ComponentTag_MetaData), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ComponentTag_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFTargetingTask_AOE_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_CollisionObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_SourceOffsetDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_DefaultSourceRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreSourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bIgnoreInstigatorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_bUseControllerRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFTargetingTask_AOE_Statics::NewProp_ComponentTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFTargetingTask_AOE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFTargetingTask_AOE>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFTargetingTask_AOE_Statics::ClassParams = {
		&UGFTargetingTask_AOE::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGFTargetingTask_AOE_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFTargetingTask_AOE_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFTargetingTask_AOE_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFTargetingTask_AOE()
	{
		if (!Z_Registration_Info_UClass_UGFTargetingTask_AOE.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFTargetingTask_AOE.OuterSingleton, Z_Construct_UClass_UGFTargetingTask_AOE_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFTargetingTask_AOE.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFTargetingTask_AOE>()
	{
		return UGFTargetingTask_AOE::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFTargetingTask_AOE);
	UGFTargetingTask_AOE::~UGFTargetingTask_AOE() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_Statics::EnumInfo[] = {
		{ EGFTargetingAOEShape_StaticEnum, TEXT("EGFTargetingAOEShape"), &Z_Registration_Info_UEnum_EGFTargetingAOEShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1216213302U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFTargetingTask_AOE, UGFTargetingTask_AOE::StaticClass, TEXT("UGFTargetingTask_AOE"), &Z_Registration_Info_UClass_UGFTargetingTask_AOE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFTargetingTask_AOE), 1511789703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_1288963675(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
