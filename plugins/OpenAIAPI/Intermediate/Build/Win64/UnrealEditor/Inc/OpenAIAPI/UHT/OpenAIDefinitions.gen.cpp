// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/OpenAIDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAIDefinitions() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType();
OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOAChatRole();
OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType();
OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOAImageSize();
OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FChatCompletion();
OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FChatLog();
OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FChatSettings();
OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletion();
OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletionInfo();
OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletionSettings();
UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
// End Cross Module References

// Begin Enum EOACompletionsEngineType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOACompletionsEngineType;
static UEnum* EOACompletionsEngineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOACompletionsEngineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOACompletionsEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("EOACompletionsEngineType"));
	}
	return Z_Registration_Info_UEnum_EOACompletionsEngineType.OuterSingleton;
}
template<> OPENAIAPI_API UEnum* StaticEnum<EOACompletionsEngineType>()
{
	return EOACompletionsEngineType_StaticEnum();
}
struct Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ADA.Name", "EOACompletionsEngineType::ADA" },
		{ "ADA.ToolTip", "Ada is usually the fastest model and can perform tasks like parsing text, address correction and certain kinds of classification tasks that don\xef\xbf\xbdt require too much nuance. Ada\xef\xbf\xbds performance can often be improved by providing more context." },
		{ "BABBAGE.Name", "EOACompletionsEngineType::BABBAGE" },
		{ "BABBAGE.ToolTip", "Babbage can perform straightforward tasks like simple classification. It\xef\xbf\xbds also quite capable when it comes to Semantic Search ranking how well documents match up with search queries." },
		{ "BlueprintType", "true" },
		{ "CURIE.Name", "EOACompletionsEngineType::CURIE" },
		{ "CURIE.ToolTip", "Curie is extremely powerful, yet very fast. While Davinci is stronger when it comes to analyzing complicated text, Curie is quite capable for many nuanced tasks like sentiment classification and summarization. Curie is also quite good at answering questions and performing Q&A and as a general service chatbot." },
		{ "DAVINCI.Name", "EOACompletionsEngineType::DAVINCI" },
		{ "DAVINCI.ToolTip", "Davinci is the most capable engine and can perform any task the other models can perform and often with less instruction." },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "TEXT_ADA_001.Name", "EOACompletionsEngineType::TEXT_ADA_001" },
		{ "TEXT_ADA_001.ToolTip", "Capable of simple tasks, using the fastest model in the GPT-3 series, and lowest cost." },
		{ "TEXT_BABBAGE_001.Name", "EOACompletionsEngineType::TEXT_BABBAGE_001" },
		{ "TEXT_BABBAGE_001.ToolTip", "Capable of straightforward tasks, very fast, and lower cost." },
		{ "TEXT_CURIE_001.Name", "EOACompletionsEngineType::TEXT_CURIE_001" },
		{ "TEXT_CURIE_001.ToolTip", "Very capable, but faster and lower cost than text-davinci-001." },
		{ "TEXT_DAVINCI_002.Name", "EOACompletionsEngineType::TEXT_DAVINCI_002" },
		{ "TEXT_DAVINCI_002.ToolTip", "Most capable model in the GPT-3 series. Can perform any task the other GPT-3 models can, often with less context." },
		{ "TEXT_DAVINCI_003.Name", "EOACompletionsEngineType::TEXT_DAVINCI_003" },
		{ "TEXT_DAVINCI_003.ToolTip", "Most capable model in the GPT-3 series. Can perform any task the other GPT-3 models can, often with less context." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOACompletionsEngineType::DAVINCI", (int64)EOACompletionsEngineType::DAVINCI },
		{ "EOACompletionsEngineType::CURIE", (int64)EOACompletionsEngineType::CURIE },
		{ "EOACompletionsEngineType::BABBAGE", (int64)EOACompletionsEngineType::BABBAGE },
		{ "EOACompletionsEngineType::ADA", (int64)EOACompletionsEngineType::ADA },
		{ "EOACompletionsEngineType::TEXT_DAVINCI_002", (int64)EOACompletionsEngineType::TEXT_DAVINCI_002 },
		{ "EOACompletionsEngineType::TEXT_CURIE_001", (int64)EOACompletionsEngineType::TEXT_CURIE_001 },
		{ "EOACompletionsEngineType::TEXT_BABBAGE_001", (int64)EOACompletionsEngineType::TEXT_BABBAGE_001 },
		{ "EOACompletionsEngineType::TEXT_ADA_001", (int64)EOACompletionsEngineType::TEXT_ADA_001 },
		{ "EOACompletionsEngineType::TEXT_DAVINCI_003", (int64)EOACompletionsEngineType::TEXT_DAVINCI_003 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	"EOACompletionsEngineType",
	"EOACompletionsEngineType",
	Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType()
{
	if (!Z_Registration_Info_UEnum_EOACompletionsEngineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOACompletionsEngineType.InnerSingleton, Z_Construct_UEnum_OpenAIAPI_EOACompletionsEngineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOACompletionsEngineType.InnerSingleton;
}
// End Enum EOACompletionsEngineType

// Begin Enum EOAChatEngineType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOAChatEngineType;
static UEnum* EOAChatEngineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOAChatEngineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOAChatEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("EOAChatEngineType"));
	}
	return Z_Registration_Info_UEnum_EOAChatEngineType.OuterSingleton;
}
template<> OPENAIAPI_API UEnum* StaticEnum<EOAChatEngineType>()
{
	return EOAChatEngineType_StaticEnum();
}
struct Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GPT_3_5_TURBO.Name", "EOAChatEngineType::GPT_3_5_TURBO" },
		{ "GPT_3_5_TURBO.ToolTip", "More capable than any GPT-3.5 model, able to do more complex tasks, and optimized for chat. Will be updated with our latest model iteration." },
		{ "GPT_4.Name", "EOAChatEngineType::GPT_4" },
		{ "GPT_4.ToolTip", "More capable than any GPT-3.5 model, able to do more complex tasks, and optimized for chat. Will be updated with our latest model iteration." },
		{ "GPT_4_32k.Name", "EOAChatEngineType::GPT_4_32k" },
		{ "GPT_4_32k.ToolTip", "Same capabilities as the base gpt-4 model but with 4x the context length. Will be updated with our latest model iteration." },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOAChatEngineType::GPT_3_5_TURBO", (int64)EOAChatEngineType::GPT_3_5_TURBO },
		{ "EOAChatEngineType::GPT_4", (int64)EOAChatEngineType::GPT_4 },
		{ "EOAChatEngineType::GPT_4_32k", (int64)EOAChatEngineType::GPT_4_32k },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	"EOAChatEngineType",
	"EOAChatEngineType",
	Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType()
{
	if (!Z_Registration_Info_UEnum_EOAChatEngineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOAChatEngineType.InnerSingleton, Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOAChatEngineType.InnerSingleton;
}
// End Enum EOAChatEngineType

// Begin Enum EOAChatRole
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOAChatRole;
static UEnum* EOAChatRole_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOAChatRole.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOAChatRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenAIAPI_EOAChatRole, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("EOAChatRole"));
	}
	return Z_Registration_Info_UEnum_EOAChatRole.OuterSingleton;
}
template<> OPENAIAPI_API UEnum* StaticEnum<EOAChatRole>()
{
	return EOAChatRole_StaticEnum();
}
struct Z_Construct_UEnum_OpenAIAPI_EOAChatRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ASSISTANT.Name", "EOAChatRole::ASSISTANT" },
		{ "ASSISTANT.ToolTip", "Same capabilities as the base gpt-4 model but with 4x the context length. Will be updated with our latest model iteration." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "SYSTEM.Name", "EOAChatRole::SYSTEM" },
		{ "SYSTEM.ToolTip", "More capable than any GPT-3.5 model, able to do more complex tasks, and optimized for chat. Will be updated with our latest model iteration." },
		{ "USER.Name", "EOAChatRole::USER" },
		{ "USER.ToolTip", "More capable than any GPT-3.5 model, able to do more complex tasks, and optimized for chat. Will be updated with our latest model iteration." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOAChatRole::SYSTEM", (int64)EOAChatRole::SYSTEM },
		{ "EOAChatRole::USER", (int64)EOAChatRole::USER },
		{ "EOAChatRole::ASSISTANT", (int64)EOAChatRole::ASSISTANT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenAIAPI_EOAChatRole_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	"EOAChatRole",
	"EOAChatRole",
	Z_Construct_UEnum_OpenAIAPI_EOAChatRole_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAChatRole_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAChatRole_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OpenAIAPI_EOAChatRole_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OpenAIAPI_EOAChatRole()
{
	if (!Z_Registration_Info_UEnum_EOAChatRole.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOAChatRole.InnerSingleton, Z_Construct_UEnum_OpenAIAPI_EOAChatRole_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOAChatRole.InnerSingleton;
}
// End Enum EOAChatRole

// Begin Enum EOAImageSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOAImageSize;
static UEnum* EOAImageSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOAImageSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOAImageSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenAIAPI_EOAImageSize, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("EOAImageSize"));
	}
	return Z_Registration_Info_UEnum_EOAImageSize.OuterSingleton;
}
template<> OPENAIAPI_API UEnum* StaticEnum<EOAImageSize>()
{
	return EOAImageSize_StaticEnum();
}
struct Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LARGE.Name", "EOAImageSize::LARGE" },
		{ "LARGE.ToolTip", "Generates 1024x1024 images. This setting takes the longest amount of time to generate images." },
		{ "MEDIUM.Name", "EOAImageSize::MEDIUM" },
		{ "MEDIUM.ToolTip", "Generates 512x512 images. This setting takes a moderate amount of time to generate images." },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "SMALL.Name", "EOAImageSize::SMALL" },
		{ "SMALL.ToolTip", "Generates 256x256 images. This settings takes the least amount of time to generate images." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOAImageSize::SMALL", (int64)EOAImageSize::SMALL },
		{ "EOAImageSize::MEDIUM", (int64)EOAImageSize::MEDIUM },
		{ "EOAImageSize::LARGE", (int64)EOAImageSize::LARGE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	"EOAImageSize",
	"EOAImageSize",
	Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OpenAIAPI_EOAImageSize()
{
	if (!Z_Registration_Info_UEnum_EOAImageSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOAImageSize.InnerSingleton, Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOAImageSize.InnerSingleton;
}
// End Enum EOAImageSize

// Begin ScriptStruct FChatLog
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChatLog;
class UScriptStruct* FChatLog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChatLog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChatLog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatLog, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("ChatLog"));
	}
	return Z_Registration_Info_UScriptStruct_ChatLog.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FChatLog>()
{
	return FChatLog::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChatLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structs for GPT\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structs for GPT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_role_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_content_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_role;
	static const UECodeGen_Private::FStrPropertyParams NewProp_content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatLog>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChatLog_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChatLog_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatLog, role), Z_Construct_UEnum_OpenAIAPI_EOAChatRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_role_MetaData), NewProp_role_MetaData) }; // 3369742461
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatLog_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatLog, content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_content_MetaData), NewProp_content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatLog_Statics::NewProp_role_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatLog_Statics::NewProp_role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatLog_Statics::NewProp_content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatLog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatLog_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	&NewStructOps,
	"ChatLog",
	Z_Construct_UScriptStruct_FChatLog_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatLog_Statics::PropPointers),
	sizeof(FChatLog),
	alignof(FChatLog),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatLog_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChatLog_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChatLog()
{
	if (!Z_Registration_Info_UScriptStruct_ChatLog.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChatLog.InnerSingleton, Z_Construct_UScriptStruct_FChatLog_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChatLog.InnerSingleton;
}
// End ScriptStruct FChatLog

// Begin ScriptStruct FCompletionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompletionInfo;
class UScriptStruct* FCompletionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompletionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompletionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompletionInfo, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("CompletionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CompletionInfo.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FCompletionInfo>()
{
	return FCompletionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompletionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_object_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_created_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_model_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_object;
	static const UECodeGen_Private::FStructPropertyParams NewProp_created;
	static const UECodeGen_Private::FStrPropertyParams NewProp_model;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompletionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionInfo, id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_id_MetaData), NewProp_id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionInfo, object), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_object_MetaData), NewProp_object_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_created = { "created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionInfo, created), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_created_MetaData), NewProp_created_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionInfo, model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_model_MetaData), NewProp_model_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompletionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_created,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_model,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	&NewStructOps,
	"CompletionInfo",
	Z_Construct_UScriptStruct_FCompletionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionInfo_Statics::PropPointers),
	sizeof(FCompletionInfo),
	alignof(FCompletionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompletionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompletionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CompletionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompletionInfo.InnerSingleton, Z_Construct_UScriptStruct_FCompletionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompletionInfo.InnerSingleton;
}
// End ScriptStruct FCompletionInfo

