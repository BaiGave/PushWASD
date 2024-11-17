// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperZDAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APaperZDCharacter;
class UPaperZDAnimPlayer;
class UPaperZDAnimSequence;
#ifdef PAPERZD_PaperZDAnimInstance_generated_h
#error "PaperZDAnimInstance.generated.h already included, missing '#pragma once' in PaperZDAnimInstance.h"
#endif
#define PAPERZD_PaperZDAnimInstance_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInit_Implementation(); \
	virtual void OnTick_Implementation(float DeltaTime); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength); \
	DECLARE_FUNCTION(execStopAllAnimationOverrides); \
	DECLARE_FUNCTION(execStopAnimationOverrideByGroup); \
	DECLARE_FUNCTION(execK2_PlayAnimationOverride); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execJumpToNode); \
	DECLARE_FUNCTION(execGetPaperCharacter); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execOnTick);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_27_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperZDAnimInstance(); \
	friend struct Z_Construct_UClass_UPaperZDAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPaperZDAnimInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PaperZD"), NO_API) \
	DECLARE_SERIALIZER(UPaperZDAnimInstance)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperZDAnimInstance(UPaperZDAnimInstance&&); \
	UPaperZDAnimInstance(const UPaperZDAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimInstance); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPaperZDAnimInstance) \
	NO_API virtual ~UPaperZDAnimInstance();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_24_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_27_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPERZD_API UClass* StaticClass<class UPaperZDAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
