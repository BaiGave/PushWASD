// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDStateGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDStateGraphNode
void UPaperZDStateGraphNode::StaticRegisterNativesUPaperZDStateGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateGraphNode);
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_NoRegister()
{
	return UPaperZDStateGraphNode::StaticClass();
}
struct Z_Construct_UClass_UPaperZDStateGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all the StateMachine nodes for PaperZD.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode.h" },
		{ "ToolTip", "Base class for all the StateMachine nodes for PaperZD." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_Statics::ClassParams = {
	&UPaperZDStateGraphNode::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDStateGraphNode()
{
	if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDStateGraphNode.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateGraphNode>()
{
	return UPaperZDStateGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode);
UPaperZDStateGraphNode::~UPaperZDStateGraphNode() {}
// End Class UPaperZDStateGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode, UPaperZDStateGraphNode::StaticClass, TEXT("UPaperZDStateGraphNode"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode), 2753230057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_h_2618082939(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
