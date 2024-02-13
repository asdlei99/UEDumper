
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UFortControllerComponent_CreativeMatchmaking : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UFortGameActivity*)                  CachedGameActivity                                          OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             CreativeMatchmakingFeedbackClass                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             IslandModal                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UFortCreativeMatchmakingFeedback*)   CreativeMatchmakingFeedbackWidget                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UFortActivityDetailsModal*)          MatchmakingPortalModalWidget                                OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking.OnCreativeReadyCheckStatusChanged
	// void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                                  // [0xb918ff0] Final|Native|Protected 
};

/// Class /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback
/// Size: 0x0090 (0x000400 - 0x000490)
class UFortCreativeMatchmakingFeedback : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(class UInputComponent*)                    ReadyAndCancelInputComponent                                OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UFortActivityScalingTextBlock*)      Text_IslandName                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UFortActivityScalingTextBlock*)      Text_MatchmakingStatus                                      OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(bool)                                      bIsCancelingMatchmaking                                     OFFSET(get<bool>, {0x43C, 1, 0, 0})
	DMember(bool)                                      bIsLocalPartyMemberReady                                    OFFSET(get<bool>, {0x43D, 1, 0, 0})
	DMember(bool)                                      bHasPushedInputComponent                                    OFFSET(get<bool>, {0x43E, 1, 0, 0})
	CMember(class UFortGameActivity*)                  CachedGameActivity                                          OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(bool)                                      bHasError                                                   OFFSET(get<bool>, {0x460, 1, 0, 0})
	SMember(FText)                                     MatchmakingStatusText                                       OFFSET(getStruct<T>, {0x468, 24, 0, 0})
	CMember(class UFortKeybindWidget*)                 Action_HoldKeybindWidget                                    OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Action_MobileButton                                         OFFSET(get<T>, {0x488, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PushInputComponent
	// void PushInputComponent();                                                                                               // [0xb919184] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PopInputComponent
	// void PopInputComponent();                                                                                                // [0xb919170] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PlayOutro
	// void PlayOutro();                                                                                                        // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PlayIntro
	// void PlayIntro();                                                                                                        // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnUserStartedHoldActionNotification
	// void OnUserStartedHoldActionNotification();                                                                              // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnTakeActionNotification
	// void OnTakeActionNotification();                                                                                         // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnOutroFinished
	// void OnOutroFinished();                                                                                                  // [0x6fa9afc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnMatchmakingStatusTextUpdated
	// void OnMatchmakingStatusTextUpdated();                                                                                   // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnLockStateChanged
	// void OnLockStateChanged(bool bLockState);                                                                                // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnCreativeReadyCheckStatusChanged
	// void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                                  // [0xb9190b0] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnCancelNotification
	// void OnCancelNotification();                                                                                             // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.IsPartyLeader
	// bool IsPartyLeader();                                                                                                    // [0xb918fcc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.IsLocalPlayerReady
	// bool IsLocalPlayerReady();                                                                                               // [0xb918f78] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldReleased
	// void HoldReleased();                                                                                                     // [0xb918f64] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldPressed
	// void HoldPressed();                                                                                                      // [0xb918f50] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldAction
	// void HoldAction();                                                                                                       // [0xb918f3c] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HandleCancelMatchmaking
	// void HandleCancelMatchmaking();                                                                                          // [0xb918b00] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.GetTimeToDisplayMessageBeforeFadeOut
	// float GetTimeToDisplayMessageBeforeFadeOut();                                                                            // [0xb918ad0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.CanCancelMatchmaking
	// bool CanCancelMatchmaking();                                                                                             // [0xb918a44] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.BP_OnCreativeReadyCheckStatusChanged
	// void BP_OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                               // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown
/// Size: 0x0030 (0x000400 - 0x000430)
class UFortMatchmakingPortalCountdown : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UInputComponent*)                    MatchmakingPortalInputComponent                             OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UFortActivityScalingTextBlock*)      Text_IslandName                                             OFFSET(get<T>, {0x410, 8, 0, 0})
	DMember(float)                                     CountdownTime                                               OFFSET(get<float>, {0x418, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedCountdown                                         OFFSET(getStruct<T>, {0x420, 16, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.StartCountdown
	// void StartCountdown();                                                                                                   // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.HandleCancelClicked
	// void HandleCancelClicked();                                                                                              // [0xb918aec] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.FinishTimer
	// void FinishTimer();                                                                                                      // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup
/// Size: 0x01C8 (0x000410 - 0x0005D8)
class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	CMember(class UFortActivityDetailsModal*)          MatchmakingPortalModalWidget                                OFFSET(get<T>, {0x420, 8, 0, 0})
	SMember(FVector)                                   WorldPointerLocation                                        OFFSET(getStruct<T>, {0x428, 24, 0, 0})
	SMember(FText)                                     CreatorNameTextFormat                                       OFFSET(getStruct<T>, {0x440, 24, 0, 0})
	CMember(TWeakObjectPtr<UHeaderDescriptionHUDComponent*>) CachedHUDComponent                                    OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UClass*)                             IslandModal                                                 OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(FMatchmakingPortalPopupData)               CachedIslandData                                            OFFSET(getStruct<T>, {0x468, 96, 0, 0})
	SMember(FText)                                     InvalidLinkCodeWarningText                                  OFFSET(getStruct<T>, {0x4C8, 24, 0, 0})
	DMember(float)                                     MatchmakingFeedbackDelayTime                                OFFSET(get<float>, {0x4E0, 4, 0, 0})
	DMember(bool)                                      bIsWithinPortalRange                                        OFFSET(get<bool>, {0x4E4, 1, 1, 0})
	CMember(class UCommonRichTextBlock*)               RichText_CreatorName                                        OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_IslandName                                             OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_ActivityTags                                       OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UFortKeybindWidget*)                 GlobalActionKeybindWidget                                   OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UClass*)                             CreatorPageViewClass                                        OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UClass*)                             AttributionsModalClass                                      OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(class UFortGameActivity*)                  CachedGameActivity                                          OFFSET(get<T>, {0x518, 8, 0, 0})
	SMember(FText)                                     InteractionMessage                                          OFFSET(getStruct<T>, {0x530, 24, 0, 0})
	SMember(FText)                                     InteractionMessage_Cancel                                   OFFSET(getStruct<T>, {0x548, 24, 0, 0})
	SMember(FText)                                     InteractionMessage_Disabled                                 OFFSET(getStruct<T>, {0x560, 24, 0, 0})
	SMember(FText)                                     InteractionMessage_PartyLeadOnly                            OFFSET(getStruct<T>, {0x578, 24, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals
	// void UpdateVisuals(class UHeaderDescriptionHUDComponent* HUDComponent);                                                  // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup
	// void OnShowPortalPopup(bool bShow, bool bAnimate);                                                                       // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged
	// void OnPlayerCanInteractChanged(bool bPlayerCanInteract, FText& Message);                                                // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnLockStateChanged
	// void OnLockStateChanged();                                                                                               // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.IsInteractingDeviceAMatchmakingPortal
	// bool IsInteractingDeviceAMatchmakingPortal();                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow
	// bool HasActivityToShow();                                                                                                // [0xb918f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate
	// void HandleWidgetUpdate();                                                                                               // [0xb918f0c] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn
	// void HandleStartedRespawn(class AFortPlayerControllerZone* PlayerController);                                            // [0xb918e4c] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck
	// void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget);                                                             // [0x130d900] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged
	// void HandleLoadScreenChanged(class AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, FText HUDReason); // [0xb918c64] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow
	// void HandleHUDShow(bool bShow, bool bShouldAnimate);                                                                     // [0xb918b14] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget
	// class UFortAthenaCreativeMatchmakingWidget* GetMatchmakingFeedbackWidget(class UCommonActivatableWidget* MatchmakingFeedbackContainer); // [0x130d900] Event|Protected|BlueprintEvent|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData
	// bool GetIslandData(FMatchmakingPortalPopupData& OutIslandData, class UHeaderDescriptionHUDComponent* HUDComponent);      // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.BindOverlapEvents
	// void BindOverlapEvents();                                                                                                // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortModalBackground
/// Size: 0x0038 (0x000400 - 0x000438)
class UFortModalBackground : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_BackBoard                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x430, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* InTexture);                                                  // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortUIGameFeatureAction_OverridePortalHUDDetails : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SoftPortalHUDDetailsClass                                   OFFSET(get<T>, {0x28, 32, 0, 0})
};

