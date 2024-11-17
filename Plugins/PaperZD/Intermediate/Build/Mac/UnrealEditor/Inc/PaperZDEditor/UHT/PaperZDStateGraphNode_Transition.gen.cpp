// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDStateGraphNode_Transition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_Transition() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Transition();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Transition_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDStateGraphNode_Transition
void UPaperZDStateGraphNode_Transition::StaticRegisterNativesUPaperZDStateGraphNode_Transition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateGraphNode_Transition);
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Transition_NoRegister()
{
	return UPaperZDStateGraphNode_Transition::StaticClass();
}
struct Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A normal transition node in the state machine.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_Transition.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Transition.h" },
		{ "ToolTip", "A normal transition node in the state machine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/* When multiple transitions need to be evaluated, the ones with a higher priority will be checked first. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Transition.h" },
		{ "ToolTip", "When multiple transitions need to be evaluated, the ones with a higher priority will be checked first." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/* Display color of the transition link. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Transition.h" },
		{ "ToolTip", "Display color of the transition link." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayTransitionalAnimations_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* If we should enable a transitional AnimGraph to play a temporal animation between the states. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Transition.h" },
		{ "ToolTip", "If we should enable a transitional AnimGraph to play a temporal animation between the states." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimTransitionalGraph_MetaData[] = {
		{ "Comment", "/* Transitional AnimGraph for playing \"in-between\" state animations. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Transition.h" },
		{ "ToolTip", "Transitional AnimGraph for playing \"in-between\" state animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Transition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
		{ "Comment", "/*EditAnywhere, Category = _Animation*/" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Transition.h" },
		{ "ToolTip", "EditAnywhere, Category = _Animation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_bPlayTransitionalAnimations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayTransitionalAnimations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimTransitionalGraph;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceIdentifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_Transition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_Transition, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_Transition, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_bPlayTransitionalAnimations_SetBit(void* Obj)
{
	((UPaperZDStateGraphNode_Transition*)Obj)->bPlayTransitionalAnimations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_bPlayTransitionalAnimations = { "bPlayTransitionalAnimations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDStateGraphNode_Transition), &Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_bPlayTransitionalAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayTransitionalAnimations_MetaData), NewProp_bPlayTransitionalAnimations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_AnimTransitionalGraph = { "AnimTransitionalGraph", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_Transition, AnimTransitionalGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimTransitionalGraph_MetaData), NewProp_AnimTransitionalGraph_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_SequenceIdentifier = { "SequenceIdentifier", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_Transition, SequenceIdentifier_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceIdentifier_MetaData), NewProp_SequenceIdentifier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_Transition, AnimSequence_DEPRECATED), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequence_MetaData), NewProp_AnimSequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_bPlayTransitionalAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_AnimTransitionalGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_SequenceIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::NewProp_AnimSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode_TransBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::ClassParams = {
	&UPaperZDStateGraphNode_Transition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Transition()
{
	if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_Transition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_Transition.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_Transition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDStateGraphNode_Transition.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateGraphNode_Transition>()
{
	return UPaperZDStateGraphNode_Transition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_Transition);
UPaperZDStateGraphNode_Transition::~UPaperZDStateGraphNode_Transition() {}
// End Class UPaperZDStateGraphNode_Transition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Transition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_Transition, UPaperZDStateGraphNode_Transition::StaticClass, TEXT("UPaperZDStateGraphNode_Transition"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_Transition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_Transition), 1769060043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Transition_h_1214058752(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Transition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Transition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
