// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/PaperZDAnimBP.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimBP() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationSource_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimBP();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimBP_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin Class UPaperZDAnimBP
void UPaperZDAnimBP::StaticRegisterNativesUPaperZDAnimBP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimBP);
UClass* Z_Construct_UClass_UPaperZDAnimBP_NoRegister()
{
	return UPaperZDAnimBP::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class responsible of driving animation for 2d characters.\n * Compiles into PaperZDAnimInstance, which is the runtime compiled class that works in-game.\n */" },
		{ "IncludePath", "PaperZDAnimBP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PaperZDAnimBP.h" },
		{ "ToolTip", "Class responsible of driving animation for 2d characters.\nCompiles into PaperZDAnimInstance, which is the runtime compiled class that works in-game." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationGraph_MetaData[] = {
		{ "Comment", "/* The animation graph. */" },
		{ "ModuleRelativePath", "Public/PaperZDAnimBP.h" },
		{ "ToolTip", "The animation graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAnimationSource_MetaData[] = {
		{ "Category", "PaperZD" },
		{ "Comment", "/* Animation source that we're implementing. */" },
		{ "ModuleRelativePath", "Public/PaperZDAnimBP.h" },
		{ "ToolTip", "Animation source that we're implementing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredNotifyNames_MetaData[] = {
		{ "Comment", "/* Names of the registered notifies. */" },
		{ "ModuleRelativePath", "Public/PaperZDAnimBP.h" },
		{ "ToolTip", "Names of the registered notifies." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SupportedAnimationSource;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredNotifyNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredNotifyNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimBP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimBP_Statics::NewProp_AnimationGraph = { "AnimationGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimBP, AnimationGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationGraph_MetaData), NewProp_AnimationGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimBP_Statics::NewProp_SupportedAnimationSource = { "SupportedAnimationSource", nullptr, (EPropertyFlags)0x0114010800030001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimBP, SupportedAnimationSource), Z_Construct_UClass_UPaperZDAnimationSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAnimationSource_MetaData), NewProp_SupportedAnimationSource_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimBP_Statics::NewProp_RegisteredNotifyNames_Inner = { "RegisteredNotifyNames", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDAnimBP_Statics::NewProp_RegisteredNotifyNames = { "RegisteredNotifyNames", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimBP, RegisteredNotifyNames_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredNotifyNames_MetaData), NewProp_RegisteredNotifyNames_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBP_Statics::NewProp_AnimationGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBP_Statics::NewProp_SupportedAnimationSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBP_Statics::NewProp_RegisteredNotifyNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBP_Statics::NewProp_RegisteredNotifyNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimBP_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UPaperZDAnimBP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimBP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimBP_Statics::ClassParams = {
	&UPaperZDAnimBP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPaperZDAnimBP_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimBP_Statics::PropPointers), 0),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimBP_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimBP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimBP()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimBP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimBP.OuterSingleton, Z_Construct_UClass_UPaperZDAnimBP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimBP.OuterSingleton;
}
template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimBP>()
{
	return UPaperZDAnimBP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimBP);
UPaperZDAnimBP::~UPaperZDAnimBP() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperZDAnimBP)
// End Class UPaperZDAnimBP

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimBP, UPaperZDAnimBP::StaticClass, TEXT("UPaperZDAnimBP"), &Z_Registration_Info_UClass_UPaperZDAnimBP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimBP), 2939473252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBP_h_4284831849(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
