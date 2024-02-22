
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Enum /Script/DelMarUI.EWidgetTransitionerInitialStatus
/// Size: 0x03
enum class EWidgetTransitionerInitialStatus : uint8_t
{
	EWidgetTransitionerInitialStatus__Hidden                                         = 0,
	EWidgetTransitionerInitialStatus__Shown                                          = 1,
	EWidgetTransitionerInitialStatus__EWidgetTransitionerInitialStatus_MAX           = 2
};

/// Enum /Script/DelMarUI.EWidgetTransitionerStatus
/// Size: 0x05
enum class EWidgetTransitionerStatus : uint8_t
{
	EWidgetTransitionerStatus__Hidden                                                = 0,
	EWidgetTransitionerStatus__AnimatingIn                                           = 1,
	EWidgetTransitionerStatus__Shown                                                 = 2,
	EWidgetTransitionerStatus__AnimatingOut                                          = 3,
	EWidgetTransitionerStatus__EWidgetTransitionerStatus_MAX                         = 4
};

/// Enum /Script/DelMarUI.EDelMarRearAlertVerticalHint
/// Size: 0x04
enum class EDelMarRearAlertVerticalHint : uint8_t
{
	EDelMarRearAlertVerticalHint__Level                                              = 0,
	EDelMarRearAlertVerticalHint__Up                                                 = 1,
	EDelMarRearAlertVerticalHint__Down                                               = 2,
	EDelMarRearAlertVerticalHint__EDelMarRearAlertVerticalHint_MAX                   = 3
};

/// Enum /Script/DelMarUI.EDelMarRankedProgressError
/// Size: 0x17
enum class EDelMarRankedProgressError : uint8_t
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
enum class EDelMarTouchActionButtonState : uint8_t
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
enum class EDelMarInputInjectionState : uint8_t
{
	EDelMarInputInjectionState__FIRST_PRESSED                                        = 0,
	EDelMarInputInjectionState__PRESSED                                              = 1,
	EDelMarInputInjectionState__RELEASED                                             = 2,
	EDelMarInputInjectionState__CANCELLED                                            = 3,
	EDelMarInputInjectionState__EDelMarInputInjectionState_MAX                       = 4
};

/// Enum /Script/DelMarUI.EDelMarTouchInputTrackingState
/// Size: 0x04
enum class EDelMarTouchInputTrackingState : uint8_t
{
	EDelMarTouchInputTrackingState__NOT_TRACKING                                     = 0,
	EDelMarTouchInputTrackingState__TRACKING_WITH_INJECTION                          = 1,
	EDelMarTouchInputTrackingState__TRACKING_WITHOUT_INJECTION                       = 2,
	EDelMarTouchInputTrackingState__EDelMarTouchInputTrackingState_MAX               = 3
};

/// Enum /Script/DelMarUI.EDelMarDriftSteerState
/// Size: 0x05
enum class EDelMarDriftSteerState : uint8_t
{
	EDelMarDriftSteerState__None                                                     = 0,
	EDelMarDriftSteerState__Controlled                                               = 1,
	EDelMarDriftSteerState__DriftBoost                                               = 2,
	EDelMarDriftSteerState__Uncontrolled                                             = 3,
	EDelMarDriftSteerState__EDelMarDriftSteerState_MAX                               = 4
};

/// Enum /Script/DelMarUI.EDelMarSpeedometerState
/// Size: 0x04
enum class EDelMarSpeedometerState : uint8_t
{
	EDelMarSpeedometerState__Normal                                                  = 0,
	EDelMarSpeedometerState__SlowingDown                                             = 1,
	EDelMarSpeedometerState__BonusSpeed                                              = 2,
	EDelMarSpeedometerState__EDelMarSpeedometerState_MAX                             = 3
};

/// Class /Script/DelMarUI.DelMarUserWidget
/// Size: 0x0078 (0x0002E8 - 0x000360)
class UDelMarUserWidget : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x02E8   (0x0058)  MISSED
	EWidgetTransitionerInitialStatus                   InitialTransitionStatus;                                    // 0x0340   (0x0001)  
	ESlateVisibility                                   HiddenVisibility;                                           // 0x0341   (0x0001)  
	bool                                               bAlwaysReverseInterruptedAnimations;                        // 0x0342   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0343   (0x0005)  MISSED
	class UWidgetTransitioner*                         WidgetTransitioner;                                         // 0x0348   (0x0008)  
	class UWidgetAnimation*                            NormalTransitionIn;                                         // 0x0350   (0x0008)  
	class UWidgetAnimation*                            NormalTransitionOut;                                        // 0x0358   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarUserWidget.SetDisplayEnabled
	// void SetDisplayEnabled(bool bEnabled, bool bSkipAnimation);                                                           // [0xbeb9cb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarUserWidget.IsDisplayEnabled
	// bool IsDisplayEnabled();                                                                                              // [0xbeb91c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarUserWidget.HandleWidgetTransitionerStatusChanged
	// void HandleWidgetTransitionerStatusChanged(class UWidgetTransitioner* InTransitioner, EWidgetTransitionerStatus InStatus); // [0xbeb90fc] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarUserWidget.GetWidgetTransitioner
	// class UWidgetTransitioner* GetWidgetTransitioner();                                                                   // [0xbeb8bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarUserWidget.GetUIStateChartManager
	// class UUIStateChartManager* GetUIStateChartManager();                                                                 // [0xbeb8b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarUserWidget.BP_Show
	// void BP_Show(bool bSkipAnimation);                                                                                    // [0xbeb823c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarUserWidget.BP_Hide
	// void BP_Hide(bool bSkipAnimation);                                                                                    // [0xbeb7d00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarCountdownTimerWidget
/// Size: 0x0040 (0x000360 - 0x0003A0)
class UDelMarCountdownTimerWidget : public UDelMarUserWidget
{ 
public:
	class UTextBlock*                                  TextBlock_RemainingTime;                                    // 0x0360   (0x0008)  
	double                                             InitialCoundownTime;                                        // 0x0368   (0x0008)  
	SDK_UNDEFINED(16,13178) /* FMulticastInlineDelegate */ __um(OnCountdownTimeChanged);                           // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,13179) /* FMulticastInlineDelegate */ __um(OnCountdownTimeSet);                               // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,13180) /* FMulticastInlineDelegate */ __um(OnCountdownTimeEnded);                             // 0x0390   (0x0010)  


	/// Functions
	// Function /Script/DelMarUI.DelMarCountdownTimerWidget.SetInitialCountdownTime
	// void SetInitialCountdownTime(double InTime);                                                                          // [0xbe99990] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarCountdownTimerWidget.GetTimeRemainingSeconds
	// double GetTimeRemainingSeconds();                                                                                     // [0xbe99410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarDriverCameraWidget
/// Size: 0x0128 (0x000360 - 0x000488)
class UDelMarDriverCameraWidget : public UDelMarUserWidget
{ 
public:
	class UWidgetAnimation*                            DefaultIntercomAnimation;                                   // 0x0360   (0x0008)  
	class UWidgetAnimation*                            ReactiveDriverCamera_Persistent;                            // 0x0368   (0x0008)  
	float                                              ReactiveWidgetOutroDelay;                                   // 0x0370   (0x0004)  
	float                                              ReactiveWidgetMaxActiveTime;                                // 0x0374   (0x0004)  
	SDK_UNDEFINED(80,13181) /* TMap<FGameplayTag, FName> */ __um(MainChannelAnimationTagTable);                    // 0x0378   (0x0050)  
	SDK_UNDEFINED(80,13182) /* TMap<int32_t, FDelMarReactiveWidgetAnimation> */ __um(ReactiveAnimationTable);      // 0x03C8   (0x0050)  
	SDK_UNDEFINED(80,13183) /* TMap<FName, UWidgetAnimation*> */ __um(AnimationNameTable);                         // 0x0418   (0x0050)  
	class UUMGSequencePlayer*                          IntercomSequencePlayer;                                     // 0x0468   (0x0008)  
	class UUMGSequencePlayer*                          ReactiveSequencePlayer;                                     // 0x0470   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0478   (0x0010)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarDriverCameraWidget.GetAnimationNames
	// TArray<FName> GetAnimationNames();                                                                                    // [0xbe9921c] Final|Native|Protected|Const 
};

/// Class /Script/DelMarUI.DelMarInputActionRichTextBlockDecorator
/// Size: 0x0108 (0x000028 - 0x000130)
class UDelMarInputActionRichTextBlockDecorator : public URichTextBlockDecorator
{ 
public:
	class UInputAction*                                InputAction;                                                // 0x0028   (0x0008)  
	FKey                                               Key;                                                        // 0x0030   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FSlateBrush                                        Icon;                                                       // 0x0050   (0x00C0)  
	class URichTextBlock*                              OwnerWidget;                                                // 0x0110   (0x0008)  
	SDK_UNDEFINED(8,13184) /* TWeakObjectPtr<ULocalPlayer*> */ __um(OwningLocalPlayer);                            // 0x0118   (0x0008)  
	SDK_UNDEFINED(8,13185) /* TWeakObjectPtr<UCommonInputSubsystem*> */ __um(CommonInputSubsystem);                // 0x0120   (0x0008)  
	SDK_UNDEFINED(8,13186) /* TWeakObjectPtr<UEnhancedInputLocalPlayerSubsystem*> */ __um(EnhancedInputSubsystem); // 0x0128   (0x0008)  
};

/// Class /Script/DelMarUI.DelMarListViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UDelMarListViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class UMVVMViewModelBase*>                  Elements;                                                   // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/DelMarUI.DelMarListViewModel.GetElements
	// TArray<UMVVMViewModelBase*> GetElements();                                                                            // [0xbe992e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarListViewModel.GetElementAt
	// class UMVVMViewModelBase* GetElementAt(int32_t InIndex);                                                              // [0xbe9925c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DelMarUI.DelMarPlayerIndicatorData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDelMarPlayerIndicatorData
{ 
	SDK_UNDEFINED(8,13187) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x0000   (0x0008)  
	float                                              LateralRatio;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector2D                                          ScreenPosition;                                             // 0x0010   (0x0010)  
	float                                              SquareDistance;                                             // 0x0020   (0x0004)  
	EDelMarRearAlertVerticalHint                       VerticalHint;                                               // 0x0024   (0x0001)  
	bool                                               bRearIndicator;                                             // 0x0025   (0x0001)  
	bool                                               bShow;                                                      // 0x0026   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0027   (0x0001)  MISSED
};

/// Class /Script/DelMarUI.DelMarPlayerIndicatorsContainer
/// Size: 0x0158 (0x000360 - 0x0004B8)
class UDelMarPlayerIndicatorsContainer : public UDelMarUserWidget
{ 
public:
	class UCanvasPanel*                                IndicatorCanvas;                                            // 0x0360   (0x0008)  
	class UClass*                                      IndicatorWidgetClass;                                       // 0x0368   (0x0008)  
	FVector                                            IndicatorOffset;                                            // 0x0370   (0x0018)  
	float                                              RearVerticalHintThreshold;                                  // 0x0388   (0x0004)  
	float                                              RearIndicatorMaxDistance;                                   // 0x038C   (0x0004)  
	float                                              RearIndicatorMinDistance;                                   // 0x0390   (0x0004)  
	float                                              RearIndicatorRangeWidth;                                    // 0x0394   (0x0004)  
	float                                              RearIndicatorRangeDegree;                                   // 0x0398   (0x0004)  
	float                                              ForwardIndicatorMaxDistance;                                // 0x039C   (0x0004)  
	FAnchors                                           IndicatorAnchors;                                           // 0x03A0   (0x0020)  
	FVector2D                                          IndicatorAlignment;                                         // 0x03C0   (0x0010)  
	FVector2D                                          RearIndicatorSize;                                          // 0x03D0   (0x0010)  
	class UCurveFloat*                                 RearDistanceScaleCurve;                                     // 0x03E0   (0x0008)  
	class UCurveFloat*                                 RearDistanceOpacityCurve;                                   // 0x03E8   (0x0008)  
	class UCurveFloat*                                 ForwardDistanceScaleCurve;                                  // 0x03F0   (0x0008)  
	class UCurveFloat*                                 ForwardDistanceOpacityCurve;                                // 0x03F8   (0x0008)  
	int32_t                                            MaxRearIndicators;                                          // 0x0400   (0x0004)  
	int32_t                                            MaxForwardIndicators;                                       // 0x0404   (0x0004)  
	SDK_UNDEFINED(8,13188) /* TWeakObjectPtr<UDelMarVehicleManager*> */ __um(VehicleManager);                      // 0x0408   (0x0008)  
	SDK_UNDEFINED(8,13189) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(ViewingVehicle);                             // 0x0410   (0x0008)  
	SDK_UNDEFINED(8,13190) /* TWeakObjectPtr<AFortPlayerState*> */ __um(ViewingPlayerState);                       // 0x0418   (0x0008)  
	TArray<FDelMarPlayerIndicatorData>                 IndicatorsData;                                             // 0x0420   (0x0010)  
	SDK_UNDEFINED(80,13191) /* TMap<AFortPlayerState*, UDelMarPlayerIndicatorWidget*> */ __um(IndicatorWidgets);   // 0x0430   (0x0050)  
	TArray<class UDelMarPlayerIndicatorWidget*>        IndicatorPool;                                              // 0x0480   (0x0010)  
	SDK_UNDEFINED(8,13192) /* TWeakObjectPtr<UDelMarPositionalTrackerComponent*> */ __um(PositionalTrackerComponent); // 0x0490   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0498   (0x0020)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarPlayerIndicatorsContainer.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xbe995c4] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarPlayerIndicatorsContainer.HandleRacePlayersChanged
	// void HandleRacePlayersChanged(TMap<int32_t, UDelMarPlayerViewModel*>& RacePlayers);                                   // [0xbe994e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPlayerIndicatorsContainer.HandleIconOnlySettingChanged
	// void HandleIconOnlySettingChanged(bool bUseIconOnly);                                                                 // [0xbe9944c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarPlayerIndicatorWidget
/// Size: 0x0058 (0x0002C0 - 0x000318)
class UDelMarPlayerIndicatorWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02C0   (0x0008)  MISSED
	class USizeBox*                                    AvatarSizeBox;                                              // 0x02C8   (0x0008)  
	class UFortLazyImage*                              AvatarLazyImage;                                            // 0x02D0   (0x0008)  
	class USizeBox*                                    PlayerNameSizeBox;                                          // 0x02D8   (0x0008)  
	class UImage*                                      UpArrowImage;                                               // 0x02E0   (0x0008)  
	class UImage*                                      DownArrowImage;                                             // 0x02E8   (0x0008)  
	class UOverlay*                                    BackgroundOverlay;                                          // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02F8   (0x0004)  MISSED
	float                                              BehindAvatarSizeBoxWidth;                                   // 0x02FC   (0x0004)  
	float                                              AheadAvatarSizeBoxWidth;                                    // 0x0300   (0x0004)  
	bool                                               bBehindAvatarImageIsExpanded;                               // 0x0304   (0x0001)  
	bool                                               bAheadAvatarImageIsExpanded;                                // 0x0305   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0306   (0x0002)  MISSED
	float                                              BehindPlayerNameSizeBoxMaxWidth;                            // 0x0308   (0x0004)  
	float                                              AheadPlayerNameSizeBoxMaxWidth;                             // 0x030C   (0x0004)  
	float                                              BehindBackgroundOverlaySlotPadding;                         // 0x0310   (0x0004)  
	float                                              AheadBackgroundOverlaySlotPadding;                          // 0x0314   (0x0004)  


	/// Functions
	// Function /Script/DelMarUI.DelMarPlayerIndicatorWidget.BP_UpdateIndicator
	// void BP_UpdateIndicator(float Scale, float Opacity, bool bRearIndicator, EDelMarRearAlertVerticalHint VerticalHint);  // [0xbe98f50] Native|Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarPlayerIndicatorWidget.BP_SetViewModel
	// void BP_SetViewModel(class UDelMarPlayerViewModel* ViewModel);                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarPlayerIndicatorWidget.BP_HideIndicator
	// void BP_HideIndicator();                                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarExpandableHudWidget
/// Size: 0x00B0 (0x000360 - 0x000410)
class UDelMarExpandableHudWidget : public UDelMarUserWidget
{ 
public:
	class UImage*                                      NavigateEntriesBindingImage;                                // 0x0360   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0368   (0x0018)  MISSED
	class UClass*                                      ExpandableHudWidgetEntryClass;                              // 0x0380   (0x0008)  
	int32_t                                            NumDesignerPreviewEntries;                                  // 0x0388   (0x0004)  
	float                                              EntrySpacing;                                               // 0x038C   (0x0004)  
	bool                                               bExpanded;                                                  // 0x0390   (0x0001)  
	bool                                               bNavigationEnabled;                                         // 0x0391   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0392   (0x0006)  MISSED
	class UTexture2D*                                  NavigateEntriesGamepadTexture;                              // 0x0398   (0x0008)  
	class UTexture2D*                                  NavigateEntriesPCTexture;                                   // 0x03A0   (0x0008)  
	class UDelMarPlayerPreferencesComponent*           PlayerPreferences;                                          // 0x03A8   (0x0008)  
	class UOverlay*                                    EntryOverlay;                                               // 0x03B0   (0x0008)  
	class URetainerBox*                                EdgeFadeRetainerBox;                                        // 0x03B8   (0x0008)  
	class USizeBox*                                    ContentSizeBox;                                             // 0x03C0   (0x0008)  
	SDK_UNDEFINED(16,13193) /* FMulticastInlineDelegate */ __um(OnExpandToggled);                                  // 0x03C8   (0x0010)  
	SDK_UNDEFINED(16,13194) /* FMulticastInlineDelegate */ __um(OnNavigationEnabledChanged);                       // 0x03D8   (0x0010)  
	SDK_UNDEFINED(16,13195) /* FMulticastInlineDelegate */ __um(OnExpandableChanged);                              // 0x03E8   (0x0010)  
	TArray<class UDelMarUserWidget*>                   DisplayedHudWidgetEntries;                                  // 0x03F8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0408   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarExpandableHudWidget.SetTargetInterpTransformY
	// void SetTargetInterpTransformY(float InTargetInterpTransformY);                                                       // [0xbeba530] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarExpandableHudWidget.HandleToggleSettingChanged
	// void HandleToggleSettingChanged(bool bUseToggle);                                                                     // [0xbeb8bfc] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarExpandableHudWidget.HandleToggleAction
	// void HandleToggleAction();                                                                                            // [0xbeb8be8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarExpandableHudWidget.BP_HandlePlayerPreferencesAdded
	// void BP_HandlePlayerPreferencesAdded(class UDelMarPlayerPreferencesComponent* InPlayerPreferences);                   // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarPositionalTrackerWidget
/// Size: 0x0018 (0x000410 - 0x000428)
class UDelMarPositionalTrackerWidget : public UDelMarExpandableHudWidget
{ 
public:
	int32_t                                            MinPlayersToStart;                                          // 0x0410   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0414   (0x0004)  MISSED
	TArray<class UDelMarPlayerViewModel*>              DisplayedPlayers;                                           // 0x0418   (0x0010)  


	/// Functions
	// Function /Script/DelMarUI.DelMarPositionalTrackerWidget.UpdatePlayerPositions
	// void UpdatePlayerPositions(TArray<UDelMarPlayerViewModel*> InPlayers);                                                // [0xbe99d00] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarScreenBase
/// Size: 0x0080 (0x000400 - 0x000480)
class UDelMarScreenBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x0400   (0x0058)  MISSED
	EWidgetTransitionerInitialStatus                   InitialTransitionStatus;                                    // 0x0458   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0459   (0x0007)  MISSED
	class UWidgetTransitioner*                         WidgetTransitioner;                                         // 0x0460   (0x0008)  
	bool                                               bActivateOnShow;                                            // 0x0468   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0469   (0x0007)  MISSED
	class UWidgetAnimation*                            NormalTransitionIn;                                         // 0x0470   (0x0008)  
	class UWidgetAnimation*                            NormalTransitionOut;                                        // 0x0478   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarScreenBase.SetDisplayEnabled
	// void SetDisplayEnabled(bool bEnabled, bool bSkipAnimation);                                                           // [0xbeb9be8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarScreenBase.IsDisplayEnabled
	// bool IsDisplayEnabled();                                                                                              // [0x8fa7624] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarScreenBase.HandleWidgetTransitionerStatusChanged
	// void HandleWidgetTransitionerStatusChanged(class UWidgetTransitioner* InTransitioner, EWidgetTransitionerStatus InStatus); // [0xbeb9038] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarScreenBase.GetWidgetTransitioner
	// class UWidgetTransitioner* GetWidgetTransitioner();                                                                   // [0xbeb8bb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarScreenBase.GetUIStateChartManager
	// class UUIStateChartManager* GetUIStateChartManager();                                                                 // [0xbeb8b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarScreenBase.BP_Show
	// void BP_Show(bool bSkipAnimation);                                                                                    // [0xbeb81b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarScreenBase.BP_Hide
	// void BP_Hide(bool bSkipAnimation);                                                                                    // [0xbeb7c80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarPostRaceLeaderboard
/// Size: 0x0018 (0x000480 - 0x000498)
class UDelMarPostRaceLeaderboard : public UDelMarScreenBase
{ 
public:
	FDataTableRowHandle                                FilterDataTableRow;                                         // 0x0480   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0490   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarPostRaceLeaderboard.BP_UpdateLeaderboardFilter
	// void BP_UpdateLeaderboardFilter();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarPostRaceScreen
/// Size: 0x0080 (0x000480 - 0x000500)
class UDelMarPostRaceScreen : public UDelMarScreenBase
{ 
public:
	FDataTableRowHandle                                TabNavLeftDataTableRow;                                     // 0x0480   (0x0010)  
	FDataTableRowHandle                                TabNavRightDataTableRow;                                    // 0x0490   (0x0010)  
	FDataTableRowHandle                                ReadyUpDataTableRow;                                        // 0x04A0   (0x0010)  
	FDataTableRowHandle                                SpectateDataTableRow;                                       // 0x04B0   (0x0010)  
	FDataTableRowHandle                                ResetRunDataTableRow;                                       // 0x04C0   (0x0010)  
	FDataTableRowHandle                                ReturnToLobbyDataTableRow;                                  // 0x04D0   (0x0010)  
	class UCommonButtonGroupBase*                      ButtonGroup_PostMatchNavigation;                            // 0x04E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x04E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarPostRaceScreen.UpdateVote
	// void UpdateVote(EDelMarPostRaceVote NewVote);                                                                         // [0xbe9a3d8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPostRaceScreen.ResetRun
	// void ResetRun();                                                                                                      // [0xbe99710] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPostRaceScreen.RequestCountdown
	// void RequestCountdown();                                                                                              // [0xbe996d8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPostRaceScreen.BP_OnReadyUpChanged
	// void BP_OnReadyUpChanged(bool bReady);                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarPostRaceVoteWidget
/// Size: 0x0000 (0x000360 - 0x000360)
class UDelMarPostRaceVoteWidget : public UDelMarUserWidget
{ 
public:


