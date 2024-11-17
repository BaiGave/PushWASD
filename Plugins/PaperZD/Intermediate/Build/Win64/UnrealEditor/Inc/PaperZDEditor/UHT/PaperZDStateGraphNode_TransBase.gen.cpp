// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDStateGraphNode_TransBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_TransBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDStateGraphNode_TransBase
void UPaperZDStateGraphNode_TransBase::StaticRegisterNativesUPaperZDStateGraphNode_TransBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateGraphNode_TransBase);
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_NoRegister()
{
	return UPaperZDStateGraphNode_TransBase::StaticClass();
}
struct Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all the State Machine nodes that work as a transition and require an internal bound graph\n * for transition rules evaluation.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_TransBase.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_TransBase.h" },
		{ "ToolTip", "Base class for all the State Machine nodes that work as a transition and require an internal bound graph\nfor transition rules evaluation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "/* The graph that contains the transition rules to evaluate. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_TransBase.h" },
		{ "ToolTip", "The graph that contains the transition rules to evaluate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_TransBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_TransBase, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundGraph_MetaData), NewProp_BoundGraph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::NewProp_BoundGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::ClassParams = {
	&UPaperZDStateGraphNode_TransBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase()
{
	if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_TransBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_TransBase.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDStateGraphNode_TransBase.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateGraphNode_TransBase>()
{
	return UPaperZDStateGraphNode_TransBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_TransBase);
UPaperZDStateGraphNode_TransBase::~UPaperZDStateGraphNode_TransBase() {}
// End Class UPaperZDStateGraphNode_TransBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_TransBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_TransBase, UPaperZDStateGraphNode_TransBase::StaticClass, TEXT("UPaperZDStateGraphNode_TransBase"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_TransBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_TransBase), 2200938811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_TransBase_h_2991196986(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_TransBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_TransBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
