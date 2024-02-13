
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonInput
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DelMarCore
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: ModelViewViewModel
/// dependency: ModularGameplay
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UIChart
/// dependency: UMG

/// Class /Script/DelMarUI.DelMarUserWidget
/// Size: 0x0078 (0x0002E8 - 0x000360)
class UDelMarUserWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(EWidgetTransitionerInitialStatus)          InitialTransitionStatus                                     OFFSET(get<T>, {0x340, 1, 0, 0})
	CMember(ESlateVisibility)                          HiddenVisibility                                            OFFSET(get<T>, {0x341, 1, 0, 0})
	DMember(bool)                                      bAlwaysReverseInterruptedAnimations                         OFFSET(get<bool>, {0x342, 1, 0, 0})
	CMember(class UWidgetTransitioner*)                WidgetTransitioner                                          OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   NormalTransitionIn                                          OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   NormalTransitionOut                                         OFFSET(get<T>, {0x358, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarUserWidget.SetDisplayEnabled
	// void SetDisplayEnabled(bool bEnabled, bool bSkipAnimation);                                                              // [0xbb072c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarUserWidget.IsDisplayEnabled
	// bool IsDisplayEnabled();                                                                                                 // [0xbb065c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarUserWidget.HandleWidgetTransitionerStatusChanged
	// void HandleWidgetTransitionerStatusChanged(class UWidgetTransitioner* InTransitioner, EWidgetTransitionerStatus InStatus); // [0xbb06480] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarUserWidget.GetWidgetTransitioner
	// class UWidgetTransitioner* GetWidgetTransitioner();                                                                      // [0xbb05b24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarUserWidget.GetUIStateChartManager
	// class UUIStateChartManager* GetUIStateChartManager();                                                                    // [0xbb05ae8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarUserWidget.BP_Show
	// void BP_Show(bool bSkipAnimation);                                                                                       // [0xbb04f84] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarUserWidget.BP_Hide
	// void BP_Hide(bool bSkipAnimation);                                                                                       // [0xbb04888] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarCountdownTimerWidget
/// Size: 0x0040 (0x000360 - 0x0003A0)
class UDelMarCountdownTimerWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(class UTextBlock*)                         TextBlock_RemainingTime                                     OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(double)                                    InitialCoundownTime                                         OFFSET(get<double>, {0x368, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCountdownTimeChanged                                      OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCountdownTimeSet                                          OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCountdownTimeEnded                                        OFFSET(getStruct<T>, {0x390, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarCountdownTimerWidget.SetInitialCountdownTime
	// void SetInitialCountdownTime(double InTime);                                                                             // [0xbae2d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarCountdownTimerWidget.GetTimeRemainingSeconds
	// double GetTimeRemainingSeconds();                                                                                        // [0xbae26a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarDriverCameraWidget
/// Size: 0x0128 (0x000360 - 0x000488)
class UDelMarDriverCameraWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	CMember(class UWidgetAnimation*)                   DefaultIntercomAnimation                                    OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ReactiveDriverCamera_Persistent                             OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     ReactiveWidgetOutroDelay                                    OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     ReactiveWidgetMaxActiveTime                                 OFFSET(get<float>, {0x374, 4, 0, 0})
	CMember(TMap<FGameplayTag, FName>)                 MainChannelAnimationTagTable                                OFFSET(get<T>, {0x378, 80, 0, 0})
	CMember(TMap<int32_t, FDelMarReactiveWidgetAnimation>) ReactiveAnimationTable                                  OFFSET(get<T>, {0x3C8, 80, 0, 0})
	CMember(TMap<FName, UWidgetAnimation*>)            AnimationNameTable                                          OFFSET(get<T>, {0x418, 80, 0, 0})
	CMember(class UUMGSequencePlayer*)                 IntercomSequencePlayer                                      OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UUMGSequencePlayer*)                 ReactiveSequencePlayer                                      OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarDriverCameraWidget.GetAnimationNames
	// TArray<FName> GetAnimationNames();                                                                                       // [0xbae24a4] Final|Native|Protected|Const 
};

/// Class /Script/DelMarUI.DelMarInputActionRichTextBlockDecorator
/// Size: 0x0108 (0x000028 - 0x000130)
class UDelMarInputActionRichTextBlockDecorator : public URichTextBlockDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FSlateBrush)                               Icon                                                        OFFSET(getStruct<T>, {0x50, 192, 0, 0})
	CMember(class URichTextBlock*)                     OwnerWidget                                                 OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(TWeakObjectPtr<ULocalPlayer*>)             OwningLocalPlayer                                           OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputSubsystem*>)    CommonInputSubsystem                                        OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(TWeakObjectPtr<UEnhancedInputLocalPlayerSubsystem*>) EnhancedInputSubsystem                            OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/DelMarUI.DelMarListViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UDelMarListViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<class UMVVMViewModelBase*>)         Elements                                                    OFFSET(get<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarListViewModel.GetElements
	// TArray<UMVVMViewModelBase*> GetElements();                                                                               // [0xaa6d62c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarListViewModel.GetElementAt
	// class UMVVMViewModelBase* GetElementAt(int32_t InIndex);                                                                 // [0xbae24e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarPlayerIndicatorsContainer
/// Size: 0x0158 (0x000360 - 0x0004B8)
class UDelMarPlayerIndicatorsContainer : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(class UCanvasPanel*)                       IndicatorCanvas                                             OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UClass*)                             IndicatorWidgetClass                                        OFFSET(get<T>, {0x368, 8, 0, 0})
	SMember(FVector)                                   IndicatorOffset                                             OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	DMember(float)                                     RearVerticalHintThreshold                                   OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     RearIndicatorMaxDistance                                    OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     RearIndicatorMinDistance                                    OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     RearIndicatorRangeWidth                                     OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(float)                                     RearIndicatorRangeDegree                                    OFFSET(get<float>, {0x398, 4, 0, 0})
	DMember(float)                                     ForwardIndicatorMaxDistance                                 OFFSET(get<float>, {0x39C, 4, 0, 0})
	SMember(FAnchors)                                  IndicatorAnchors                                            OFFSET(getStruct<T>, {0x3A0, 32, 0, 0})
	SMember(FVector2D)                                 IndicatorAlignment                                          OFFSET(getStruct<T>, {0x3C0, 16, 0, 0})
	SMember(FVector2D)                                 RearIndicatorSize                                           OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
	CMember(class UCurveFloat*)                        RearDistanceScaleCurve                                      OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UCurveFloat*)                        RearDistanceOpacityCurve                                    OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UCurveFloat*)                        ForwardDistanceScaleCurve                                   OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UCurveFloat*)                        ForwardDistanceOpacityCurve                                 OFFSET(get<T>, {0x3F8, 8, 0, 0})
	DMember(int32_t)                                   MaxRearIndicators                                           OFFSET(get<int32_t>, {0x400, 4, 0, 0})
	DMember(int32_t)                                   MaxForwardIndicators                                        OFFSET(get<int32_t>, {0x404, 4, 0, 0})
	CMember(TWeakObjectPtr<UDelMarVehicleManager*>)    VehicleManager                                              OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           ViewingVehicle                                              OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         ViewingPlayerState                                          OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(TArray<FDelMarPlayerIndicatorData>)        IndicatorsData                                              OFFSET(get<T>, {0x420, 16, 0, 0})
	CMember(TMap<AFortPlayerState*, UDelMarPlayerIndicatorWidget*>) IndicatorWidgets                               OFFSET(get<T>, {0x430, 80, 0, 0})
	CMember(TArray<class UDelMarPlayerIndicatorWidget*>) IndicatorPool                                             OFFSET(get<T>, {0x480, 16, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPositionalTrackerComponent*>) PositionalTrackerComponent                         OFFSET(get<T>, {0x490, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarPlayerIndicatorsContainer.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xbae289c] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarPlayerIndicatorsContainer.HandleRacePlayersChanged
	// void HandleRacePlayersChanged(TMap<int32_t, UDelMarPlayerViewModel*>& RacePlayers);                                      // [0xbae27b8] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPlayerIndicatorsContainer.HandleIconOnlySettingChanged
	// void HandleIconOnlySettingChanged(bool bUseIconOnly);                                                                    // [0xbae26e0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarPlayerIndicatorWidget
/// Size: 0x0058 (0x0002C0 - 0x000318)
class UDelMarPlayerIndicatorWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class USizeBox*)                           AvatarSizeBox                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UFortLazyImage*)                     AvatarLazyImage                                             OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class USizeBox*)                           PlayerNameSizeBox                                           OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             UpArrowImage                                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UImage*)                             DownArrowImage                                              OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UOverlay*)                           BackgroundOverlay                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(float)                                     BehindAvatarSizeBoxWidth                                    OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     AheadAvatarSizeBoxWidth                                     OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(bool)                                      bBehindAvatarImageIsExpanded                                OFFSET(get<bool>, {0x304, 1, 0, 0})
	DMember(bool)                                      bAheadAvatarImageIsExpanded                                 OFFSET(get<bool>, {0x305, 1, 0, 0})
	DMember(float)                                     BehindPlayerNameSizeBoxMaxWidth                             OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     AheadPlayerNameSizeBoxMaxWidth                              OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(float)                                     BehindBackgroundOverlaySlotPadding                          OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     AheadBackgroundOverlaySlotPadding                           OFFSET(get<float>, {0x314, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarPlayerIndicatorWidget.BP_UpdateIndicator
	// void BP_UpdateIndicator(float Scale, float Opacity, bool bRearIndicator, EDelMarRearAlertVerticalHint VerticalHint);     // [0xbae2060] Native|Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarPlayerIndicatorWidget.BP_SetViewModel
	// void BP_SetViewModel(class UDelMarPlayerViewModel* ViewModel);                                                           // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarPlayerIndicatorWidget.BP_HideIndicator
	// void BP_HideIndicator();                                                                                                 // [0x130d900] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarExpandableHudWidget
/// Size: 0x00B0 (0x000360 - 0x000410)
class UDelMarExpandableHudWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(class UImage*)                             NavigateEntriesBindingImage                                 OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UClass*)                             ExpandableHudWidgetEntryClass                               OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(int32_t)                                   NumDesignerPreviewEntries                                   OFFSET(get<int32_t>, {0x388, 4, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(bool)                                      bExpanded                                                   OFFSET(get<bool>, {0x390, 1, 0, 0})
	DMember(bool)                                      bNavigationEnabled                                          OFFSET(get<bool>, {0x391, 1, 0, 0})
	CMember(class UTexture2D*)                         NavigateEntriesGamepadTexture                               OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UTexture2D*)                         NavigateEntriesPCTexture                                    OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UDelMarPlayerPreferencesComponent*)  PlayerPreferences                                           OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UOverlay*)                           EntryOverlay                                                OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class URetainerBox*)                       EdgeFadeRetainerBox                                         OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class USizeBox*)                           ContentSizeBox                                              OFFSET(get<T>, {0x3C0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExpandToggled                                             OFFSET(getStruct<T>, {0x3C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNavigationEnabledChanged                                  OFFSET(getStruct<T>, {0x3D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExpandableChanged                                         OFFSET(getStruct<T>, {0x3E8, 16, 0, 0})
	CMember(TArray<class UDelMarUserWidget*>)          DisplayedHudWidgetEntries                                   OFFSET(get<T>, {0x3F8, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarExpandableHudWidget.SetTargetInterpTransformY
	// void SetTargetInterpTransformY(float InTargetInterpTransformY);                                                          // [0xbb07d9c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarExpandableHudWidget.HandleToggleSettingChanged
	// void HandleToggleSettingChanged(bool bUseToggle);                                                                        // [0xbb05d0c] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarExpandableHudWidget.HandleToggleAction
	// void HandleToggleAction();                                                                                               // [0xbb05cf8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarExpandableHudWidget.BP_HandlePlayerPreferencesAdded
	// void BP_HandlePlayerPreferencesAdded(class UDelMarPlayerPreferencesComponent* InPlayerPreferences);                      // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarPositionalTrackerWidget
/// Size: 0x0018 (0x000410 - 0x000428)
class UDelMarPositionalTrackerWidget : public UDelMarExpandableHudWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	DMember(int32_t)                                   MinPlayersToStart                                           OFFSET(get<int32_t>, {0x410, 4, 0, 0})
	CMember(TArray<class UDelMarPlayerViewModel*>)     DisplayedPlayers                                            OFFSET(get<T>, {0x418, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarPositionalTrackerWidget.UpdatePlayerPositions
	// void UpdatePlayerPositions(TArray<UDelMarPlayerViewModel*> InPlayers);                                                   // [0xbae3258] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarScreenBase
/// Size: 0x0080 (0x000400 - 0x000480)
class UDelMarScreenBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(EWidgetTransitionerInitialStatus)          InitialTransitionStatus                                     OFFSET(get<T>, {0x458, 1, 0, 0})
	CMember(class UWidgetTransitioner*)                WidgetTransitioner                                          OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(bool)                                      bActivateOnShow                                             OFFSET(get<bool>, {0x468, 1, 0, 0})
	CMember(class UWidgetAnimation*)                   NormalTransitionIn                                          OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   NormalTransitionOut                                         OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarScreenBase.SetDisplayEnabled
	// void SetDisplayEnabled(bool bEnabled, bool bSkipAnimation);                                                              // [0xbb07170] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarScreenBase.IsDisplayEnabled
	// bool IsDisplayEnabled();                                                                                                 // [0x8fb1a80] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarScreenBase.HandleWidgetTransitionerStatusChanged
	// void HandleWidgetTransitionerStatusChanged(class UWidgetTransitioner* InTransitioner, EWidgetTransitionerStatus InStatus); // [0xbb06340] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarScreenBase.GetWidgetTransitioner
	// class UWidgetTransitioner* GetWidgetTransitioner();                                                                      // [0xbb05b0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarScreenBase.GetUIStateChartManager
	// class UUIStateChartManager* GetUIStateChartManager();                                                                    // [0xbb05ae8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarScreenBase.BP_Show
	// void BP_Show(bool bSkipAnimation);                                                                                       // [0xbb04ebc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarScreenBase.BP_Hide
	// void BP_Hide(bool bSkipAnimation);                                                                                       // [0xbb047c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarPostRaceLeaderboard
/// Size: 0x0018 (0x000480 - 0x000498)
class UDelMarPostRaceLeaderboard : public UDelMarScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	SMember(FDataTableRowHandle)                       FilterDataTableRow                                          OFFSET(getStruct<T>, {0x480, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarPostRaceLeaderboard.BP_UpdateLeaderboardFilter
	// void BP_UpdateLeaderboardFilter();                                                                                       // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarPostRaceScreen
/// Size: 0x0080 (0x000480 - 0x000500)
class UDelMarPostRaceScreen : public UDelMarScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	SMember(FDataTableRowHandle)                       TabNavLeftDataTableRow                                      OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FDataTableRowHandle)                       TabNavRightDataTableRow                                     OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReadyUpDataTableRow                                         OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SpectateDataTableRow                                        OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ResetRunDataTableRow                                        OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReturnToLobbyDataTableRow                                   OFFSET(getStruct<T>, {0x4D0, 16, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_PostMatchNavigation                             OFFSET(get<T>, {0x4E0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarPostRaceScreen.UpdateVote
	// void UpdateVote(EDelMarPostRaceVote NewVote);                                                                            // [0xbae3974] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPostRaceScreen.ResetRun
	// void ResetRun();                                                                                                         // [0xbae2aac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPostRaceScreen.RequestCountdown
	// void RequestCountdown();                                                                                                 // [0xbae2a74] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPostRaceScreen.BP_OnReadyUpChanged
	// void BP_OnReadyUpChanged(bool bReady);                                                                                   // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarPostRaceVoteWidget
/// Size: 0x0000 (0x000360 - 0x000360)
class UDelMarPostRaceVoteWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:


	/// Functions
	// Function /Script/DelMarUI.DelMarPostRaceVoteWidget.UpdateVote
	// void UpdateVote(EDelMarPostRaceVote NewVote);                                                                            // [0xbae3a34] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPostRaceVoteWidget.BP_OnPostRaceVoteChanged
	// void BP_OnPostRaceVoteChanged(EDelMarPostRaceVote Vote);                                                                 // [0x130d900] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarQuestScreenContainer
/// Size: 0x0010 (0x000360 - 0x000370)
class UDelMarQuestScreenContainer : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FName)                                     QuestTabID                                                  OFFSET(getStruct<T>, {0x360, 4, 0, 0})
	CMember(class UAthenaMapScreenContainer*)          AthenaScreenContainer                                       OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarQuestScreenContainer.HandleToggleQuestList
	// void HandleToggleQuestList();                                                                                            // [0xbae2888] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarQuestScreenContainer.HandleMapPanelExitButtonPressed
	// void HandleMapPanelExitButtonPressed();                                                                                  // [0xbae27a4] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarQuestScreenContainer.HandleAthenaScreenDeactivated
	// void HandleAthenaScreenDeactivated();                                                                                    // [0xbae26cc] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarRichTextInputSwitcher
/// Size: 0x00C8 (0x0002C0 - 0x000388)
class UDelMarRichTextInputSwitcher : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	DMember(bool)                                      bUseFormattedText                                           OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	SMember(FText)                                     TextFormat                                                  OFFSET(getStruct<T>, {0x2C8, 24, 0, 0})
	CMember(TMap<FString, FDelMarKeyPair>)             Args                                                        OFFSET(get<T>, {0x2E0, 80, 0, 0})
	SMember(FText)                                     TextKBM                                                     OFFSET(getStruct<T>, {0x330, 24, 0, 0})
	SMember(FText)                                     TextGamepad                                                 OFFSET(getStruct<T>, {0x348, 24, 0, 0})
	SMember(FText)                                     TextTouch                                                   OFFSET(getStruct<T>, {0x360, 24, 0, 0})
	CMember(class UCommonRichTextBlock*)               Widget_RichText                                             OFFSET(get<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarRichTextInputSwitcher.SetInputText
	// void SetInputText(FText InTextKBM, FText InTextGamepad, FText InTextTouch);                                              // [0xbae2e44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarSelectionListViewModel
/// Size: 0x0020 (0x000078 - 0x000098)
class UDelMarSelectionListViewModel : public UDelMarListViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(int32_t)                                   SelectedIndex                                               OFFSET(get<int32_t>, {0x78, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SetSelectedIndex
	// void SetSelectedIndex(int32_t InIndex);                                                                                  // [0xbae3198] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SetSelectedElement
	// void SetSelectedElement(class UMVVMViewModelBase* InSelectedElement);                                                    // [0xbae30a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SelectPreviousElement
	// void SelectPreviousElement(bool bAllowWrap);                                                                             // [0xbae2b9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SelectNextElement
	// void SelectNextElement(bool bAllowWrap);                                                                                 // [0xbae2ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SelectedElement
	// class UMVVMViewModelBase* SelectedElement();                                                                             // [0xbae2c78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.HasSelection
	// bool HasSelection();                                                                                                     // [0xbae2a58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x5938b5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.ClearSelection
	// void ClearSelection();                                                                                                   // [0xbae2370] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarTouchWidgetBase
/// Size: 0x0028 (0x000360 - 0x000388)
class UDelMarTouchWidgetBase : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(TArray<FDelMarTouchInputDefinition>)       InputActionsData                                            OFFSET(get<T>, {0x360, 16, 0, 0})
	DMember(bool)                                      bTrackInputPastBounds                                       OFFSET(get<bool>, {0x370, 1, 0, 0})
	DMember(bool)                                      bTrackInputFromEnter                                        OFFSET(get<bool>, {0x371, 1, 0, 0})
	DMember(bool)                                      bIsInjectingInput                                           OFFSET(get<bool>, {0x372, 1, 0, 0})
	CMember(EDelMarTouchInputTrackingState)            CurrentInputTrackingState                                   OFFSET(get<T>, {0x373, 1, 0, 0})
	CMember(ECommonInputMode)                          RequiredInputMode                                           OFFSET(get<T>, {0x374, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnTrackedInputUpdated
	// void OnTrackedInputUpdated(FPointerEvent& InGestureEvent);                                                               // [0xbb06f20] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnTrackedInputStarted
	// void OnTrackedInputStarted(FPointerEvent& InGestureEvent);                                                               // [0xbb06e78] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnTrackedInputEnded
	// void OnTrackedInputEnded(FPointerEvent& InGestureEvent, bool bCancelled);                                                // [0xbb06cc4] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnInputInjectionStarted
	// void OnInputInjectionStarted(FPointerEvent& InGestureEvent, EDelMarInputInjectionState InInjectedState);                 // [0xbb06b14] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnInputInjectionEnded
	// void OnInputInjectionEnded(FPointerEvent& InGestureEvent, EDelMarInputInjectionState InInjectedState);                   // [0xbb06964] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnActiveInputModeChanged
	// void OnActiveInputModeChanged(ECommonInputMode NewInputMode);                                                            // [0xbb06890] Final|Native|Private 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.IsGestureInsideHitbox
	// bool IsGestureInsideHitbox(FPointerEvent& InGestureEvent);                                                               // [0xbb065d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.GetHitboxGeometry
	// FGeometry GetHitboxGeometry();                                                                                           // [0xbb059f4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.CancelInputTracking
	// void CancelInputTracking();                                                                                              // [0xbb051e8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarTouchActionButton
/// Size: 0x0060 (0x000388 - 0x0003E8)
class UDelMarTouchActionButton : public UDelMarTouchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	CMember(EDelMarTouchActionButtonState)             State                                                       OFFSET(get<T>, {0x388, 1, 0, 0})
	CMember(TMap<EDelMarTouchActionButtonState, FDelMarTouchActionButtonStateData>) ButtonStateData                OFFSET(get<T>, {0x390, 80, 0, 0})
	DMember(bool)                                      bHighlightActive                                            OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	DMember(bool)                                      bIsUpdatingState                                            OFFSET(get<bool>, {0x3E1, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarTouchActionButton.SetIconBrush
	// void SetIconBrush(FSlateBrush& Brush);                                                                                   // [0x130d900] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchActionButton.SetHighlightActive
	// void SetHighlightActive(bool bValue);                                                                                    // [0x130d900] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchActionButton.SetButtonState
	// bool SetButtonState(EDelMarTouchActionButtonState NewState);                                                             // [0xbae2ca0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarTouchActionButton.SetBackgroundBrush
	// void SetBackgroundBrush(FSlateBrush& Brush);                                                                             // [0x130d900] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchActionButton.GetStateOnStopInputTracking
	// EDelMarTouchActionButtonState GetStateOnStopInputTracking(bool bInputCancelled);                                         // [0xbae25cc] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/DelMarUI.DelMarTouchActionButton.GetState
	// EDelMarTouchActionButtonState GetState();                                                                                // [0xbae25b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarTouchActionButton.CanSetState
	// bool CanSetState(EDelMarTouchActionButtonState NewState);                                                                // [0xbae229c] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarTouchRegion
/// Size: 0x0010 (0x000388 - 0x000398)
class UDelMarTouchRegion : public UDelMarTouchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(TArray<class UDelMarTouchActionButton*>)   TouchActionButtons                                          OFFSET(get<T>, {0x388, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarTouchRegion.FindButtonByInputAction
	// class UDelMarTouchActionButton* FindButtonByInputAction(class UInputAction* InputAction);                                // [0xbae2388] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarUICheatManager
/// Size: 0x0058 (0x000028 - 0x000080)
class UDelMarUICheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UDynamicUIScene*)                    DriverCameraHiddenScene                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    PlayerIndicatorHiddenScene                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    RubberbandingWidgetVisibleScene                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    StaticVehicleMeterHiddenScene                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    VehicleDebugVisibleScene                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    CheckpointDebugWidgetScene                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    MapNameDebugWidgetScene                                     OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    GameplayTrackList                                           OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bAttachedWidgetEnabled                                      OFFSET(get<bool>, {0x68, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarUICheatManager.OnAddedToCheatManagerNative
	// void OnAddedToCheatManagerNative();                                                                                      // [0x3047908] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarVehicleDebugWidgetSetVisible
	// void DelMarVehicleDebugWidgetSetVisible(bool bVisible);                                                                  // [0x5d6b308] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarUseToggleForExpandableHudWidget
	// void DelMarUseToggleForExpandableHudWidget(bool bUseToggle);                                                             // [0x5d6b308] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarUISetVisible
	// void DelMarUISetVisible(bool bVisible);                                                                                  // [0x5d6b308] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarTouchHUD
	// void DelMarTouchHUD(FString TouchHUDType);                                                                               // [0x65e4080] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarSetHint
	// void DelMarSetHint(FText HintText, float RemoveAfterDelay);                                                              // [0xbb057f4] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarRubberbandingWidgetSetVisible
	// void DelMarRubberbandingWidgetSetVisible(bool bVisible);                                                                 // [0x5d6b308] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarRequestDialogByTag
	// void DelMarRequestDialogByTag(FGameplayTag tag);                                                                         // [0xbb056a0] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarPlayerIndicatorsVisible
	// void DelMarPlayerIndicatorsVisible(bool bVisible);                                                                       // [0x5d6b308] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarOpenTrackList
	// void DelMarOpenTrackList();                                                                                              // [0x3047908] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarMapNameDebugWidgetSetVisible
	// void DelMarMapNameDebugWidgetSetVisible(bool bVisible);                                                                  // [0x5d6b308] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarDriverCameraSetReactiveType
	// void DelMarDriverCameraSetReactiveType(int32_t Type);                                                                    // [0x640d3e0] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarDriverCameraSetHidden
	// void DelMarDriverCameraSetHidden(bool bHidden);                                                                          // [0x5d6b308] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarDismissDialog
	// void DelMarDismissDialog();                                                                                              // [0xbb05648] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarCloseTrackList
	// void DelMarCloseTrackList();                                                                                             // [0x3047908] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarCheckpointDebugWidgetSetVisible
	// void DelMarCheckpointDebugWidgetSetVisible(bool bVisible);                                                               // [0x5d6b308] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarAttachedWidgetSetEnabled
	// void DelMarAttachedWidgetSetEnabled(bool bEnabled);                                                                      // [0x5d6b308] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarUI.FortGameSettingRegistryExtension_DelMar
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_DelMar : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarUI.UIAnimationController
/// Size: 0x0010 (0x000028 - 0x000038)
class UUIAnimationController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/DelMarUI.UIAnimationController.SwitchPlayDirection
	// void SwitchPlayDirection();                                                                                              // [0x387d4f0] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.Stop
	// void Stop();                                                                                                             // [0x192dd64] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.Rewind
	// void Rewind();                                                                                                           // [0x156e344] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.PlayForward
	// void PlayForward();                                                                                                      // [0x16aa59c] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.PlayBackward
	// void PlayBackward();                                                                                                     // [0x60ab0dc] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.JumpToEnd
	// void JumpToEnd();                                                                                                        // [0x21a24b8] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.JumpToBeginning
	// void JumpToBeginning();                                                                                                  // [0x186c4f8] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x9d5768c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.UIAnimationController.GetDuration
	// float GetDuration();                                                                                                     // [0x9d530f0] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.FastForward
	// void FastForward();                                                                                                      // [0x6200a90] Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.UITimelineAnimationController
/// Size: 0x0020 (0x000038 - 0x000058)
class UUITimelineAnimationController : public UUIAnimationController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UUserWidget*)                        WidgetTarget                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Animation                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UUMGSequencePlayer*)                 ActivePlayer                                                OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.UITimelineAnimationController.CreateInstance
	// class UUITimelineAnimationController* CreateInstance(class UUserWidget* WidgetTarget, class UWidgetAnimation* Animation); // [0xbb051fc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DelMarUI.UIAnimationControllerEntry
/// Size: 0x0010 (0x000028 - 0x000038)
class UUIAnimationControllerEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UUIAnimationController*)             AnimationController                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bIsInverted                                                 OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/DelMarUI.WidgetTransitioner
/// Size: 0x00E0 (0x000028 - 0x000108)
class UWidgetTransitioner : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnTransitionerStatusChanged                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UWidget*)                            TargetWidget                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ESlateVisibility)                          HiddenVisibility                                            OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(ESlateVisibility)                          ShownVisibility                                             OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(EWidgetTransitionerStatus)                 TransitionerStatus                                          OFFSET(get<T>, {0x42, 1, 0, 0})
	CMember(class UUIAnimationControllerEntry*)        NormalTransitionIn                                          OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UUIAnimationControllerEntry*)        NormalTransitionOut                                         OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TMap<FGameplayTag, UUIAnimationControllerEntry*>) HintedTransitionsIn                                  OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FGameplayTag, UUIAnimationControllerEntry*>) HintedTransitionsOut                                 OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(class UUIAnimationControllerEntry*)        ActiveEntry                                                 OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bAlwaysReverseInterruptedAnimations                         OFFSET(get<bool>, {0x100, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.WidgetTransitioner.WidgetTransitionerStatusChange__DelegateSignature
	// void WidgetTransitionerStatusChange__DelegateSignature(class UWidgetTransitioner* Transitioner, EWidgetTransitionerStatus Status); // [0x130d900] MulticastDelegate|Public|Delegate 
	// Function /Script/DelMarUI.WidgetTransitioner.SetNormalTransitionPair
	// void SetNormalTransitionPair(class UUIAnimationController* InAnimation, bool bIsTransitionIn);                           // [0xbb07c5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.SetNormalTransitionOut
	// void SetNormalTransitionOut(class UUIAnimationController* InAnimationOut, bool bInvert);                                 // [0xbb07b1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.SetNormalTransitionIn
	// void SetNormalTransitionIn(class UUIAnimationController* InAnimationIn, bool bInvert);                                   // [0xbb079dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.IsHidden
	// bool IsHidden();                                                                                                         // [0xbb066ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.WidgetTransitioner.GetTransitionerStatus
	// EWidgetTransitionerStatus GetTransitionerStatus();                                                                       // [0xbb05ad4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.WidgetTransitioner.CreateInstance
	// class UWidgetTransitioner* CreateInstance(class UWidget* TargetWidget, EWidgetTransitionerInitialStatus InitialStatus, ESlateVisibility HiddenVisibility, ESlateVisibility ShownVisibility, bool AlwaysReverseInterruptedAnimations); // [0xbb0534c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarUI.WidgetTransitioner.BP_Show
	// void BP_Show(bool bSkipAnimation, FGameplayTagContainer AnimationHints);                                                 // [0xbb0504c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.BP_Initialize
	// class UWidgetTransitioner* BP_Initialize(class UWidget* TargetWidget, EWidgetTransitionerInitialStatus InitialStatus, ESlateVisibility HiddenVisibility, ESlateVisibility ShownVisibility, bool AlwaysReverseInterruptedAnimations); // [0xbb04ae8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.BP_Hide
	// void BP_Hide(bool bSkipAnimation, FGameplayTagContainer AnimationHints);                                                 // [0xbb0494c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.AddHintedTransitionPair
	// void AddHintedTransitionPair(FGameplayTag InAnimationHint, class UUIAnimationController* InAnimation, bool bIsTransitionIn); // [0xbb045ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.AddHintedTransitionOut
	// void AddHintedTransitionOut(FGameplayTag InAnimationHint, class UUIAnimationController* InAnimationOut, bool bInvert);   // [0xbb04430] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.AddHintedTransitionIn
	// void AddHintedTransitionIn(FGameplayTag InAnimationHint, class UUIAnimationController* InAnimationIn, bool bInvert);     // [0xbb04274] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarActionWidget
/// Size: 0x02E8 (0x000178 - 0x000460)
class UDelMarActionWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FMulticastInlineDelegate)                  OnInputMethodChanged                                        OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FSlateBrush)                               ProgressMaterialBrush                                       OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FName)                                     ProgressMaterialParam                                       OFFSET(getStruct<T>, {0x250, 4, 0, 0})
	SMember(FSlateBrush)                               IconRimBrush                                                OFFSET(getStruct<T>, {0x260, 192, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               InputActions                                                OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(class UInputAction*)                       EnhancedInputAction                                         OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ProgressDynamicMaterial                                     OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarActionWidget.SetInputActions
	// void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                       // [0xbb077dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarActionWidget.SetInputAction
	// void SetInputAction(FDataTableRowHandle InputActionRow);                                                                 // [0xbb076b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarActionWidget.SetIconRimBrush
	// void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                        // [0xbb075b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarActionWidget.SetEnhancedInputAction
	// void SetEnhancedInputAction(class UInputAction* InInputAction);                                                          // [0xbb074d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarActionWidget.OnInputMethodChanged__DelegateSignature
	// void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                        // [0x130d900] MulticastDelegate|Public|Delegate 
	// Function /Script/DelMarUI.DelMarActionWidget.IsHeldAction
	// bool IsHeldAction();                                                                                                     // [0xbb06688] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarActionWidget.GetIcon
	// FSlateBrush GetIcon();                                                                                                   // [0xbb05a48] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarActionWidget.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0xbb05994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarDialogBase
/// Size: 0x0018 (0x000400 - 0x000418)
class UDelMarDialogBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:


	/// Functions
	// Function /Script/DelMarUI.DelMarDialogBase.DismissDialog
	// void DismissDialog();                                                                                                    // [0xbb0595c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarDialogHelper
/// Size: 0x0050 (0x000028 - 0x000078)
class UDelMarDialogHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FGameplayTag, TWeakObjectPtr<UClass*>>) DialogMapping                                             OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/DelMarUI.DelMarInputConfigWidgetBase
/// Size: 0x0008 (0x000400 - 0x000408)
class UDelMarInputConfigWidgetBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	SMember(FUIInputConfig)                            DesiredInputConfig                                          OFFSET(getStruct<T>, {0x400, 6, 0, 0})
	DMember(bool)                                      bFlushPlayerInputWhenActivating                             OFFSET(get<bool>, {0x406, 1, 0, 0})
	DMember(bool)                                      bFlushPlayerInputWhenDeactivating                           OFFSET(get<bool>, {0x407, 1, 0, 0})
};

/// Class /Script/DelMarUI.DelMarLoadingScreenHelper
/// Size: 0x0140 (0x000028 - 0x000168)
class UDelMarLoadingScreenHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FVector2D)                                 BackgroundDesiredSize                                       OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CustomLoadingWidget                                         OFFSET(get<T>, {0x38, 32, 0, 0})
	SMember(FZoneLoadingScreenConfig)                  ZoneConfig                                                  OFFSET(getStruct<T>, {0x58, 272, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarLoadingScreenHelper.PrepareDelMarLoadingScreen
	// void PrepareDelMarLoadingScreen(class UObject* WorldContextObject);                                                      // [0xbb06fc8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarUIDirector
/// Size: 0x0010 (0x0002B0 - 0x0002C0)
class ADelMarUIDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class UClass*)                             DialogHelperClass                                           OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UDelMarDialogHelper*)                DialogHelper                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarUIDirector.SetLoadingScreenVisibiliy
	// void SetLoadingScreenVisibiliy(bool bVisible);                                                                           // [0xbb078f4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarUIGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarUIGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarUI.DelMarAttachedWidgetActor
/// Size: 0x0058 (0x000290 - 0x0002E8)
class ADelMarAttachedWidgetActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	DMember(float)                                     DriftFollowDampening                                        OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(float)                                     WallFollowDampening                                         OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(float)                                     RotateDampeningRate                                         OFFSET(get<float>, {0x298, 4, 0, 0})
	CMember(class APlayerState*)                       ViewPlayerState                                             OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class USceneComponent*)                    AttachedTarget                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class ADelMarVehicle*)                     AttachedVehicle                                             OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class APlayerCameraManager*)               CameraManager                                               OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class USceneComponent*)                    AttachmentBaseComponent                                     OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UDelMarWidgetComponent*)             SpeedometerWidget                                           OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UDelMarWidgetComponent*)             DriftBoostWidget                                            OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UDelMarWidgetComponent*)             UnderthrustWidget                                           OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/DelMarUI.DelMarAttachedWidgetComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarAttachedWidgetComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class UClass*>)                     AttachedWidgetActorsClass                                   OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<class ADelMarAttachedWidgetActor*>) AttachedWidgetActors                                        OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarAttachedWidgetComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xbb05e90] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarWidgetComponent
/// Size: 0x0020 (0x000670 - 0x000690)
class UDelMarWidgetComponent : public UWidgetComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	SMember(FVector2D)                                 LeftTopPadding                                              OFFSET(getStruct<T>, {0x670, 16, 0, 0})
	SMember(FVector2D)                                 RightBottomPadding                                          OFFSET(getStruct<T>, {0x680, 16, 0, 0})
};

/// Class /Script/DelMarUI.DelMarDebugCountdown
/// Size: 0x0038 (0x000480 - 0x0004B8)
class UDelMarDebugCountdown : public UDelMarScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(class UCommonRichTextBlock*)               CountdownText                                               OFFSET(get<T>, {0x480, 8, 0, 0})
};

/// Class /Script/DelMarUI.DelMarStartlineCountdownWidget
/// Size: 0x0038 (0x000360 - 0x000398)
class UDelMarStartlineCountdownWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedDelMarVehicle                                         OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* PC, class AActor* Old, class AActor* NewViewTarget);           // [0xbb0604c] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.GetNumTotalIntervals
	// int32_t GetNumTotalIntervals();                                                                                          // [0xbb05ab4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.GetNumActiveIntervals
	// int32_t GetNumActiveIntervals();                                                                                         // [0xbb05a90] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnStartlineBoostFailed
	// void BP_OnStartlineBoostFailed();                                                                                        // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnStartlineBoostActivated
	// void BP_OnStartlineBoostActivated(float PercentageMaxBonusSpeedEarned);                                                  // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnRaceStarted
	// void BP_OnRaceStarted();                                                                                                 // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnCountdownStarted
	// void BP_OnCountdownStarted(int32_t TotalIntervals);                                                                      // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnActiveIntervalsChanged
	// void BP_OnActiveIntervalsChanged(int32_t NumActiveIntervals);                                                            // [0x130d900] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarCheckpointTrackerEntryWidget
/// Size: 0x0020 (0x000360 - 0x000380)
class UDelMarCheckpointTrackerEntryWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(class UWidgetAnimation*)                   AnimTransitionIn                                            OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarCheckpointTrackerEntryWidget.BP_OnDisplayedCheckpointChanged
	// void BP_OnDisplayedCheckpointChanged(FDelMarSectionData& InSectionData);                                                 // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarCheckpointTrackerWidget
/// Size: 0x0048 (0x000360 - 0x0003A8)
class UDelMarCheckpointTrackerWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(class UClass*)                             CheckpointTrackerEntryClass                                 OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(int32_t)                                   NumDesignerPreviewEntries                                   OFFSET(get<int32_t>, {0x368, 4, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x36C, 4, 0, 0})
	DMember(int32_t)                                   MaxEntriesToDisplay                                         OFFSET(get<int32_t>, {0x370, 4, 0, 0})
	CMember(class UOverlay*)                           CheckpointEntryOverlay                                      OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class URetainerBox*)                       EdgeFadeRetainerBox                                         OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class USizeBox*)                           TrackerSizeBox                                              OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(TArray<class UDelMarCheckpointTrackerEntryWidget*>) DisplayedCheckpointTrackerEntries                  OFFSET(get<T>, {0x390, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarCheckpointTrackerWidget.UpdateCheckpoints
	// void UpdateCheckpoints(TArray<FDelMarSectionData> InCheckpoints);                                                        // [0xbb07e60] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarBladeMenuContainer
/// Size: 0x0010 (0x000480 - 0x000490)
class UDelMarBladeMenuContainer : public UDelMarScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(class UFortDualBladeMenu*)                 DualBladeMenu                                               OFFSET(get<T>, {0x480, 8, 0, 0})
	SMember(FGameplayTag)                              CloseBladeMenuTriggerTag                                    OFFSET(getStruct<T>, {0x488, 4, 0, 0})
};

/// Class /Script/DelMarUI.DelMarCheckpointTimer
/// Size: 0x0030 (0x000480 - 0x0004B0)
class UDelMarCheckpointTimer : public UDelMarScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	CMember(class UCommonTextBlock*)                   Text_LapCount                                               OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_CheckpointIndex                                        OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Timestamp                                              OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_LapTimestamp                                           OFFSET(get<T>, {0x498, 8, 0, 0})
};

/// Class /Script/DelMarUI.DelMarDebugRubberbandingWidget
/// Size: 0x0048 (0x000360 - 0x0003A8)
class UDelMarDebugRubberbandingWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	DMember(bool)                                      bRubberbandingEnabled                                       OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(float)                                     PackDistance                                                OFFSET(get<float>, {0x364, 4, 0, 0})
	DMember(float)                                     MinPackDistance                                             OFFSET(get<float>, {0x368, 4, 0, 0})
	DMember(float)                                     MaxPackDistance                                             OFFSET(get<float>, {0x36C, 4, 0, 0})
	DMember(float)                                     DistanceToPack                                              OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     MinDistanceFromPack                                         OFFSET(get<float>, {0x374, 4, 0, 0})
	DMember(float)                                     MaxDistanceFromPack                                         OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x37C, 4, 0, 0})
	DMember(float)                                     StableSpeed                                                 OFFSET(get<float>, {0x380, 4, 0, 0})
	DMember(float)                                     AppliedBonusSpeed                                           OFFSET(get<float>, {0x384, 4, 0, 0})
	DMember(float)                                     DistanceToPackRatio                                         OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     MaxBonusSpeedAtPosition                                     OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     MaxSpeedAtPosition                                          OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     MaxAllowedBonusSpeed                                        OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(float)                                     BonusSpeedGainedPerSecond                                   OFFSET(get<float>, {0x398, 4, 0, 0})
	DMember(float)                                     BonusSpeedLostPerSecond                                     OFFSET(get<float>, {0x39C, 4, 0, 0})
	DMember(int32_t)                                   MMRUsed                                                     OFFSET(get<int32_t>, {0x3A0, 4, 0, 0})
	DMember(float)                                     MaxBonusSpeedScalar                                         OFFSET(get<float>, {0x3A4, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarDebugRubberbandingWidget.BP_OnRubberbandingUpdated
	// void BP_OnRubberbandingUpdated();                                                                                        // [0x130d900] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarDebugVehicleWidget
/// Size: 0x00B8 (0x000360 - 0x000418)
class UDelMarDebugVehicleWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	DMember(float)                                     BaseTargetSpeed                                             OFFSET(get<float>, {0x360, 4, 0, 0})
	DMember(float)                                     FinalTargetSpeed                                            OFFSET(get<float>, {0x364, 4, 0, 0})
	DMember(float)                                     OversteerPercentage                                         OFFSET(get<float>, {0x368, 4, 0, 0})
	DMember(bool)                                      bHasValidDraftingTarget                                     OFFSET(get<bool>, {0x36C, 1, 0, 0})
	CMember(EDelmarDraftingState)                      DraftingState                                               OFFSET(get<T>, {0x36D, 1, 0, 0})
	DMember(float)                                     DraftingBonusSpeed                                          OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     SecondsInDrift                                              OFFSET(get<float>, {0x374, 4, 0, 0})
	DMember(float)                                     AccumulatedWaitingPeriodSeconds                             OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     DriftBoostBonusSpeed                                        OFFSET(get<float>, {0x37C, 4, 0, 0})
	DMember(float)                                     DriftBoostDuration                                          OFFSET(get<float>, {0x380, 4, 0, 0})
	DMember(float)                                     DriftBoostDurationSecondsLeft                               OFFSET(get<float>, {0x384, 4, 0, 0})
	DMember(float)                                     PotentialDriftBoostBonusSpeed                               OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     PotentialDriftBoostDuration                                 OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     QueuedDriftBoostBonusSpeed                                  OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     StartlineBonusSpeed                                         OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(float)                                     TurboBonusSpeed                                             OFFSET(get<float>, {0x398, 4, 0, 0})
	DMember(float)                                     TurboZoneBonusSpeed                                         OFFSET(get<float>, {0x39C, 4, 0, 0})
	DMember(float)                                     TurboSecondsRemaining                                       OFFSET(get<float>, {0x3A0, 4, 0, 0})
	DMember(float)                                     TurboCharges                                                OFFSET(get<float>, {0x3A4, 4, 0, 0})
	DMember(float)                                     WorldBonusSpeed                                             OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(float)                                     TotalBonusSpeed                                             OFFSET(get<float>, {0x3AC, 4, 0, 0})
	SMember(FDelMarTerrainData)                        TerrainData                                                 OFFSET(getStruct<T>, {0x3B0, 24, 0, 0})
	DMember(int32_t)                                   NumWheelWorldContacts                                       OFFSET(get<int32_t>, {0x3C8, 4, 0, 0})
	SMember(FVector)                                   AverageWheelWorldContactNormal                              OFFSET(getStruct<T>, {0x3D0, 24, 0, 0})
	DMember(float)                                     MinimumLandingSpeed                                         OFFSET(get<float>, {0x3E8, 4, 0, 0})
	DMember(float)                                     BaseForwardSpeed                                            OFFSET(get<float>, {0x3EC, 4, 0, 0})
	DMember(float)                                     StableSpeed                                                 OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(float)                                     UpwardSpeed                                                 OFFSET(get<float>, {0x3F4, 4, 0, 0})
	DMember(float)                                     VehicleSpeed                                                OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(bool)                                      bInvertedSteeringActive                                     OFFSET(get<bool>, {0x3FC, 1, 0, 0})
	DMember(float)                                     MaxForwardSpeed                                             OFFSET(get<float>, {0x400, 4, 0, 0})
	DMember(float)                                     SecondsSinceTerrainPenalty                                  OFFSET(get<float>, {0x404, 4, 0, 0})
	DMember(int32_t)                                   KickflipActivationCharges                                   OFFSET(get<int32_t>, {0x408, 4, 0, 0})
	DMember(bool)                                      bStrafeDisabled                                             OFFSET(get<bool>, {0x40C, 1, 0, 0})
	DMember(bool)                                      bCanActivateStrafe                                          OFFSET(get<bool>, {0x40D, 1, 0, 0})
	DMember(float)                                     StrafeCooldownSeconds                                       OFFSET(get<float>, {0x410, 4, 0, 0})
	DMember(float)                                     StrafeCooldownPercentage                                    OFFSET(get<float>, {0x414, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarDebugVehicleWidget.BP_OnVehicleUpdated
	// void BP_OnVehicleUpdated();                                                                                              // [0x130d900] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarReadyUpWidget
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UDelMarReadyUpWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/DelMarUI.DelMarReadyUpWidget.BP_ReadyUp
	// void BP_ReadyUp(bool bReady);                                                                                            // [0xbb04df8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarReadyUpWidget.BP_OnReadyUpChanged
	// void BP_OnReadyUpChanged(bool bReady);                                                                                   // [0x130d900] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarTurboBonusZoneWidget
/// Size: 0x0008 (0x000360 - 0x000368)
class UDelMarTurboBonusZoneWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedDelMarVehicle                                         OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarTurboBonusZoneWidget.HandleTurboStateChange
	// void HandleTurboStateChange(EDelMarTurboZoneState NewState);                                                             // [0xbb05dd0] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarTurboBonusZoneWidget.BP_OnTurboZoneStateChanged
	// void BP_OnTurboZoneStateChanged(EDelMarTurboZoneState NewState);                                                         // [0x130d900] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarPositionalTrackerEntryWidget
/// Size: 0x0020 (0x000360 - 0x000380)
class UDelMarPositionalTrackerEntryWidget : public UDelMarUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FMulticastInlineDelegate)                  OnDisplayedPlayerSet                                        OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	CMember(class UWidgetAnimation*)                   AnimIsTargetPlayer                                          OFFSET(get<T>, {0x370, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarPositionalTrackerEntryWidget.SetDisplayedPlayer
	// void SetDisplayedPlayer(class UDelMarPlayerViewModel* InPlayerModel);                                                    // [0xbb07418] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPositionalTrackerEntryWidget.RefreshPlayerInfo
	// void RefreshPlayerInfo(bool IsTargetPlayer);                                                                             // [0xbb07088] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarLoadingScreenWidget
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UDelMarLoadingScreenWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TArray<FText>)                             LoadingScreenTips                                           OFFSET(get<T>, {0x2F0, 16, 0, 0})
};

/// Class /Script/DelMarUI.DelMarPostRaceRankedRecap
/// Size: 0x0000 (0x000400 - 0x000400)
class UDelMarPostRaceRankedRecap : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:


	/// Functions
	// Function /Script/DelMarUI.DelMarPostRaceRankedRecap.GetFailsafeDelayDuration
	// float GetFailsafeDelayDuration();                                                                                        // [0xbb059d8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarDebugTrackEntry
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UDelMarDebugTrackEntry : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UCommonTextBlock*)                   TrackNameText                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UDelMarLevelDataAsset*)              LevelDataAsset                                              OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarDebugTrackEntry.BP_OnTrackButtonPressed
	// void BP_OnTrackButtonPressed();                                                                                          // [0x25a3d14] Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarDebugGameplayTrackEntry
/// Size: 0x0008 (0x0002D8 - 0x0002E0)
class UDelMarDebugGameplayTrackEntry : public UDelMarDebugTrackEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UDynamicUIScene*)                    GameplayTrackListScene                                      OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/DelMarUI.DelMarDebugTrackList
/// Size: 0x0010 (0x000480 - 0x000490)
class UDelMarDebugTrackList : public UDelMarScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(class UCommonListView*)                    TrackView                                                   OFFSET(get<T>, {0x480, 8, 0, 0})
	DMember(bool)                                      bOnlyReturnAllowedLevels                                    OFFSET(get<bool>, {0x488, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarDebugTrackList.BP_OnExitButtonPressed
	// void BP_OnExitButtonPressed();                                                                                           // [0xbb04dcc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarBoundActionButton
/// Size: 0x0020 (0x0014B0 - 0x0014D0)
class UDelMarBoundActionButton : public UCommonBoundActionButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(class UButton*)                            Button_OptionalPCInput                                      OFFSET(get<T>, {0x14A8, 8, 0, 0})
	CMember(class UClass*)                             KeyboardStyle                                               OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(class UClass*)                             GamepadStyle                                                OFFSET(get<T>, {0x14C8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarBoundActionButton.OnButtonClicked
	// void OnButtonClicked();                                                                                                  // [0xbb06950] Final|Native|Private 
};

/// Class /Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponent
/// Size: 0x0010 (0x000048 - 0x000058)
class UDelMarBladeMenuTriggerUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UDelMarBladeMenuTriggerUIStateComponentConfiguration*) Configuration                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UFortHUDContext*)                    HUDContext                                                  OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponent.NativeHandleCursorModeChanged
	// void NativeHandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget); // [0xbb066c4] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponentConfiguration
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarBladeMenuTriggerUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              BladeMenuTriggerTag                                         OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponent
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UDelMarGameplayContextUpdaterUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FGameplayTag, FString>)               GameStateToUITagMap                                         OFFSET(get<T>, {0x48, 80, 0, 0})
	SMember(FGameplayTag)                              CurrentRacerState                                           OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	SMember(FGameplayTag)                              CurrentGameState                                            OFFSET(getStruct<T>, {0x9C, 4, 0, 0})
	SMember(FGameplayTag)                              CurrentRaceMode                                             OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         OwnerPlayerState                                            OFFSET(get<T>, {0xA4, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         SpectatedPlayerState                                        OFFSET(get<T>, {0xAC, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    OwnerPlayerController                                       OFFSET(get<T>, {0xB4, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarLevelManagerComponent*>) LevelManager                                            OFFSET(get<T>, {0xBC, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponent.HandleSpectatorViewTargetChange
	// void HandleSpectatorViewTargetChange(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xbb05b3c] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponentConfiguration
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarGameplayContextUpdaterUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarUI.DelMarViewModelBase
/// Size: 0x0000 (0x000068 - 0x000068)
class UDelMarViewModelBase : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:


	/// Functions
	// Function /Script/DelMarUI.DelMarViewModelBase.TryGetOwningLocalPlayer
	// class ULocalPlayer* TryGetOwningLocalPlayer();                                                                           // [0xbb1bfdc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarLoadingScreenViewModel
/// Size: 0x0078 (0x000068 - 0x0000E0)
class UDelMarLoadingScreenViewModel : public UDelMarViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bHasValidTrackData                                          OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FText)                                     MapName                                                     OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FText)                                     MapCreator                                                  OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FText)                                     MapDescription                                              OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FGameplayTag)                              RaceMode                                                    OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               LoadingBackgroundImage                                      OFFSET(get<T>, {0xC0, 32, 0, 0})
};

/// Class /Script/DelMarUI.DelMarLocalPlayerSettingsViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UDelMarLocalPlayerSettingsViewModel : public UDelMarViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bUseIconOnlyPlayerNameplates                                OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPlayerPreferencesComponent*>) CachedPreferences                                  OFFSET(get<T>, {0x6C, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarLocalPlayerSettingsViewModel.HandleNameplatesSettingChanged
	// void HandleNameplatesSettingChanged(bool NewValue);                                                                      // [0xbb1b4ac] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarPlayerRaceStateViewModel
/// Size: 0x0088 (0x000068 - 0x0000F0)
class UDelMarPlayerRaceStateViewModel : public UDelMarViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bHasValidData                                               OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(int32_t)                                   CurrentLap                                                  OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bHasCompletedRace                                           OFFSET(get<bool>, {0x70, 1, 0, 0})
	SMember(FTimespan)                                 RaceCompletionTime                                          OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	DMember(int32_t)                                   SpectatorCount                                              OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   CurrentPlacement                                            OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   CurrentPlacementByBestRun                                   OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(double)                                    CurrentRunStartTimestamp                                    OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(int32_t)                                   LastCompletedSectionIndex                                   OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(bool)                                      bIsNewBestRun                                               OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(bool)                                      bRunActive                                                  OFFSET(get<bool>, {0x9D, 1, 0, 0})
	CMember(class UDelMarRunRecordViewModel*)          CurrentRunRecord                                            OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UDelMarRunRecordViewModel*)          BestRunRecord                                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UDelMarRunRecordViewModel*)          PreviousBestRunRecord                                       OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<class UDelMarRunRecordViewModel*>)  MatchRunRecords                                             OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(class UDelMarVehicleViewModel*)            Vehicle                                                     OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FGameplayTag)                              PreviousRacerState                                          OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0xD4, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0xDC, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPositionalTrackerComponent*>) PositionalTrackerComponent                         OFFSET(get<T>, {0xE4, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarPlayerRaceStateViewModel.HandleRaceReset
	// void HandleRaceReset();                                                                                                  // [0xbb1b7b8] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarPlayerViewModel
/// Size: 0x0080 (0x000068 - 0x0000E8)
class UDelMarPlayerViewModel : public UDelMarViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               AvatarLargeImage                                            OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               AvatarSmallImage                                            OFFSET(get<T>, {0xA0, 32, 0, 0})
	SMember(FColor)                                    AvatarBackgroundColor                                       OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FColor)                                    AvatarHighlightColor                                        OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	CMember(class UTextureRenderTarget2D*)             DriverCameraRT                                              OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UDelMarPlayerRaceStateViewModel*)    PlayerRaceState                                             OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarPlayerViewModel.GetPlayerState
	// class AFortPlayerState* GetPlayerState();                                                                                // [0xbb1a8a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarRaceViewModel
