// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimSequences/PaperZDAnimSequence_Flipbook.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimSequence_Flipbook() {}

// Begin Cross Module References
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_Flipbook();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin Class UPaperZDAnimSequence_Flipbook
void UPaperZDAnimSequence_Flipbook::StaticRegisterNativesUPaperZDAnimSequence_Flipbook()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimSequence_Flipbook);
UClass* Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_NoRegister()
{
	return UPaperZDAnimSequence_Flipbook::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An AnimSequence that renders Flipbook animations.\n */" },
		{ "IncludePath", "AnimSequences/PaperZDAnimSequence_Flipbook.h" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence_Flipbook.h" },
		{ "ToolTip", "An AnimSequence that renders Flipbook animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[] = {
		{ "Comment", "//@DEPRECATED: In favor of the animation data source which now can support multi-directional flipbooks.\n" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence_Flipbook.h" },
		{ "ToolTip", "@DEPRECATED: In favor of the animation data source which now can support multi-directional flipbooks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimDataSource_MetaData[] = {
		{ "Category", "AnimSequence" },
		{ "Comment", "/* Contains the render information for displaying the flipbook, multi-directional. */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence_Flipbook.h" },
		{ "ToolTip", "Contains the render information for displaying the flipbook, multi-directional." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimDataSource_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimSequence_Flipbook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimSequence_Flipbook, Flipbook_DEPRECATED), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flipbook_MetaData), NewProp_Flipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource_Inner = { "AnimDataSource", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource = { "AnimDataSource", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimSequence_Flipbook, AnimDataSource), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimDataSource_MetaData), NewProp_AnimDataSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_Flipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimSequence,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::ClassParams = {
	&UPaperZDAnimSequence_Flipbook::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimSequence_Flipbook()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimSequence_Flipbook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimSequence_Flipbook.OuterSingleton, Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimSequence_Flipbook.OuterSingleton;
}
template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimSequence_Flipbook>()
{
	return UPaperZDAnimSequence_Flipbook::StaticClass();
}
UPaperZDAnimSequence_Flipbook::UPaperZDAnimSequence_Flipbook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimSequence_Flipbook);
UPaperZDAnimSequence_Flipbook::~UPaperZDAnimSequence_Flipbook() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperZDAnimSequence_Flipbook)
// End Class UPaperZDAnimSequence_Flipbook

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_Flipbook_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimSequence_Flipbook, UPaperZDAnimSequence_Flipbook::StaticClass, TEXT("UPaperZDAnimSequence_Flipbook"), &Z_Registration_Info_UClass_UPaperZDAnimSequence_Flipbook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimSequence_Flipbook), 3630277303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_Flipbook_h_2991458087(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_Flipbook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_Flipbook_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
