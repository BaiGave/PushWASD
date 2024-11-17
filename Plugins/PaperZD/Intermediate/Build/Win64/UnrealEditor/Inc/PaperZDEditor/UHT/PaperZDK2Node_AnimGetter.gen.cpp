// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDK2Node_AnimGetter() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimBP_NoRegister();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base_NoRegister();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDK2Node_AnimGetter();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDK2Node_AnimGetter_NoRegister();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDK2Node_AnimGetter
void UPaperZDK2Node_AnimGetter::StaticRegisterNativesUPaperZDK2Node_AnimGetter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDK2Node_AnimGetter);
UClass* Z_Construct_UClass_UPaperZDK2Node_AnimGetter_NoRegister()
{
	return UPaperZDK2Node_AnimGetter::StaticClass();
}
struct Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Re-implementation of K2Node_AnimGetter that works with PaperZD's AnimInstances and Animation Graphs.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "Re-implementation of K2Node_AnimGetter that works with PaperZD's AnimInstances and Animation Graphs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[] = {
		{ "Comment", "// Anim node required for the getter\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "Anim node required for the getter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStateNode_MetaData[] = {
		{ "Comment", "// Optional state node that is required for the getter\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "Optional state node that is required for the getter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetterClass_MetaData[] = {
		{ "Comment", "// AnimInstance class that implements the getter\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "AnimInstance class that implements the getter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimBlueprint_MetaData[] = {
		{ "Comment", "// The anim blueprint that generated this getter\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The anim blueprint that generated this getter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTitle_MetaData[] = {
		{ "Comment", "// Cached node title\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "Cached node title" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[] = {
		{ "Comment", "// List of valid contexts for the node\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "List of valid contexts for the node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStateNode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GetterClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAnimBlueprint;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CachedTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Contexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Contexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDK2Node_AnimGetter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceNode = { "SourceNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, SourceNode), Z_Construct_UClass_UPaperZDAnimGraphNode_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceNode_MetaData), NewProp_SourceNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceStateNode = { "SourceStateNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, SourceStateNode), Z_Construct_UClass_UPaperZDStateGraphNode_State_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStateNode_MetaData), NewProp_SourceStateNode_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_GetterClass = { "GetterClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, GetterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetterClass_MetaData), NewProp_GetterClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint = { "SourceAnimBlueprint", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, SourceAnimBlueprint), Z_Construct_UClass_UPaperZDAnimBP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAnimBlueprint_MetaData), NewProp_SourceAnimBlueprint_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_CachedTitle = { "CachedTitle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, CachedTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTitle_MetaData), NewProp_CachedTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts_Inner = { "Contexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, Contexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contexts_MetaData), NewProp_Contexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceStateNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_GetterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_CachedTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::ClassParams = {
	&UPaperZDK2Node_AnimGetter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDK2Node_AnimGetter()
{
	if (!Z_Registration_Info_UClass_UPaperZDK2Node_AnimGetter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDK2Node_AnimGetter.OuterSingleton, Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDK2Node_AnimGetter.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDK2Node_AnimGetter>()
{
	return UPaperZDK2Node_AnimGetter::StaticClass();
}
UPaperZDK2Node_AnimGetter::UPaperZDK2Node_AnimGetter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDK2Node_AnimGetter);
UPaperZDK2Node_AnimGetter::~UPaperZDK2Node_AnimGetter() {}
// End Class UPaperZDK2Node_AnimGetter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDK2Node_AnimGetter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDK2Node_AnimGetter, UPaperZDK2Node_AnimGetter::StaticClass, TEXT("UPaperZDK2Node_AnimGetter"), &Z_Registration_Info_UClass_UPaperZDK2Node_AnimGetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDK2Node_AnimGetter), 3758528452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDK2Node_AnimGetter_h_1387068430(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDK2Node_AnimGetter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDK2Node_AnimGetter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
