// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAICallCompletions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOpenAICallCompletions;
enum class EOACompletionsEngineType : uint8;
struct FCompletion;
struct FCompletionInfo;
struct FCompletionSettings;
#ifdef OPENAIAPI_OpenAICallCompletions_generated_h
#error "OpenAICallCompletions.generated.h already included, missing '#pragma once' in OpenAICallCompletions.h"
#endif
#define OPENAIAPI_OpenAICallCompletions_generated_h

#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_11_DELEGATE \
OPENAIAPI_API void FOnGptResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnGptResponseRecievedPin, TArray<FCompletion> const& completions, const FString& errorMessage, FCompletionInfo const& completionInfo, bool Success);


#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_SPARSE_DATA
#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenAICallCompletions);


#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenAICallCompletions);


#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_ACCESSORS
#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenAICallCompletions(); \
	friend struct Z_Construct_UClass_UOpenAICallCompletions_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallCompletions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallCompletions)


#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOpenAICallCompletions(); \
	friend struct Z_Construct_UClass_UOpenAICallCompletions_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallCompletions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallCompletions)


#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenAICallCompletions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenAICallCompletions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallCompletions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallCompletions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallCompletions(UOpenAICallCompletions&&); \
	NO_API UOpenAICallCompletions(const UOpenAICallCompletions&); \
public:


#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallCompletions(UOpenAICallCompletions&&); \
	NO_API UOpenAICallCompletions(const UOpenAICallCompletions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallCompletions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallCompletions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenAICallCompletions)


#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_16_PROLOG
#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_SPARSE_DATA \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_RPC_WRAPPERS \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_ACCESSORS \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_INCLASS \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_SPARSE_DATA \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_ACCESSORS \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_INCLASS_NO_PURE_DECLS \
	FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENAIAPI_API UClass* StaticClass<class UOpenAICallCompletions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
