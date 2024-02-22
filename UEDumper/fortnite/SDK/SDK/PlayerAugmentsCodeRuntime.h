
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DynamicRollTablesRuntime
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Enum /Script/PlayerAugmentsCodeRuntime.EBattleRoyaleBPAugmentLogVerbosity
/// Size: 0x03
enum class EBattleRoyaleBPAugmentLogVerbosity : uint8_t
{
	EBattleRoyaleBPAugmentLogVerbosity__Log                                          = 0,
	EBattleRoyaleBPAugmentLogVerbosity__Verbose                                      = 1,
	EBattleRoyaleBPAugmentLogVerbosity__EBattleRoyaleBPAugmentLogVerbosity_MAX       = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EFortBRAugmentSystemCastResult
/// Size: 0x03
enum class EFortBRAugmentSystemCastResult : uint8_t
{
	EFortBRAugmentSystemCastResult__Valid                                            = 0,
	EFortBRAugmentSystemCastResult__Invalid                                          = 1,
	EFortBRAugmentSystemCastResult__EFortBRAugmentSystemCastResult_MAX               = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EAugmentHoldInputRerollState
/// Size: 0x03
enum class EAugmentHoldInputRerollState : uint8_t
{
	EAugmentHoldInputRerollState__Pressed                                            = 0,
	EAugmentHoldInputRerollState__Released                                           = 1,
	EAugmentHoldInputRerollState__EAugmentHoldInputRerollState_MAX                   = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EAugmentExecResult
/// Size: 0x03
enum class EAugmentExecResult : uint8_t
{
	EAugmentExecResult__Success                                                      = 0,
	EAugmentExecResult__Failure                                                      = 1,
	EAugmentExecResult__EAugmentExecResult_MAX                                       = 2
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAthenaAIBotEvaluator_Augments
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFortAthenaAIBotEvaluator_Augments : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              AugmentStatusKeyName;                                       // 0x00A8   (0x0004)  
	FName                                              AugmentItemKeyName;                                         // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAthenaBTTask_Augments
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_Augments : public UBTTaskNode
{ 
public:
	float                                              MinSelectionTime;                                           // 0x0070   (0x0004)  
	float                                              MaxSelectionTime;                                           // 0x0074   (0x0004)  
	FName                                              AugmentStatusKeyName;                                       // 0x0078   (0x0004)  
	FName                                              AugmentItemKeyName;                                         // 0x007C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility
/// Size: 0x0078 (0x000B60 - 0x000BD8)
class UFortAugmentSelectionToolAbility : public UFortGameplayAbility
{ 
public:
	class UInputComponent*                             SelectionInputComponent;                                    // 0x0B60   (0x0008)  
	FScalableFloat                                     InputPriority;                                              // 0x0B68   (0x0028)  
	int32_t                                            NumChoices;                                                 // 0x0B90   (0x0004)  
	int32_t                                            HighlightedChoiceIndex;                                     // 0x0B94   (0x0004)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0B98   (0x0010)  MISSED
	FScalableFloat                                     RerollHoldInputSeconds;                                     // 0x0BA8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0BD0   (0x0008)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.SetHighlightedChoiceIndex
	// void SetHighlightedChoiceIndex(int32_t NewChoiceIndex);                                                               // [0xae8b8cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnSelectedChoiceIndex
	// void OnSelectedChoiceIndex(int32_t ChoiceIndex);                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnRerollPressedAndCannotAfford
	// void OnRerollPressedAndCannotAfford();                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHoldRerollInputChanged
	// void OnHoldRerollInputChanged(bool bIsPressed, bool bCompletedHold);                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHighlightSelectionUpdated
	// void OnHighlightSelectionUpdated(int32_t NewHighlightedChoiceIndex);                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem
/// Size: 0x00A0 (0x0000A8 - 0x000148)
class UFortBattleRoyalePlayerAugmentSystem : public UFortControllerComponent
{ 
public:
	float                                              ServerGrantingStartedTimestamp;                             // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,12289) /* FMulticastInlineDelegate */ __um(OnMatchAugmentsResetEvent);                        // 0x00B0   (0x0010)  
	bool                                               bEnableAugmentCollectionUnlocking;                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x00C1   (0x000F)  MISSED
	FScalableFloat                                     NumRollsForUnlock;                                          // 0x00D0   (0x0028)  
	FScalableFloat                                     EnableUnlocking;                                            // 0x00F8   (0x0028)  
	FScalableFloat                                     EnableBRAugmentSystem;                                      // 0x0120   (0x0028)  


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryIncrementUnlockRollCount
	// void TryIncrementUnlockRollCount();                                                                                   // [0xae8b980] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryClaimUnlock
	// FFortAugmentPassiveUnlockResult TryClaimUnlock();                                                                     // [0xae8b94c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ResetMatchAugments
	// void ResetMatchAugments();                                                                                            // [0xae8b668] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnServerAugmentGrantTimestampReplicated
	// void OnServerAugmentGrantTimestampReplicated(float ServerGrantStartTimestamp);                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnRep_ServerGrantingStartedTimestamp
	// void OnRep_ServerGrantingStartedTimestamp();                                                                          // [0xae8b610] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnPossedPawnChanged
	// void OnPossedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnMatchAugmentsReset
	// void OnMatchAugmentsReset();                                                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature
	// void OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature();                                                    // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                          // [0xae8b15c] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.GetServerGrantingStartedTimestamp
	// float GetServerGrantingStartedTimestamp();                                                                            // [0x5e5023c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ChooseUnlockFromList
	// FFortAugmentPassiveUnlockResult ChooseUnlockFromList(TArray<FPlayerAugmentLockStatus>& LockedList);                   // [0xae88600] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentPlayerPawn
	// void BP_GetAugmentPlayerPawn(EFortBRAugmentSystemCastResult& OutExec, class AFortPlayerPawn*& OutFortPlayerPawn);     // [0xae87dd8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentController
	// void BP_GetAugmentController(EFortBRAugmentSystemCastResult& OutExec, class AController*& OutController);             // [0xae87cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BlueprintAugmentLog
	// void BlueprintAugmentLog(FString Message, EBattleRoyaleBPAugmentLogVerbosity Verbosity, bool bAutonomousProxyOnly);   // [0xae87ec0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.AuthoritySetServerGrantingStartedTimestamp
	// void AuthoritySetServerGrantingStartedTimestamp(float ServerTimestamp);                                               // [0xae87bd4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortCollectionDataEntryPlayerAugment
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortCollectionDataEntryPlayerAugment : public UFortCollectionDataEntry
{ 
public:
	class UFortPlayerAugmentItemDefinition*            PlayerAugmentItemDefinition;                                // 0x0030   (0x0008)  
	SDK_UNDEFINED(24,12290) /* FText */                __um(AdditionalDescription);                                // 0x0038   (0x0018)  
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortCollectionDataPlayerAugment
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortCollectionDataPlayerAugment : public UFortCollectionData
{ 
public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_MultipleAugmentsQueued : public UFortContextualTutorial
{ 
public:


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.HandleBindCompletionTrigger
	// void HandleBindCompletionTrigger(class AFortPlayerControllerZone* FortPCZone);                                        // [0xae8ad74] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.HandleBindActivationTrigger
	// void HandleBindActivationTrigger(class AFortPlayerControllerZone* FortPCZone);                                        // [0xae8acf4] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.CompletionEventCallback
	// void CompletionEventCallback(bool bIsOpened, bool bViewingAugmentInventory);                                          // [0xae88d34] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.ActivationEventCallback
	// void ActivationEventCallback(int8_t NumPendingAugmentsToGrant);                                                       // [0xae86fc4] Final|Native|Protected 
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentChoiceDatum
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPlayerAugmentChoiceDatum
{ 
	class UFortPlayerAugmentItemDefinition*            ItemDef;                                                    // 0x0000   (0x0008)  
	FGameplayTagContainer                              ChoiceMetaTags;                                             // 0x0008   (0x0020)  
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentRerollCost
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortAugmentRerollCost
{ 
	class UFortItemDefinition*                         ResourceCurrency;                                           // 0x0000   (0x0008)  
	FScalableFloat                                     Amount;                                                     // 0x0008   (0x0028)  
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem
/// Size: 0x0530 (0x0000A8 - 0x0005D8)
class UFortControllerComponent_AugmentGrantingSystem : public UFortControllerComponent
{ 
public:
	SDK_UNDEFINED(16,12291) /* FMulticastInlineDelegate */ __um(OnCanSelectAugmentChanged);                        // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,12292) /* FMulticastInlineDelegate */ __um(OnSelectedAugmentForGrant);                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,12293) /* FMulticastInlineDelegate */ __um(OnAvailableAugmentsForGrantingUpdated);            // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,12294) /* FMulticastInlineDelegate */ __um(OnAuthorityRequestAugmentChoices);                 // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,12295) /* FMulticastInlineDelegate */ __um(OnLocalReroll);                                    // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x00F8   (0x0020)  MISSED
	SDK_UNDEFINED(16,12296) /* FMulticastInlineDelegate */ __um(OnReplicateNumPendingAugmentsToGrant);             // 0x0118   (0x0010)  
	class UFortWeaponItemDefinition*                   AugmentSelectionModeItem;                                   // 0x0128   (0x0008)  
	SDK_UNDEFINED(8,12297) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(CachedResourceCurrencyOverride);        // 0x0130   (0x0008)  
	class UFortWorldItem*                              SelectionModeWorldItem;                                     // 0x0138   (0x0008)  
	FScalableFloat                                     Enabled;                                                    // 0x0140   (0x0028)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0168   (0x0001)  MISSED
	int8_t                                             ReplicatedNumPendingAugmentsToGrant;                        // 0x0169   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x016A   (0x0006)  MISSED
	TArray<FPlayerAugmentChoiceDatum>                  ReplicatedAugmentChoices;                                   // 0x0170   (0x0010)  
	int8_t                                             NumFreeRerolls;                                             // 0x0180   (0x0001)  
	int8_t                                             NumLockedSelectionChoices;                                  // 0x0181   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x0182   (0x0006)  MISSED
	class UInputComponent*                             PrimaryInputComponentWeaponMode;                            // 0x0188   (0x0008)  
	class UInputComponent*                             PrimaryInputComponentBuildMode;                             // 0x0190   (0x0008)  
	class UInputComponent*                             TemporaryInputComponent;                                    // 0x0198   (0x0008)  
	FScalableFloat                                     AugmentSelectInputPriority;                                 // 0x01A0   (0x0028)  
	FGameplayTagContainer                              SelectionBlockedPlayerTags;                                 // 0x01C8   (0x0020)  
	FGameplayTagContainer                              AugmentSelectInputDisablePlayerTags;                        // 0x01E8   (0x0020)  
	unsigned char                                      UnknownData04_5[0x28];                                      // 0x0208   (0x0028)  MISSED
	TArray<FFortAugmentRerollCost>                     RerollCosts;                                                // 0x0230   (0x0010)  
	FFortItemEntry                                     SelectorItemEntry;                                          // 0x0240   (0x01A0)  
	FFortItemEntry                                     LocalCachedPreviousWeapon;                                  // 0x03E0   (0x01A0)  
	unsigned char                                      UnknownData05_6[0x58];                                      // 0x0580   (0x0058)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerRequestReroll
	// void ServerRequestReroll();                                                                                           // [0x80d7358] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerGrantAugment
	// void ServerGrantAugment(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef);                                    // [0x894cee8] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnSelectedAugmentForGrantDelegate__DelegateSignature
	// void OnSelectedAugmentForGrantDelegate__DelegateSignature(class UFortPlayerAugmentItemDefinition* SelectedAugment);   // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature
	// void OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature(int8_t NumPendingAugmentsToGrant);               // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_SelectorItemEntry
	// void OnRep_SelectorItemEntry();                                                                                       // [0xae8b5fc] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedNumPendingAugmentsToGrant
	// void OnRep_ReplicatedNumPendingAugmentsToGrant();                                                                     // [0xae8b5e8] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedAugmentChoices
	// void OnRep_ReplicatedAugmentChoices();                                                                                // [0xae8b5d4] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumLockedSelectionChoices
	// void OnRep_NumLockedSelectionChoices();                                                                               // [0xae8b5c0] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumFreeRerolls
	// void OnRep_NumFreeRerolls();                                                                                          // [0xae8b5ac] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature
	// void OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls);                        // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnMinigameStarted
	// void OnMinigameStarted();                                                                                             // [0xae8b584] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalUnequipAugmentSelectionPressed
	// void OnLocalUnequipAugmentSelectionPressed();                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalRerollDelegate__DelegateSignature
	// void OnLocalRerollDelegate__DelegateSignature();                                                                      // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalEquipAugmentSelectionPressed
	// void OnLocalEquipAugmentSelectionPressed();                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnFreeRerollsUpdatedDelegate__DelegateSignature
	// void OnFreeRerollsUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls);                                      // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature
	// void OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent); // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature
	// void OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature(TArray<UFortPlayerAugmentItemDefinition*>& IgnoreInRoll); // [0x3d1d968] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionItemEquipped
	// bool IsSelectionItemEquipped();                                                                                       // [0xae8b394] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionChoicesLocked
	// bool IsSelectionChoicesLocked();                                                                                      // [0xae8b378] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleUnHolsteredEvent
	// void HandleUnHolsteredEvent();                                                                                        // [0xae8b364] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bVisible);                                                                        // [0xae8b2e4] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                          // [0xae8b220] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleHolsteredEvent
	// void HandleHolsteredEvent();                                                                                          // [0xae8b120] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleChangedBuildMode
	// void HandleChangedBuildMode(bool bEnteredBuildMode);                                                                  // [0xae8aeb8] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                  // [0xae8aa88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetNumFreeRerolls
	// int32_t GetNumFreeRerolls();                                                                                          // [0xae8aa70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAvailableAugmentsToGrant
	// TArray<FPlayerAugmentChoiceDatum> GetAvailableAugmentsToGrant();                                                      // [0xae893d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAugmentGrantingComponentFromController
	// class UFortControllerComponent_AugmentGrantingSystem* GetAugmentGrantingComponentFromController(class AController* Controller); // [0xae891a8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ClientSelectAvailableAugmentToGrant
	// void ClientSelectAvailableAugmentToGrant(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef);                   // [0xae88cb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanSelectAugmentChangedDelegate__DelegateSignature
	// void CanSelectAugmentChangedDelegate__DelegateSignature(bool bCanSelectAugment);                                      // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanReroll
	// bool CanReroll();                                                                                                     // [0xae885dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthoritySetAvailableAugmentChoices
	// void AuthoritySetAvailableAugmentChoices(TArray<FPlayerAugmentChoiceDatum>& AvailableAugmentsToGrant);                // [0xae873fc] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityResetAugmentData
	// void AuthorityResetAugmentData();                                                                                     // [0xae873e8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityRequestSelectionToolItemGrant
	// void AuthorityRequestSelectionToolItemGrant(class UObject* Instigator);                                               // [0xae87378] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityIncrementLockedSelectionChoices
	// void AuthorityIncrementLockedSelectionChoices(int32_t NumLocksToAdd);                                                 // [0xae872e8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantNewAugment
	// void AuthorityGrantNewAugment();                                                                                      // [0xae872d4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantFreeReroll
	// void AuthorityGrantFreeReroll();                                                                                      // [0xae872a0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.AugmentFuctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAugmentFuctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.AugmentFuctionLibrary.GiveAugmentWithPreventDropping
	// class UFortWorldItem* GiveAugmentWithPreventDropping(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef, TScriptInterface<Class> InventoryOwner); // [0xae8aaa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents
/// Size: 0x00B8 (0x0000A8 - 0x000160)
class UFortControllerComponent_AugmentUIEvents : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00A8   (0x0020)  MISSED
	SDK_UNDEFINED(16,12298) /* FMulticastInlineDelegate */ __um(OnAugmentSelectorHighlightedChoice);               // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,12299) /* FMulticastInlineDelegate */ __um(OnAugmentStartedSelectionOfChoice);                // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,12300) /* FMulticastInlineDelegate */ __um(OnAugmentSelectedByPointerEvent);                  // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,12301) /* FMulticastInlineDelegate */ __um(OnAugmentGrantingTimersFinishedForMatch);          // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,12302) /* FMulticastInlineDelegate */ __um(OnAugmentGrantingTimersResetForMatch);             // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,12303) /* FMulticastInlineDelegate */ __um(AugmentHoldInputRerollChanged);                    // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,12304) /* FMulticastInlineDelegate */ __um(OnAugmentToolViewSwap);                            // 0x0128   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0138   (0x0018)  MISSED
	int32_t                                            NumAugmentGrantRoundsForPlaylist;                           // 0x0150   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0154   (0x000C)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.UpdatedTimerProgress
	// void UpdatedTimerProgress(float TimeRemaining, float TimePercentage);                                                 // [0xae8b994] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.SetNumGrantableAugmentsForPlaylist
	// void SetNumGrantableAugmentsForPlaylist(int32_t NewNumRounds);                                                        // [0x6470f8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnGrantTimerProgressUpdatedDelegate__DelegateSignature
	// void OnGrantTimerProgressUpdatedDelegate__DelegateSignature(float TimeRemaining, float TimePercentage);               // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentToolViewSwapDelegate__DelegateSignature
	// void OnAugmentToolViewSwapDelegate__DelegateSignature(bool ViewingInventoryAugments);                                 // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature
	// void OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature(int32_t ChoiceIndex);                               // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature
	// void OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature(bool bIsOpened, bool bViewingInventory);         // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature
	// void OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature(int32_t ChoiceIndex);                              // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectedByPointerEvent__DelegateSignature
	// void OnAugmentSelectedByPointerEvent__DelegateSignature(int32_t ChoiceIndex);                                         // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature
	// void OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature();                                               // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature
	// void OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature();                                            // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersReset
	// void NotifyGrantingTimersReset();                                                                                     // [0xae8b570] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersFinished
	// void NotifyGrantingTimersFinished();                                                                                  // [0xae8b54c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory);                                // [0xae8ac30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.AugmentHoldInputRerollChangedDelegate__DelegateSignature
	// void AugmentHoldInputRerollChangedDelegate__DelegateSignature(EAugmentHoldInputRerollState HoldState, float HoldDurationSeconds); // [0x3d1d968] MulticastDelegate|Public|Delegate 
};

/// Struct /Script/PlayerAugmentsCodeRuntime.ReplicatedSharedPlayerAugment
/// Size: 0x000C (0x000000 - 0x00000C)
struct FReplicatedSharedPlayerAugment
{ 
	int32_t                                            PlayerAugmentIndex;                                         // 0x0000   (0x0004)  
	SDK_UNDEFINED(8,12305) /* TWeakObjectPtr<AFortPlayerStateAthena*> */ __um(SharedFromPlayer);                   // 0x0004   (0x0008)  
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
/// Size: 0x0118 (0x0000A8 - 0x0001C0)
class UFortControllerComponent_PlayerAugmentPersistence : public UFortControllerComponent
{ 
public:
	FScalableFloat                                     Enabled;                                                    // 0x00A8   (0x0028)  
	FScalableFloat                                     LockMissingCollectionAugmentsEnabled;                       // 0x00D0   (0x0028)  
	class AFortPlayerControllerAthena*                 PlayerController;                                           // 0x00F8   (0x0008)  
	class UFortCollectionDataPlayerAugment*            CollectionData;                                             // 0x0100   (0x0008)  
	FPlayerAugmentsPersistenceData                     LivePlayerAugmentsPersistenceData;                          // 0x0108   (0x0018)  
	SDK_UNDEFINED(80,12306) /* TSet<UFortPlayerAugmentItemDefinition*> */ __um(AugmentsCollectedThisMatch);        // 0x0120   (0x0050)  
	TArray<FReplicatedSharedPlayerAugment>             ReplicatedSharedPlayerAugments;                             // 0x0170   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0180   (0x0040)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleMcpProfilesInitialized
	// void HandleMcpProfilesInitialized();                                                                                  // [0xae8b134] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataTableLoaded
	// void HandleCollectionDataTableLoaded(TWeakObjectPtr<UFortCollectionsDataTable*> CollectionsDataTableSoftPtr);         // [0xae8b02c] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataLoaded
	// void HandleCollectionDataLoaded(TWeakObjectPtr<UFortCollectionData*> BaseCollectionDataSoftPtr);                      // [0xae8af38] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetRollCountSinceLastRandomUnlock
	// int32_t GetRollCountSinceLastRandomUnlock();                                                                          // [0x6fc8834] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatusForAll
	// void GetLockStatusForAll(TArray<FPlayerAugmentLockStatus>& OutLockStatusArray);                                       // [0xae89bf0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatus
	// FPlayerAugmentLockStatus GetLockStatus(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition);          // [0xae89b38] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockedList
	// void GetLockedList(TArray<FPlayerAugmentLockStatus>& OutLockedList, bool bIncludeSharedAugments);                     // [0xae8a2b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetCarryOverPlayerAugments
	// void GetCarryOverPlayerAugments(TArray<FCarryOverPlayerAugment>& OutCarryOverPlayerAugments);                         // [0xae89478] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthorityUnlockPlayerAugment
	// void AuthorityUnlockPlayerAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentToUnlock);                     // [0xae87c70] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetRollCountSinceLastRandomUnlock
	// void AuthoritySetRollCountSinceLastRandomUnlock(int32_t NewRollCount);                                                // [0xae87b54] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetCarryOverPlayerAugments
	// void AuthoritySetCarryOverPlayerAugments(TArray<FCarryOverPlayerAugment>& NewCarryOverPlayerAugments);                // [0xae87494] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortGamestateComponent_AugmentTableManager
/// Size: 0x0050 (0x0002D8 - 0x000328)
class UFortGamestateComponent_AugmentTableManager : public UFortGamestateComponent_DynamicRollTableManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x02D8   (0x0050)  MISSED
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentDynamicRollPlayerComponent
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UFortControllerComponent_AugmentDynamicRollPlayerComponent : public UFortControllerComponent_DynamicRollPlayerComponent
{ 
public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UFortMcpCollectionPlayerAugment : public UFortMcpCollectionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment.MarkSeenForPlayer
	// void MarkSeenForPlayer(class AFortPlayerController* PlayerController, FGameplayTag VariantTag);                       // [0xae8b3b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment.AddToPlayerCollection
	// void AddToPlayerCollection(class AFortPlayerController* PlayerController, FGameplayTag PlayerAugmentVariantTag);      // [0xae87104] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortPlayerAugmentCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.StartAugmentGrantingFlow
	// void StartAugmentGrantingFlow();                                                                                      // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.SetPlayerAugmentRollCountSinceLastUnlock
	// void SetPlayerAugmentRollCountSinceLastUnlock(int32_t RollCount);                                                     // [0x6470f8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ServerLogDynamicWeightsForPlayer
	// void ServerLogDynamicWeightsForPlayer(bool bVeryDetailedReport);                                                      // [0x5dd0bf8] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ResetAugmentGrantingToSeed
	// void ResetAugmentGrantingToSeed(int32_t Seed);                                                                        // [0x6470f8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAugmentCount
	// void RemoveAugmentCount(FString AugmentName, int32_t RemoveCount);                                                    // [0x8473210] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAugment
	// void RemoveAugment(FString AugmentName);                                                                              // [0x8c2fc5c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugmentsFromBots
	// void RemoveAllAugmentsFromBots();                                                                                     // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugments
	// void RemoveAllAugments();                                                                                             // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.LogPlayerAugmentsLockStatus
	// void LogPlayerAugmentsLockStatus();                                                                                   // [0x3097b14] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugmentToBots
	// void GiveAugmentToBots(FString AugmentName);                                                                          // [0x8c2fc5c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugmentCount
	// void GiveAugmentCount(FString AugmentName, int32_t AddCount);                                                         // [0x8473210] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugment
	// void GiveAugment(FString AugmentName);                                                                                // [0x8c2fc5c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ForceSelectionAugments
	// void ForceSelectionAugments(FString AugmentNameFirst, FString AugmentNameSecond);                                     // [0x847210c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectPlayerAugment
	// void CollectPlayerAugment(FString TagMatch);                                                                          // [0x6650f60] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectAllPlayerAugments
	// void CollectAllPlayerAugments();                                                                                      // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UFortPlayerStateComponent_PlayerAugmentSystem : public UFortPlayerStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	SDK_UNDEFINED(16,12307) /* FMulticastInlineDelegate */ __um(OnAugmentListUpdated);                             // 0x00B8   (0x0010)  
	FScalableFloat                                     EnableAugmentsFeature;                                      // 0x00C8   (0x0028)  
	class UClass*                                      DynamicTagGEClass;                                          // 0x00F0   (0x0008)  
	SDK_UNDEFINED(80,12308) /* TMap<FPrimaryAssetId, FPlayerAugmentTrackedData> */ __um(AugmentToRuntimeDataMap);  // 0x00F8   (0x0050)  
	TArray<class UFortPlayerAugmentItemDefinition*>    ActiveAugments;                                             // 0x0148   (0x0010)  
	SDK_UNDEFINED(80,12309) /* TMap<FGameplayTag, double> */ __um(RuntimeAugmentMatchDataCacheFloat);              // 0x0158   (0x0050)  


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.SetAugmentMatchDataCacheFloat
	// void SetAugmentMatchDataCacheFloat(FGameplayTag TargetAugmentCacheTag, double InData);                                // [0xae8b67c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnRep_ActiveAugments
	// void OnRep_ActiveAugments();                                                                                          // [0xae8b598] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnAugmentListUpdatedEventDispatcher__DelegateSignature
	// void OnAugmentListUpdatedEventDispatcher__DelegateSignature(class UFortPlayerStateComponent_PlayerAugmentSystem* AugmentComponent); // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandlePlayerPawnSpawned
	// void HandlePlayerPawnSpawned();                                                                                       // [0xae8b148] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandleBotPlayerPawnSpawned
	// void HandleBotPlayerPawnSpawned(class AAIController* Controller, class AFortPawn* Pawn);                              // [0xae8adf4] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentMatchDataCacheFloat
	// double GetAugmentMatchDataCacheFloat(EAugmentExecResult& OutExec, FGameplayTag TargetAugmentCacheTag);                // [0xae89234] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponentValidated
	// class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponentValidated(EAugmentExecResult& OutExec, class AActor* PlayerContextActor); // [0xae88fa0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponent
	// class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponent(class AActor* PlayerContextActor);           // [0xae88eb0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetActiveAugments
	// TArray<UFortPlayerAugmentItemDefinition*> GetActiveAugments(class AActor* Actor);                                     // [0xae88df8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.ClientClearMatchAugmentDataCache
	// void ClientClearMatchAugmentDataCache();                                                                              // [0x6db0d14] Net|NetReliableNative|Event|Public|NetClient 
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentPassiveUnlockResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortAugmentPassiveUnlockResult
{ 
	class UFortPlayerAugmentItemDefinition*            UnlockedAugment;                                            // 0x0000   (0x0008)  
	bool                                               bAlreadyInInventory;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentLockStatus
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPlayerAugmentLockStatus
{ 
	class UFortPlayerAugmentItemDefinition*            PlayerAugmentItemDefinition;                                // 0x0000   (0x0008)  
	bool                                               bIsLocked;                                                  // 0x0008   (0x0001)  
	bool                                               bWasCollectedInThisMatch;                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	class AFortPlayerStateAthena*                      SharedFromPlayer;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentAbilitySetHandlesStackEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPlayerAugmentAbilitySetHandlesStackEntry
{ 
	TArray<FFortAbilitySetHandle>                      AbilitySetHandles;                                          // 0x0000   (0x0010)  
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentGameplayEffectHandlesStackEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPlayerAugmentGameplayEffectHandlesStackEntry
{ 
	TArray<FActiveGameplayEffectHandle>                GEHandles;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentTrackedData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPlayerAugmentTrackedData
{ 
	TArray<FPlayerAugmentAbilitySetHandlesStackEntry>  AbilitySetHandlesStack;                                     // 0x0008   (0x0010)  
	TArray<FPlayerAugmentGameplayEffectHandlesStackEntry> GEHandlesStack;                                          // 0x0018   (0x0010)  
};

/// Struct /Script/PlayerAugmentsCodeRuntime.CarryOverPlayerAugment
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCarryOverPlayerAugment
{ 
	FPrimaryAssetId                                    AugmentAssetId;                                             // 0x0000   (0x0008)  
	FName                                              SourcePlaylistName;                                         // 0x0008   (0x0004)  
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentBaseWeightTableRow
/// Size: 0x0000 (0x000038 - 0x000038)
struct FFortAugmentBaseWeightTableRow : FFortDynamicRollBaseWeightTableRow
{ 
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentWeightModificationDataRow
/// Size: 0x0000 (0x000018 - 0x000018)
struct FFortAugmentWeightModificationDataRow : FFortDynamicRollWeightModifierTableRow
{ 
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortMcpCollectedPlayerAugmentProperties
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFortMcpCollectedPlayerAugmentProperties
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

