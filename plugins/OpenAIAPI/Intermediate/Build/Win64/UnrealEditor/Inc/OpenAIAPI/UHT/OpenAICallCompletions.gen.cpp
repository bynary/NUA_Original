// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/OpenAICallCompletions.h"
#include "OpenAIAPI/Public/OpenAIDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAICallCompletions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallCompletions();
OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallCompletions_NoRegister();
OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType();
OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature();
OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletion();
OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletionInfo();
OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletionSettings();
UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
// End Cross Module References

// Begin Delegate FOnGptResponseRecievedPin
struct Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics
{
	struct _Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms
	{
		TArray<FCompletion> completions;
		FString errorMessage;
		FCompletionInfo completionInfo;
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAICallCompletions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_completions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_completionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_completions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_completions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_completionInfo;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions_Inner = { "completions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCompletion, METADATA_PARAMS(0, nullptr) }; // 216751819
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions = { "completions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms, completions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_completions_MetaData), NewProp_completions_MetaData) }; // 216751819
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms, errorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_errorMessage_MetaData), NewProp_errorMessage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completionInfo = { "completionInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms, completionInfo), Z_Construct_UScriptStruct_FCompletionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_completionInfo_MetaData), NewProp_completionInfo_MetaData) }; // 3528358973
void Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms), &Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI, nullptr, "OnGptResponseRecievedPin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGptResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnGptResponseRecievedPin, TArray<FCompletion> const& completions, const FString& errorMessage, FCompletionInfo const& completionInfo, bool Success)
{
	struct _Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms
	{
		TArray<FCompletion> completions;
		FString errorMessage;
		FCompletionInfo completionInfo;
		bool Success;
	};
	_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms Parms;
	Parms.completions=completions;
	Parms.errorMessage=errorMessage;
	Parms.completionInfo=completionInfo;
	Parms.Success=Success ? true : false;
	OnGptResponseRecievedPin.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGptResponseRecievedPin

// Begin Class UOpenAICallCompletions Function OpenAICallCompletions
struct Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics
{
	struct OpenAICallCompletions_eventOpenAICallCompletions_Parms
	{
		EOACompletionsEngineType engine;
		FString prompt;
		FCompletionSettings settings;
		UOpenAICallCompletions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallCompletions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_engine_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_engine;
	static const UECodeGen_Private::FStrPropertyParams NewProp_prompt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_engine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_engine = { "engine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallCompletions_eventOpenAICallCompletions_Parms, engine), Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType, METADATA_PARAMS(0, nullptr) }; // 2726959167
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_prompt = { "prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallCompletions_eventOpenAICallCompletions_Parms, prompt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallCompletions_eventOpenAICallCompletions_Parms, settings), Z_Construct_UScriptStruct_FCompletionSettings, METADATA_PARAMS(0, nullptr) }; // 3007584486
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallCompletions_eventOpenAICallCompletions_Parms, ReturnValue), Z_Construct_UClass_UOpenAICallCompletions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_engine_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_engine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_prompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenAICallCompletions, nullptr, "OpenAICallCompletions", nullptr, nullptr, Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::OpenAICallCompletions_eventOpenAICallCompletions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::OpenAICallCompletions_eventOpenAICallCompletions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenAICallCompletions::execOpenAICallCompletions)
{
	P_GET_ENUM(EOACompletionsEngineType,Z_Param_engine);
	P_GET_PROPERTY(FStrProperty,Z_Param_prompt);
	P_GET_STRUCT(FCompletionSettings,Z_Param_settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOpenAICallCompletions**)Z_Param__Result=UOpenAICallCompletions::OpenAICallCompletions(EOACompletionsEngineType(Z_Param_engine),Z_Param_prompt,Z_Param_settings);
	P_NATIVE_END;
}
// End Class UOpenAICallCompletions Function OpenAICallCompletions

// Begin Class UOpenAICallCompletions
void UOpenAICallCompletions::StaticRegisterNativesUOpenAICallCompletions()
{
	UClass* Class = UOpenAICallCompletions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenAICallCompletions", &UOpenAICallCompletions::execOpenAICallCompletions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenAICallCompletions);
UClass* Z_Construct_UClass_UOpenAICallCompletions_NoRegister()
{
	return UOpenAICallCompletions::StaticClass();
}
struct Z_Construct_UClass_UOpenAICallCompletions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OpenAICallCompletions.h" },
		{ "ModuleRelativePath", "Public/OpenAICallCompletions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallCompletions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Finished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenAICallCompletions_OpenAICallCompletions, "OpenAICallCompletions" }, // 2673712048
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenAICallCompletions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenAICallCompletions_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenAICallCompletions, Finished), Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finished_MetaData), NewProp_Finished_MetaData) }; // 3316867330
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenAICallCompletions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenAICallCompletions_Statics::NewProp_Finished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallCompletions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOpenAICallCompletions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallCompletions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenAICallCompletions_Statics::ClassParams = {
	&UOpenAICallCompletions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOpenAICallCompletions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallCompletions_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallCompletions_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenAICallCompletions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOpenAICallCompletions()
{
	if (!Z_Registration_Info_UClass_UOpenAICallCompletions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenAICallCompletions.OuterSingleton, Z_Construct_UClass_UOpenAICallCompletions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOpenAICallCompletions.OuterSingleton;
}
template<> OPENAIAPI_API UClass* StaticClass<UOpenAICallCompletions>()
{
	return UOpenAICallCompletions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenAICallCompletions);
// End Class UOpenAICallCompletions

// Begin Registration
struct Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOpenAICallCompletions, UOpenAICallCompletions::StaticClass, TEXT("UOpenAICallCompletions"), &Z_Registration_Info_UClass_UOpenAICallCompletions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenAICallCompletions), 1061236251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_2806739819(TEXT("/Script/OpenAIAPI"),
	Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS