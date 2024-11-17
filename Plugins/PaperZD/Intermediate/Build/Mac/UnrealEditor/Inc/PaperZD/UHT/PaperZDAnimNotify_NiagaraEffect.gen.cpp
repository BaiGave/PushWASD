// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDAnimNotify_NiagaraEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNotify_NiagaraEffect() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin Class UPaperZDAnimNotify_NiagaraEffect
void UPaperZDAnimNotify_NiagaraEffect::StaticRegisterNativesUPaperZDAnimNotify_NiagaraEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimNotify_NiagaraEffect);
UClass* Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_NoRegister()
{
	return UPaperZDAnimNotify_NiagaraEffect::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Spawns a one shot particle effect on a given location around the RenderComponent.\n */" },
		{ "DisplayName", "Play Niagara Particle Effect" },
		{ "HideCategories", "Object UObject" },
		{ "IncludePath", "Notifies/PaperZDAnimNotify_NiagaraEffect.h" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_NiagaraEffect.h" },
		{ "ToolTip", "Spawns a one shot particle effect on a given location around the RenderComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Particle System to Spawn\n" },
		{ "DisplayName", "Niagara System" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_NiagaraEffect.h" },
		{ "ToolTip", "Particle System to Spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Location offset from the socket\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_NiagaraEffect.h" },
		{ "ToolTip", "Location offset from the socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Rotation offset from socket\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_NiagaraEffect.h" },
		{ "ToolTip", "Rotation offset from socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Scale to spawn the particle system at\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_NiagaraEffect.h" },
		{ "ToolTip", "Scale to spawn the particle system at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttached_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Should attach to the bone/socket\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_NiagaraEffect.h" },
		{ "ToolTip", "Should attach to the bone/socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// SocketName to attach to\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_NiagaraEffect.h" },
		{ "ToolTip", "SocketName to attach to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PSTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static void NewProp_bAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttached;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimNotify_NiagaraEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_PSTemplate = { "PSTemplate", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_NiagaraEffect, PSTemplate), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PSTemplate_MetaData), NewProp_PSTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_NiagaraEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_NiagaraEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_NiagaraEffect, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
void Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_bAttached_SetBit(void* Obj)
{
	((UPaperZDAnimNotify_NiagaraEffect*)Obj)->bAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_bAttached = { "bAttached", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDAnimNotify_NiagaraEffect), &Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_bAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttached_MetaData), NewProp_bAttached_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_NiagaraEffect, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_PSTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_bAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::ClassParams = {
	&UPaperZDAnimNotify_NiagaraEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::PropPointers),
	0,
	0x009120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimNotify_NiagaraEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimNotify_NiagaraEffect.OuterSingleton, Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimNotify_NiagaraEffect.OuterSingleton;
}
template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimNotify_NiagaraEffect>()
{
	return UPaperZDAnimNotify_NiagaraEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimNotify_NiagaraEffect);
UPaperZDAnimNotify_NiagaraEffect::~UPaperZDAnimNotify_NiagaraEffect() {}
// End Class UPaperZDAnimNotify_NiagaraEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_NiagaraEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimNotify_NiagaraEffect, UPaperZDAnimNotify_NiagaraEffect::StaticClass, TEXT("UPaperZDAnimNotify_NiagaraEffect"), &Z_Registration_Info_UClass_UPaperZDAnimNotify_NiagaraEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimNotify_NiagaraEffect), 3389260968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_NiagaraEffect_h_3252372410(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_NiagaraEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_NiagaraEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