/// Size: 0x0168 (0x000068 - 0x0001D0)
class UDelMarRaceViewModel : public UDelMarViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(int32_t)                                   TotalLaps                                                   OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   TotalPlayers                                                OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   TotalReadyPlayers                                           OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   TotalLoadedPlayers                                          OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   TotalJoiningPlayers                                         OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   TotalPlacements                                             OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	SMember(FText)                                     MapName                                                     OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FText)                                     MapCreator                                                  OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	SMember(FText)                                     MapDescription                                              OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FGameplayTag)                              RaceMode                                                    OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FGameplayTag)                              DelMarGameplayState                                         OFFSET(getStruct<T>, {0xCC, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               LoadingBackgroundImage                                      OFFSET(get<T>, {0xD0, 32, 0, 0})
	DMember(double)                                    TimeUntilRaceStart                                          OFFSET(get<double>, {0xF0, 8, 0, 0})
	DMember(double)                                    RaceEndTimestamp                                            OFFSET(get<double>, {0xF8, 8, 0, 0})
	DMember(int32_t)                                   MatchTimeLimitSeconds                                       OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(double)                                    TimeUntilTrackChange                                        OFFSET(get<double>, {0x108, 8, 0, 0})
	DMember(double)                                    FirstPlayerFinishedServerTimestamp                          OFFSET(get<double>, {0x110, 8, 0, 0})
	DMember(double)                                    FirstPlayerFinishedRaceEndServerTimestamp                   OFFSET(get<double>, {0x118, 8, 0, 0})
	DMember(char)                                      CurrentMatchmakingState                                     OFFSET(get<char>, {0x120, 1, 0, 0})
	DMember(bool)                                      bIsRaceFinished                                             OFFSET(get<bool>, {0x121, 1, 0, 0})
	DMember(bool)                                      bIsRaceStarted                                              OFFSET(get<bool>, {0x122, 1, 0, 0})
	CMember(class UDelMarPlayerViewModel*)             LocalPlayer                                                 OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UDelMarPlayerViewModel*)             TargetPlayer                                                OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(TArray<class UDelMarPlayerViewModel*>)     PositionPlayers                                             OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<class UDelMarPlayerViewModel*>)     FinalPlacements                                             OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TMap<int32_t, UDelMarPlayerViewModel*>)    RacePlayers                                                 OFFSET(get<T>, {0x158, 80, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    LocalPlayerController                                       OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         ViewTargetPlayerState                                       OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPositionalTrackerComponent*>) PositionalTrackerComponent                         OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(class UDelMarPlayerViewModel*)             EmptyPlayerViewModel                                        OFFSET(get<T>, {0x1C8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarRaceViewModel.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* PC, class AActor* Old, class AActor* NewViewTarget);           // [0xbb1bc7c] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarRaceViewModel.HandleFinalRacePositionsChanged
	// void HandleFinalRacePositionsChanged(TArray<FDelMarFinalRacePositionEntry>& FinalRacePositions, FDelMarFinalRacePositionEntry& NewPlayerEntry); // [0xbb1acfc] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarUI.DelMarRunRecordViewModel
/// Size: 0x0038 (0x000068 - 0x0000A0)
class UDelMarRunRecordViewModel : public UDelMarViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FDelMarRunRecord)                          Record                                                      OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	CMember(TArray<FDelMarSectionData>)                RunRecordSectionData                                        OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bHasValidData                                               OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Class /Script/DelMarUI.DelMarTutorialViewModel
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UDelMarTutorialViewModel : public UDelMarViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FText)                                     SectionTitle                                                OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(int32_t)                                   CurrentSection                                              OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   TotalSections                                               OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	CMember(TArray<class UInputAction*>)               TutorialInputActionsToHighlight                             OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<class UInputAction*>)               TutorialAnnouncementActions                                 OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<class UInputAction*>)               TutorialHintActions                                         OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FTimespan)                                 FinishTargetTime                                            OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/DelMarUI.DelMarVehicleViewModel
/// Size: 0x0080 (0x000068 - 0x0000E8)
class UDelMarVehicleViewModel : public UDelMarViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(bool)                                      bHasValidData                                               OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bIsTurboEnabled                                             OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bIsDrifting                                                 OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bIsDriftingRight                                            OFFSET(get<bool>, {0x6D, 1, 0, 0})
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x6E, 1, 0, 0})
	DMember(bool)                                      bAnyWheelsOnGround                                          OFFSET(get<bool>, {0x6F, 1, 0, 0})
	CMember(TArray<double>)                            DriftRanges                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(float)                                     DriftSlipAngleRatio                                         OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(EDelMarDriftSteerState)                    DriftSteerState                                             OFFSET(get<T>, {0x84, 1, 0, 0})
	DMember(float)                                     PotentialDriftBoostPercent                                  OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     StartlineBoostBonus                                         OFFSET(get<float>, {0x8C, 4, 0, 0})
	CMember(EDelMarSpeedometerState)                   SpeedometerState                                            OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(float)                                     CurrentSpeed                                                OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     NumTurboMaxCharges                                          OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     NumTurboCurrentCharges                                      OFFSET(get<float>, {0x9C, 4, 0, 0})
	CMember(EDelMarTurboZoneState)                     TurboBonusZoneState                                         OFFSET(get<T>, {0xA0, 1, 0, 0})
	DMember(float)                                     UnderthrustPercent                                          OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(double)                                    MissedCheckpointDemoTimestamp                               OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(double)                                    ReturnToTrackDemoTimestamp                                  OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bIsHeadingWrongWay                                          OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bToggleThrottle                                             OFFSET(get<bool>, {0xB9, 1, 0, 0})
	DMember(float)                                     ThrottleInputValue                                          OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(bool)                                      bDemolished                                                 OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(float)                                     DemolishActionPressedPercent                                OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(bool)                                      bDemolishActionEnabled                                      OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0xCC, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CurrentVehicle                                              OFFSET(get<T>, {0xD4, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarGlobalInputDisabler*>) GlobalInputDisabler                                       OFFSET(get<T>, {0xDC, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarVehicleViewModel.Initialize
	// void Initialize(class AFortPlayerState* InPlayerState);                                                                  // [0xbb1bec4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleWrongwayIndication
	// void HandleWrongwayIndication(FDelMarEvent_VehicleWrongwayStatus& Event);                                                // [0xbb1be38] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleVehicleWheelsLeftGround
	// void HandleVehicleWheelsLeftGround();                                                                                    // [0xbb1bc68] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleUnderthrustPercentChanged
	// void HandleUnderthrustPercentChanged(float InValue);                                                                     // [0xbb1bba4] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleTurboChargesUpdated
	// void HandleTurboChargesUpdated();                                                                                        // [0xbb1bb90] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleTurboBonusZoneChanged
	// void HandleTurboBonusZoneChanged(EDelMarTurboZoneState InTurboBonusZoneState);                                           // [0xbb1bad0] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleToggleThrottleSettingChanged
	// void HandleToggleThrottleSettingChanged(bool bValue);                                                                    // [0xbb1ba0c] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleStartlineBoostFailed
	// void HandleStartlineBoostFailed();                                                                                       // [0xbb1b9f8] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleStartlineBoostActivated
	// void HandleStartlineBoostActivated(float InValue);                                                                       // [0xbb1b934] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleSpeedometerSpeedChanged
	// void HandleSpeedometerSpeedChanged(float InValue);                                                                       // [0xbb1b870] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleReturnToTrackCountdownInitiated
	// void HandleReturnToTrackCountdownInitiated(FDelMarEvent_ReturnToTrackDemoCountdown& Event);                              // [0xbb1b7e0] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleReturnToTrackCountdownCancelled
	// void HandleReturnToTrackCountdownCancelled();                                                                            // [0xbb1b7cc] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandlePotentialDriftBoostChanged
	// void HandlePotentialDriftBoostChanged(float InValue);                                                                    // [0xbb1b6f4] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleOnVehicleDemolished
	// void HandleOnVehicleDemolished(FGameplayTag CausedByTag);                                                                // [0xbb1b634] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleOnThrottleInput
	// void HandleOnThrottleInput(float Value);                                                                                 // [0xbb1b570] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleMissedCheckpointCountdownInitiated
	// void HandleMissedCheckpointCountdownInitiated(FDelMarEvent_MissedCheckpointDemoCountdown& Event);                        // [0xbb1b41c] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleMissedCheckpointCountdownCancelled
	// void HandleMissedCheckpointCountdownCancelled();                                                                         // [0xbb1b408] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleDriftSlipAngleRatioChanged
	// void HandleDriftSlipAngleRatioChanged(float InValue);                                                                    // [0xbb1ac38] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleDriftDeactivated
	// void HandleDriftDeactivated();                                                                                           // [0xbb1ac24] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleDriftActivated
	// void HandleDriftActivated();                                                                                             // [0xbb1ac10] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleDemolishPressDurationUpdated
	// void HandleDemolishPressDurationUpdated(float PressedDurationPercentage);                                                // [0xbb1ab4c] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleAnyWheelsOnGroundChanged
	// void HandleAnyWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                                   // [0xbb1a9a8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarUI.DelMarRankedPlacementChangeVM
/// Size: 0x0018 (0x000068 - 0x000080)
class UDelMarRankedPlacementChangeVM : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UDelMarRankedPlacementVM*)           InitialPlacement                                            OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UDelMarRankedPlacementVM*)           CurrentPlacement                                            OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(int32_t)                                   PositionDelta                                               OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(bool)                                      bIsDataValid                                                OFFSET(get<bool>, {0x7C, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarRankedPlacementChangeVM.GetPositionDelta
	// int32_t GetPositionDelta();                                                                                              // [0x5938b5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementChangeVM.GetIsDataValid
	// bool GetIsDataValid();                                                                                                   // [0xb8b56e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementChangeVM.GetInitialPlacement
	// class UDelMarRankedPlacementVM* GetInitialPlacement();                                                                   // [0x6070e5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementChangeVM.GetCurrentPlacement
	// class UDelMarRankedPlacementVM* GetCurrentPlacement();                                                                   // [0x6070db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarRankedPlacementVM
/// Size: 0x0120 (0x000068 - 0x000188)
class UDelMarRankedPlacementVM : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	DMember(bool)                                      bIsUnranked                                                 OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(int32_t)                                   TierIndex                                                   OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   PlayerPosition                                              OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     ProgressTowardNextTier                                      OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bIsDataValid                                                OFFSET(get<bool>, {0x78, 1, 0, 0})
	CMember(TArray<FFortHabaneroTier>)                 TierList                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(class UFortHabaneroDisplayData*)           RankedDisplayData                                           OFFSET(get<T>, {0x90, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.TierDisplayData
	// FFortHabaneroTier TierDisplayData();                                                                                     // [0xbb1bf98] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetTierIndex
	// int32_t GetTierIndex();                                                                                                  // [0xbb1a8e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetProgressTowardNextTier
	// float GetProgressTowardNextTier();                                                                                       // [0xbb1a8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetPlayerPosition
	// int32_t GetPlayerPosition();                                                                                             // [0x7a81ac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetIsUnranked
	// bool GetIsUnranked();                                                                                                    // [0x9a2d738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetIsDataValid
	// bool GetIsDataValid();                                                                                                   // [0x9f2fe9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarRankedRecapVM
/// Size: 0x0050 (0x000068 - 0x0000B8)
class UDelMarRankedRecapVM : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UDelMarRankedPlacementChangeVM*)     PlacementChange                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(EDelMarRankedProgressError)                ErrorState                                                  OFFSET(get<T>, {0x70, 1, 0, 0})
	SMember(FString)                                   OptionalErrorText                                           OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(TWeakObjectPtr<ULocalPlayer*>)             OwningLocalPlayer                                           OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerControllerAthena*>) OwningPlayerController                                   OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UFortHabaneroDisplayData*)           RankedDisplayData                                           OFFSET(get<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarUI.DelMarRankedRecapVM.QueryProgress
	// void QueryProgress();                                                                                                    // [0xbb1bf84] Final|Native|Private 
	// Function /Script/DelMarUI.DelMarRankedRecapVM.GetUnrankedTierData
	// bool GetUnrankedTierData(FFortHabaneroTier& OutUnrankedTierData);                                                        // [0xbb1a8f8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarRankedVMContextResolver
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarRankedVMContextResolver : public UMVVMViewModelContextResolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UFortHabaneroDisplayData*)           RankedDisplayData                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FString)                                   DevelopmentRankedKey                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/DelMarUI.DelMarReactiveWidgetAnimation
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarReactiveWidgetAnimation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Intro                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Outro                                                       OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarUI.DelMarPlayerIndicatorData
/// Size: 0x0028 (0x000000 - 0x000028)
class FDelMarPlayerIndicatorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     LateralRatio                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector2D)                                 ScreenPosition                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     SquareDistance                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(EDelMarRearAlertVerticalHint)              VerticalHint                                                OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(bool)                                      bRearIndicator                                              OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bShow                                                       OFFSET(get<bool>, {0x26, 1, 0, 0})
};

