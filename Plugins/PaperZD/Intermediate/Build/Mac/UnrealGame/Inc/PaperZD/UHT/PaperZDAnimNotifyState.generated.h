// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Notifies/PaperZDAnimNotifyState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperZDAnimInstance;
#ifdef PAPERZD_PaperZDAnimNotifyState_generated_h
#error "PaperZDAnimNotifyState.generated.h already included, missing '#pragma once' in PaperZDAnimNotifyState.h"
#endif
#define PAPERZD_PaperZDAnimNotifyState_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_RPC_WRAPPERS \
	virtual void OnNotifyEnd_Implementation(UPaperZDAnimInstance* OwningInstance) const; \
	virtual void OnNotifyTick_Implementation(float DeltaTime, UPaperZDAnimInstance* OwningInstance) const; \
	virtual void OnNotifyBegin_Implementation(UPaperZDAnimInstance* OwningInstance) const; \
	DECLARE_FUNCTION(execOnNotifyEnd); \
	DECLARE_FUNCTION(execOnNotifyTick); \
	DECLARE_FUNCTION(execOnNotifyBegin);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPaperZDAnimNotifyState(); \
	friend struct Z_Construct_UClass_UPaperZDAnimNotifyState_Statics; \
public: \
	DECLARE_CLASS(UPaperZDAnimNotifyState, UPaperZDAnimNotify_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PaperZD"), NO_API) \
	DECLARE_SERIALIZER(UPaperZDAnimNotifyState)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDAnimNotifyState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDAnimNotifyState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimNotifyState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimNotifyState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperZDAnimNotifyState(UPaperZDAnimNotifyState&&); \
	UPaperZDAnimNotifyState(const UPaperZDAnimNotifyState&); \
public: \
	NO_API virtual ~UPaperZDAnimNotifyState();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_8_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPERZD_API UClass* StaticClass<class UPaperZDAnimNotifyState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
