// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/PaperZDAnimGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphSchema() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphSchema();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphSchema_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDAnimGraphSchema
void UPaperZDAnimGraphSchema::StaticRegisterNativesUPaperZDAnimGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimGraphSchema);
UClass* Z_Construct_UClass_UPaperZDAnimGraphSchema_NoRegister()
{
	return UPaperZDAnimGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/PaperZDAnimGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDAnimGraphSchema.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEvaluationHandlerName_MetaData[] = {
		{ "Comment", "/* Name of the generated function used to get the exposed pins data. */" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDAnimGraphSchema.h" },
		{ "ToolTip", "Name of the generated function used to get the exposed pins data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultEvaluationHandlerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::NewProp_DefaultEvaluationHandlerName = { "DefaultEvaluationHandlerName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphSchema, DefaultEvaluationHandlerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEvaluationHandlerName_MetaData), NewProp_DefaultEvaluationHandlerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::NewProp_DefaultEvaluationHandlerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::ClassParams = {
	&UPaperZDAnimGraphSchema::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimGraphSchema()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphSchema.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimGraphSchema.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDAnimGraphSchema>()
{
	return UPaperZDAnimGraphSchema::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphSchema);
UPaperZDAnimGraphSchema::~UPaperZDAnimGraphSchema() {}
// End Class UPaperZDAnimGraphSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraphSchema_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphSchema, UPaperZDAnimGraphSchema::StaticClass, TEXT("UPaperZDAnimGraphSchema"), &Z_Registration_Info_UClass_UPaperZDAnimGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphSchema), 229776659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraphSchema_h_1123897039(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraphSchema_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