/// Struct /Script/DelMarUI.DelMarKeyPair
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarKeyPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FKey)                                      KBMKey                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FKey)                                      GamepadKey                                                  OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/DelMarUI.DelMarTouchActionButtonStateData
/// Size: 0x0190 (0x000000 - 0x000190)
class FDelMarTouchActionButtonStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FSlateBrush)                               IconBrush                                                   OFFSET(getStruct<T>, {0x0, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0xC0, 192, 0, 0})
	CMember(ESlateVisibility)                          ButtonVisibility                                            OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(bool)                                      bCancelInputOnEnter                                         OFFSET(get<bool>, {0x181, 1, 0, 0})
	DMember(bool)                                      bCancelInputOnLeave                                         OFFSET(get<bool>, {0x182, 1, 0, 0})
};

/// Struct /Script/DelMarUI.DelMarTouchInputDefinition
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarTouchInputDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UInputModifier*>)             Modifiers                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<class UInputTrigger*>)              Triggers                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bUseYAxis                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/DelMarUI.DelMarSectionData
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SectionIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(double)                                    LapDurationAtSection                                        OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    DeltaTime                                                   OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Enum /Script/DelMarUI.EWidgetTransitionerInitialStatus
/// Size: 0x03
enum EWidgetTransitionerInitialStatus : uint8_t
{
	EWidgetTransitionerInitialStatus__Hidden                                         = 0,
	EWidgetTransitionerInitialStatus__Shown                                          = 1,
	EWidgetTransitionerInitialStatus__EWidgetTransitionerInitialStatus_MAX           = 2
};