// Begin ScriptStruct FCompletion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Completion;
class UScriptStruct* FCompletion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Completion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Completion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompletion, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("Completion"));
	}
	return Z_Registration_Info_UScriptStruct_Completion.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FCompletion>()
{
	return FCompletion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompletion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OpenAI's response.\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OpenAI's response." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_finishReason_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_text;
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_finishReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompletion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletion, text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_text_MetaData), NewProp_text_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletion, index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_index_MetaData), NewProp_index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_finishReason = { "finishReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletion, finishReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_finishReason_MetaData), NewProp_finishReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_finishReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompletion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	&NewStructOps,
	"Completion",
	Z_Construct_UScriptStruct_FCompletion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletion_Statics::PropPointers),
	sizeof(FCompletion),
	alignof(FCompletion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompletion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompletion()
{
	if (!Z_Registration_Info_UScriptStruct_Completion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Completion.InnerSingleton, Z_Construct_UScriptStruct_FCompletion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Completion.InnerSingleton;
}
// End ScriptStruct FCompletion

// Begin ScriptStruct FChatCompletion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChatCompletion;
class UScriptStruct* FChatCompletion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChatCompletion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChatCompletion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatCompletion, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("ChatCompletion"));
	}
	return Z_Registration_Info_UScriptStruct_ChatCompletion.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FChatCompletion>()
{
	return FChatCompletion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChatCompletion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OpenAI's response.\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OpenAI's response." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_finishReason_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_finishReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatCompletion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatCompletion_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatCompletion, message), Z_Construct_UScriptStruct_FChatLog, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_message_MetaData), NewProp_message_MetaData) }; // 1355324214
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatCompletion_Statics::NewProp_finishReason = { "finishReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatCompletion, finishReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_finishReason_MetaData), NewProp_finishReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatCompletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatCompletion_Statics::NewProp_message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatCompletion_Statics::NewProp_finishReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatCompletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatCompletion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	&NewStructOps,
	"ChatCompletion",
	Z_Construct_UScriptStruct_FChatCompletion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatCompletion_Statics::PropPointers),
	sizeof(FChatCompletion),
	alignof(FChatCompletion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatCompletion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChatCompletion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChatCompletion()
{
	if (!Z_Registration_Info_UScriptStruct_ChatCompletion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChatCompletion.InnerSingleton, Z_Construct_UScriptStruct_FChatCompletion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChatCompletion.InnerSingleton;
}
// End ScriptStruct FChatCompletion

// Begin ScriptStruct FCompletionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompletionSettings;
class UScriptStruct* FCompletionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompletionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompletionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompletionSettings, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("CompletionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CompletionSettings.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FCompletionSettings>()
{
	return FCompletionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompletionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startSequence_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A sequence that is appended to the start of your prompt */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A sequence that is appended to the start of your prompt" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_injectStartText_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A sequence that is appended at the beginning of your prompt */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A sequence that is appended at the beginning of your prompt" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_injectRestartText_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A sequence that is appended to the start of your prompt */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A sequence that is appended to the start of your prompt" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stopSequences_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Up to four sequences where the API will stop generating further tokens. The returned text will not contain the stop sequence. */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Up to four sequences where the API will stop generating further tokens. The returned text will not contain the stop sequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxTokens_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum number of tokens to generate. Requests can use up to 2048 tokens shared between prompt and completion. (One token is roughly 4 characters for normal English text) */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of tokens to generate. Requests can use up to 2048 tokens shared between prompt and completion. (One token is roughly 4 characters for normal English text)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_temperature_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What sampling temperature to use. Higher values means the model will take more risks. Try 0.9 for more creative applications, and 0 (argmax sampling) for ones with a well-defined answer. */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What sampling temperature to use. Higher values means the model will take more risks. Try 0.9 for more creative applications, and 0 (argmax sampling) for ones with a well-defined answer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_topP_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An alternative to sampling with temperature, called nucleus sampling, where the model considers the results of the tokens with top_p probability mass. So 0.1 means only the tokens comprising the top 10% probability mass are considered.  */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An alternative to sampling with temperature, called nucleus sampling, where the model considers the results of the tokens with top_p probability mass. So 0.1 means only the tokens comprising the top 10% probability mass are considered." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_logprobs_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If logProbs is greater than 0, the model returns tokens, token_logprobs, and the text_offsets for a given completion. (support for top_logprobs will be added soon)*/" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If logProbs is greater than 0, the model returns tokens, token_logprobs, and the text_offsets for a given completion. (support for top_logprobs will be added soon)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numCompletions_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many completions to generate for each prompt. */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many completions to generate for each prompt." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frequencyPenalty_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number between 0 and 1 that penalizes new tokens based on their existing frequency in the text so far. Decreases the model's likelihood to repeat the same line verbatim. */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number between 0 and 1 that penalizes new tokens based on their existing frequency in the text so far. Decreases the model's likelihood to repeat the same line verbatim." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_presencePenalty_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number between 0 and 1 that penalizes new tokens based on whether they appear in the text so far. Increases the model's likelihood to talk about new topics. */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number between 0 and 1 that penalizes new tokens based on whether they appear in the text so far. Increases the model's likelihood to talk about new topics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bestOf_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generates best_of completions server-side and returns the \"best\" (the one with the lowest log probability per token). */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates best_of completions server-side and returns the \"best\" (the one with the lowest log probability per token)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_startSequence;
	static const UECodeGen_Private::FStrPropertyParams NewProp_injectStartText;
	static const UECodeGen_Private::FStrPropertyParams NewProp_injectRestartText;
	static const UECodeGen_Private::FStrPropertyParams NewProp_stopSequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_stopSequences;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxTokens;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_temperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_topP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_logprobs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numCompletions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_frequencyPenalty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_presencePenalty;
	static const UECodeGen_Private::FIntPropertyParams NewProp_bestOf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompletionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_startSequence = { "startSequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, startSequence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startSequence_MetaData), NewProp_startSequence_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_injectStartText = { "injectStartText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, injectStartText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_injectStartText_MetaData), NewProp_injectStartText_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_injectRestartText = { "injectRestartText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, injectRestartText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_injectRestartText_MetaData), NewProp_injectRestartText_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_stopSequences_Inner = { "stopSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_stopSequences = { "stopSequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, stopSequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stopSequences_MetaData), NewProp_stopSequences_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_maxTokens = { "maxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, maxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxTokens_MetaData), NewProp_maxTokens_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_temperature = { "temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_temperature_MetaData), NewProp_temperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_topP = { "topP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, topP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_topP_MetaData), NewProp_topP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_logprobs = { "logprobs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, logprobs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_logprobs_MetaData), NewProp_logprobs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_numCompletions = { "numCompletions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, numCompletions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numCompletions_MetaData), NewProp_numCompletions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_frequencyPenalty = { "frequencyPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, frequencyPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frequencyPenalty_MetaData), NewProp_frequencyPenalty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_presencePenalty = { "presencePenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, presencePenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_presencePenalty_MetaData), NewProp_presencePenalty_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_bestOf = { "bestOf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompletionSettings, bestOf), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bestOf_MetaData), NewProp_bestOf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompletionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_startSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_injectStartText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_injectRestartText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_stopSequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_stopSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_maxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_topP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_logprobs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_numCompletions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_frequencyPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_presencePenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewProp_bestOf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompletionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	&NewStructOps,
	"CompletionSettings",
	Z_Construct_UScriptStruct_FCompletionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionSettings_Statics::PropPointers),
	sizeof(FCompletionSettings),
	alignof(FCompletionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompletionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompletionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_CompletionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompletionSettings.InnerSingleton, Z_Construct_UScriptStruct_FCompletionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompletionSettings.InnerSingleton;
}
// End ScriptStruct FCompletionSettings

// Begin ScriptStruct FChatSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChatSettings;
class UScriptStruct* FChatSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChatSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatSettings, (UObject*)Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("ChatSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ChatSettings.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FChatSettings>()
{
	return FChatSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChatSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_model_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_messages_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_temperature_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxTokens_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_model;
	static const UECodeGen_Private::FStructPropertyParams NewProp_messages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_messages;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_temperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxTokens;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatSettings, model), Z_Construct_UEnum_OpenAIAPI_EOAChatEngineType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_model_MetaData), NewProp_model_MetaData) }; // 2799502694
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_messages_Inner = { "messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChatLog, METADATA_PARAMS(0, nullptr) }; // 1355324214
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_messages = { "messages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatSettings, messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_messages_MetaData), NewProp_messages_MetaData) }; // 1355324214
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_temperature = { "temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatSettings, temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_temperature_MetaData), NewProp_temperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_maxTokens = { "maxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatSettings, maxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxTokens_MetaData), NewProp_maxTokens_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatSettings_Statics::NewProp_maxTokens,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	nullptr,
	&NewStructOps,
	"ChatSettings",
	Z_Construct_UScriptStruct_FChatSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatSettings_Statics::PropPointers),
	sizeof(FChatSettings),
	alignof(FChatSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChatSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChatSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ChatSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChatSettings.InnerSingleton, Z_Construct_UScriptStruct_FChatSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChatSettings.InnerSingleton;
}
// End ScriptStruct FChatSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOACompletionsEngineType_StaticEnum, TEXT("EOACompletionsEngineType"), &Z_Registration_Info_UEnum_EOACompletionsEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2726959167U) },
		{ EOAChatEngineType_StaticEnum, TEXT("EOAChatEngineType"), &Z_Registration_Info_UEnum_EOAChatEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2799502694U) },
		{ EOAChatRole_StaticEnum, TEXT("EOAChatRole"), &Z_Registration_Info_UEnum_EOAChatRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3369742461U) },
		{ EOAImageSize_StaticEnum, TEXT("EOAImageSize"), &Z_Registration_Info_UEnum_EOAImageSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3051717331U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChatLog::StaticStruct, Z_Construct_UScriptStruct_FChatLog_Statics::NewStructOps, TEXT("ChatLog"), &Z_Registration_Info_UScriptStruct_ChatLog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChatLog), 1355324214U) },
		{ FCompletionInfo::StaticStruct, Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewStructOps, TEXT("CompletionInfo"), &Z_Registration_Info_UScriptStruct_CompletionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompletionInfo), 3528358973U) },
		{ FCompletion::StaticStruct, Z_Construct_UScriptStruct_FCompletion_Statics::NewStructOps, TEXT("Completion"), &Z_Registration_Info_UScriptStruct_Completion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompletion), 216751819U) },
		{ FChatCompletion::StaticStruct, Z_Construct_UScriptStruct_FChatCompletion_Statics::NewStructOps, TEXT("ChatCompletion"), &Z_Registration_Info_UScriptStruct_ChatCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChatCompletion), 3274177811U) },
		{ FCompletionSettings::StaticStruct, Z_Construct_UScriptStruct_FCompletionSettings_Statics::NewStructOps, TEXT("CompletionSettings"), &Z_Registration_Info_UScriptStruct_CompletionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompletionSettings), 3007584486U) },
		{ FChatSettings::StaticStruct, Z_Construct_UScriptStruct_FChatSettings_Statics::NewStructOps, TEXT("ChatSettings"), &Z_Registration_Info_UScriptStruct_ChatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChatSettings), 3601082223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_101056380(TEXT("/Script/OpenAIAPI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NUA_Ori_plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
