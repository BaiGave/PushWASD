// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/PaperZDStateMachineSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateMachineSchema() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateMachineSchema();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateMachineSchema_NoRegister();
PAPERZDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment();
PAPERZDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin ScriptStruct FPaperZDStateMachineSchemaAction_NewNode
static_assert(std::is_polymorphic<FPaperZDStateMachineSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPaperZDStateMachineSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode;
class UScriptStruct* FPaperZDStateMachineSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_PaperZDEditor(), TEXT("PaperZDStateMachineSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.OuterSingleton;
}
template<> PAPERZDEDITOR_API UScriptStruct* StaticStruct<FPaperZDStateMachineSchemaAction_NewNode>()
{
	return FPaperZDStateMachineSchemaAction_NewNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeClass_MetaData[] = {
		{ "Comment", "/** Class of node we want to create */" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineSchema.h" },
		{ "ToolTip", "Class of node we want to create" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NodeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDStateMachineSchemaAction_NewNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDStateMachineSchemaAction_NewNode, NodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeClass_MetaData), NewProp_NodeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewProp_NodeClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"PaperZDStateMachineSchemaAction_NewNode",
	Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::PropPointers),
	sizeof(FPaperZDStateMachineSchemaAction_NewNode),
	alignof(FPaperZDStateMachineSchemaAction_NewNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.InnerSingleton;
}
// End ScriptStruct FPaperZDStateMachineSchemaAction_NewNode

// Begin ScriptStruct FPaperZDStateMachineSchemaAction_NewComment
static_assert(std::is_polymorphic<FPaperZDStateMachineSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPaperZDStateMachineSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment;
class UScriptStruct* FPaperZDStateMachineSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_PaperZDEditor(), TEXT("PaperZDStateMachineSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.OuterSingleton;
}
template<> PAPERZDEDITOR_API UScriptStruct* StaticStruct<FPaperZDStateMachineSchemaAction_NewComment>()
{
	return FPaperZDStateMachineSchemaAction_NewComment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineSchema.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDStateMachineSchemaAction_NewComment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"PaperZDStateMachineSchemaAction_NewComment",
	nullptr,
	0,
	sizeof(FPaperZDStateMachineSchemaAction_NewComment),
	alignof(FPaperZDStateMachineSchemaAction_NewComment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.InnerSingleton;
}
// End ScriptStruct FPaperZDStateMachineSchemaAction_NewComment

// Begin Class UPaperZDStateMachineSchema
void UPaperZDStateMachineSchema::StaticRegisterNativesUPaperZDStateMachineSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateMachineSchema);
UClass* Z_Construct_UClass_UPaperZDStateMachineSchema_NoRegister()
{
	return UPaperZDStateMachineSchema::StaticClass();
}
struct Z_Construct_UClass_UPaperZDStateMachineSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/PaperZDStateMachineSchema.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineSchema.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateMachineSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::ClassParams = {
	&UPaperZDStateMachineSchema::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDStateMachineSchema()
{
	if (!Z_Registration_Info_UClass_UPaperZDStateMachineSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateMachineSchema.OuterSingleton, Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDStateMachineSchema.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateMachineSchema>()
{
	return UPaperZDStateMachineSchema::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateMachineSchema);
UPaperZDStateMachineSchema::~UPaperZDStateMachineSchema() {}
// End Class UPaperZDStateMachineSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperZDStateMachineSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewStructOps, TEXT("PaperZDStateMachineSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDStateMachineSchemaAction_NewNode), 3947946627U) },
		{ FPaperZDStateMachineSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::NewStructOps, TEXT("PaperZDStateMachineSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDStateMachineSchemaAction_NewComment), 3189648167U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateMachineSchema, UPaperZDStateMachineSchema::StaticClass, TEXT("UPaperZDStateMachineSchema"), &Z_Registration_Info_UClass_UPaperZDStateMachineSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateMachineSchema), 3605861940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_4157216267(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