/// Enum /Script/DelMarUI.EWidgetTransitionerStatus
/// Size: 0x05
enum EWidgetTransitionerStatus : uint8_t
{
	EWidgetTransitionerStatus__Hidden                                                = 0,
	EWidgetTransitionerStatus__AnimatingIn                                           = 1,
	EWidgetTransitionerStatus__Shown                                                 = 2,
	EWidgetTransitionerStatus__AnimatingOut                                          = 3,
	EWidgetTransitionerStatus__EWidgetTransitionerStatus_MAX                         = 4
};

/// Enum /Script/DelMarUI.EDelMarRearAlertVerticalHint
/// Size: 0x04
enum EDelMarRearAlertVerticalHint : uint8_t
{
	EDelMarRearAlertVerticalHint__Level                                              = 0,
	EDelMarRearAlertVerticalHint__Up                                                 = 1,
	EDelMarRearAlertVerticalHint__Down                                               = 2,
	EDelMarRearAlertVerticalHint__EDelMarRearAlertVerticalHint_MAX                   = 3
};

/// Enum /Script/DelMarUI.EDelMarRankedProgressError
/// Size: 0x17
enum EDelMarRankedProgressError : uint8_t
{
	EDelMarRankedProgressError__None                                                 = 0,
	EDelMarRankedProgressError__MissingRankedComponent                               = 1,
	EDelMarRankedProgressError__RankedComponentSocialUserNotBound                    = 2,
	EDelMarRankedProgressError__RankedComponentUnableToQueryProgress                 = 3,
	EDelMarRankedProgressError__EmptyRankType                                        = 4,
	EDelMarRankedProgressError__InitialProgressMapInvalid                            = 5,
	EDelMarRankedProgressError__CurrentProgressMapInvalid                            = 6,
	EDelMarRankedProgressError__InvalidCurrentTrack                                  = 7,
	EDelMarRankedProgressError__InitialProgressEntryNotFound                         = 8,
	EDelMarRankedProgressError__CurrentProgressEntryNotFound                         = 9,
	EDelMarRankedProgressError__GameModeNotFound                                     = 10,
	EDelMarRankedProgressError__CurrentTierLessThanZero                              = 11,
	EDelMarRankedProgressError__NotEnoughTiersForInitialTier                         = 12,
	EDelMarRankedProgressError__NotEnoughTiersForCurrentTier                         = 13,
	EDelMarRankedProgressError__FailedToFindUnrankedTier                             = 14,
	EDelMarRankedProgressError__UnknownError                                         = 15,
	EDelMarRankedProgressError__EDelMarRankedProgressError_MAX                       = 16
};

