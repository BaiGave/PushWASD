// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Sequencer/IPaperZDSequencerSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPaperZDSequencerSource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDSequencerSource();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDSequencerSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin Interface UPaperZDSequencerSource
void UPaperZDSequencerSource::StaticRegisterNativesUPaperZDSequencerSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDSequencerSource);
UClass* Z_Construct_UClass_UPaperZDSequencerSource_NoRegister()
{
	return UPaperZDSequencerSource::StaticClass();
}
struct Z_Construct_UClass_UPaperZDSequencerSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/IPaperZDSequencerSource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPaperZDSequencerSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDSequencerSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDSequencerSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDSequencerSource_Statics::ClassParams = {
	&UPaperZDSequencerSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDSequencerSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDSequencerSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDSequencerSource()
{
	if (!Z_Registration_Info_UClass_UPaperZDSequencerSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDSequencerSource.OuterSingleton, Z_Construct_UClass_UPaperZDSequencerSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDSequencerSource.OuterSingleton;
}
template<> PAPERZD_API UClass* StaticClass<UPaperZDSequencerSource>()
{
	return UPaperZDSequencerSource::StaticClass();
}
UPaperZDSequencerSource::UPaperZDSequencerSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDSequencerSource);
UPaperZDSequencerSource::~UPaperZDSequencerSource() {}
// End Interface UPaperZDSequencerSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDSequencerSource, UPaperZDSequencerSource::StaticClass, TEXT("UPaperZDSequencerSource"), &Z_Registration_Info_UClass_UPaperZDSequencerSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDSequencerSource), 1851952276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_2693112288(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
