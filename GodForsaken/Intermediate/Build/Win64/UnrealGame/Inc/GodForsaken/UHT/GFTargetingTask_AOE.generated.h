// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTargetingRequestHandle;
#ifdef GODFORSAKEN_GFTargetingTask_AOE_generated_h
#error "GFTargetingTask_AOE.generated.h already included, missing '#pragma once' in GFTargetingTask_AOE.h"
#endif
#define GODFORSAKEN_GFTargetingTask_AOE_generated_h

#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_SPARSE_DATA
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetSourceRightVector_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FVector GetSourceForwardVector_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FQuat GetSourceRotation_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FVector GetSourceOffset_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FVector GetSourceLocation_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
 \
	DECLARE_FUNCTION(execGetSourceRightVector); \
	DECLARE_FUNCTION(execGetSourceForwardVector); \
	DECLARE_FUNCTION(execGetSourceRotation); \
	DECLARE_FUNCTION(execGetSourceOffset); \
	DECLARE_FUNCTION(execGetSourceLocation);


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_CALLBACK_WRAPPERS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGFTargetingTask_AOE(); \
	friend struct Z_Construct_UClass_UGFTargetingTask_AOE_Statics; \
public: \
	DECLARE_CLASS(UGFTargetingTask_AOE, UTargetingTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GodForsaken"), NO_API) \
	DECLARE_SERIALIZER(UGFTargetingTask_AOE)


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGFTargetingTask_AOE(UGFTargetingTask_AOE&&); \
	NO_API UGFTargetingTask_AOE(const UGFTargetingTask_AOE&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGFTargetingTask_AOE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFTargetingTask_AOE); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGFTargetingTask_AOE) \
	NO_API virtual ~UGFTargetingTask_AOE();


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_23_PROLOG
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_SPARSE_DATA \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_CALLBACK_WRAPPERS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GODFORSAKEN_API UClass* StaticClass<class UGFTargetingTask_AOE>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_AbilityTasks_GFTargetingTask_AOE_h


#define FOREACH_ENUM_EGFTARGETINGAOESHAPE(op) \
	op(EGFTargetingAOEShape::Box) \
	op(EGFTargetingAOEShape::Cylinder) \
	op(EGFTargetingAOEShape::Sphere) \
	op(EGFTargetingAOEShape::Capsule) \
	op(EGFTargetingAOEShape::SourceComponent) 

enum class EGFTargetingAOEShape : uint8;
template<> struct TIsUEnumClass<EGFTargetingAOEShape> { enum { Value = true }; };
template<> GODFORSAKEN_API UEnum* StaticEnum<EGFTargetingAOEShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
