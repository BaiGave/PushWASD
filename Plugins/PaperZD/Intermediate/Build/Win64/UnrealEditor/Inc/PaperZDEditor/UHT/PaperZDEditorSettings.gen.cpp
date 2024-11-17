// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Editors/Util/PaperZDEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDEditorSettings();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDEditorSettings_NoRegister();
PAPERZDEDITOR_API UEnum* Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy();
TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Enum EAnimSequencePlacementPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimSequencePlacementPolicy;
static UEnum* EAnimSequencePlacementPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimSequencePlacementPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimSequencePlacementPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy, (UObject*)Z_Construct_UPackage__Script_PaperZDEditor(), TEXT("EAnimSequencePlacementPolicy"));
	}
	return Z_Registration_Info_UEnum_EAnimSequencePlacementPolicy.OuterSingleton;
}
template<> PAPERZDEDITOR_API UEnum* StaticEnum<EAnimSequencePlacementPolicy>()
{
	return EAnimSequencePlacementPolicy_StaticEnum();
}
struct Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysAsk.Name", "EAnimSequencePlacementPolicy::AlwaysAsk" },
		{ "AlwaysAsk.Tooltip", "Ask the user where to put the sequence" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "SameFolder.Name", "EAnimSequencePlacementPolicy::SameFolder" },
		{ "SameFolder.Tooltip", "Put the newly created sequence on the same folder as its parent AnimBP" },
		{ "SubFolder.Name", "EAnimSequencePlacementPolicy::SubFolder" },
		{ "SubFolder.Tooltip", "Put the newly created sequence on a subfolder with an specified name" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimSequencePlacementPolicy::AlwaysAsk", (int64)EAnimSequencePlacementPolicy::AlwaysAsk },
		{ "EAnimSequencePlacementPolicy::SameFolder", (int64)EAnimSequencePlacementPolicy::SameFolder },
		{ "EAnimSequencePlacementPolicy::SubFolder", (int64)EAnimSequencePlacementPolicy::SubFolder },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PaperZDEditor,
	nullptr,
	"EAnimSequencePlacementPolicy",
	"EAnimSequencePlacementPolicy",
	Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy()
{
	if (!Z_Registration_Info_UEnum_EAnimSequencePlacementPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimSequencePlacementPolicy.InnerSingleton, Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimSequencePlacementPolicy.InnerSingleton;
}
// End Enum EAnimSequencePlacementPolicy

// Begin Class UPaperZDEditorSettings
void UPaperZDEditorSettings::StaticRegisterNativesUPaperZDEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDEditorSettings);
UClass* Z_Construct_UClass_UPaperZDEditorSettings_NoRegister()
{
	return UPaperZDEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UPaperZDEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains the Editor Only settings for PaperZD\n */" },
		{ "IncludePath", "Editors/Util/PaperZDEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "Contains the Editor Only settings for PaperZD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlacementPolicy_MetaData[] = {
		{ "Category", "Animation Blueprint" },
		{ "Comment", "/* When creating a AnimSequence via the AnimBP Editor, where to put said AnimSequence. */" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "When creating a AnimSequence via the AnimBP Editor, where to put said AnimSequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlacementFolderName_MetaData[] = {
		{ "Category", "Animation Blueprint" },
		{ "Comment", "/* Name of the folder in which to place the AnimSequences. */" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "Name of the folder in which to place the AnimSequences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceDuplicationFolderName_MetaData[] = {
		{ "Category", "Animation Blueprint" },
		{ "Comment", "/* Folder in which to place the notifies of the duplicated AnimBP. */" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "Folder in which to place the notifies of the duplicated AnimBP." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultNodeTitleColor_MetaData[] = {
		{ "Category", "Animation Blueprint" },
		{ "Comment", "/* Color of the result node on the AnimGraph. */" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "Color of the result node on the AnimGraph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyPurgeUnregisteredNotifyFunctions_MetaData[] = {
		{ "Category", "Animation Blueprint" },
		{ "Comment", "/**\n\x09 * Whether to automatically remove Custom AnimNotify functions that have been unregistered on the parent Animation Source.\n\x09 * Disabling this will mark any \"Receive Notify\" function on the Animation Blueprints as \"Unregistered\" when needed, allowing later deletion.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "Whether to automatically remove Custom AnimNotify functions that have been unregistered on the parent Animation Source.\nDisabling this will mark any \"Receive Notify\" function on the Animation Blueprints as \"Unregistered\" when needed, allowing later deletion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineScrubSnapValue_MetaData[] = {
		{ "Category", "Timeline settings" },
		{ "Comment", "/** Snap value used to determine scrub resolution of the anim timeline */" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "Snap value used to determine scrub resolution of the anim timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineDisplayFormat_MetaData[] = {
		{ "Category", "Timeline settings" },
		{ "Comment", "/** Display format for the anim timeline */" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "Display format for the anim timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTimelineDisplayPercentage_MetaData[] = {
		{ "Category", "Timeline settings" },
		{ "Comment", "/** Whether to display percentage in the anim timeline */" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "Whether to display percentage in the anim timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineEnabledSnaps_MetaData[] = {
		{ "Category", "Timeline settings" },
		{ "Comment", "/** Whether to snap to various things */" },
		{ "ModuleRelativePath", "Private/Editors/Util/PaperZDEditorSettings.h" },
		{ "ToolTip", "Whether to snap to various things" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SequencePlacementPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SequencePlacementPolicy;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SequencePlacementFolderName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceDuplicationFolderName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultNodeTitleColor;
	static void NewProp_bAutomaticallyPurgeUnregisteredNotifyFunctions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyPurgeUnregisteredNotifyFunctions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimelineScrubSnapValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimelineDisplayFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimelineDisplayFormat;
	static void NewProp_bTimelineDisplayPercentage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimelineDisplayPercentage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TimelineEnabledSnaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimelineEnabledSnaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_SequencePlacementPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_SequencePlacementPolicy = { "SequencePlacementPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDEditorSettings, SequencePlacementPolicy), Z_Construct_UEnum_PaperZDEditor_EAnimSequencePlacementPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlacementPolicy_MetaData), NewProp_SequencePlacementPolicy_MetaData) }; // 3329105284
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_SequencePlacementFolderName = { "SequencePlacementFolderName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDEditorSettings, SequencePlacementFolderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlacementFolderName_MetaData), NewProp_SequencePlacementFolderName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_SequenceDuplicationFolderName = { "SequenceDuplicationFolderName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDEditorSettings, SequenceDuplicationFolderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceDuplicationFolderName_MetaData), NewProp_SequenceDuplicationFolderName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_ResultNodeTitleColor = { "ResultNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDEditorSettings, ResultNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultNodeTitleColor_MetaData), NewProp_ResultNodeTitleColor_MetaData) };
void Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_bAutomaticallyPurgeUnregisteredNotifyFunctions_SetBit(void* Obj)
{
	((UPaperZDEditorSettings*)Obj)->bAutomaticallyPurgeUnregisteredNotifyFunctions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_bAutomaticallyPurgeUnregisteredNotifyFunctions = { "bAutomaticallyPurgeUnregisteredNotifyFunctions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDEditorSettings), &Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_bAutomaticallyPurgeUnregisteredNotifyFunctions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyPurgeUnregisteredNotifyFunctions_MetaData), NewProp_bAutomaticallyPurgeUnregisteredNotifyFunctions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineScrubSnapValue = { "TimelineScrubSnapValue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDEditorSettings, TimelineScrubSnapValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineScrubSnapValue_MetaData), NewProp_TimelineScrubSnapValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineDisplayFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineDisplayFormat = { "TimelineDisplayFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDEditorSettings, TimelineDisplayFormat), Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineDisplayFormat_MetaData), NewProp_TimelineDisplayFormat_MetaData) }; // 817291549
void Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_bTimelineDisplayPercentage_SetBit(void* Obj)
{
	((UPaperZDEditorSettings*)Obj)->bTimelineDisplayPercentage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_bTimelineDisplayPercentage = { "bTimelineDisplayPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDEditorSettings), &Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_bTimelineDisplayPercentage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTimelineDisplayPercentage_MetaData), NewProp_bTimelineDisplayPercentage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineEnabledSnaps_Inner = { "TimelineEnabledSnaps", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineEnabledSnaps = { "TimelineEnabledSnaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDEditorSettings, TimelineEnabledSnaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineEnabledSnaps_MetaData), NewProp_TimelineEnabledSnaps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_SequencePlacementPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_SequencePlacementPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_SequencePlacementFolderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_SequenceDuplicationFolderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_ResultNodeTitleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_bAutomaticallyPurgeUnregisteredNotifyFunctions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineScrubSnapValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineDisplayFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineDisplayFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_bTimelineDisplayPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineEnabledSnaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDEditorSettings_Statics::NewProp_TimelineEnabledSnaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDEditorSettings_Statics::ClassParams = {
	&UPaperZDEditorSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDEditorSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDEditorSettings()
{
	if (!Z_Registration_Info_UClass_UPaperZDEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDEditorSettings.OuterSingleton, Z_Construct_UClass_UPaperZDEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDEditorSettings.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDEditorSettings>()
{
	return UPaperZDEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDEditorSettings);
UPaperZDEditorSettings::~UPaperZDEditorSettings() {}
// End Class UPaperZDEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimSequencePlacementPolicy_StaticEnum, TEXT("EAnimSequencePlacementPolicy"), &Z_Registration_Info_UEnum_EAnimSequencePlacementPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3329105284U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDEditorSettings, UPaperZDEditorSettings::StaticClass, TEXT("UPaperZDEditorSettings"), &Z_Registration_Info_UClass_UPaperZDEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDEditorSettings), 1174413260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_1771176056(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
