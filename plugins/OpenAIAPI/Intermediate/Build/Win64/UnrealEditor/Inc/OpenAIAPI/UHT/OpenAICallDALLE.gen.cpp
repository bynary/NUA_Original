// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/OpenAICallDALLE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAICallDALLE() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallDALLE();
OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallDALLE_NoRegister();
OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOAImageSize();
OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
// End Cross Module References

// Begin Delegate FOnDalleResponseRecievedPin
struct Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics
{
	struct _Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms
	{
		TArray<FString> generatedImageUrls;
		FString errorMessage;
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAICallDALLE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_generatedImageUrls_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_generatedImageUrls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_generatedImageUrls;
	static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls_Inner = { "generatedImageUrls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls = { "generatedImageUrls", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms, generatedImageUrls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_generatedImageUrls_MetaData), NewProp_generatedImageUrls_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms, errorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_errorMessage_MetaData), NewProp_errorMessage_MetaData) };
void Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms), &Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI, nullptr, "OnDalleResponseRecievedPin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDalleResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnDalleResponseRecievedPin, TArray<FString> const& generatedImageUrls, const FString& errorMessage, bool Success)
{
	struct _Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms
	{
		TArray<FString> generatedImageUrls;
		FString errorMessage;
		bool Success;
	};
	_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms Parms;
	Parms.generatedImageUrls=generatedImageUrls;
	Parms.errorMessage=errorMessage;
	Parms.Success=Success ? true : false;
	OnDalleResponseRecievedPin.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDalleResponseRecievedPin

// Begin Class UOpenAICallDALLE Function OpenAICallDALLE
struct Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics
{
	struct OpenAICallDALLE_eventOpenAICallDALLE_Parms
	{
		EOAImageSize imageSize;
		FString prompt;
		int32 numImages;
		UOpenAICallDALLE* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallDALLE.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_imageSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_imageSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_prompt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numImages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_imageSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_imageSize = { "imageSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallDALLE_eventOpenAICallDALLE_Parms, imageSize), Z_Construct_UEnum_OpenAIAPI_EOAImageSize, METADATA_PARAMS(0, nullptr) }; // 3051717331
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_prompt = { "prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallDALLE_eventOpenAICallDALLE_Parms, prompt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_numImages = { "numImages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallDALLE_eventOpenAICallDALLE_Parms, numImages), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallDALLE_eventOpenAICallDALLE_Parms, ReturnValue), Z_Construct_UClass_UOpenAICallDALLE_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_imageSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_imageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_prompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_numImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenAICallDALLE, nullptr, "OpenAICallDALLE", nullptr, nullptr, Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::OpenAICallDALLE_eventOpenAICallDALLE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::OpenAICallDALLE_eventOpenAICallDALLE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenAICallDALLE::execOpenAICallDALLE)
{
	P_GET_ENUM(EOAImageSize,Z_Param_imageSize);
	P_GET_PROPERTY(FStrProperty,Z_Param_prompt);
	P_GET_PROPERTY(FIntProperty,Z_Param_numImages);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOpenAICallDALLE**)Z_Param__Result=UOpenAICallDALLE::OpenAICallDALLE(EOAImageSize(Z_Param_imageSize),Z_Param_prompt,Z_Param_numImages);
	P_NATIVE_END;
}
// End Class UOpenAICallDALLE Function OpenAICallDALLE

// Begin Class UOpenAICallDALLE
void UOpenAICallDALLE::StaticRegisterNativesUOpenAICallDALLE()
{
	UClass* Class = UOpenAICallDALLE::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenAICallDALLE", &UOpenAICallDALLE::execOpenAICallDALLE },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenAICallDALLE);
UClass* Z_Construct_UClass_UOpenAICallDALLE_NoRegister()
{
	return UOpenAICallDALLE::StaticClass();
}
struct Z_Construct_UClass_UOpenAICallDALLE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OpenAICallDALLE.h" },
		{ "ModuleRelativePath", "Public/OpenAICallDALLE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallDALLE.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Finished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE, "OpenAICallDALLE" }, // 3034382191
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenAICallDALLE>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenAICallDALLE_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenAICallDALLE, Finished), Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finished_MetaData), NewProp_Finished_MetaData) }; // 1577375533
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenAICallDALLE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenAICallDALLE_Statics::NewProp_Finished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallDALLE_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOpenAICallDALLE_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallDALLE_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenAICallDALLE_Statics::ClassParams = {
	&UOpenAICallDALLE::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOpenAICallDALLE_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallDALLE_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallDALLE_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenAICallDALLE_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOpenAICallDALLE()
{
	if (!Z_Registration_Info_UClass_UOpenAICallDALLE.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenAICallDALLE.OuterSingleton, Z_Construct_UClass_UOpenAICallDALLE_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOpenAICallDALLE.OuterSingleton;
}
template<> OPENAIAPI_API UClass* StaticClass<UOpenAICallDALLE>()
{
	return UOpenAICallDALLE::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenAICallDALLE);
// End Class UOpenAICallDALLE

// Begin Registration
struct Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOpenAICallDALLE, UOpenAICallDALLE::StaticClass, TEXT("UOpenAICallDALLE"), &Z_Registration_Info_UClass_UOpenAICallDALLE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenAICallDALLE), 3841418020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_3361292581(TEXT("/Script/OpenAIAPI"),
	Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
