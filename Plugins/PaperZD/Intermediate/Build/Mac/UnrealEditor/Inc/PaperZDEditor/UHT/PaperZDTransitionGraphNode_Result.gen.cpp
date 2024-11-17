// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDTransitionGraphNode_Result.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDTransitionGraphNode_Result() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDTransitionGraphNode_Result
void UPaperZDTransitionGraphNode_Result::StaticRegisterNativesUPaperZDTransitionGraphNode_Result()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDTransitionGraphNode_Result);
UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_NoRegister()
{
	return UPaperZDTransitionGraphNode_Result::StaticClass();
}
struct Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/Nodes/PaperZDTransitionGraphNode_Result.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDTransitionGraphNode_Result.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEnterTransition_MetaData[] = {
		{ "Comment", "/* Variable only meant to be shown as a pin. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDTransitionGraphNode_Result.h" },
		{ "ToolTip", "Variable only meant to be shown as a pin." },
	};
#endif // WITH_METADATA
	static void NewProp_bCanEnterTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEnterTransition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDTransitionGraphNode_Result>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition_SetBit(void* Obj)
{
	((UPaperZDTransitionGraphNode_Result*)Obj)->bCanEnterTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition = { "bCanEnterTransition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDTransitionGraphNode_Result), &Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEnterTransition_MetaData), NewProp_bCanEnterTransition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::ClassParams = {
	&UPaperZDTransitionGraphNode_Result::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result()
{
	if (!Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.OuterSingleton, Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDTransitionGraphNode_Result>()
{
	return UPaperZDTransitionGraphNode_Result::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDTransitionGraphNode_Result);
UPaperZDTransitionGraphNode_Result::~UPaperZDTransitionGraphNode_Result() {}
// End Class UPaperZDTransitionGraphNode_Result

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDTransitionGraphNode_Result, UPaperZDTransitionGraphNode_Result::StaticClass, TEXT("UPaperZDTransitionGraphNode_Result"), &Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDTransitionGraphNode_Result), 733766842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h_2541555814(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
