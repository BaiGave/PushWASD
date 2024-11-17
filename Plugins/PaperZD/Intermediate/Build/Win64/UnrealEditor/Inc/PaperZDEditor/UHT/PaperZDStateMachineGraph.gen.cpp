// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/PaperZDStateMachineGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateMachineGraph() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_StateMachine_NoRegister();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateMachineGraph();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateMachineGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDStateMachineGraph
void UPaperZDStateMachineGraph::StaticRegisterNativesUPaperZDStateMachineGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateMachineGraph);
UClass* Z_Construct_UClass_UPaperZDStateMachineGraph_NoRegister()
{
	return UPaperZDStateMachineGraph::StaticClass();
}
struct Z_Construct_UClass_UPaperZDStateMachineGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A State machine graph for PaperZD\n */" },
		{ "IncludePath", "Graphs/PaperZDStateMachineGraph.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineGraph.h" },
		{ "ToolTip", "A State machine graph for PaperZD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAnimGraphNode_MetaData[] = {
		{ "Comment", "/* The owning AnimGraphNode that created this state machine graph. */" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineGraph.h" },
		{ "ToolTip", "The owning AnimGraphNode that created this state machine graph." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAnimGraphNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateMachineGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode = { "OwnerAnimGraphNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateMachineGraph, OwnerAnimGraphNode), Z_Construct_UClass_UPaperZDAnimGraphNode_StateMachine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerAnimGraphNode_MetaData), NewProp_OwnerAnimGraphNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::ClassParams = {
	&UPaperZDStateMachineGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDStateMachineGraph()
{
	if (!Z_Registration_Info_UClass_UPaperZDStateMachineGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateMachineGraph.OuterSingleton, Z_Construct_UClass_UPaperZDStateMachineGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDStateMachineGraph.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateMachineGraph>()
{
	return UPaperZDStateMachineGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateMachineGraph);
UPaperZDStateMachineGraph::~UPaperZDStateMachineGraph() {}
// End Class UPaperZDStateMachineGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateMachineGraph, UPaperZDStateMachineGraph::StaticClass, TEXT("UPaperZDStateMachineGraph"), &Z_Registration_Info_UClass_UPaperZDStateMachineGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateMachineGraph), 3602275336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineGraph_h_3984214892(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
