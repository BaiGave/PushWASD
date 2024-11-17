// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/PaperZDAnimGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraph() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraph();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDAnimGraph
void UPaperZDAnimGraph::StaticRegisterNativesUPaperZDAnimGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimGraph);
UClass* Z_Construct_UClass_UPaperZDAnimGraph_NoRegister()
{
	return UPaperZDAnimGraph::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the Animation Graph for PaperZD\n */" },
		{ "IncludePath", "Graphs/PaperZDAnimGraph.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDAnimGraph.h" },
		{ "ToolTip", "Base class for the Animation Graph for PaperZD" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraph_Statics::ClassParams = {
	&UPaperZDAnimGraph::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimGraph()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraph.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimGraph.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDAnimGraph>()
{
	return UPaperZDAnimGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraph);
UPaperZDAnimGraph::~UPaperZDAnimGraph() {}
// End Class UPaperZDAnimGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraph, UPaperZDAnimGraph::StaticClass, TEXT("UPaperZDAnimGraph"), &Z_Registration_Info_UClass_UPaperZDAnimGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraph), 1055455474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraph_h_693994490(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