/// Enum /Script/DelMarUI.EDelMarTouchActionButtonState
/// Size: 0x08
enum EDelMarTouchActionButtonState : uint8_t
{
	EDelMarTouchActionButtonState__None                                              = 0,
	EDelMarTouchActionButtonState__FullyDisabled                                     = 1,
	EDelMarTouchActionButtonState__Disabled                                          = 2,
	EDelMarTouchActionButtonState__Enabled                                           = 3,
	EDelMarTouchActionButtonState__Ready                                             = 4,
	EDelMarTouchActionButtonState__Pressed                                           = 5,
	EDelMarTouchActionButtonState__Supercharged                                      = 6,
	EDelMarTouchActionButtonState__EDelMarTouchActionButtonState_MAX                 = 7
};

/// Enum /Script/DelMarUI.EDelMarInputInjectionState
/// Size: 0x05
enum EDelMarInputInjectionState : uint8_t
{
	EDelMarInputInjectionState__FIRST_PRESSED                                        = 0,
	EDelMarInputInjectionState__PRESSED                                              = 1,
	EDelMarInputInjectionState__RELEASED                                             = 2,
	EDelMarInputInjectionState__CANCELLED                                            = 3,
	EDelMarInputInjectionState__EDelMarInputInjectionState_MAX                       = 4
};

