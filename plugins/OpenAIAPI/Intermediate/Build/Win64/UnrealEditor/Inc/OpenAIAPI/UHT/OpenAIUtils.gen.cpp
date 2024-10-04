// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/OpenAIUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAIUtils() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAIUtils();
OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAIUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
// End Cross Module References

// Begin Class UOpenAIUtils Function setOpenAIApiKey
struct Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics
{
	struct OpenAIUtils_eventsetOpenAIApiKey_Parms
	{
		FString apiKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_apiKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::NewProp_apiKey = { "apiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAIUtils_eventsetOpenAIApiKey_Parms, apiKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::NewProp_apiKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenAIUtils, nullptr, "setOpenAIApiKey", nullptr, nullptr, Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::OpenAIUtils_eventsetOpenAIApiKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::OpenAIUtils_eventsetOpenAIApiKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenAIUtils::execsetOpenAIApiKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_apiKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOpenAIUtils::setOpenAIApiKey(Z_Param_apiKey);
	P_NATIVE_END;
}
// End Class UOpenAIUtils Function setOpenAIApiKey

// Begin Class UOpenAIUtils Function setUseOpenAIApiKeyFromEnvironmentVars
struct Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics
{
	struct OpenAIUtils_eventsetUseOpenAIApiKeyFromEnvironmentVars_Parms
	{
		bool bUseEnvVariable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIUtils.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseEnvVariable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEnvVariable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::NewProp_bUseEnvVariable_SetBit(void* Obj)
{
	((OpenAIUtils_eventsetUseOpenAIApiKeyFromEnvironmentVars_Parms*)Obj)->bUseEnvVariable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::NewProp_bUseEnvVariable = { "bUseEnvVariable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenAIUtils_eventsetUseOpenAIApiKeyFromEnvironmentVars_Parms), &Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::NewProp_bUseEnvVariable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::NewProp_bUseEnvVariable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenAIUtils, nullptr, "setUseOpenAIApiKeyFromEnvironmentVars", nullptr, nullptr, Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::OpenAIUtils_eventsetUseOpenAIApiKeyFromEnvironmentVars_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::OpenAIUtils_eventsetUseOpenAIApiKeyFromEnvironmentVars_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenAIUtils::execsetUseOpenAIApiKeyFromEnvironmentVars)
{
	P_GET_UBOOL(Z_Param_bUseEnvVariable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOpenAIUtils::setUseOpenAIApiKeyFromEnvironmentVars(Z_Param_bUseEnvVariable);
	P_NATIVE_END;
}
// End Class UOpenAIUtils Function setUseOpenAIApiKeyFromEnvironmentVars

// Begin Class UOpenAIUtils
void UOpenAIUtils::StaticRegisterNativesUOpenAIUtils()
{
	UClass* Class = UOpenAIUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "setOpenAIApiKey", &UOpenAIUtils::execsetOpenAIApiKey },
		{ "setUseOpenAIApiKeyFromEnvironmentVars", &UOpenAIUtils::execsetUseOpenAIApiKeyFromEnvironmentVars },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenAIUtils);
UClass* Z_Construct_UClass_UOpenAIUtils_NoRegister()
{
	return UOpenAIUtils::StaticClass();
}
struct Z_Construct_UClass_UOpenAIUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OpenAIUtils.h" },
		{ "ModuleRelativePath", "Public/OpenAIUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenAIUtils_setOpenAIApiKey, "setOpenAIApiKey" }, // 3689425270
		{ &Z_Construct_UFunction_UOpenAIUtils_setUseOpenAIApiKeyFromEnvironmentVars, "setUseOpenAIApiKeyFromEnvironmentVars" }, // 3611964081
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenAIUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOpenAIUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAIUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenAIUtils_Statics::ClassParams = {
	&UOpenAIUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAIUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenAIUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOpenAIUtils()
{
	if (!Z_Registration_Info_UClass_UOpenAIUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenAIUtils.OuterSingleton, Z_Construct_UClass_UOpenAIUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOpenAIUtils.OuterSingleton;
}
template<> OPENAIAPI_API UClass* StaticClass<UOpenAIUtils>()
{
	return UOpenAIUtils::StaticClass();
}
UOpenAIUtils::UOpenAIUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenAIUtils);
UOpenAIUtils::~UOpenAIUtils() {}
// End Class UOpenAIUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOpenAIUtils, UOpenAIUtils::StaticClass, TEXT("UOpenAIUtils"), &Z_Registration_Info_UClass_UOpenAIUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenAIUtils), 1911441407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIUtils_h_504544846(TEXT("/Script/OpenAIAPI"),
	Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS