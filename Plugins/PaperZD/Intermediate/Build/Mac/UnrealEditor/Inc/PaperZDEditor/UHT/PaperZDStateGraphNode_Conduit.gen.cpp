// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDStateGraphNode_Conduit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_Conduit() {}

// Begin Cross Module References
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Conduit();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_NoRegister();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDStateGraphNode_Conduit
void UPaperZDStateGraphNode_Conduit::StaticRegisterNativesUPaperZDStateGraphNode_Conduit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateGraphNode_Conduit);
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_NoRegister()
{
	return UPaperZDStateGraphNode_Conduit::StaticClass();
}
struct Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A conduit is a many-to-many \"transition\" node that can be used to group multiple connections\n * with the same transition rule.\n * A conduit has an inner \"transition graph\" which must evaluate to true for it to be considered, even if the\n * input/output transitions are valid.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_Conduit.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Conduit.h" },
		{ "ToolTip", "A conduit is a many-to-many \"transition\" node that can be used to group multiple connections\nwith the same transition rule.\nA conduit has an inner \"transition graph\" which must evaluate to true for it to be considered, even if the\ninput/output transitions are valid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/* Display name of the conduit. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Conduit.h" },
		{ "ToolTip", "Display name of the conduit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_Conduit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_Conduit, Name_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode_TransBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::ClassParams = {
	&UPaperZDStateGraphNode_Conduit::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Conduit()
{
	if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_Conduit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_Conduit.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_Conduit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDStateGraphNode_Conduit.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateGraphNode_Conduit>()
{
	return UPaperZDStateGraphNode_Conduit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_Conduit);
UPaperZDStateGraphNode_Conduit::~UPaperZDStateGraphNode_Conduit() {}
// End Class UPaperZDStateGraphNode_Conduit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Conduit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_Conduit, UPaperZDStateGraphNode_Conduit::StaticClass, TEXT("UPaperZDStateGraphNode_Conduit"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_Conduit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_Conduit), 3488620895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Conduit_h_2120094052(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Conduit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Conduit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
