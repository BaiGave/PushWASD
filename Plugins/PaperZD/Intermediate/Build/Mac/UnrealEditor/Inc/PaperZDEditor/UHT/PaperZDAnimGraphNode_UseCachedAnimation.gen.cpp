// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_UseCachedAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphNode_UseCachedAnimation() {}

// Begin Cross Module References
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_NoRegister();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDAnimGraphNode_UseCachedAnimation
void UPaperZDAnimGraphNode_UseCachedAnimation::StaticRegisterNativesUPaperZDAnimGraphNode_UseCachedAnimation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimGraphNode_UseCachedAnimation);
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_NoRegister()
{
	return UPaperZDAnimGraphNode_UseCachedAnimation::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Reads from a cached animation node.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ToolTip", "Reads from a cached animation node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Runtime node. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ToolTip", "Runtime node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameOfCache_MetaData[] = {
		{ "Comment", "/* Name of the cache node we're linked with. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ToolTip", "Name of the cache node we're linked with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedCacheNode_MetaData[] = {
		{ "Comment", "/* The CacheAnimation node we're using. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ToolTip", "The CacheAnimation node we're using." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameOfCache;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LinkedCacheNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphNode_UseCachedAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_AnimNode = { "AnimNode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_UseCachedAnimation, AnimNode), Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNode_MetaData), NewProp_AnimNode_MetaData) }; // 675210753
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_NameOfCache = { "NameOfCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_UseCachedAnimation, NameOfCache), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameOfCache_MetaData), NewProp_NameOfCache_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode = { "LinkedCacheNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_UseCachedAnimation, LinkedCacheNode), Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedCacheNode_MetaData), NewProp_LinkedCacheNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_AnimNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_NameOfCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::ClassParams = {
	&UPaperZDAnimGraphNode_UseCachedAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_UseCachedAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphNode_UseCachedAnimation.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_UseCachedAnimation.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDAnimGraphNode_UseCachedAnimation>()
{
	return UPaperZDAnimGraphNode_UseCachedAnimation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphNode_UseCachedAnimation);
UPaperZDAnimGraphNode_UseCachedAnimation::~UPaperZDAnimGraphNode_UseCachedAnimation() {}
// End Class UPaperZDAnimGraphNode_UseCachedAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_UseCachedAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation, UPaperZDAnimGraphNode_UseCachedAnimation::StaticClass, TEXT("UPaperZDAnimGraphNode_UseCachedAnimation"), &Z_Registration_Info_UClass_UPaperZDAnimGraphNode_UseCachedAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphNode_UseCachedAnimation), 3785250277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_UseCachedAnimation_h_4139100118(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_UseCachedAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_UseCachedAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
