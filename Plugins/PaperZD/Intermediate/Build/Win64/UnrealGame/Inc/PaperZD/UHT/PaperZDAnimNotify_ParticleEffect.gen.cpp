// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDAnimNotify_ParticleEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNotify_ParticleEffect() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin Class UPaperZDAnimNotify_ParticleEffect
void UPaperZDAnimNotify_ParticleEffect::StaticRegisterNativesUPaperZDAnimNotify_ParticleEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimNotify_ParticleEffect);
UClass* Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_NoRegister()
{
	return UPaperZDAnimNotify_ParticleEffect::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Spawns a one shot particle effect on a given location around the RenderComponent.\n */" },
		{ "DisplayName", "Play Particle Effect" },
		{ "HideCategories", "Object UObject" },
		{ "IncludePath", "Notifies/PaperZDAnimNotify_ParticleEffect.h" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_ParticleEffect.h" },
		{ "ToolTip", "Spawns a one shot particle effect on a given location around the RenderComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Particle System to Spawn\n" },
		{ "DisplayName", "Particle System" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_ParticleEffect.h" },
		{ "ToolTip", "Particle System to Spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Location offset from the socket\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_ParticleEffect.h" },
		{ "ToolTip", "Location offset from the socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Rotation offset from socket\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_ParticleEffect.h" },
		{ "ToolTip", "Rotation offset from socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Scale to spawn the particle system at\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_ParticleEffect.h" },
		{ "ToolTip", "Scale to spawn the particle system at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttached_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Should attach to the bone/socket\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_ParticleEffect.h" },
		{ "ToolTip", "Should attach to the bone/socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// SocketName to attach to\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_ParticleEffect.h" },
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
		TCppClassTypeTraits<UPaperZDAnimNotify_ParticleEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_PSTemplate = { "PSTemplate", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_ParticleEffect, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PSTemplate_MetaData), NewProp_PSTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_ParticleEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_ParticleEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_ParticleEffect, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
void Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_bAttached_SetBit(void* Obj)
{
	((UPaperZDAnimNotify_ParticleEffect*)Obj)->bAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_bAttached = { "bAttached", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDAnimNotify_ParticleEffect), &Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_bAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttached_MetaData), NewProp_bAttached_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_ParticleEffect, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_PSTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_bAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::ClassParams = {
	&UPaperZDAnimNotify_ParticleEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::PropPointers),
	0,
	0x009120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimNotify_ParticleEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimNotify_ParticleEffect.OuterSingleton, Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimNotify_ParticleEffect.OuterSingleton;
}
template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimNotify_ParticleEffect>()
{
	return UPaperZDAnimNotify_ParticleEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimNotify_ParticleEffect);
UPaperZDAnimNotify_ParticleEffect::~UPaperZDAnimNotify_ParticleEffect() {}
// End Class UPaperZDAnimNotify_ParticleEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_ParticleEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimNotify_ParticleEffect, UPaperZDAnimNotify_ParticleEffect::StaticClass, TEXT("UPaperZDAnimNotify_ParticleEffect"), &Z_Registration_Info_UClass_UPaperZDAnimNotify_ParticleEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimNotify_ParticleEffect), 4196171361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_ParticleEffect_h_2331890676(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_ParticleEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_ParticleEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