/// Enum /Script/DelMarUI.EDelMarTouchInputTrackingState
/// Size: 0x04
enum EDelMarTouchInputTrackingState : uint8_t
{
	EDelMarTouchInputTrackingState__NOT_TRACKING                                     = 0,
	EDelMarTouchInputTrackingState__TRACKING_WITH_INJECTION                          = 1,
	EDelMarTouchInputTrackingState__TRACKING_WITHOUT_INJECTION                       = 2,
	EDelMarTouchInputTrackingState__EDelMarTouchInputTrackingState_MAX               = 3
};

/// Enum /Script/DelMarUI.EDelMarDriftSteerState
/// Size: 0x05
enum EDelMarDriftSteerState : uint8_t
{
	EDelMarDriftSteerState__None                                                     = 0,
	EDelMarDriftSteerState__Controlled                                               = 1,
	EDelMarDriftSteerState__DriftBoost                                               = 2,
	EDelMarDriftSteerState__Uncontrolled                                             = 3,
	EDelMarDriftSteerState__EDelMarDriftSteerState_MAX                               = 4
};

/// Enum /Script/DelMarUI.EDelMarSpeedometerState
/// Size: 0x04
enum EDelMarSpeedometerState : uint8_t
{
	EDelMarSpeedometerState__Normal                                                  = 0,
	EDelMarSpeedometerState__SlowingDown                                             = 1,
	EDelMarSpeedometerState__BonusSpeed                                              = 2,
	EDelMarSpeedometerState__EDelMarSpeedometerState_MAX                             = 3
};

