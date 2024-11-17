// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Sequencer/PaperZDMovieSceneAnimationTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDMovieSceneAnimationTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin Class UPaperZDMovieSceneAnimationTrack
void UPaperZDMovieSceneAnimationTrack::StaticRegisterNativesUPaperZDMovieSceneAnimationTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDMovieSceneAnimationTrack);
UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_NoRegister()
{
	return UPaperZDMovieSceneAnimationTrack::StaticClass();
}
struct Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Handles Playback of PaperZD Animation Sequences.\n*/" },
		{ "IncludePath", "Sequencer/PaperZDMovieSceneAnimationTrack.h" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationTrack.h" },
		{ "ToolTip", "Handles Playback of PaperZD Animation Sequences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDMovieSceneAnimationTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDMovieSceneAnimationTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSections_MetaData), NewProp_AnimationSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::NewProp_AnimationSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::NewProp_AnimationSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UPaperZDMovieSceneAnimationTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::ClassParams = {
	&UPaperZDMovieSceneAnimationTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack()
{
	if (!Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationTrack.OuterSingleton, Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationTrack.OuterSingleton;
}
template<> PAPERZD_API UClass* StaticClass<UPaperZDMovieSceneAnimationTrack>()
{
	return UPaperZDMovieSceneAnimationTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDMovieSceneAnimationTrack);
UPaperZDMovieSceneAnimationTrack::~UPaperZDMovieSceneAnimationTrack() {}
// End Class UPaperZDMovieSceneAnimationTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDMovieSceneAnimationTrack, UPaperZDMovieSceneAnimationTrack::StaticClass, TEXT("UPaperZDMovieSceneAnimationTrack"), &Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDMovieSceneAnimationTrack), 2746961534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationTrack_h_1357365719(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