	/// Functions
	// Function /Script/DelMarUI.DelMarPostRaceVoteWidget.UpdateVote
	// void UpdateVote(EDelMarPostRaceVote NewVote);                                                                         // [0xbe9a458] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPostRaceVoteWidget.BP_OnPostRaceVoteChanged
	// void BP_OnPostRaceVoteChanged(EDelMarPostRaceVote Vote);                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarQuestScreenContainer
/// Size: 0x0010 (0x000360 - 0x000370)
class UDelMarQuestScreenContainer : public UDelMarUserWidget
{ 
public:
	FName                                              QuestTabID;                                                 // 0x0360   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0364   (0x0004)  MISSED
	class UAthenaMapScreenContainer*                   AthenaScreenContainer;                                      // 0x0368   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarQuestScreenContainer.HandleToggleQuestList
	// void HandleToggleQuestList();                                                                                         // [0xbe995b0] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarQuestScreenContainer.HandleMapPanelExitButtonPressed
	// void HandleMapPanelExitButtonPressed();                                                                               // [0xbe994cc] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarQuestScreenContainer.HandleAthenaScreenDeactivated
	// void HandleAthenaScreenDeactivated();                                                                                 // [0xbe99438] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarRichTextInputSwitcher
/// Size: 0x00C8 (0x0002C0 - 0x000388)
class UDelMarRichTextInputSwitcher : public UUserWidget
{ 
public:
	bool                                               bUseFormattedText;                                          // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	SDK_UNDEFINED(24,13196) /* FText */                __um(TextFormat);                                           // 0x02C8   (0x0018)  
	SDK_UNDEFINED(80,13197) /* TMap<FString, FDelMarKeyPair> */ __um(Args);                                        // 0x02E0   (0x0050)  
	SDK_UNDEFINED(24,13198) /* FText */                __um(TextKBM);                                              // 0x0330   (0x0018)  
	SDK_UNDEFINED(24,13199) /* FText */                __um(TextGamepad);                                          // 0x0348   (0x0018)  
	SDK_UNDEFINED(24,13200) /* FText */                __um(TextTouch);                                            // 0x0360   (0x0018)  
	class UCommonRichTextBlock*                        Widget_RichText;                                            // 0x0378   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0380   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarRichTextInputSwitcher.SetInputText
	// void SetInputText(FText InTextKBM, FText InTextGamepad, FText InTextTouch);                                           // [0xbe99a24] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarSelectionListViewModel
/// Size: 0x0020 (0x000078 - 0x000098)
class UDelMarSelectionListViewModel : public UDelMarListViewModel
{ 
public:
	int32_t                                            SelectedIndex;                                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x007C   (0x001C)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SetSelectedIndex
	// void SetSelectedIndex(int32_t InIndex);                                                                               // [0xbe99c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SetSelectedElement
	// void SetSelectedElement(class UMVVMViewModelBase* InSelectedElement);                                                 // [0xbe99bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SelectPreviousElement
	// void SelectPreviousElement(bool bAllowWrap);                                                                          // [0xbe997c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SelectNextElement
	// void SelectNextElement(bool bAllowWrap);                                                                              // [0xbe99724] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.SelectedElement
	// class UMVVMViewModelBase* SelectedElement();                                                                          // [0xbe99858] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.HasSelection
	// bool HasSelection();                                                                                                  // [0xbe996bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                           // [0x59a08bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarSelectionListViewModel.ClearSelection
	// void ClearSelection();                                                                                                // [0xbe99128] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/DelMarUI.DelMarTouchInputDefinition
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarTouchInputDefinition
{ 
	class UInputAction*                                InputAction;                                                // 0x0000   (0x0008)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0008   (0x0010)  
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0018   (0x0010)  
	bool                                               bUseYAxis;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/DelMarUI.DelMarTouchWidgetBase
/// Size: 0x0028 (0x000360 - 0x000388)
class UDelMarTouchWidgetBase : public UDelMarUserWidget
{ 
public:
	TArray<FDelMarTouchInputDefinition>                InputActionsData;                                           // 0x0360   (0x0010)  
	bool                                               bTrackInputPastBounds;                                      // 0x0370   (0x0001)  
	bool                                               bTrackInputFromEnter;                                       // 0x0371   (0x0001)  
	bool                                               bIsInjectingInput;                                          // 0x0372   (0x0001)  
	EDelMarTouchInputTrackingState                     CurrentInputTrackingState;                                  // 0x0373   (0x0001)  
	ECommonInputMode                                   RequiredInputMode;                                          // 0x0374   (0x0001)  
	unsigned char                                      UnknownData00_6[0x13];                                      // 0x0375   (0x0013)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnTrackedInputUpdated
	// void OnTrackedInputUpdated(FPointerEvent& InGestureEvent);                                                            // [0xbeb9a1c] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnTrackedInputStarted
	// void OnTrackedInputStarted(FPointerEvent& InGestureEvent);                                                            // [0xbeb9974] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnTrackedInputEnded
	// void OnTrackedInputEnded(FPointerEvent& InGestureEvent, bool bCancelled);                                             // [0xbeb97c0] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnInputInjectionStarted
	// void OnInputInjectionStarted(FPointerEvent& InGestureEvent, EDelMarInputInjectionState InInjectedState);              // [0xbeb9610] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnInputInjectionEnded
	// void OnInputInjectionEnded(FPointerEvent& InGestureEvent, EDelMarInputInjectionState InInjectedState);                // [0xbeb9460] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.OnActiveInputModeChanged
	// void OnActiveInputModeChanged(ECommonInputMode NewInputMode);                                                         // [0xbeb93cc] Final|Native|Private 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.IsGestureInsideHitbox
	// bool IsGestureInsideHitbox(FPointerEvent& InGestureEvent);                                                            // [0xbeb91d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.GetPixelsPerInch
	// int32_t GetPixelsPerInch();                                                                                           // [0xbeb8b44] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.GetHitboxGeometry
	// FGeometry GetHitboxGeometry();                                                                                        // [0xbeb8a64] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarTouchWidgetBase.CancelInputTracking
	// void CancelInputTracking();                                                                                           // [0xbeb849c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarTouchActionButton
/// Size: 0x0078 (0x000388 - 0x000400)
class UDelMarTouchActionButton : public UDelMarTouchWidgetBase
{ 
public:
	EDelMarTouchActionButtonState                      State;                                                      // 0x0388   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0389   (0x0007)  MISSED
	SDK_UNDEFINED(80,13201) /* TMap<EDelMarTouchActionButtonState, FDelMarTouchActionButtonStateData> */ __um(ButtonStateData); // 0x0390   (0x0050)  
	bool                                               bHighlightActive;                                           // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x03E1   (0x0007)  MISSED
	SDK_UNDEFINED(16,13202) /* FMulticastInlineDelegate */ __um(OnHighlightChanged);                               // 0x03E8   (0x0010)  
	bool                                               bIsUpdatingState;                                           // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x03F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarTouchActionButton.SetIconBrush
	// void SetIconBrush(FSlateBrush& Brush);                                                                                // [0x3d1d968] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchActionButton.SetHighlightActive
	// void SetHighlightActive(bool bValue);                                                                                 // [0xbe9990c] BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchActionButton.SetButtonState
	// bool SetButtonState(EDelMarTouchActionButtonState NewState);                                                          // [0xbe99880] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarTouchActionButton.SetBackgroundBrush
	// void SetBackgroundBrush(FSlateBrush& Brush);                                                                          // [0x3d1d968] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchActionButton.GetStateOnStopInputTracking
	// EDelMarTouchActionButtonState GetStateOnStopInputTracking(bool bInputCancelled);                                      // [0xbe99378] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/DelMarUI.DelMarTouchActionButton.GetState
	// EDelMarTouchActionButtonState GetState();                                                                             // [0xbe99360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarTouchActionButton.CanSetState
	// bool CanSetState(EDelMarTouchActionButtonState NewState);                                                             // [0xbe99094] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarTouchRegion
/// Size: 0x0010 (0x000388 - 0x000398)
class UDelMarTouchRegion : public UDelMarTouchWidgetBase
{ 
public:
	TArray<class UDelMarTouchActionButton*>            TouchActionButtons;                                         // 0x0388   (0x0010)  


	/// Functions
	// Function /Script/DelMarUI.DelMarTouchRegion.SetHighlightForInputAction
	// void SetHighlightForInputAction(class UInputAction* InputAction);                                                     // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarTouchRegion.FindButtonByInputAction
	// class UDelMarTouchActionButton* FindButtonByInputAction(class UInputAction* InputAction);                             // [0xbe99140] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarUICheatManager
/// Size: 0x0048 (0x000028 - 0x000070)
class UDelMarUICheatManager : public UChildCheatManager
{ 
public:
	class UDynamicUIScene*                             DriverCameraHiddenScene;                                    // 0x0028   (0x0008)  
	class UDynamicUIScene*                             PlayerIndicatorHiddenScene;                                 // 0x0030   (0x0008)  
	class UDynamicUIScene*                             RubberbandingWidgetVisibleScene;                            // 0x0038   (0x0008)  
	class UDynamicUIScene*                             StaticVehicleMeterHiddenScene;                              // 0x0040   (0x0008)  
	class UDynamicUIScene*                             VehicleDebugVisibleScene;                                   // 0x0048   (0x0008)  
	class UDynamicUIScene*                             CheckpointDebugWidgetScene;                                 // 0x0050   (0x0008)  
	class UDynamicUIScene*                             MapNameDebugWidgetScene;                                    // 0x0058   (0x0008)  
	class UDynamicUIScene*                             GameplayTrackList;                                          // 0x0060   (0x0008)  
	bool                                               bAttachedWidgetEnabled;                                     // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarUICheatManager.OnAddedToCheatManagerNative
	// void OnAddedToCheatManagerNative();                                                                                   // [0x3097b14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarVehicleDebugWidgetSetVisible
	// void DelMarVehicleDebugWidgetSetVisible(bool bVisible);                                                               // [0x5dd0bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarUseToggleForExpandableHudWidget
	// void DelMarUseToggleForExpandableHudWidget(bool bUseToggle);                                                          // [0x5dd0bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarUISetVisible
	// void DelMarUISetVisible(bool bVisible);                                                                               // [0x5dd0bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarTouchHUD
	// void DelMarTouchHUD(FString TouchHUDType);                                                                            // [0x6650f60] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarSetHint
	// void DelMarSetHint(FText HintText, float RemoveAfterDelay);                                                           // [0xbeb88ec] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarRubberbandingWidgetSetVisible
	// void DelMarRubberbandingWidgetSetVisible(bool bVisible);                                                              // [0x5dd0bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarRequestDialogByTag
	// void DelMarRequestDialogByTag(FGameplayTag tag);                                                                      // [0xbeb87b0] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarPlayerIndicatorsVisible
	// void DelMarPlayerIndicatorsVisible(bool bVisible);                                                                    // [0x5dd0bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarOpenTrackList
	// void DelMarOpenTrackList();                                                                                           // [0x3097b14] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarMapNameDebugWidgetSetVisible
	// void DelMarMapNameDebugWidgetSetVisible(bool bVisible);                                                               // [0x5dd0bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarDriverCameraSetReactiveType
	// void DelMarDriverCameraSetReactiveType(int32_t Type);                                                                 // [0x6470f8c] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarDriverCameraSetHidden
	// void DelMarDriverCameraSetHidden(bool bHidden);                                                                       // [0x5dd0bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarDismissDialog
	// void DelMarDismissDialog();                                                                                           // [0xbeb8758] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarCloseTrackList
	// void DelMarCloseTrackList();                                                                                          // [0x3097b14] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarCheckpointDebugWidgetSetVisible
	// void DelMarCheckpointDebugWidgetSetVisible(bool bVisible);                                                            // [0x5dd0bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarUI.DelMarUICheatManager.DelMarAttachedWidgetSetEnabled
	// void DelMarAttachedWidgetSetEnabled(bool bEnabled);                                                                   // [0x5dd0bf8] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarUI.FortGameSettingRegistryExtension_DelMar
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_DelMar : public UFortGameSettingRegistryExtension
{ 
public:
};

/// Class /Script/DelMarUI.UIAnimationController
/// Size: 0x0010 (0x000028 - 0x000038)
class UUIAnimationController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED


	/// Functions
	// Function /Script/DelMarUI.UIAnimationController.SwitchPlayDirection
	// void SwitchPlayDirection();                                                                                           // [0x2c97734] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.Stop
	// void Stop();                                                                                                          // [0x1aea248] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.Rewind
	// void Rewind();                                                                                                        // [0x1e2bc88] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.PlayForward
	// void PlayForward();                                                                                                   // [0x19b5bd0] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.PlayBackward
	// void PlayBackward();                                                                                                  // [0x610dcc8] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.JumpToEnd
	// void JumpToEnd();                                                                                                     // [0x220212c] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.JumpToBeginning
	// void JumpToBeginning();                                                                                               // [0x19b5670] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x9d6ad28] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.UIAnimationController.GetDuration
	// float GetDuration();                                                                                                  // [0x9d671a0] Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.UIAnimationController.FastForward
	// void FastForward();                                                                                                   // [0x625f88c] Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.UITimelineAnimationController
/// Size: 0x0020 (0x000038 - 0x000058)
class UUITimelineAnimationController : public UUIAnimationController
{ 
public:
	class UUserWidget*                                 WidgetTarget;                                               // 0x0038   (0x0008)  
	class UWidgetAnimation*                            Animation;                                                  // 0x0040   (0x0008)  
	class UUMGSequencePlayer*                          ActivePlayer;                                               // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarUI.UITimelineAnimationController.CreateInstance
	// class UUITimelineAnimationController* CreateInstance(class UUserWidget* WidgetTarget, class UWidgetAnimation* Animation); // [0xbeb84b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DelMarUI.UIAnimationControllerEntry
/// Size: 0x0010 (0x000028 - 0x000038)
class UUIAnimationControllerEntry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UUIAnimationController*                      AnimationController;                                        // 0x0028   (0x0008)  
	bool                                               bIsInverted;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/DelMarUI.WidgetTransitioner
/// Size: 0x00E0 (0x000028 - 0x000108)
class UWidgetTransitioner : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13203) /* FMulticastInlineDelegate */ __um(OnTransitionerStatusChanged);                      // 0x0028   (0x0010)  
	class UWidget*                                     TargetWidget;                                               // 0x0038   (0x0008)  
	ESlateVisibility                                   HiddenVisibility;                                           // 0x0040   (0x0001)  
	ESlateVisibility                                   ShownVisibility;                                            // 0x0041   (0x0001)  
	EWidgetTransitionerStatus                          TransitionerStatus;                                         // 0x0042   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0043   (0x0005)  MISSED
	class UUIAnimationControllerEntry*                 NormalTransitionIn;                                         // 0x0048   (0x0008)  
	class UUIAnimationControllerEntry*                 NormalTransitionOut;                                        // 0x0050   (0x0008)  
	SDK_UNDEFINED(80,13204) /* TMap<FGameplayTag, UUIAnimationControllerEntry*> */ __um(HintedTransitionsIn);      // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,13205) /* TMap<FGameplayTag, UUIAnimationControllerEntry*> */ __um(HintedTransitionsOut);     // 0x00A8   (0x0050)  
	class UUIAnimationControllerEntry*                 ActiveEntry;                                                // 0x00F8   (0x0008)  
	bool                                               bAlwaysReverseInterruptedAnimations;                        // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0101   (0x0007)  MISSED


	/// Functions
	// Function /Script/DelMarUI.WidgetTransitioner.WidgetTransitionerStatusChange__DelegateSignature
	// void WidgetTransitionerStatusChange__DelegateSignature(class UWidgetTransitioner* Transitioner, EWidgetTransitionerStatus Status); // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/DelMarUI.WidgetTransitioner.SetNormalTransitionPair
	// void SetNormalTransitionPair(class UUIAnimationController* InAnimation, bool bIsTransitionIn);                        // [0xbeba468] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.SetNormalTransitionOut
	// void SetNormalTransitionOut(class UUIAnimationController* InAnimationOut, bool bInvert);                              // [0xbeba3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.SetNormalTransitionIn
	// void SetNormalTransitionIn(class UUIAnimationController* InAnimationIn, bool bInvert);                                // [0xbeba2d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.IsHidden
	// bool IsHidden();                                                                                                      // [0xbeb92ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.WidgetTransitioner.GetTransitionerStatus
	// EWidgetTransitionerStatus GetTransitionerStatus();                                                                    // [0xbeb8b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.WidgetTransitioner.CreateInstance
	// class UWidgetTransitioner* CreateInstance(class UWidget* TargetWidget, EWidgetTransitionerInitialStatus InitialStatus, ESlateVisibility HiddenVisibility, ESlateVisibility ShownVisibility, bool AlwaysReverseInterruptedAnimations); // [0xbeb8584] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarUI.WidgetTransitioner.BP_Show
	// void BP_Show(bool bSkipAnimation, FGameplayTagContainer AnimationHints);                                              // [0xbeb82c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.BP_Initialize
	// class UWidgetTransitioner* BP_Initialize(class UWidget* TargetWidget, EWidgetTransitionerInitialStatus InitialStatus, ESlateVisibility HiddenVisibility, ESlateVisibility ShownVisibility, bool AlwaysReverseInterruptedAnimations); // [0xbeb7f5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.BP_Hide
	// void BP_Hide(bool bSkipAnimation, FGameplayTagContainer AnimationHints);                                              // [0xbeb7d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.AddHintedTransitionPair
	// void AddHintedTransitionPair(FGameplayTag InAnimationHint, class UUIAnimationController* InAnimation, bool bIsTransitionIn); // [0xbeb7974] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.AddHintedTransitionOut
	// void AddHintedTransitionOut(FGameplayTag InAnimationHint, class UUIAnimationController* InAnimationOut, bool bInvert); // [0xbeb7668] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.WidgetTransitioner.AddHintedTransitionIn
	// void AddHintedTransitionIn(FGameplayTag InAnimationHint, class UUIAnimationController* InAnimationIn, bool bInvert);  // [0xbeb735c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarActionWidget
/// Size: 0x02E8 (0x000178 - 0x000460)
class UDelMarActionWidget : public UWidget
{ 
public:
	SDK_UNDEFINED(16,13206) /* FMulticastInlineDelegate */ __um(OnInputMethodChanged);                             // 0x0178   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	FSlateBrush                                        ProgressMaterialBrush;                                      // 0x0190   (0x00C0)  
	FName                                              ProgressMaterialParam;                                      // 0x0250   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0254   (0x000C)  MISSED
	FSlateBrush                                        IconRimBrush;                                               // 0x0260   (0x00C0)  
	TArray<FDataTableRowHandle>                        InputActions;                                               // 0x0320   (0x0010)  
	class UInputAction*                                EnhancedInputAction;                                        // 0x0330   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0338   (0x0008)  MISSED
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                    // 0x0340   (0x0008)  
	unsigned char                                      UnknownData03_6[0x118];                                     // 0x0348   (0x0118)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarActionWidget.SetInputActions
	// void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                    // [0xbeba15c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarActionWidget.SetInputAction
	// void SetInputAction(FDataTableRowHandle InputActionRow);                                                              // [0xbeba00c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarActionWidget.SetIconRimBrush
	// void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                     // [0xbeb9e98] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarActionWidget.SetEnhancedInputAction
	// void SetEnhancedInputAction(class UInputAction* InInputAction);                                                       // [0xbeb9df8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarActionWidget.OnInputMethodChanged__DelegateSignature
	// void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                     // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/DelMarUI.DelMarActionWidget.IsHeldAction
	// bool IsHeldAction();                                                                                                  // [0xbeb9288] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarActionWidget.GetIcon
	// FSlateBrush GetIcon();                                                                                                // [0xbeb8ab8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarActionWidget.GetDisplayText
	// FText GetDisplayText();                                                                                               // [0xbeb8a04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarDialogBase
/// Size: 0x0018 (0x000400 - 0x000418)
class UDelMarDialogBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0400   (0x0018)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarDialogBase.DismissDialog
	// void DismissDialog();                                                                                                 // [0xbeb89cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarDialogHelper
/// Size: 0x0050 (0x000028 - 0x000078)
class UDelMarDialogHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,13207) /* TMap<FGameplayTag, TWeakObjectPtr<UClass*>> */ __um(DialogMapping);                 // 0x0028   (0x0050)  
};

/// Class /Script/DelMarUI.DelMarInputConfigWidgetBase
/// Size: 0x0008 (0x000400 - 0x000408)
class UDelMarInputConfigWidgetBase : public UCommonActivatableWidget
{ 
public:
	FUIInputConfig                                     DesiredInputConfig;                                         // 0x0400   (0x0006)  
	bool                                               bFlushPlayerInputWhenActivating;                            // 0x0406   (0x0001)  
	bool                                               bFlushPlayerInputWhenDeactivating;                          // 0x0407   (0x0001)  
};

/// Class /Script/DelMarUI.DelMarLoadingScreenHelper
/// Size: 0x0140 (0x000028 - 0x000168)
class UDelMarLoadingScreenHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FVector2D                                          BackgroundDesiredSize;                                      // 0x0028   (0x0010)  
	SDK_UNDEFINED(32,13208) /* TWeakObjectPtr<UClass*> */ __um(CustomLoadingWidget);                               // 0x0038   (0x0020)  
	FZoneLoadingScreenConfig                           ZoneConfig;                                                 // 0x0058   (0x0110)  


	/// Functions
	// Function /Script/DelMarUI.DelMarLoadingScreenHelper.PrepareDelMarLoadingScreen
	// void PrepareDelMarLoadingScreen(class UObject* WorldContextObject);                                                   // [0xbeb9ac4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarUIDirector
/// Size: 0x0010 (0x0002B0 - 0x0002C0)
class ADelMarUIDirector : public ADynamicUIDirectorBase
{ 
public:
	class UClass*                                      DialogHelperClass;                                          // 0x02B0   (0x0008)  
	class UDelMarDialogHelper*                         DialogHelper;                                               // 0x02B8   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarUIDirector.SetLoadingScreenVisibiliy
	// void SetLoadingScreenVisibiliy(bool bVisible);                                                                        // [0xbeba230] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarUIGlobals
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarUIGlobals : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGameplayTag                                       DefaultTouchControlsLayout;                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/DelMarUI.DelMarAttachedWidgetActor
/// Size: 0x0058 (0x000290 - 0x0002E8)
class ADelMarAttachedWidgetActor : public AActor
{ 
public:
	float                                              DriftFollowDampening;                                       // 0x0290   (0x0004)  
	float                                              WallFollowDampening;                                        // 0x0294   (0x0004)  
	float                                              RotateDampeningRate;                                        // 0x0298   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x029C   (0x0004)  MISSED
	class APlayerState*                                ViewPlayerState;                                            // 0x02A0   (0x0008)  
	class USceneComponent*                             AttachedTarget;                                             // 0x02A8   (0x0008)  
	class ADelMarVehicle*                              AttachedVehicle;                                            // 0x02B0   (0x0008)  
	class APlayerCameraManager*                        CameraManager;                                              // 0x02B8   (0x0008)  
	class USceneComponent*                             AttachmentBaseComponent;                                    // 0x02C0   (0x0008)  
	class UDelMarWidgetComponent*                      SpeedometerWidget;                                          // 0x02C8   (0x0008)  
	class UDelMarWidgetComponent*                      DriftBoostWidget;                                           // 0x02D0   (0x0008)  
	class UDelMarWidgetComponent*                      UnderthrustWidget;                                          // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02E0   (0x0008)  MISSED
};

/// Class /Script/DelMarUI.DelMarAttachedWidgetComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarAttachedWidgetComponent : public UControllerComponent
{ 
public:
	TArray<class UClass*>                              AttachedWidgetActorsClass;                                  // 0x00A0   (0x0010)  
	TArray<class ADelMarAttachedWidgetActor*>          AttachedWidgetActors;                                       // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/DelMarUI.DelMarAttachedWidgetComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xbeb8cfc] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarWidgetComponent
/// Size: 0x0020 (0x000670 - 0x000690)
class UDelMarWidgetComponent : public UWidgetComponent
{ 
public:
	FVector2D                                          LeftTopPadding;                                             // 0x0670   (0x0010)  
	FVector2D                                          RightBottomPadding;                                         // 0x0680   (0x0010)  
};

/// Class /Script/DelMarUI.DelMarDebugCountdown
/// Size: 0x0038 (0x000480 - 0x0004B8)
class UDelMarDebugCountdown : public UDelMarScreenBase
{ 
public:
	class UCommonRichTextBlock*                        CountdownText;                                              // 0x0480   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0488   (0x0030)  MISSED
};

/// Class /Script/DelMarUI.DelMarStartlineCountdownWidget
/// Size: 0x0038 (0x000360 - 0x000398)
class UDelMarStartlineCountdownWidget : public UDelMarUserWidget
{ 
public:
	SDK_UNDEFINED(8,13209) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedDelMarVehicle);                        // 0x0360   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0368   (0x0030)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* PC, class AActor* Old, class AActor* NewViewTarget);        // [0xbeb8df4] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.GetNumTotalIntervals
	// int32_t GetNumTotalIntervals();                                                                                       // [0xbeb8b24] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.GetNumActiveIntervals
	// int32_t GetNumActiveIntervals();                                                                                      // [0xbeb8b00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnStartlineBoostFailed
	// void BP_OnStartlineBoostFailed();                                                                                     // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnStartlineBoostActivated
	// void BP_OnStartlineBoostActivated(float PercentageMaxBonusSpeedEarned);                                               // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnRaceStarted
	// void BP_OnRaceStarted();                                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnCountdownStarted
	// void BP_OnCountdownStarted(int32_t TotalIntervals);                                                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/DelMarUI.DelMarStartlineCountdownWidget.BP_OnActiveIntervalsChanged
	// void BP_OnActiveIntervalsChanged(int32_t NumActiveIntervals);                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarCheckpointTrackerEntryWidget
/// Size: 0x0020 (0x000360 - 0x000380)
class UDelMarCheckpointTrackerEntryWidget : public UDelMarUserWidget
{ 
public:
	class UWidgetAnimation*                            AnimTransitionIn;                                           // 0x0360   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0368   (0x0018)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarCheckpointTrackerEntryWidget.BP_OnDisplayedCheckpointChanged
	// void BP_OnDisplayedCheckpointChanged(FDelMarSectionData& InSectionData);                                              // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarCheckpointTrackerWidget
/// Size: 0x0048 (0x000360 - 0x0003A8)
class UDelMarCheckpointTrackerWidget : public UDelMarUserWidget
{ 
public:
	class UClass*                                      CheckpointTrackerEntryClass;                                // 0x0360   (0x0008)  
	int32_t                                            NumDesignerPreviewEntries;                                  // 0x0368   (0x0004)  
	float                                              EntrySpacing;                                               // 0x036C   (0x0004)  
	int32_t                                            MaxEntriesToDisplay;                                        // 0x0370   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0374   (0x0004)  MISSED
	class UOverlay*                                    CheckpointEntryOverlay;                                     // 0x0378   (0x0008)  
	class URetainerBox*                                EdgeFadeRetainerBox;                                        // 0x0380   (0x0008)  
	class USizeBox*                                    TrackerSizeBox;                                             // 0x0388   (0x0008)  
	TArray<class UDelMarCheckpointTrackerEntryWidget*> DisplayedCheckpointTrackerEntries;                          // 0x0390   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarCheckpointTrackerWidget.UpdateCheckpoints
	// void UpdateCheckpoints(TArray<FDelMarSectionData> InCheckpoints);                                                     // [0xbeba5b0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarBladeMenuContainer
/// Size: 0x0010 (0x000480 - 0x000490)
class UDelMarBladeMenuContainer : public UDelMarScreenBase
{ 
public:
	class UFortDualBladeMenu*                          DualBladeMenu;                                              // 0x0480   (0x0008)  
	FGameplayTag                                       CloseBladeMenuTriggerTag;                                   // 0x0488   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x048C   (0x0004)  MISSED
};

/// Class /Script/DelMarUI.DelMarCheckpointTimer
/// Size: 0x0030 (0x000480 - 0x0004B0)
class UDelMarCheckpointTimer : public UDelMarScreenBase
{ 
public:
	class UCommonTextBlock*                            Text_LapCount;                                              // 0x0480   (0x0008)  
	class UCommonTextBlock*                            Text_CheckpointIndex;                                       // 0x0488   (0x0008)  
	class UCommonTextBlock*                            Text_Timestamp;                                             // 0x0490   (0x0008)  
	class UCommonTextBlock*                            Text_LapTimestamp;                                          // 0x0498   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x04A0   (0x0010)  MISSED
};

/// Class /Script/DelMarUI.DelMarDebugRubberbandingWidget
/// Size: 0x0048 (0x000360 - 0x0003A8)
class UDelMarDebugRubberbandingWidget : public UDelMarUserWidget
{ 
public:
	bool                                               bRubberbandingEnabled;                                      // 0x0360   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0361   (0x0003)  MISSED
	float                                              PackDistance;                                               // 0x0364   (0x0004)  
	float                                              MinPackDistance;                                            // 0x0368   (0x0004)  
	float                                              MaxPackDistance;                                            // 0x036C   (0x0004)  
	float                                              DistanceToPack;                                             // 0x0370   (0x0004)  
	float                                              MinDistanceFromPack;                                        // 0x0374   (0x0004)  
	float                                              MaxDistanceFromPack;                                        // 0x0378   (0x0004)  
	float                                              MinSpeed;                                                   // 0x037C   (0x0004)  
	float                                              StableSpeed;                                                // 0x0380   (0x0004)  
	float                                              AppliedBonusSpeed;                                          // 0x0384   (0x0004)  
	float                                              DistanceToPackRatio;                                        // 0x0388   (0x0004)  
	float                                              MaxBonusSpeedAtPosition;                                    // 0x038C   (0x0004)  
	float                                              MaxSpeedAtPosition;                                         // 0x0390   (0x0004)  
	float                                              MaxAllowedBonusSpeed;                                       // 0x0394   (0x0004)  
	float                                              BonusSpeedGainedPerSecond;                                  // 0x0398   (0x0004)  
	float                                              BonusSpeedLostPerSecond;                                    // 0x039C   (0x0004)  
	int32_t                                            MMRUsed;                                                    // 0x03A0   (0x0004)  
	float                                              MaxBonusSpeedScalar;                                        // 0x03A4   (0x0004)  


	/// Functions
	// Function /Script/DelMarUI.DelMarDebugRubberbandingWidget.BP_OnRubberbandingUpdated
	// void BP_OnRubberbandingUpdated();                                                                                     // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarDebugVehicleWidget
/// Size: 0x00B8 (0x000360 - 0x000418)
class UDelMarDebugVehicleWidget : public UDelMarUserWidget
{ 
public:
	float                                              BaseTargetSpeed;                                            // 0x0360   (0x0004)  
	float                                              FinalTargetSpeed;                                           // 0x0364   (0x0004)  
	float                                              OversteerPercentage;                                        // 0x0368   (0x0004)  
	bool                                               bHasValidDraftingTarget;                                    // 0x036C   (0x0001)  
	EDelmarDraftingState                               DraftingState;                                              // 0x036D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x036E   (0x0002)  MISSED
	float                                              DraftingBonusSpeed;                                         // 0x0370   (0x0004)  
	float                                              SecondsInDrift;                                             // 0x0374   (0x0004)  
	float                                              AccumulatedWaitingPeriodSeconds;                            // 0x0378   (0x0004)  
	float                                              DriftBoostBonusSpeed;                                       // 0x037C   (0x0004)  
	float                                              DriftBoostDuration;                                         // 0x0380   (0x0004)  
	float                                              DriftBoostDurationSecondsLeft;                              // 0x0384   (0x0004)  
	float                                              PotentialDriftBoostBonusSpeed;                              // 0x0388   (0x0004)  
	float                                              PotentialDriftBoostDuration;                                // 0x038C   (0x0004)  
	float                                              QueuedDriftBoostBonusSpeed;                                 // 0x0390   (0x0004)  
	float                                              StartlineBonusSpeed;                                        // 0x0394   (0x0004)  
	float                                              TurboBonusSpeed;                                            // 0x0398   (0x0004)  
	float                                              TurboZoneBonusSpeed;                                        // 0x039C   (0x0004)  
	float                                              TurboSecondsRemaining;                                      // 0x03A0   (0x0004)  
	float                                              TurboCharges;                                               // 0x03A4   (0x0004)  
	float                                              WorldBonusSpeed;                                            // 0x03A8   (0x0004)  
	float                                              TotalBonusSpeed;                                            // 0x03AC   (0x0004)  
	FDelMarTerrainData                                 TerrainData;                                                // 0x03B0   (0x0018)  
	int32_t                                            NumWheelWorldContacts;                                      // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	FVector                                            AverageWheelWorldContactNormal;                             // 0x03D0   (0x0018)  
	float                                              MinimumLandingSpeed;                                        // 0x03E8   (0x0004)  
	float                                              BaseForwardSpeed;                                           // 0x03EC   (0x0004)  
	float                                              StableSpeed;                                                // 0x03F0   (0x0004)  
	float                                              UpwardSpeed;                                                // 0x03F4   (0x0004)  
	float                                              VehicleSpeed;                                               // 0x03F8   (0x0004)  
	bool                                               bInvertedSteeringActive;                                    // 0x03FC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x03FD   (0x0003)  MISSED
	float                                              MaxForwardSpeed;                                            // 0x0400   (0x0004)  
	float                                              SecondsSinceTerrainPenalty;                                 // 0x0404   (0x0004)  
	int32_t                                            KickflipActivationCharges;                                  // 0x0408   (0x0004)  
	bool                                               bStrafeDisabled;                                            // 0x040C   (0x0001)  
	bool                                               bCanActivateStrafe;                                         // 0x040D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x040E   (0x0002)  MISSED
	float                                              StrafeCooldownSeconds;                                      // 0x0410   (0x0004)  
	float                                              StrafeCooldownPercentage;                                   // 0x0414   (0x0004)  


	/// Functions
	// Function /Script/DelMarUI.DelMarDebugVehicleWidget.BP_OnVehicleUpdated
	// void BP_OnVehicleUpdated();                                                                                           // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarReadyUpWidget
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UDelMarReadyUpWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/DelMarUI.DelMarReadyUpWidget.BP_ReadyUp
	// void BP_ReadyUp(bool bReady);                                                                                         // [0xbeb8138] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarReadyUpWidget.BP_OnReadyUpChanged
	// void BP_OnReadyUpChanged(bool bReady);                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarTurboBonusZoneWidget
/// Size: 0x0008 (0x000360 - 0x000368)
class UDelMarTurboBonusZoneWidget : public UDelMarUserWidget
{ 
public:
	SDK_UNDEFINED(8,13210) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedDelMarVehicle);                        // 0x0360   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarTurboBonusZoneWidget.HandleTurboStateChange
	// void HandleTurboStateChange(EDelMarTurboZoneState NewState);                                                          // [0xbeb8c7c] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarTurboBonusZoneWidget.BP_OnTurboZoneStateChanged
	// void BP_OnTurboZoneStateChanged(EDelMarTurboZoneState NewState);                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarUI.DelMarPositionalTrackerEntryWidget
/// Size: 0x0020 (0x000360 - 0x000380)
class UDelMarPositionalTrackerEntryWidget : public UDelMarUserWidget
{ 
public:
	SDK_UNDEFINED(16,13211) /* FMulticastInlineDelegate */ __um(OnDisplayedPlayerSet);                             // 0x0360   (0x0010)  
	class UWidgetAnimation*                            AnimIsTargetPlayer;                                         // 0x0370   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0378   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarPositionalTrackerEntryWidget.SetDisplayedPlayer
	// void SetDisplayedPlayer(class UDelMarPlayerViewModel* InPlayerModel);                                                 // [0xbeb9d78] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarPositionalTrackerEntryWidget.RefreshPlayerInfo
	// void RefreshPlayerInfo(bool IsTargetPlayer);                                                                          // [0xbeb9b44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarLoadingScreenWidget
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UDelMarLoadingScreenWidget : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	SDK_UNDEFINED(16,13212) /* TArray<FText> */        __um(LoadingScreenTips);                                    // 0x02F0   (0x0010)  
};

/// Class /Script/DelMarUI.DelMarPostRaceRankedRecap
/// Size: 0x0000 (0x000400 - 0x000400)
class UDelMarPostRaceRankedRecap : public UCommonActivatableWidget
{ 
public:


	/// Functions
	// Function /Script/DelMarUI.DelMarPostRaceRankedRecap.GetFailsafeDelayDuration
	// float GetFailsafeDelayDuration();                                                                                     // [0xbeb8a48] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarDebugTrackEntry
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UDelMarDebugTrackEntry : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02C0   (0x0008)  MISSED
	class UCommonTextBlock*                            TrackNameText;                                              // 0x02C8   (0x0008)  
	class UDelMarLevelDataAsset*                       LevelDataAsset;                                             // 0x02D0   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarDebugTrackEntry.BP_OnTrackButtonPressed
	// void BP_OnTrackButtonPressed();                                                                                       // [0x1f2db84] Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarDebugGameplayTrackEntry
/// Size: 0x0008 (0x0002D8 - 0x0002E0)
class UDelMarDebugGameplayTrackEntry : public UDelMarDebugTrackEntry
{ 
public:
	class UDynamicUIScene*                             GameplayTrackListScene;                                     // 0x02D8   (0x0008)  
};

/// Class /Script/DelMarUI.DelMarDebugTrackList
/// Size: 0x0010 (0x000480 - 0x000490)
class UDelMarDebugTrackList : public UDelMarScreenBase
{ 
public:
	class UCommonListView*                             TrackView;                                                  // 0x0480   (0x0008)  
	bool                                               bOnlyReturnAllowedLevels;                                   // 0x0488   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0489   (0x0007)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarDebugTrackList.BP_OnExitButtonPressed
	// void BP_OnExitButtonPressed();                                                                                        // [0xbeb810c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarBoundActionBar
/// Size: 0x0000 (0x000288 - 0x000288)
class UDelMarBoundActionBar : public UCommonBoundActionBar
{ 
public:
};

/// Class /Script/DelMarUI.DelMarBoundActionButton
/// Size: 0x0020 (0x0014B0 - 0x0014D0)
class UDelMarBoundActionButton : public UCommonBoundActionButton
{ 
public:
	class UButton*                                     Button_OptionalPCInput;                                     // 0x14A8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x14B0   (0x0010)  MISSED
	class UClass*                                      KeyboardStyle;                                              // 0x14C0   (0x0008)  
	class UClass*                                      GamepadStyle;                                               // 0x14C8   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarBoundActionButton.OnButtonClicked
	// void OnButtonClicked();                                                                                               // [0xbeb944c] Final|Native|Private 
};

/// Class /Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponent
/// Size: 0x0010 (0x000048 - 0x000058)
class UDelMarBladeMenuTriggerUIStateComponent : public UUIStateComponent
{ 
public:
	class UDelMarBladeMenuTriggerUIStateComponentConfiguration* Configuration;                                     // 0x0048   (0x0008)  
	class UFortHUDContext*                             HUDContext;                                                 // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponent.NativeHandleCursorModeChanged
	// void NativeHandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget); // [0xbeb92c4] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponentConfiguration
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarBladeMenuTriggerUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
public:
	FGameplayTag                                       BladeMenuTriggerTag;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponent
/// Size: 0x0088 (0x000048 - 0x0000D0)
class UDelMarGameplayContextUpdaterUIStateComponent : public UUIStateComponent
{ 
public:
	SDK_UNDEFINED(80,13213) /* TMap<FGameplayTag, FString> */ __um(GameStateToUITagMap);                           // 0x0048   (0x0050)  
	FGameplayTag                                       CurrentRacerState;                                          // 0x0098   (0x0004)  
	FGameplayTag                                       CurrentGameState;                                           // 0x009C   (0x0004)  
	FGameplayTag                                       CurrentRaceMode;                                            // 0x00A0   (0x0004)  
	SDK_UNDEFINED(8,13214) /* TWeakObjectPtr<AFortPlayerState*> */ __um(OwnerPlayerState);                         // 0x00A4   (0x0008)  
	SDK_UNDEFINED(8,13215) /* TWeakObjectPtr<AFortPlayerState*> */ __um(SpectatedPlayerState);                     // 0x00AC   (0x0008)  
	SDK_UNDEFINED(8,13216) /* TWeakObjectPtr<AFortPlayerController*> */ __um(OwnerPlayerController);               // 0x00B4   (0x0008)  
	SDK_UNDEFINED(8,13217) /* TWeakObjectPtr<UDelMarPlayerPreferencesComponent*> */ __um(CachedPreferences);       // 0x00BC   (0x0008)  
	SDK_UNDEFINED(8,13218) /* TWeakObjectPtr<UDelMarLevelManagerComponent*> */ __um(LevelManager);                 // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponent.HandleTouchControlsLayoutChanged
	// void HandleTouchControlsLayoutChanged(FGameplayTag Layout);                                                           // [0xbed5ce8] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponent.HandleSpectatorViewTargetChange
	// void HandleSpectatorViewTargetChange(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xbed5a5c] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponentConfiguration
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarGameplayContextUpdaterUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
public:
};

/// Class /Script/DelMarUI.DelMarViewModelBase
/// Size: 0x0000 (0x000068 - 0x000068)
class UDelMarViewModelBase : public UMVVMViewModelBase
{ 
public:


	/// Functions
	// Function /Script/DelMarUI.DelMarViewModelBase.TryGetOwningLocalPlayer
	// class ULocalPlayer* TryGetOwningLocalPlayer();                                                                        // [0xbed61a8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarGlobalLeaderboardEntryViewModel
/// Size: 0x0088 (0x000068 - 0x0000F0)
class UDelMarGlobalLeaderboardEntryViewModel : public UDelMarViewModelBase
{ 
public:
	SDK_UNDEFINED(16,13219) /* FString */              __um(PlayerAccountId);                                      // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,13220) /* FString */              __um(PlayerName);                                           // 0x0078   (0x0010)  
	double                                             RunDuration;                                                // 0x0088   (0x0008)  
	int64_t                                            Rank;                                                       // 0x0090   (0x0008)  
	bool                                               bIsLocalPlayer;                                             // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FDelMarGlobalLeaderboardEntry                      GlobalLeaderboardEntry;                                     // 0x00A0   (0x0040)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/DelMarUI.DelMarLoadingScreenViewModel
/// Size: 0x0078 (0x000068 - 0x0000E0)
class UDelMarLoadingScreenViewModel : public UDelMarViewModelBase
{ 
public:
	bool                                               bHasValidTrackData;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	SDK_UNDEFINED(24,13221) /* FText */                __um(MapName);                                              // 0x0070   (0x0018)  
	SDK_UNDEFINED(24,13222) /* FText */                __um(MapCreator);                                           // 0x0088   (0x0018)  
	SDK_UNDEFINED(24,13223) /* FText */                __um(MapDescription);                                       // 0x00A0   (0x0018)  
	FGameplayTag                                       RaceMode;                                                   // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(32,13224) /* TWeakObjectPtr<UTexture2D*> */ __um(LoadingBackgroundImage);                        // 0x00C0   (0x0020)  
};

/// Class /Script/DelMarUI.DelMarLocalPlayerSettingsViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UDelMarLocalPlayerSettingsViewModel : public UDelMarViewModelBase
{ 
public:
	bool                                               bUseIconOnlyPlayerNameplates;                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	SDK_UNDEFINED(8,13225) /* TWeakObjectPtr<UDelMarPlayerPreferencesComponent*> */ __um(CachedPreferences);       // 0x006C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarLocalPlayerSettingsViewModel.HandleNameplatesSettingChanged
	// void HandleNameplatesSettingChanged(bool NewValue);                                                                   // [0xbed56e8] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarPlayerRaceStateViewModel
/// Size: 0x0098 (0x000068 - 0x000100)
class UDelMarPlayerRaceStateViewModel : public UDelMarViewModelBase
{ 
public:
	bool                                               bHasValidData;                                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            CurrentLap;                                                 // 0x006C   (0x0004)  
	bool                                               bHasCompletedRace;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FTimespan                                          RaceCompletionTime;                                         // 0x0078   (0x0008)  
	int32_t                                            SpectatorCount;                                             // 0x0080   (0x0004)  
	int32_t                                            CurrentPlacement;                                           // 0x0084   (0x0004)  
	int32_t                                            CurrentPlacementByBestRun;                                  // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	double                                             CurrentRunStartTimestamp;                                   // 0x0090   (0x0008)  
	int32_t                                            LastCompletedSectionIndex;                                  // 0x0098   (0x0004)  
	bool                                               bIsNewBestRun;                                              // 0x009C   (0x0001)  
	bool                                               bRunActive;                                                 // 0x009D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x009E   (0x0002)  MISSED
	class UDelMarRunRecordViewModel*                   CurrentRunRecord;                                           // 0x00A0   (0x0008)  
	class UDelMarRunRecordViewModel*                   BestRunRecord;                                              // 0x00A8   (0x0008)  
	class UDelMarRunRecordViewModel*                   PreviousBestRunRecord;                                      // 0x00B0   (0x0008)  
	TArray<class UDelMarRunRecordViewModel*>           MatchRunRecords;                                            // 0x00B8   (0x0010)  
	class UDelMarGlobalLeaderboardEntryViewModel*      PersonalBestLeaderboardEntry;                               // 0x00C8   (0x0008)  
	class UDelMarGlobalLeaderboardEntryViewModel*      NewPersonalBestLeaderboardEntry;                            // 0x00D0   (0x0008)  
	class UDelMarVehicleViewModel*                     Vehicle;                                                    // 0x00D8   (0x0008)  
	FGameplayTag                                       PreviousRacerState;                                         // 0x00E0   (0x0004)  
	SDK_UNDEFINED(8,13226) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x00E4   (0x0008)  
	SDK_UNDEFINED(8,13227) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x00EC   (0x0008)  
	SDK_UNDEFINED(8,13228) /* TWeakObjectPtr<UDelMarPositionalTrackerComponent*> */ __um(PositionalTrackerComponent); // 0x00F4   (0x0008)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x00FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarPlayerRaceStateViewModel.HandleRaceReset
	// void HandleRaceReset();                                                                                               // [0xbed59a4] Final|Native|Protected 
};

/// Class /Script/DelMarUI.DelMarPlayerViewModel
/// Size: 0x0080 (0x000068 - 0x0000E8)
class UDelMarPlayerViewModel : public UDelMarViewModelBase
{ 
public:
	SDK_UNDEFINED(24,13229) /* FText */                __um(DisplayName);                                          // 0x0068   (0x0018)  
	SDK_UNDEFINED(32,13230) /* TWeakObjectPtr<UTexture2D*> */ __um(AvatarLargeImage);                              // 0x0080   (0x0020)  
	SDK_UNDEFINED(32,13231) /* TWeakObjectPtr<UTexture2D*> */ __um(AvatarSmallImage);                              // 0x00A0   (0x0020)  
	FColor                                             AvatarBackgroundColor;                                      // 0x00C0   (0x0004)  
	FColor                                             AvatarHighlightColor;                                       // 0x00C4   (0x0004)  
	class UTextureRenderTarget2D*                      DriverCameraRT;                                             // 0x00C8   (0x0008)  
	class UDelMarPlayerRaceStateViewModel*             PlayerRaceState;                                            // 0x00D0   (0x0008)  
	SDK_UNDEFINED(8,13232) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x00D8   (0x0008)  
	SDK_UNDEFINED(8,13233) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarPlayerViewModel.GetPlayerState
	// class AFortPlayerState* GetPlayerState();                                                                             // [0xbed4b38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarRaceViewModel
/// Size: 0x0198 (0x000068 - 0x000200)
class UDelMarRaceViewModel : public UDelMarViewModelBase
{ 
public:
	int32_t                                            TotalLaps;                                                  // 0x0068   (0x0004)  
	int32_t                                            TotalPlayers;                                               // 0x006C   (0x0004)  
	int32_t                                            TotalReadyPlayers;                                          // 0x0070   (0x0004)  
	int32_t                                            TotalLoadedPlayers;                                         // 0x0074   (0x0004)  
	int32_t                                            TotalJoiningPlayers;                                        // 0x0078   (0x0004)  
	int32_t                                            TotalPlacements;                                            // 0x007C   (0x0004)  
	SDK_UNDEFINED(24,13234) /* FText */                __um(MapName);                                              // 0x0080   (0x0018)  
	SDK_UNDEFINED(24,13235) /* FText */                __um(MapCreator);                                           // 0x0098   (0x0018)  
	SDK_UNDEFINED(24,13236) /* FText */                __um(MapDescription);                                       // 0x00B0   (0x0018)  
	FGameplayTag                                       RaceMode;                                                   // 0x00C8   (0x0004)  
	FGameplayTag                                       DelMarGameplayState;                                        // 0x00CC   (0x0004)  
	SDK_UNDEFINED(32,13237) /* TWeakObjectPtr<UTexture2D*> */ __um(LoadingBackgroundImage);                        // 0x00D0   (0x0020)  
	double                                             TimeUntilRaceStart;                                         // 0x00F0   (0x0008)  
	double                                             RaceEndTimestamp;                                           // 0x00F8   (0x0008)  
	int32_t                                            MatchTimeLimitSeconds;                                      // 0x0100   (0x0004)  
	bool                                               bIsOvertime;                                                // 0x0104   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	double                                             TimeUntilTrackChange;                                       // 0x0108   (0x0008)  
	double                                             FirstPlayerFinishedServerTimestamp;                         // 0x0110   (0x0008)  
	double                                             FirstPlayerFinishedRaceEndServerTimestamp;                  // 0x0118   (0x0008)  
	char                                               CurrentMatchmakingState;                                    // 0x0120   (0x0001)  
	bool                                               bIsRaceFinished;                                            // 0x0121   (0x0001)  
	bool                                               bIsRaceStarted;                                             // 0x0122   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0123   (0x0005)  MISSED
	class UDelMarPlayerViewModel*                      LocalPlayer;                                                // 0x0128   (0x0008)  
	class UDelMarPlayerViewModel*                      TargetPlayer;                                               // 0x0130   (0x0008)  
	TArray<class UDelMarPlayerViewModel*>              PositionPlayers;                                            // 0x0138   (0x0010)  
	TArray<class UDelMarPlayerViewModel*>              FinalPlacements;                                            // 0x0148   (0x0010)  
	SDK_UNDEFINED(80,13238) /* TMap<int32_t, UDelMarPlayerViewModel*> */ __um(RacePlayers);                        // 0x0158   (0x0050)  
	TArray<class UDelMarGlobalLeaderboardEntryViewModel*> TopLeaderboardEntries;                                   // 0x01A8   (0x0010)  
	TArray<class UDelMarGlobalLeaderboardEntryViewModel*> FocusedLeaderboardEntries;                               // 0x01B8   (0x0010)  
	TArray<class UDelMarGlobalLeaderboardEntryViewModel*> FriendLeaderboardEntries;                                // 0x01C8   (0x0010)  
	SDK_UNDEFINED(8,13239) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x01D8   (0x0008)  
	SDK_UNDEFINED(8,13240) /* TWeakObjectPtr<AFortPlayerController*> */ __um(LocalPlayerController);               // 0x01E0   (0x0008)  
	SDK_UNDEFINED(8,13241) /* TWeakObjectPtr<AFortPlayerState*> */ __um(ViewTargetPlayerState);                    // 0x01E8   (0x0008)  
	SDK_UNDEFINED(8,13242) /* TWeakObjectPtr<UDelMarPositionalTrackerComponent*> */ __um(PositionalTrackerComponent); // 0x01F0   (0x0008)  
	class UDelMarPlayerViewModel*                      EmptyPlayerViewModel;                                       // 0x01F8   (0x0008)  


	/// Functions
	// Function /Script/DelMarUI.DelMarRaceViewModel.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* PC, class AActor* Old, class AActor* NewViewTarget);        // [0xbed5f4c] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarRaceViewModel.HandleFinalRacePositionsChanged
	// void HandleFinalRacePositionsChanged(TArray<FDelMarFinalRacePositionEntry>& FinalRacePositions, FDelMarEvent_RunRecorded& RecordedRun); // [0xbed4f04] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/DelMarUI.DelMarSectionData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarSectionData
{ 
	int32_t                                            SectionIndex;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	double                                             LapDurationAtSection;                                       // 0x0008   (0x0008)  
	double                                             DeltaTime;                                                  // 0x0010   (0x0008)  
};

/// Class /Script/DelMarUI.DelMarRunRecordViewModel
/// Size: 0x0038 (0x000068 - 0x0000A0)
class UDelMarRunRecordViewModel : public UDelMarViewModelBase
{ 
public:
	FDelMarRunRecord                                   Record;                                                     // 0x0068   (0x0020)  
	TArray<FDelMarSectionData>                         RunRecordSectionData;                                       // 0x0088   (0x0010)  
	bool                                               bHasValidData;                                              // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/DelMarUI.DelMarTutorialViewModel
/// Size: 0x0048 (0x000068 - 0x0000B0)
class UDelMarTutorialViewModel : public UDelMarViewModelBase
{ 
public:
	SDK_UNDEFINED(24,13243) /* FText */                __um(SectionTitle);                                         // 0x0068   (0x0018)  
	int32_t                                            CurrentSection;                                             // 0x0080   (0x0004)  
	int32_t                                            TotalSections;                                              // 0x0084   (0x0004)  
	TArray<class UInputAction*>                        CurrentTutorialAnnouncementInputActions;                    // 0x0088   (0x0010)  
	TArray<class UInputAction*>                        CurrentTutorialHintInputActions;                            // 0x0098   (0x0010)  
	FTimespan                                          FinishTargetTime;                                           // 0x00A8   (0x0008)  
};

/// Class /Script/DelMarUI.DelMarVehicleViewModel
/// Size: 0x0080 (0x000068 - 0x0000E8)
class UDelMarVehicleViewModel : public UDelMarViewModelBase
{ 
public:
	bool                                               bHasValidData;                                              // 0x0068   (0x0001)  
	bool                                               bIsTurboEnabled;                                            // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x006A   (0x0002)  MISSED
	bool                                               bIsDrifting;                                                // 0x006C   (0x0001)  
	bool                                               bIsDriftingRight;                                           // 0x006D   (0x0001)  
	bool                                               bWheelsOnGround;                                            // 0x006E   (0x0001)  
	bool                                               bAnyWheelsOnGround;                                         // 0x006F   (0x0001)  
	TArray<double>                                     DriftRanges;                                                // 0x0070   (0x0010)  
	float                                              DriftSlipAngleRatio;                                        // 0x0080   (0x0004)  
	EDelMarDriftSteerState                             DriftSteerState;                                            // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	float                                              PotentialDriftBoostPercent;                                 // 0x0088   (0x0004)  
	float                                              StartlineBoostBonus;                                        // 0x008C   (0x0004)  
	EDelMarSpeedometerState                            SpeedometerState;                                           // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              CurrentSpeed;                                               // 0x0094   (0x0004)  
	float                                              NumTurboMaxCharges;                                         // 0x0098   (0x0004)  
	float                                              NumTurboCurrentCharges;                                     // 0x009C   (0x0004)  
	EDelMarTurboZoneState                              TurboBonusZoneState;                                        // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              UnderthrustPercent;                                         // 0x00A4   (0x0004)  
	double                                             MissedCheckpointDemoTimestamp;                              // 0x00A8   (0x0008)  
	double                                             ReturnToTrackDemoTimestamp;                                 // 0x00B0   (0x0008)  
	bool                                               bIsHeadingWrongWay;                                         // 0x00B8   (0x0001)  
	bool                                               bToggleThrottle;                                            // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x00BA   (0x0002)  MISSED
	float                                              ThrottleInputValue;                                         // 0x00BC   (0x0004)  
	bool                                               bDemolished;                                                // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              DemolishActionPressedPercent;                               // 0x00C4   (0x0004)  
	bool                                               bDemolishActionEnabled;                                     // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	SDK_UNDEFINED(8,13244) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x00CC   (0x0008)  
	SDK_UNDEFINED(8,13245) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CurrentVehicle);                             // 0x00D4   (0x0008)  
	SDK_UNDEFINED(8,13246) /* TWeakObjectPtr<UDelMarGlobalInputDisabler*> */ __um(GlobalInputDisabler);            // 0x00DC   (0x0008)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x00E4   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarVehicleViewModel.Initialize
	// void Initialize(class AFortPlayerState* InPlayerState);                                                               // [0xbed60d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleWrongwayIndication
	// void HandleWrongwayIndication(FDelMarEvent_VehicleWrongwayStatus& Event);                                             // [0xbed6044] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleVehicleWheelsLeftGround
	// void HandleVehicleWheelsLeftGround();                                                                                 // [0xbed5f38] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleUnderthrustPercentChanged
	// void HandleUnderthrustPercentChanged(float InValue);                                                                  // [0xbed5eb8] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleTurboChargesUpdated
	// void HandleTurboChargesUpdated();                                                                                     // [0xbed5ea4] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleTurboBonusZoneChanged
	// void HandleTurboBonusZoneChanged(EDelMarTurboZoneState InTurboBonusZoneState);                                        // [0xbed5e24] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleToggleThrottleSettingChanged
	// void HandleToggleThrottleSettingChanged(bool bValue);                                                                 // [0xbed5c68] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleStartlineBoostFailed
	// void HandleStartlineBoostFailed();                                                                                    // [0xbed5c54] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleStartlineBoostActivated
	// void HandleStartlineBoostActivated(float InValue);                                                                    // [0xbed5bd4] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleSpeedometerSpeedChanged
	// void HandleSpeedometerSpeedChanged(float InValue);                                                                    // [0xbed5b54] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleReturnToTrackCountdownInitiated
	// void HandleReturnToTrackCountdownInitiated(FDelMarEvent_ReturnToTrackDemoCountdown& Event);                           // [0xbed59cc] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleReturnToTrackCountdownCancelled
	// void HandleReturnToTrackCountdownCancelled();                                                                         // [0xbed59b8] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandlePotentialDriftBoostChanged
	// void HandlePotentialDriftBoostChanged(float InValue);                                                                 // [0xbed5924] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleOnVehicleDemolished
	// void HandleOnVehicleDemolished(FGameplayTag CausedByTag);                                                             // [0xbed57e8] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleOnThrottleInput
	// void HandleOnThrottleInput(float Value);                                                                              // [0xbed5768] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleMissedCheckpointCountdownInitiated
	// void HandleMissedCheckpointCountdownInitiated(FDelMarEvent_MissedCheckpointDemoCountdown& Event);                     // [0xbed5658] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleMissedCheckpointCountdownCancelled
	// void HandleMissedCheckpointCountdownCancelled();                                                                      // [0xbed5644] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleDriftSlipAngleRatioChanged
	// void HandleDriftSlipAngleRatioChanged(float InValue);                                                                 // [0xbed4e84] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleDriftDeactivated
	// void HandleDriftDeactivated();                                                                                        // [0xbed4e70] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleDriftActivated
	// void HandleDriftActivated();                                                                                          // [0xbed4e5c] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleDemolishPressDurationUpdated
	// void HandleDemolishPressDurationUpdated(float PressedDurationPercentage);                                             // [0xbed4ddc] Final|Native|Protected 
	// Function /Script/DelMarUI.DelMarVehicleViewModel.HandleAnyWheelsOnGroundChanged
	// void HandleAnyWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                                // [0xbed4c38] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarUI.DelMarRankedPlacementChangeVM
/// Size: 0x0018 (0x000068 - 0x000080)
class UDelMarRankedPlacementChangeVM : public UMVVMViewModelBase
{ 
public:
	class UDelMarRankedPlacementVM*                    InitialPlacement;                                           // 0x0068   (0x0008)  
	class UDelMarRankedPlacementVM*                    CurrentPlacement;                                           // 0x0070   (0x0008)  
	int32_t                                            PositionDelta;                                              // 0x0078   (0x0004)  
	bool                                               bIsDataValid;                                               // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x007D   (0x0003)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarRankedPlacementChangeVM.GetPositionDelta
	// int32_t GetPositionDelta();                                                                                           // [0x59a08bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementChangeVM.GetIsDataValid
	// bool GetIsDataValid();                                                                                                // [0xb09a4ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementChangeVM.GetInitialPlacement
	// class UDelMarRankedPlacementVM* GetInitialPlacement();                                                                // [0x60d55f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementChangeVM.GetCurrentPlacement
	// class UDelMarRankedPlacementVM* GetCurrentPlacement();                                                                // [0x60d5554] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarRankedPlacementVM
/// Size: 0x0120 (0x000068 - 0x000188)
class UDelMarRankedPlacementVM : public UMVVMViewModelBase
{ 
public:
	bool                                               bIsUnranked;                                                // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            TierIndex;                                                  // 0x006C   (0x0004)  
	int32_t                                            PlayerPosition;                                             // 0x0070   (0x0004)  
	float                                              ProgressTowardNextTier;                                     // 0x0074   (0x0004)  
	bool                                               bIsDataValid;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FFortHabaneroTier>                          TierList;                                                   // 0x0080   (0x0010)  
	class UFortHabaneroDisplayData*                    RankedDisplayData;                                          // 0x0090   (0x0008)  
	unsigned char                                      UnknownData02_6[0xF0];                                      // 0x0098   (0x00F0)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.TierDisplayData
	// FFortHabaneroTier TierDisplayData();                                                                                  // [0xbed6164] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetTierIndex
	// int32_t GetTierIndex();                                                                                               // [0xbed4b74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetProgressTowardNextTier
	// float GetProgressTowardNextTier();                                                                                    // [0xbed4b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetPlayerPosition
	// int32_t GetPlayerPosition();                                                                                          // [0x7a902f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetIsUnranked
	// bool GetIsUnranked();                                                                                                 // [0x9a3c4cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarUI.DelMarRankedPlacementVM.GetIsDataValid
	// bool GetIsDataValid();                                                                                                // [0x9f41bb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarUI.DelMarRankedRecapVM
/// Size: 0x0050 (0x000068 - 0x0000B8)
class UDelMarRankedRecapVM : public UMVVMViewModelBase
{ 
public:
	class UDelMarRankedPlacementChangeVM*              PlacementChange;                                            // 0x0068   (0x0008)  
	EDelMarRankedProgressError                         ErrorState;                                                 // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	SDK_UNDEFINED(16,13247) /* FString */              __um(OptionalErrorText);                                    // 0x0078   (0x0010)  
	SDK_UNDEFINED(8,13248) /* TWeakObjectPtr<ULocalPlayer*> */ __um(OwningLocalPlayer);                            // 0x0088   (0x0008)  
	SDK_UNDEFINED(8,13249) /* TWeakObjectPtr<AFortPlayerControllerAthena*> */ __um(OwningPlayerController);        // 0x0090   (0x0008)  
	class UFortHabaneroDisplayData*                    RankedDisplayData;                                          // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/DelMarUI.DelMarRankedRecapVM.QueryProgress
	// void QueryProgress();                                                                                                 // [0xbed6150] Final|Native|Private 
	// Function /Script/DelMarUI.DelMarRankedRecapVM.GetUnrankedTierData
	// bool GetUnrankedTierData(FFortHabaneroTier& OutUnrankedTierData);                                                     // [0xbed4b88] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarUI.DelMarRankedVMContextResolver
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarRankedVMContextResolver : public UMVVMViewModelContextResolver
{ 
public:
	class UFortHabaneroDisplayData*                    RankedDisplayData;                                          // 0x0028   (0x0008)  
	SDK_UNDEFINED(16,13250) /* FString */              __um(DevelopmentRankedKey);                                 // 0x0030   (0x0010)  
};

/// Struct /Script/DelMarUI.DelMarReactiveWidgetAnimation
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarReactiveWidgetAnimation
{ 
	FName                                              Intro;                                                      // 0x0000   (0x0004)  
	FName                                              Outro;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarUI.DelMarKeyPair
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarKeyPair
{ 
	FKey                                               KBMKey;                                                     // 0x0000   (0x0018)  
	FKey                                               GamepadKey;                                                 // 0x0018   (0x0018)  
};

/// Struct /Script/DelMarUI.DelMarTouchActionButtonStateData
/// Size: 0x0190 (0x000000 - 0x000190)
struct FDelMarTouchActionButtonStateData
{ 
	FSlateBrush                                        IconBrush;                                                  // 0x0000   (0x00C0)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x00C0   (0x00C0)  
	ESlateVisibility                                   ButtonVisibility;                                           // 0x0180   (0x0001)  
	bool                                               bCancelInputOnEnter;                                        // 0x0181   (0x0001)  
	bool                                               bCancelInputOnLeave;                                        // 0x0182   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x0183   (0x000D)  MISSED
};

