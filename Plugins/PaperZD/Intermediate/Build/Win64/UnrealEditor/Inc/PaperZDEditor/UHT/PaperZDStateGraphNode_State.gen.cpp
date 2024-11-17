// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDStateGraphNode_State.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_State() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDStateGraphNode_State
void UPaperZDStateGraphNode_State::StaticRegisterNativesUPaperZDStateGraphNode_State()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateGraphNode_State);
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State_NoRegister()
{
	return UPaperZDStateGraphNode_State::StaticClass();
}
struct Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The state node is the main type of node for the state machine. In general, every other type of node is just transitory, while the StateNode is the only one\n * that can be active for more than one frame.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "The state node is the main type of node for the state machine. In general, every other type of node is just transitory, while the StateNode is the only one\nthat can be active for more than one frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "/* The internal animation graph for this state. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "The internal animation graph for this state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStateEnterEventName_MetaData[] = {
		{ "Category", "Callbacks" },
		{ "Comment", "/* Name of a custom event to call when the state machine enters this state. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "Name of a custom event to call when the state machine enters this state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStateExitEventName_MetaData[] = {
		{ "Category", "Callbacks" },
		{ "Comment", "/* Name of a custom event to call when the state machine exits this state. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "Name of a custom event to call when the state machine exits this state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/* Display name of the state. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "Display name of the state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLoop_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnStateEnterEventName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnStateExitEventName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flipbook;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceIdentifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static void NewProp_bShouldLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_State>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_State, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundGraph_MetaData), NewProp_BoundGraph_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateEnterEventName = { "OnStateEnterEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_State, OnStateEnterEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStateEnterEventName_MetaData), NewProp_OnStateEnterEventName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateExitEventName = { "OnStateExitEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_State, OnStateExitEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStateExitEventName_MetaData), NewProp_OnStateExitEventName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_State, Name_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_State, Flipbook_DEPRECATED), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flipbook_MetaData), NewProp_Flipbook_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_SequenceIdentifier = { "SequenceIdentifier", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_State, SequenceIdentifier_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceIdentifier_MetaData), NewProp_SequenceIdentifier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_State, AnimSequence_DEPRECATED), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequence_MetaData), NewProp_AnimSequence_MetaData) };
void Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
{
	((UPaperZDStateGraphNode_State*)Obj)->bShouldLoop_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDStateGraphNode_State), &Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldLoop_MetaData), NewProp_bShouldLoop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_BoundGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateEnterEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateExitEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Flipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_SequenceIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::ClassParams = {
	&UPaperZDStateGraphNode_State::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State()
{
	if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_State.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_State.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDStateGraphNode_State.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateGraphNode_State>()
{
	return UPaperZDStateGraphNode_State::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_State);
UPaperZDStateGraphNode_State::~UPaperZDStateGraphNode_State() {}
// End Class UPaperZDStateGraphNode_State

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_State_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_State, UPaperZDStateGraphNode_State::StaticClass, TEXT("UPaperZDStateGraphNode_State"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_State, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_State), 4249118490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_State_h_2380982311(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_State_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_State_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
