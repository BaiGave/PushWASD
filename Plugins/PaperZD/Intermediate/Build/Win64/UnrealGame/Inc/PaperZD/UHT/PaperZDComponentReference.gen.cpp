// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/PaperZDComponentReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDComponentReference() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftComponentReference();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDComponentReference();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDSoftComponentReference();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin ScriptStruct FPaperZDComponentReference
static_assert(std::is_polymorphic<FPaperZDComponentReference>() == std::is_polymorphic<FComponentReference>(), "USTRUCT FPaperZDComponentReference cannot be polymorphic unless super FComponentReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDComponentReference;
class UScriptStruct* FPaperZDComponentReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDComponentReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDComponentReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDComponentReference, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDComponentReference"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDComponentReference.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDComponentReference>()
{
	return FPaperZDComponentReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperZDComponentReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Allows references to the actor's own components via a specialized detail customization that works with CDOs.\n */" },
		{ "ModuleRelativePath", "Public/PaperZDComponentReference.h" },
		{ "ToolTip", "Allows references to the actor's own components via a specialized detail customization that works with CDOs." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDComponentReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDComponentReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	Z_Construct_UScriptStruct_FComponentReference,
	&NewStructOps,
	"PaperZDComponentReference",
	nullptr,
	0,
	sizeof(FPaperZDComponentReference),
	alignof(FPaperZDComponentReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDComponentReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDComponentReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDComponentReference()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDComponentReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDComponentReference.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDComponentReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperZDComponentReference.InnerSingleton;
}
// End ScriptStruct FPaperZDComponentReference

// Begin ScriptStruct FPaperZDSoftComponentReference
static_assert(std::is_polymorphic<FPaperZDSoftComponentReference>() == std::is_polymorphic<FSoftComponentReference>(), "USTRUCT FPaperZDSoftComponentReference cannot be polymorphic unless super FSoftComponentReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDSoftComponentReference;
class UScriptStruct* FPaperZDSoftComponentReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDSoftComponentReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDSoftComponentReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDSoftComponentReference, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDSoftComponentReference"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDSoftComponentReference.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDSoftComponentReference>()
{
	return FPaperZDSoftComponentReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperZDSoftComponentReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Allows references to the actor's own components via a specialized detail customization that works with CDOs.\n */" },
		{ "ModuleRelativePath", "Public/PaperZDComponentReference.h" },
		{ "ToolTip", "Allows references to the actor's own components via a specialized detail customization that works with CDOs." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDSoftComponentReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDSoftComponentReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	Z_Construct_UScriptStruct_FSoftComponentReference,
	&NewStructOps,
	"PaperZDSoftComponentReference",
	nullptr,
	0,
	sizeof(FPaperZDSoftComponentReference),
	alignof(FPaperZDSoftComponentReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDSoftComponentReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDSoftComponentReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDSoftComponentReference()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDSoftComponentReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDSoftComponentReference.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDSoftComponentReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperZDSoftComponentReference.InnerSingleton;
}
// End ScriptStruct FPaperZDSoftComponentReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDComponentReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperZDComponentReference::StaticStruct, Z_Construct_UScriptStruct_FPaperZDComponentReference_Statics::NewStructOps, TEXT("PaperZDComponentReference"), &Z_Registration_Info_UScriptStruct_PaperZDComponentReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDComponentReference), 224110359U) },
		{ FPaperZDSoftComponentReference::StaticStruct, Z_Construct_UScriptStruct_FPaperZDSoftComponentReference_Statics::NewStructOps, TEXT("PaperZDSoftComponentReference"), &Z_Registration_Info_UScriptStruct_PaperZDSoftComponentReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDSoftComponentReference), 329617482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDComponentReference_h_1617886555(TEXT("/Script/PaperZD"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDComponentReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDComponentReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
