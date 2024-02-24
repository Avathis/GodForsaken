// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/GFBTDecorator_HasGameplayTag.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GODFORSAKEN_GFBTDecorator_HasGameplayTag_generated_h
#error "GFBTDecorator_HasGameplayTag.generated.h already included, missing '#pragma once' in GFBTDecorator_HasGameplayTag.h"
#endif
#define GODFORSAKEN_GFBTDecorator_HasGameplayTag_generated_h

#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_SPARSE_DATA
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGFBTDecorator_HasGameplayTag(); \
	friend struct Z_Construct_UClass_UGFBTDecorator_HasGameplayTag_Statics; \
public: \
	DECLARE_CLASS(UGFBTDecorator_HasGameplayTag, UBTDecorator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GodForsaken"), NO_API) \
	DECLARE_SERIALIZER(UGFBTDecorator_HasGameplayTag)


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGFBTDecorator_HasGameplayTag(UGFBTDecorator_HasGameplayTag&&); \
	NO_API UGFBTDecorator_HasGameplayTag(const UGFBTDecorator_HasGameplayTag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGFBTDecorator_HasGameplayTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFBTDecorator_HasGameplayTag); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGFBTDecorator_HasGameplayTag) \
	NO_API virtual ~UGFBTDecorator_HasGameplayTag();


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_29_PROLOG
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_SPARSE_DATA \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GODFORSAKEN_API UClass* StaticClass<class UGFBTDecorator_HasGameplayTag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTDecorator_HasGameplayTag_h


#define FOREACH_ENUM_EGFBTDECORATORMATCHTYPE(op) \
	op(EGFBTDecoratorMatchType::GameplayTag) \
	op(EGFBTDecoratorMatchType::GameplayTagContainer) 

enum class EGFBTDecoratorMatchType : uint8;
template<> struct TIsUEnumClass<EGFBTDecoratorMatchType> { enum { Value = true }; };
template<> GODFORSAKEN_API UEnum* StaticEnum<EGFBTDecoratorMatchType>();

#define FOREACH_ENUM_EGFBTDECORATORGAMEPLAYTAGCONTAINERMATCHING(op) \
	op(EGFBTDecoratorGameplayTagContainerMatching::HasAny) \
	op(EGFBTDecoratorGameplayTagContainerMatching::HasAll) \
	op(EGFBTDecoratorGameplayTagContainerMatching::HasAnyExact) \
	op(EGFBTDecoratorGameplayTagContainerMatching::HasAllExact) 

enum class EGFBTDecoratorGameplayTagContainerMatching : uint8;
template<> struct TIsUEnumClass<EGFBTDecoratorGameplayTagContainerMatching> { enum { Value = true }; };
template<> GODFORSAKEN_API UEnum* StaticEnum<EGFBTDecoratorGameplayTagContainerMatching>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
