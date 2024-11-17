// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/PaperZDAnimTransitionGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimTransitionGraphSchema() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

// Begin Class UPaperZDAnimTransitionGraphSchema
void UPaperZDAnimTransitionGraphSchema::StaticRegisterNativesUPaperZDAnimTransitionGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimTransitionGraphSchema);
UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_NoRegister()
{
	return UPaperZDAnimTransitionGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/PaperZDAnimTransitionGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDAnimTransitionGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimTransitionGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::ClassParams = {
	&UPaperZDAnimTransitionGraphSchema::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema.OuterSingleton, Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema.OuterSingleton;
}
template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDAnimTransitionGraphSchema>()
{
	return UPaperZDAnimTransitionGraphSchema::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimTransitionGraphSchema);
UPaperZDAnimTransitionGraphSchema::~UPaperZDAnimTransitionGraphSchema() {}
// End Class UPaperZDAnimTransitionGraphSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraphSchema_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema, UPaperZDAnimTransitionGraphSchema::StaticClass, TEXT("UPaperZDAnimTransitionGraphSchema"), &Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimTransitionGraphSchema), 1878722411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraphSchema_h_62593180(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraphSchema_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
