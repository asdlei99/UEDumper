
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricMetasoundDataTypes
/// dependency: FabricUI
/// dependency: FMCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: HarmonixMetasound
/// dependency: HarmonixMidi
/// dependency: MetasoundEngine
/// dependency: MetasoundFrontend
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SlateCore

/// Enum /Script/FabricRuntime.EFabricContinuousInteractionDirection
/// Size: 0x03
enum class EFabricContinuousInteractionDirection : uint8_t
{
	EFabricContinuousInteractionDirection__Vertical                                  = 0,
	EFabricContinuousInteractionDirection__Horizontal                                = 1,
	EFabricContinuousInteractionDirection__EFabricContinuousInteractionDirection_MAX = 2
};

/// Enum /Script/FabricRuntime.EFabricInteractionToolStates
/// Size: 0x09
enum class EFabricInteractionToolStates : uint8_t
{
	EFabricInteractionToolStates__Equipped                                           = 0,
	EFabricInteractionToolStates__HoveredControl                                     = 1,
	EFabricInteractionToolStates__HoveredValidCablePort                              = 2,
	EFabricInteractionToolStates__HoveredInvalid                                     = 3,
	EFabricInteractionToolStates__ContinuousSelected                                 = 4,
	EFabricInteractionToolStates__MomentarySelected                                  = 5,
	EFabricInteractionToolStates__CableSelected                                      = 6,
	EFabricInteractionToolStates__None                                               = 7,
	EFabricInteractionToolStates__EFabricInteractionToolStates_MAX                   = 8
};

/// Enum /Script/FabricRuntime.EFabricInteractableType
/// Size: 0x05
enum class EFabricInteractableType : uint8_t
{
	EFabricInteractableType__Momentary                                               = 0,
	EFabricInteractableType__Continuous                                              = 1,
	EFabricInteractableType__Cable                                                   = 2,
	EFabricInteractableType__None                                                    = 3,
	EFabricInteractableType__EFabricInteractableType_MAX                             = 4
};

/// Enum /Script/FabricRuntime.EFabricMetasoundPlayState
/// Size: 0x05
enum class EFabricMetasoundPlayState : uint8_t
{
	EFabricMetasoundPlayState__Playing                                               = 0,
	EFabricMetasoundPlayState__Rebuilding                                            = 1,
	EFabricMetasoundPlayState__Paused                                                = 2,
	EFabricMetasoundPlayState__Stopped                                               = 3,
	EFabricMetasoundPlayState__EFabricMetasoundPlayState_MAX                         = 4
};

/// Enum /Script/FabricRuntime.EFabricMetasoundMusicEventPriority
/// Size: 0x03
enum class EFabricMetasoundMusicEventPriority : uint8_t
{
	EFabricMetasoundMusicEventPriority__AboveEmotes                                  = 0,
	EFabricMetasoundMusicEventPriority__BelowEmotes                                  = 1,
	EFabricMetasoundMusicEventPriority__EFabricMetasoundMusicEventPriority_MAX       = 2
};

/// Enum /Script/FabricRuntime.EFabricNoteStyle
/// Size: 0x04
enum class EFabricNoteStyle : uint8_t
{
	EFabricNoteStyle__Straight                                                       = 0,
	EFabricNoteStyle__Triplet                                                        = 1,
	EFabricNoteStyle__Dotted                                                         = 2,
	EFabricNoteStyle__EFabricNoteStyle_MAX                                           = 3
};

/// Enum /Script/FabricRuntime.EFabricFloatProviderType
/// Size: 0x03
enum class EFabricFloatProviderType : uint8_t
{
	EFabricFloatProviderType__Continuous                                             = 0,
	EFabricFloatProviderType__Instantaneous                                          = 1,
	EFabricFloatProviderType__EFabricFloatProviderType_MAX                           = 2
};

/// Enum /Script/FabricRuntime.EFabricWaveSyncType
/// Size: 0x03
enum class EFabricWaveSyncType : uint8_t
{
	EFabricWaveSyncType__Free                                                        = 0,
	EFabricWaveSyncType__BeatSync                                                    = 1,
	EFabricWaveSyncType__EFabricWaveSyncType_MAX                                     = 2
};

/// Enum /Script/FabricRuntime.EFabricWaveShape
/// Size: 0x07
enum class EFabricWaveShape : uint8_t
{
	EFabricWaveShape__Sine                                                           = 0,
	EFabricWaveShape__Triangle                                                       = 1,
	EFabricWaveShape__Saw                                                            = 2,
	EFabricWaveShape__Square                                                         = 3,
	EFabricWaveShape__RandomStepped                                                  = 4,
	EFabricWaveShape__RandomSmooth                                                   = 5,
	EFabricWaveShape__EFabricWaveShape_MAX                                           = 6
};

/// Enum /Script/FabricRuntime.EFabricValueSetterTransitionTiming
/// Size: 0x05
enum class EFabricValueSetterTransitionTiming : uint8_t
{
	Immediate                                                                        = 0,
	NextBeat                                                                         = 1,
	NextBar                                                                          = 2,
	NextPhrase                                                                       = 3,
	EFabricValueSetterTransitionTiming_MAX                                           = 4
};

/// Enum /Script/FabricRuntime.EFabricCloneTransformBehavior
/// Size: 0x06
enum class EFabricCloneTransformBehavior : uint8_t
{
	EFabricCloneTransformBehavior__None                                              = 0,
	EFabricCloneTransformBehavior__Uniform                                           = 1,
	EFabricCloneTransformBehavior__Stepped                                           = 2,
	EFabricCloneTransformBehavior__SteppedCentered                                   = 3,
	EFabricCloneTransformBehavior__SteppedExponential                                = 4,
	EFabricCloneTransformBehavior__EFabricCloneTransformBehavior_MAX                 = 5
};

/// Enum /Script/FabricRuntime.EJamFabricSyncType
/// Size: 0x04
enum class EJamFabricSyncType : uint8_t
{
	EJamFabricSyncType__Disconnected                                                 = 0,
	EJamFabricSyncType__FabricControlsJam                                            = 1,
	EJamFabricSyncType__Bidirectional                                                = 2,
	EJamFabricSyncType__EJamFabricSyncType_MAX                                       = 3
};

/// Enum /Script/FabricRuntime.EFabricMetaSoundPinDirection
/// Size: 0x03
enum class EFabricMetaSoundPinDirection : uint8_t
{
	EFabricMetaSoundPinDirection__Input                                              = 0,
	EFabricMetaSoundPinDirection__Output                                             = 1,
	EFabricMetaSoundPinDirection__EFabricMetaSoundPinDirection_MAX                   = 2
};

/// Enum /Script/FabricRuntime.EFabricMetasoundInputType
/// Size: 0x04
enum class EFabricMetasoundInputType : uint8_t
{
	EFabricMetasoundInputType__ModulatedUserOption                                   = 0,
	EFabricMetasoundInputType__NonModulatedUserOption                                = 1,
	EFabricMetasoundInputType__DirectInput                                           = 2,
	EFabricMetasoundInputType__EFabricMetasoundInputType_MAX                         = 3
};

/// Enum /Script/FabricRuntime.EFabricMetaSoundPatchWrapperQuality
/// Size: 0x03
enum class EFabricMetaSoundPatchWrapperQuality : uint8_t
{
	EFabricMetaSoundPatchWrapperQuality__High                                        = 0,
	EFabricMetaSoundPatchWrapperQuality__Low                                         = 1,
	EFabricMetaSoundPatchWrapperQuality__EFabricMetaSoundPatchWrapperQuality_MAX     = 2
};

/// Enum /Script/FabricRuntime.EFabricUserOptionType
/// Size: 0x06
enum class EFabricUserOptionType : uint8_t
{
	EFabricUserOptionType__Boolean                                                   = 0,
	EFabricUserOptionType__Integer                                                   = 1,
	EFabricUserOptionType__Float                                                     = 2,
	EFabricUserOptionType__String                                                    = 3,
	EFabricUserOptionType__Enum                                                      = 4,
	EFabricUserOptionType__EFabricUserOptionType_MAX                                 = 5
};

/// Enum /Script/FabricRuntime.ESequencerType
/// Size: 0x03
enum class ESequencerType : uint8_t
{
	ESequencerType__MultiTrack                                                       = 0,
	ESequencerType__SingleTrack                                                      = 1,
	ESequencerType__ESequencerType_MAX                                               = 2
};

/// Class /Script/FabricRuntime.FabricAnimatableButtonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAnimatableButtonInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAnimatableButtonInterface.PlayOpenAnimation
	// void PlayOpenAnimation();                                                                                             // [0x2c0e95c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricAnimatableButtonInterface.PlayCloseAnimation
	// void PlayCloseAnimation();                                                                                            // [0x313fdf0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricButtonBase
/// Size: 0x0078 (0x000290 - 0x000308)
class AFabricButtonBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0290   (0x0010)  MISSED
	SDK_UNDEFINED(16,13575) /* FMulticastInlineDelegate */ __um(ToggleStateChanged);                               // 0x02A0   (0x0010)  
	double                                             OpenTimeSeconds;                                            // 0x02B0   (0x0008)  
	double                                             CloseTimeSeconds;                                           // 0x02B8   (0x0008)  
	bool                                               bHasToggle;                                                 // 0x02C0   (0x0001)  
	SDK_UNDEFINED(1,13576) /* TEnumAsByte<EButtonPressMethod> */ __um(ClickMethod);                                // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x02C2   (0x0006)  MISSED
	class APlayerController*                           InteractingController;                                      // 0x02C8   (0x0008)  
	SDK_UNDEFINED(16,13577) /* FString */              __um(ButtonId);                                             // 0x02D0   (0x0010)  
	SDK_UNDEFINED(24,13578) /* FText */                __um(ButtonLabel);                                          // 0x02E0   (0x0018)  
	bool                                               bEnabled;                                                   // 0x02F8   (0x0001)  
	bool                                               bHovered;                                                   // 0x02F9   (0x0001)  
	bool                                               bPressed;                                                   // 0x02FA   (0x0001)  
	ECheckBoxState                                     ToggleState;                                                // 0x02FB   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class UFabricInteractableViewModel*                WidgetViewModel;                                            // 0x0300   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(class APlayerController* InteractingController, bool IsToggle);            // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonBase.SwapToggle
	// void SwapToggle();                                                                                                    // [0xb8972c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                               // [0xb8971c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                              // [0xb896fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                    // [0xb896d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x2ee209c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                           // [0x761be4c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnHovered
	// void OnHovered();                                                                                                     // [0x6169b80] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnEnabled
	// void OnEnabled();                                                                                                     // [0x2fef0f4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnDisabled
	// void OnDisabled();                                                                                                    // [0x18017a4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonReleased
	// void OnButtonReleased();                                                                                              // [0x7be61dc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonPressed
	// void OnButtonPressed();                                                                                               // [0x1f9c7fc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                         // [0x2f520e8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonClicked
	// void OnButtonClicked();                                                                                               // [0x18011ac] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.IsToggledOn
	// bool IsToggledOn();                                                                                                   // [0xb8965f8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsPressed
	// bool IsPressed();                                                                                                     // [0x85d9cf8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsHovered
	// bool IsHovered();                                                                                                     // [0x92e51bc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsEnabled
	// bool IsEnabled();                                                                                                     // [0xb896598] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                         // [0x65f1174] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                          // [0x894def8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                           // [0x1ae88e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                           // [0x8344310] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                     // [0x216a2f8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                           // [0x216d69c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.GetOpenTimeline
	// class UTimelineComponent* GetOpenTimeline();                                                                          // [0x6486500] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.GetCloseTimeline
	// class UTimelineComponent* GetCloseTimeline();                                                                         // [0x6486500] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/FabricRuntime.FabricButtonComponentBase
/// Size: 0x0090 (0x0005C0 - 0x000650)
class UFabricButtonComponentBase : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x05C0   (0x0010)  MISSED
	SDK_UNDEFINED(16,13579) /* FMulticastInlineDelegate */ __um(ToggleStateChanged);                               // 0x05D0   (0x0010)  
	double                                             OpenTimeSeconds;                                            // 0x05E0   (0x0008)  
	double                                             CloseTimeSeconds;                                           // 0x05E8   (0x0008)  
	bool                                               bHasToggle;                                                 // 0x05F0   (0x0001)  
	SDK_UNDEFINED(1,13580) /* TEnumAsByte<EButtonPressMethod> */ __um(ClickMethod);                                // 0x05F1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x05F2   (0x0006)  MISSED
	class APlayerController*                           InteractingController;                                      // 0x05F8   (0x0008)  
	SDK_UNDEFINED(16,13581) /* FString */              __um(ButtonId);                                             // 0x0600   (0x0010)  
	SDK_UNDEFINED(24,13582) /* FText */                __um(ButtonLabel);                                          // 0x0610   (0x0018)  
	bool                                               bUseScreenGrid;                                             // 0x0628   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0629   (0x0007)  MISSED
	FVector2D                                          ScreenGridPosition;                                         // 0x0630   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0640   (0x0001)  
	bool                                               bHovered;                                                   // 0x0641   (0x0001)  
	bool                                               bPressed;                                                   // 0x0642   (0x0001)  
	ECheckBoxState                                     ToggleState;                                                // 0x0643   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0644   (0x0004)  MISSED
	class UFabricInteractableViewModel*                WidgetViewModel;                                            // 0x0648   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(class APlayerController* InteractingController, bool IsToggle);            // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SwapToggle
	// void SwapToggle();                                                                                                    // [0xb8972dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                               // [0xb897248] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                              // [0xb8970bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                    // [0xb896db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0xb896c98] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                           // [0xb896c14] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnHovered
	// void OnHovered();                                                                                                     // [0xb896660] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnEnabled
	// void OnEnabled();                                                                                                     // [0x1377fa8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnDisabled
	// void OnDisabled();                                                                                                    // [0x88262b8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonReleased
	// void OnButtonReleased();                                                                                              // [0xb896648] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonPressed
	// void OnButtonPressed();                                                                                               // [0xa9aa268] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                         // [0x38e6d38] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonClicked
	// void OnButtonClicked();                                                                                               // [0xb896630] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsToggledOn
	// bool IsToggledOn();                                                                                                   // [0xb896614] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsPressed
	// bool IsPressed();                                                                                                     // [0xb8965e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsHovered
	// bool IsHovered();                                                                                                     // [0xb8965c8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsEnabled
	// bool IsEnabled();                                                                                                     // [0xb8965b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                         // [0xb896580] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                          // [0xb896568] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                           // [0xa9aa280] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                           // [0xb896550] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                     // [0xb896538] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                           // [0xb896520] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetOpenTimeline
	// class UTimelineComponent* GetOpenTimeline();                                                                          // [0x6486500] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetCloseTimeline
	// class UTimelineComponent* GetCloseTimeline();                                                                         // [0x6486500] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ConstructButton
	// void ConstructButton();                                                                                               // [0x8826f54] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricDevice
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricDevice : public UInterface
{ 
public:
};

/// Class /Script/FabricRuntime.FabricMetaSoundPatchOwner
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMetaSoundPatchOwner : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundPatchOwner.GetMetaSoundPatchWrapper
	// class UFabricMetaSoundPatchWrapper* GetMetaSoundPatchWrapper();                                                       // [0x2d8e9c4] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricAudioGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioGenerator : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAudioGenerator.GetAudioAnalyzer
	// FSourceEffectChainEntry GetAudioAnalyzer();                                                                           // [0xb896290] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricAudioModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioModifier : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAudioModifier.GetSourceEffectChainEntries
	// TArray<FSourceEffectChainEntry> GetSourceEffectChainEntries();                                                        // [0xb8964ac] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricAudioReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAudioReceiver.GetSoundSourceBus
	// class USoundSourceBus* GetSoundSourceBus();                                                                           // [0x2d8e9c4] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricFloatGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricFloatGenerator : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatGenerator.GetFloatProvider
	// class UFabricFloatProviderBase* GetFloatProvider();                                                                   // [0x2d8e9c4] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricFloatReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricFloatReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatReceiver.SetFloatProviders
	// void SetFloatProviders(TArray<UFabricFloatProviderBase*>& FloatProvider);                                             // [0x620f0a0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricTextureGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureGenerator : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureGenerator.GetTextureProvider
	// class UFabricTextureProviderBase* GetTextureProvider();                                                               // [0x2d8e9c4] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricTextureModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureModifier : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureModifier.IsShowingTexturePreview
	// bool IsShowingTexturePreview();                                                                                       // [0x23bb8dc] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricTextureModifier.GetTextureModifier
	// class UFabricTextureModifierBase* GetTextureModifier();                                                               // [0x2d8e9c4] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricTextureReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureReceiver.OnTexturesChanged
	// void OnTexturesChanged(TArray<FFabricTextureProviderTexture>& Texture);                                               // [0x75b0104] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMeshGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshGenerator : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshGenerator.GetMeshProvider
	// class UFabricMeshProviderBase* GetMeshProvider();                                                                     // [0x2d8e9c4] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMeshModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshModifier : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshModifier.OnMeshesChanged
	// void OnMeshesChanged(TArray<FFabricMeshInstanceReference>& InstanceMeshReferences, bool bInstancesChanged);           // [0xb896a70] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshModifier.IsShowingMeshPreview
	// bool IsShowingMeshPreview();                                                                                          // [0x80cf1e8] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricMeshModifier.GetMeshModifier
	// class UFabricMeshModifierBase* GetMeshModifier();                                                                     // [0x6231fec] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/FabricRuntime.FabricMeshReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshReferenceChanged
	// void OnMeshReferenceChanged(FFabricMeshProviderMeshReference& ReferenceMesh);                                         // [0xb8969b0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshInstancesChanged
	// void OnMeshInstancesChanged(TArray<FTransform>& Meshes);                                                              // [0xb896910] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshInstanceReferencesChanged
	// void OnMeshInstanceReferencesChanged(TArray<FFabricMeshInstanceReference>& MeshInstanceReferences, bool bMeshChanged, bool bInstancesChanged); // [0xb896678] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricModulationNode
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricModulationNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UFabricFloatProviderBase*>            FloatProviders;                                             // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/FabricRuntime.FabricModulatable
/// Size: 0x0300 (0x000028 - 0x000328)
class UFabricModulatable : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x2C];                                      // 0x0000   (0x002C)  MISSED
	SDK_UNDEFINED(8,13583) /* TWeakObjectPtr<AActor*> */ __um(ModulatedActor);                                     // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,13584) /* TArray<FString> */      __um(ModulatorParams);                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,13585) /* TSet<FName> */          __um(NonModulatedParamsWithCallbacks);                      // 0x0048   (0x0050)  
	SDK_UNDEFINED(80,13586) /* TMap<FString, TWeakObjectPtr<UObject*>> */ __um(Modulators);                        // 0x0098   (0x0050)  
	SDK_UNDEFINED(80,13587) /* TMap<FName, FName> */   __um(LastBroadcastedValues);                                // 0x00E8   (0x0050)  
	SDK_UNDEFINED(16,13588) /* TArray<TWeakObjectPtr<UObject*>> */ __um(ModulatorSources);                         // 0x0138   (0x0010)  
	unsigned char                                      UnknownData02_6[0x1E0];                                     // 0x0148   (0x01E0)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatable.OnOptionsLoaded
	// void OnOptionsLoaded();                                                                                               // [0xb8a5398] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatorFloatProviderConnectionChanged
	// void OnModulatorFloatProviderConnectionChanged(bool bConnected, class UObject* ModulatorObject);                      // [0xb8a5bd0] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatedPropertyChanged
	// void OnModulatedPropertyChanged(FString Value, class UObject* ModulatorObject);                                       // [0xb8a54dc] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                            // [0xb8a5398] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.IsParamModulated
	// bool IsParamModulated(FString Param);                                                                                 // [0xb8a4c3c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedString
	// bool GetModulatedString(FString Param, FMidiSongPos& SongPos, FString& OutString);                                    // [0xb8a3b68] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedInt
	// bool GetModulatedInt(FString Param, FMidiSongPos& SongPos, int32_t& OutInt);                                          // [0xb8a334c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedFloat
	// bool GetModulatedFloat(FString Param, FMidiSongPos& SongPos, float& OutFloat);                                        // [0xb8a2b30] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedEnum
	// bool GetModulatedEnum(FString Param, FMidiSongPos& SongPos, char& OutEnum);                                           // [0xb8a2398] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedBool
	// bool GetModulatedBool(FString Param, FMidiSongPos& SongPos, bool& OutBool);                                           // [0xb8a1c00] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedActor
	// class AActor* GetModulatedActor();                                                                                    // [0x7685a5c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderBase
/// Size: 0x0048 (0x000328 - 0x000370)
class UFabricFloatProviderBase : public UFabricModulatable
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0328   (0x0008)  MISSED
	SDK_UNDEFINED(16,13589) /* FMulticastInlineDelegate */ __um(OnFloatChanged);                                   // 0x0330   (0x0010)  
	float                                              CurrentFloat;                                               // 0x0340   (0x0004)  
	SDK_UNDEFINED(8,13590) /* TWeakObjectPtr<UMusicClockComponent*> */ __um(MusicClock);                           // 0x0344   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	class UFabricMetaSoundModulatorPatchWrapper*       AssociatedPatchWrapper;                                     // 0x0350   (0x0008)  
	SDK_UNDEFINED(16,13591) /* FString */              __um(EnabledParam);                                         // 0x0358   (0x0010)  
	bool                                               bAlwaysModulates;                                           // 0x0368   (0x0001)  
	bool                                               bBindBlueprintOnFloatChanged;                               // 0x0369   (0x0001)  
	bool                                               bIsEnabled;                                                 // 0x036A   (0x0001)  
	bool                                               bModulatorValueChanged;                                     // 0x036B   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x036C   (0x0004)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetProviderEnabled
	// void SetProviderEnabled(bool bInIsEnabled);                                                                           // [0xb896f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* NewMusicClock);                                                        // [0xb896e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetAssociatedPatchWrapper
	// void SetAssociatedPatchWrapper(class UFabricMetaSoundModulatorPatchWrapper* PatchWrapper);                            // [0xb896cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.OnFloatChanged__DelegateSignature
	// void OnFloatChanged__DelegateSignature(float float);                                                                  // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatProviderType
	// EFabricFloatProviderType GetFloatProviderType();                                                                      // [0x6232444] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatAtSongPos
	// float GetFloatAtSongPos(FMidiSongPos& SongPos);                                                                       // [0xb8963c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPosWithOffset
	// FMidiSongPos GetCurrentSongPosWithOffset(float OffsetSeconds);                                                        // [0xb896318] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPos
	// FMidiSongPos GetCurrentSongPos();                                                                                     // [0xb8962dc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentFloat
	// float GetCurrentFloat();                                                                                              // [0x9d65e48] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetAssociatedPatchWrapper
	// class UFabricMetaSoundModulatorPatchWrapper* GetAssociatedPatchWrapper();                                             // [0xb896278] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderWave
/// Size: 0x0150 (0x000370 - 0x0004C0)
class UFabricFloatProviderWave : public UFabricFloatProviderBase
{ 
public:
	SDK_UNDEFINED(16,13592) /* FString */              __um(WaveShapeParam);                                       // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,13593) /* FString */              __um(FreeHzParam);                                          // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,13594) /* FString */              __um(MinParam);                                             // 0x0390   (0x0010)  
	SDK_UNDEFINED(16,13595) /* FString */              __um(MaxParam);                                             // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,13596) /* FString */              __um(BeatDurationParam);                                    // 0x03B0   (0x0010)  
	SDK_UNDEFINED(16,13597) /* FString */              __um(BeatOffsetParam);                                      // 0x03C0   (0x0010)  
	SDK_UNDEFINED(16,13598) /* FString */              __um(ShapeParam);                                           // 0x03D0   (0x0010)  
	SDK_UNDEFINED(16,13599) /* FString */              __um(StyleParam);                                           // 0x03E0   (0x0010)  
	int32_t                                            PhaseCPDIndex;                                              // 0x03F0   (0x0004)  
	int32_t                                            ValueCPDIndex;                                              // 0x03F4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x78];                                      // 0x03F8   (0x0078)  MISSED
	SDK_UNDEFINED(80,13600) /* TSet<TWeakObjectPtr<UStaticMeshComponent*>> */ __um(PreviewDisplayMeshes);          // 0x0470   (0x0050)  


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetRandomSeedByGuid
	// void SetRandomSeedByGuid(FGuid& InRandomGuid);                                                                        // [0xb89a198] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetFreePhase
	// void SetFreePhase(float InFreePhase);                                                                                 // [0xb89a094] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.RemovePreviewDisplayMesh
	// void RemovePreviewDisplayMesh(class UStaticMeshComponent* Mesh);                                                      // [0xb899a64] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetRandomSeed
	// int32_t GetRandomSeed();                                                                                              // [0x80e51d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetPreviewDisplayMeshes
	// TArray<UStaticMeshComponent*> GetPreviewDisplayMeshes();                                                              // [0xb899304] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentPhase
	// float GetCurrentPhase();                                                                                              // [0xb8990f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentFreePhase
	// float GetCurrentFreePhase();                                                                                          // [0xb8990cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.ClearPreviewDisplayMeshes
	// void ClearPreviewDisplayMeshes();                                                                                     // [0xb898e58] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.AddPreviewDisplayMesh
	// void AddPreviewDisplayMesh(class UStaticMeshComponent* Mesh);                                                         // [0xb898bdc] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricStepGenerator
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFabricStepGenerator
{ 
	TArray<float>                                      Values;                                                     // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Class /Script/FabricRuntime.FabricFloatProviderStep
/// Size: 0x0078 (0x000370 - 0x0003E8)
class UFabricFloatProviderStep : public UFabricFloatProviderBase
{ 
public:
	SDK_UNDEFINED(16,13601) /* FString */              __um(StepRateParam);                                        // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,13602) /* FString */              __um(ActiveStepsParam);                                     // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,13603) /* FString */              __um(StepParamBase);                                        // 0x0390   (0x0010)  
	int32_t                                            MaxSteps;                                                   // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03A4   (0x0004)  MISSED
	FFabricStepGenerator                               RuntimeGenerator;                                           // 0x03A8   (0x0020)  
	SDK_UNDEFINED(16,13604) /* FMulticastInlineDelegate */ __um(OnFloatProviderStepInitialized);                   // 0x03C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x03D8   (0x0010)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderStep.GetStepLengthBeats
	// float GetStepLengthBeats();                                                                                           // [0xb899378] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderValueSetter
/// Size: 0x0080 (0x000370 - 0x0003F0)
class UFabricFloatProviderValueSetter : public UFabricFloatProviderBase
{ 
public:
	SDK_UNDEFINED(16,13605) /* FString */              __um(ValueParam);                                           // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,13606) /* FString */              __um(TransitionTimingParam);                                // 0x0380   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0390   (0x0060)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.GetUpdateBeat
	// float GetUpdateBeat();                                                                                                // [0xb8993a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.CanUsePredictiveBeatBroadcasting
	// bool CanUsePredictiveBeatBroadcasting();                                                                              // [0xb898e3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.CalculateTransitionTiming
	// float CalculateTransitionTiming();                                                                                    // [0xb898d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.BroadcastCurrentValue
	// float BroadcastCurrentValue(float OverriddenBeat);                                                                    // [0xb898ce0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricHoldable
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricHoldable : public UInterface
{ 
public:
};

/// Class /Script/FabricRuntime.FabricInteractableControllerComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UFabricInteractableControllerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13607) /* FMulticastInlineDelegate */ __um(OnNoInteractablesHit);                             // 0x00A8   (0x0010)  
	class AFortPlayerController*                       PlayerController;                                           // 0x00B8   (0x0008)  
	class AFortPlayerPawn*                             PlayerPawn;                                                 // 0x00C0   (0x0008)  
	SDK_UNDEFINED(32,13608) /* TWeakObjectPtr<UFortGadgetItemDefinition*> */ __um(FabricInteractionToolItemDefSoftPtr); // 0x00C8   (0x0020)  
	class UFortGadgetItemDefinition*                   FabricInteractionToolItemDef;                               // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F0   (0x0008)  MISSED
	SDK_UNDEFINED(32,13609) /* TWeakObjectPtr<UClass*> */ __um(SoftFabricDeviceBaseClass);                         // 0x00F8   (0x0020)  


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ServerRequestDoesIslandContainFabricDevices
	// void ServerRequestDoesIslandContainFabricDevices();                                                                   // [0x2e6c604] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ServerGivePlayerFabricInteractionTool
	// void ServerGivePlayerFabricInteractionTool();                                                                         // [0x6db0d14] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.OnCreativeModeEnabledChangedDelegate
	// void OnCreativeModeEnabledChangedDelegate(bool bCreativeEnabled);                                                     // [0x5dd0bf8] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.GiveBackInteractionTool
	// void GiveBackInteractionTool();                                                                                       // [0xb8993b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.EnsurePlayerHasInteractionTool
	// void EnsurePlayerHasInteractionTool();                                                                                // [0xb898f74] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ClientReceiveDoesIslandContainFabricDevices
	// void ClientReceiveDoesIslandContainFabricDevices(bool bIslandContainsFabricDevices);                                  // [0x80ff6b4] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/FabricRuntime.FabricInteractable
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricInteractable : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractable.StartSpecialInteraction
	// void StartSpecialInteraction(class APlayerController* Controller);                                                    // [0xb89a2b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.StartInteraction
	// void StartInteraction(class APlayerController* Controller);                                                           // [0xb89a230] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.ShouldPassInteractionToComponent
	// bool ShouldPassInteractionToComponent(class AFabricInteractionTool* InteractionTool);                                 // [0xa578ca4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetInteractable
	// void SetInteractable(bool bInteractable);                                                                             // [0xb89a114] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetHitComponent
	// void SetHitComponent(class USceneComponent* HitComponent);                                                            // [0x80cf554] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetFocused
	// void SetFocused(bool bIsFocused);                                                                                     // [0xb89a010] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.OnInteractionFocusTargetChanged
	// void OnInteractionFocusTargetChanged(class APlayerController* Controller, class UObject* FocusTarget, bool bIsFocused); // [0xb899788] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.IsValidToInteractWith
	// bool IsValidToInteractWith(class APlayerController* Controller);                                                      // [0xb89952c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.IsFocusDependentOnInteractionContext
	// bool IsFocusDependentOnInteractionContext(class APlayerController* Controller);                                       // [0xb89945c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetLinkedInteractable
	// class UObject* GetLinkedInteractable();                                                                               // [0x8f78fec] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractionSFX
	// class UAudioComponent* GetInteractionSFX();                                                                           // [0xb8992c4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableType
	// EFabricInteractableType GetInteractableType();                                                                        // [0x650f520] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableForwardVector
	// FVector GetInteractableForwardVector(class USceneComponent* Interactable);                                            // [0xb899220] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableComponentLocation
	// FVector GetInteractableComponentLocation(class USceneComponent* Interactable);                                        // [0xb89917c] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetContinuousInteractableValueNormalized
	// float GetContinuousInteractableValueNormalized();                                                                     // [0xb898fa0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetContinuousInteractableDirection
	// EFabricContinuousInteractionDirection GetContinuousInteractableDirection();                                           // [0x2d37090] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.EndInteraction
	// void EndInteraction(class APlayerController* PlayerController, bool bWasDragAndDropInteraction);                      // [0xb898eac] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.DoesInteractionRequireHoldable
	// bool DoesInteractionRequireHoldable();                                                                                // [0x378b77c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.CanInteractWithHoldable
	// bool CanInteractWithHoldable(TScriptInterface<Class>& Holdable);                                                      // [0xb898d98] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricInteractablePlayspaceComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UFabricInteractablePlayspaceComponent : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00A0   (0x0050)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.SetFabricDeviceExistsInPlayspace
	// void SetFabricDeviceExistsInPlayspace();                                                                              // [0xb899f9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& PlayspaceUser);                                                             // [0xb899888] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.OnDownloadOnDemandCompleteIndividualClient
	// void OnDownloadOnDemandCompleteIndividualClient(FEventMessageTag Channel, FClientFinishedDownloadOnDemand& Context);  // [0xb8995c0] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/FabricRuntime.InteractionData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FInteractionData
{ 
	EFabricInteractionToolStates                       InteractionState;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(8,13610) /* TWeakObjectPtr<AFortCreativeDeviceProp*> */ __um(InteractableOwnerDevice);           // 0x0004   (0x0008)  
};

/// Struct /Script/FabricRuntime.InteractionSplinePoints
/// Size: 0x0060 (0x000000 - 0x000060)
struct FInteractionSplinePoints
{ 
	FVector_NetQuantize10                              SplineStartLocation;                                        // 0x0000   (0x0018)  
	FVector_NetQuantize10                              SplineStartForward;                                         // 0x0018   (0x0018)  
	FVector_NetQuantize10                              SplineEndLocation;                                          // 0x0030   (0x0018)  
	FVector_NetQuantize10                              SplineEndForward;                                           // 0x0048   (0x0018)  
};

/// Class /Script/FabricRuntime.FabricInteractionTool
/// Size: 0x0198 (0x001518 - 0x0016B0)
class AFabricInteractionTool : public AFortWeapon
{ 
public:
	SDK_UNDEFINED(16,13611) /* FMulticastInlineDelegate */ __um(OnInteractionStateChanged);                        // 0x1518   (0x0010)  
	SDK_UNDEFINED(16,13612) /* FMulticastInlineDelegate */ __um(OnCablesGrabbed);                                  // 0x1528   (0x0010)  
	SDK_UNDEFINED(16,13613) /* FMulticastInlineDelegate */ __um(OnCablesDropped);                                  // 0x1538   (0x0010)  
	SDK_UNDEFINED(16,13614) /* FMulticastInlineDelegate */ __um(OnMetasoundGeneratorCrossfadeStarted);             // 0x1548   (0x0010)  
	class USplineComponent*                            SplineComponent;                                            // 0x1558   (0x0008)  
	float                                              MaxRange;                                                   // 0x1560   (0x0004)  
	float                                              MinDragAndDropTriggerTime;                                  // 0x1564   (0x0004)  
	float                                              FiringRate;                                                 // 0x1568   (0x0004)  
	float                                              SplineEndForwardMultiplier;                                 // 0x156C   (0x0004)  
	float                                              SplineStartForwardMultiplier;                               // 0x1570   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x1574   (0x0004)  MISSED
	class UObject*                                     HoveredInteractable;                                        // 0x1578   (0x0008)  
	class USceneComponent*                             HoveredInteractableHitComponent;                            // 0x1580   (0x0008)  
	class UObject*                                     PressedInteractable;                                        // 0x1588   (0x0008)  
	SDK_UNDEFINED(8,13615) /* TWeakObjectPtr<UObject*> */ __um(LastPressedInteractable);                           // 0x1590   (0x0008)  
	class USceneComponent*                             PressedInteractableHitComponent;                            // 0x1598   (0x0008)  
	SDK_UNDEFINED(8,13616) /* TWeakObjectPtr<AFortCreativeDeviceProp*> */ __um(InteractableOwnerDevice);           // 0x15A0   (0x0008)  
	float                                              AccumulatedDragAndDropTriggerTime;                          // 0x15A8   (0x0004)  
	FInteractionData                                   ServerInteractionData;                                      // 0x15AC   (0x000C)  
	unsigned char                                      UnknownData01_5[0x11];                                      // 0x15B8   (0x0011)  MISSED
	bool                                               bServerTriggerPressed;                                      // 0x15C9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x15CA   (0x0001)  MISSED
	bool                                               bServerIsHoldingCable;                                      // 0x15CB   (0x0001)  
	unsigned char                                      UnknownData03_5[0x14];                                      // 0x15CC   (0x0014)  MISSED
	FInteractionSplinePoints                           ServerSplinePoints;                                         // 0x15E0   (0x0060)  
	float                                              ServerContinuousInteractableValue;                          // 0x1640   (0x0004)  
	unsigned char                                      UnknownData04_6[0x6C];                                      // 0x1644   (0x006C)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractionTool.UnholsterWeapon
	// void UnholsterWeapon();                                                                                               // [0xb89a330] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetTriggerPressed
	// void ServerSetTriggerPressed(bool bPressed);                                                                          // [0xb899f18] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetSplinePoints
	// void ServerSetSplinePoints(FInteractionSplinePoints SplinePoints);                                                    // [0xb899d54] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetIsHoldingCable
	// void ServerSetIsHoldingCable(bool bHoldingCable);                                                                     // [0xb899cd0] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetInteractionData
	// void ServerSetInteractionData(FInteractionData NewData);                                                              // [0xb899b70] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetContinuousInteractableValue
	// void ServerSetContinuousInteractableValue(float Value);                                                               // [0x8858148] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerHandleFITFired
	// void ServerHandleFITFired();                                                                                          // [0x8e1297c] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnSplineUpdated
	// void OnSplineUpdated(EFabricInteractionToolStates NewInteractionState);                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerTriggerPressed
	// void OnRep_ServerTriggerPressed();                                                                                    // [0xb899a14] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerIsHoldingCable
	// void OnRep_ServerIsHoldingCable();                                                                                    // [0xb8999b0] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerInteractionData
	// void OnRep_ServerInteractionData();                                                                                   // [0xb89999c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerContinuousInteractableValue
	// void OnRep_ServerContinuousInteractableValue();                                                                       // [0xb899968] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnMetasoundGeneratorCrossfadeStarted__DelegateSignature
	// void OnMetasoundGeneratorCrossfadeStarted__DelegateSignature(float CrossfadeSeconds);                                 // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnInteractionStateChanged__DelegateSignature
	// void OnInteractionStateChanged__DelegateSignature(EFabricInteractionToolStates NewState, class AFortCreativeDeviceProp* Device); // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnCableHeldStateChanged__DelegateSignature
	// void OnCableHeldStateChanged__DelegateSignature(class AFortCreativeDeviceProp* Device);                               // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                       // [0xb899508] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsHoldingCables
	// bool IsHoldingCables();                                                                                               // [0xb8994f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.HandleMetasoundGeneratorCrossfade
	// void HandleMetasoundGeneratorCrossfade(float CrossfadeSeconds);                                                       // [0xb8993cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetPressedInteractable
	// class UObject* GetPressedInteractable();                                                                              // [0xb8992ec] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableType
	// EFabricInteractableType GetHoveredInteractableType();                                                                 // [0xb899138] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableHitComponent
	// class USceneComponent* GetHoveredInteractableHitComponent();                                                          // [0xb899120] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetFabricInteractionToolState
	// EFabricInteractionToolStates GetFabricInteractionToolState();                                                         // [0xadce47c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousStateValue
	// int32_t GetContinuousStateValue();                                                                                    // [0xb89908c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousMovementValue
	// float GetContinuousMovementValue();                                                                                   // [0xb899064] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractionDirection
	// EFabricContinuousInteractionDirection GetContinuousInteractionDirection();                                            // [0xb898fcc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractableValueNormalized
	// float GetContinuousInteractableValueNormalized();                                                                     // [0xb898f88] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.DeactiveWeaponAndState
	// void DeactiveWeaponAndState();                                                                                        // [0x885566c] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientStopInteracting
	// void ClientStopInteracting();                                                                                         // [0x88a160c] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientDeactiveWeaponAndState
	// void ClientDeactiveWeaponAndState();                                                                                  // [0x8396d58] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/FabricRuntime.FabricMeshModifierBase
/// Size: 0x0008 (0x000328 - 0x000330)
class UFabricMeshModifierBase : public UFabricModulatable
{ 
public:
	EFabricCloneTransformBehavior                      CloneBehavior;                                              // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0329   (0x0007)  MISSED
};

/// Class /Script/FabricRuntime.FabricMeshModifierTranslate
/// Size: 0x0018 (0x000330 - 0x000348)
class UFabricMeshModifierTranslate : public UFabricMeshModifierBase
{ 
public:
	FVector                                            PositionOffset;                                             // 0x0330   (0x0018)  
};

/// Class /Script/FabricRuntime.FabricMeshModifierRotate
/// Size: 0x0018 (0x000330 - 0x000348)
class UFabricMeshModifierRotate : public UFabricMeshModifierBase
{ 
public:
	FRotator                                           RotationAmount;                                             // 0x0330   (0x0018)  
};

/// Class /Script/FabricRuntime.FabricMeshModifierScale
/// Size: 0x0018 (0x000330 - 0x000348)
class UFabricMeshModifierScale : public UFabricMeshModifierBase
{ 
public:
	FVector                                            ScaleFactor;                                                // 0x0330   (0x0018)  
};

/// Class /Script/FabricRuntime.FabricMeshModifierClone
/// Size: 0x0028 (0x000330 - 0x000358)
class UFabricMeshModifierClone : public UFabricMeshModifierBase
{ 
public:
	int32_t                                            CloneCount;                                                 // 0x0330   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0334   (0x0004)  MISSED
	FVector                                            PerCloneTranslation;                                        // 0x0338   (0x0018)  
	bool                                               bCentered;                                                  // 0x0350   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0351   (0x0007)  MISSED
};

/// Class /Script/FabricRuntime.FabricMeshModifierRandomize
/// Size: 0x0068 (0x000330 - 0x000398)
class UFabricMeshModifierRandomize : public UFabricMeshModifierBase
{ 
public:
	float                                              LocationRandLimit;                                          // 0x0330   (0x0004)  
	float                                              RotationRandLimit;                                          // 0x0334   (0x0004)  
	float                                              ScaleRandLimit;                                             // 0x0338   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	FVector                                            LocationRandRange;                                          // 0x0340   (0x0018)  
	FVector                                            RotationRandRange;                                          // 0x0358   (0x0018)  
	FVector                                            ScaleRandRangeAdditive;                                     // 0x0370   (0x0018)  
	float                                              ScaleRandRangeRangeBase;                                    // 0x0388   (0x0004)  
	bool                                               bUniformScale;                                              // 0x038C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	FRandomStream                                      RandomStream;                                               // 0x0390   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFabricMeshProviderMeshReferenceParamInfo
{ 
	FMaterialParameterInfo                             MaterialParameterInfo;                                      // 0x0000   (0x000C)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Scalar
/// Size: 0x0004 (0x00000C - 0x000010)
struct FFabricMeshProviderMeshReferenceParamInfo_Scalar : FFabricMeshProviderMeshReferenceParamInfo
{ 
	float                                              Scalar;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Color
/// Size: 0x0010 (0x00000C - 0x00001C)
struct FFabricMeshProviderMeshReferenceParamInfo_Color : FFabricMeshProviderMeshReferenceParamInfo
{ 
	FLinearColor                                       Color;                                                      // 0x000C   (0x0010)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricMeshProviderMeshReferenceParams
{ 
	double                                             UniformScale;                                               // 0x0000   (0x0008)  
	TArray<FFabricMeshProviderMeshReferenceParamInfo_Scalar> ScalarParams;                                         // 0x0008   (0x0010)  
	TArray<FFabricMeshProviderMeshReferenceParamInfo_Color> ColorParams;                                           // 0x0018   (0x0010)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReference
/// Size: 0x0038 (0x000000 - 0x000038)
struct FFabricMeshProviderMeshReference
{ 
	class UStreamableRenderAsset*                      Mesh;                                                       // 0x0000   (0x0008)  
	class UTexture*                                    Texture;                                                    // 0x0008   (0x0008)  
	FFabricMeshProviderMeshReferenceParams             Params;                                                     // 0x0010   (0x0028)  
};

/// Class /Script/FabricRuntime.FabricMeshTreeNode
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UFabricMeshTreeNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UFabricMeshModifierBase*                     MeshModifier;                                               // 0x0028   (0x0008)  
	FFabricMeshProviderMeshReferenceParams             Params;                                                     // 0x0030   (0x0028)  
	FFabricMeshProviderMeshReference                   MeshProviderReference;                                      // 0x0058   (0x0038)  
	TArray<class UFabricMeshTreeNode*>                 Children;                                                   // 0x0090   (0x0010)  
	uint32_t                                           LastCalculatedChecksum;                                     // 0x00A0   (0x0004)  
	bool                                               bAllowChecksumCalculation;                                  // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00A5   (0x0003)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshTreeNode.Reset
	// void Reset();                                                                                                         // [0xb89c9d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.GenerateMeshInstanceReferences
	// TArray<FFabricMeshInstanceReference> GenerateMeshInstanceReferences();                                                // [0xb89c074] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.CopyProperties
	// void CopyProperties(class UFabricMeshTreeNode* Other);                                                                // [0xb89be2c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMeshProviderBase
/// Size: 0x0058 (0x000028 - 0x000080)
class UFabricMeshProviderBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FFabricMeshProviderMeshReference                   ReferenceMesh;                                              // 0x0028   (0x0038)  
	TArray<FTransform>                                 InstanceMeshes;                                             // 0x0060   (0x0010)  
	float                                              CurrentCableFloatValue;                                     // 0x0070   (0x0004)  
	float                                              CurrentCableFloatDirection;                                 // 0x0074   (0x0004)  
	bool                                               bCurrentCableFloatDirty;                                    // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshProviderBase.SetReferenceMesh
	// void SetReferenceMesh(FFabricMeshProviderMeshReference& InMesh);                                                      // [0xb89cf58] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformInputTuning
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	FName                                              NodeInputName;                                              // 0x0000   (0x0004)  
	bool                                               bUseDefaultValues;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning
/// Size: 0x0058 (0x000008 - 0x000060)
struct FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning : FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	bool                                               bDefaultValue;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(80,13617) /* TMap<FName, bool> */    __um(PerPlatformTuning);                                    // 0x0010   (0x0050)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformIntInputTuning
/// Size: 0x0058 (0x000008 - 0x000060)
struct FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning : FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	int32_t                                            DefaultValue;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(80,13618) /* TMap<FName, int32_t> */ __um(PerPlatformTuning);                                    // 0x0010   (0x0050)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning
/// Size: 0x0058 (0x000008 - 0x000060)
struct FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning : FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	float                                              DefaultValue;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(80,13619) /* TMap<FName, float> */   __um(PerPlatformTuning);                                    // 0x0010   (0x0050)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundDirectInputInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFabricMetaSoundDirectInputInfo
{ 
	FName                                              MetaSoundInputName;                                         // 0x0000   (0x0004)  
	EFabricUserOptionType                              InputType;                                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperPeakTamer
/// Size: 0x0024 (0x000000 - 0x000024)
struct FFabricMetaSoundPatchWrapperPeakTamer
{ 
	bool                                               bUseGameplaySmoothing;                                      // 0x0000   (0x0001)  
	bool                                               bSortSignals;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MaxSignalsToTame;                                           // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x0008   (0x001C)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperBinding
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFabricMetaSoundPatchWrapperBinding
{ 
	FName                                              FriendlyName;                                               // 0x0000   (0x0004)  
	bool                                               bAllowOnDedicatedServer;                                    // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FFabricMetaSoundPatchWrapperPeakTamer              PeakTamer;                                                  // 0x0008   (0x0024)  
	FName                                              MetaSoundNodeName;                                          // 0x002C   (0x0004)  
	TArray<float>                                      Signals;                                                    // 0x0030   (0x0010)  
	bool                                               bBoundToWatchEvents;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundNodeInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FFabricMetaSoundNodeInfo
{ 
	FMetaSoundNodeHandle                               NodeHandle;                                                 // 0x0000   (0x0010)  
	FMetaSoundNodeHandle                               OutputConnectionHandle;                                     // 0x0010   (0x0010)  
	FMetaSoundNodeHandle                               InputConnectionHandle;                                      // 0x0020   (0x0010)  
	FName                                              Name;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(80,13620) /* TMap<FName, FMetaSoundBuilderNodeOutputHandle> */ __um(InputNodeNamesToHandles);    // 0x0038   (0x0050)  
	FMetaSoundNodeHandle                               AnalyzerHandle;                                             // 0x0088   (0x0010)  
	class UMetasoundParameterPack*                     AnalyzerParameterPack;                                      // 0x0098   (0x0008)  
	FName                                              AnalyzerName;                                               // 0x00A0   (0x0004)  
	FMetaSoundNodeHandle                               SwitcherHandle;                                             // 0x00A4   (0x0010)  
	FMetaSoundNodeHandle                               SelectHandle;                                               // 0x00B4   (0x0010)  
	FName                                              NodeEnabledInput;                                           // 0x00C4   (0x0004)  
	FName                                              AnalyzerNodeVisibleInput;                                   // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FName>                                      AnalyzerOutputNames;                                        // 0x00D0   (0x0010)  
	class UMetaSoundPatch*                             PatchSpawnedFrom;                                           // 0x00E0   (0x0008)  
	class UMetasoundParameterPack*                     ParameterPack;                                              // 0x00E8   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUserOptionInputInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFabricMetaSoundUserOptionInputInfo
{ 
	SDK_UNDEFINED(16,13621) /* FString */              __um(UserOption);                                           // 0x0000   (0x0010)  
	FName                                              MetaSoundInputName;                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundRuntimeInputInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricMetaSoundRuntimeInputInfo
{ 
	FFabricMetaSoundUserOptionInputInfo                InputInfo;                                                  // 0x0000   (0x0018)  
	EFabricMetasoundInputType                          InputType;                                                  // 0x0018   (0x0001)  
	EFabricUserOptionType                              FabricKnobType;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	FName                                              DataType;                                                   // 0x001C   (0x0004)  
	FName                                              MetaSoundInputNodeName;                                     // 0x0020   (0x0004)  
	bool                                               bIsModulated;                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/FabricRuntime.MetaSoundCombinerNodeHandle
/// Size: 0x0150 (0x000000 - 0x000150)
struct FMetaSoundCombinerNodeHandle
{ 
	FFabricMetaSoundNodeInfo                           NodeInfo;                                                   // 0x0000   (0x00F0)  
	FMetaSoundBuilderNodeInputHandle                   CombinerInput1;                                             // 0x00F0   (0x0020)  
	FMetaSoundBuilderNodeInputHandle                   CombinerInput2;                                             // 0x0110   (0x0020)  
	FMetaSoundBuilderNodeOutputHandle                  CombinedOutput;                                             // 0x0130   (0x0020)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundPatchWrapper
/// Size: 0x0380 (0x000328 - 0x0006A8)
class UFabricMetaSoundPatchWrapper : public UFabricModulatable
{ 
public:
	FName                                              EnabledStateInputName;                                      // 0x0328   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	SDK_UNDEFINED(32,13622) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(MetaSoundPatch);                           // 0x0330   (0x0020)  
	SDK_UNDEFINED(80,13623) /* TMap<FString, FName> */ __um(UserOptionsToNodeInputs);                              // 0x0350   (0x0050)  
	TArray<FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning> PerPlatformInputBools;                         // 0x03A0   (0x0010)  
	TArray<FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning> PerPlatformInputInts;                           // 0x03B0   (0x0010)  
	TArray<FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning> PerPlatformInputFloats;                       // 0x03C0   (0x0010)  
	TArray<FFabricMetaSoundDirectInputInfo>            DirectInputs;                                               // 0x03D0   (0x0010)  
	FFabricMetaSoundPatchWrapperBinding                SimpleSignalOutputBinding;                                  // 0x03E0   (0x0048)  
	SDK_UNDEFINED(16,13624) /* FMulticastInlineDelegate */ __um(OnSimpleSignalBindingUpdate);                      // 0x0428   (0x0010)  
	FName                                              VisibleInputParamName;                                      // 0x0438   (0x0004)  
	FName                                              AudibleInputParamName;                                      // 0x043C   (0x0004)  
	bool                                               bCanConsumeVisibleFlag;                                     // 0x0440   (0x0001)  
	bool                                               bCanConsumeAudibleFlag;                                     // 0x0441   (0x0001)  
	bool                                               bIsVisible;                                                 // 0x0442   (0x0001)  
	bool                                               bIsAudible;                                                 // 0x0443   (0x0001)  
	unsigned char                                      UnknownData01_5[0x74];                                      // 0x0444   (0x0074)  MISSED
	SDK_UNDEFINED(16,13625) /* FMulticastInlineDelegate */ __um(OnMetaSoundOutputIntChangedBatch);                 // 0x04B8   (0x0010)  
	SDK_UNDEFINED(16,13626) /* FMulticastInlineDelegate */ __um(OnMetaSoundOutputFloatChangedBatch);               // 0x04C8   (0x0010)  
	class UFabricMetaSoundManagerComponent*            CurrentManager;                                             // 0x04D8   (0x0008)  
	SDK_UNDEFINED(8,13627) /* TWeakObjectPtr<UFabricMetaSoundTickSubsystem*> */ __um(TickSubsystem);               // 0x04E0   (0x0008)  
	FFabricMetaSoundNodeInfo                           CurrentNode;                                                // 0x04E8   (0x00F0)  
	SDK_UNDEFINED(8,13628) /* TWeakObjectPtr<AActor*> */ __um(PositionalProxyActor);                               // 0x05D8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x05E0   (0x0020)  MISSED
	SDK_UNDEFINED(8,13629) /* TWeakObjectPtr<UAudioComponent*> */ __um(CurrentAudioComponent);                     // 0x0600   (0x0008)  
	SDK_UNDEFINED(8,13630) /* TWeakObjectPtr<UAudioComponent*> */ __um(NewAudioComponent);                         // 0x0608   (0x0008)  
	FName                                              CombinerMetaSoundType;                                      // 0x0610   (0x0004)  
	FName                                              AnalyzerMetaSoundType;                                      // 0x0614   (0x0004)  
	TArray<FFabricMetaSoundRuntimeInputInfo>           MetaSoundRuntimeInputInfos;                                 // 0x0618   (0x0010)  
	TArray<class UFabricMetaSoundPatchWrapper*>        ConnectedInputWrappers;                                     // 0x0628   (0x0010)  
	TArray<class UFabricMetaSoundPatchWrapper*>        PendingInputWrappers;                                       // 0x0638   (0x0010)  
	TArray<class UFabricMetaSoundPatchWrapper*>        PendingOutputWrappers;                                      // 0x0648   (0x0010)  
	TArray<FMetaSoundCombinerNodeHandle>               CombinersInUse;                                             // 0x0658   (0x0010)  
	TArray<class UFabricMetaSoundPatchWrapper*>        ConnectedOutputWrappers;                                    // 0x0668   (0x0010)  
	EFabricMetaSoundPatchWrapperQuality                PatchWrapperQuality;                                        // 0x0678   (0x0001)  
	unsigned char                                      UnknownData03_5[0x17];                                      // 0x0679   (0x0017)  MISSED
	class UMetaSoundPatch*                             LoadedMetaSoundPatch;                                       // 0x0690   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0698   (0x0010)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetStringInput
	// void SetStringInput(FName& MetaSoundInputName, FString Value);                                                        // [0xb89f9fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetRunsOnServer
	// void SetRunsOnServer(bool bAllowRunOnServer);                                                                         // [0xb89f97c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetPositionalProxyActor
	// void SetPositionalProxyActor(class AActor* InLocationProxyActor);                                                     // [0xb89f87c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetNodeEnabled
	// void SetNodeEnabled(bool bEnabled);                                                                                   // [0xb89f7a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetIntInput
	// void SetIntInput(FName& MetaSoundInputName, int32_t Value);                                                           // [0xb89f5d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetFloatInput
	// void SetFloatInput(FName& MetaSoundInputName, float Value);                                                           // [0xb89f4cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetEnumInput
	// void SetEnumInput(FName& MetaSoundInputName, char Value);                                                             // [0xb89f3bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetBoolInput
	// void SetBoolInput(FName& MetaSoundInputName, bool bValue);                                                            // [0xb89f2ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.RemoveFromCurrentGraph
	// void RemoveFromCurrentGraph();                                                                                        // [0xa1a1b9c] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputValueChanged
	// void OnMetaSoundOutputValueChanged(FName OutputName, FMetaSoundOutput& MetaSoundOutput);                              // [0xb89ee58] Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputChanged
	// void OnMetaSoundOutputChanged(FName OutputName, FMetaSoundOutput& Output);                                            // [0xb89ed74] Final|Native|Private|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetasoundManagerEndPlay
	// void OnMetasoundManagerEndPlay();                                                                                     // [0xb89ef40] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnConnectedModulatorEnable
	// void OnConnectedModulatorEnable(class UFabricMetaSoundPatchWrapper* EnabledPatchWrapper);                             // [0xb89e8d0] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnAddedToManagerGraph
	// void OnAddedToManagerGraph(class UFabricMetaSoundManagerComponent* Manager);                                          // [0xb89e84c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsParameterPackUpdate
	// void NeedsParameterPackUpdate();                                                                                      // [0xb89e838] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsOutputWatcherUpdate
	// void NeedsOutputWatcherUpdate();                                                                                      // [0xb89e824] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsGeneratorHandleUpdate
	// void NeedsGeneratorHandleUpdate();                                                                                    // [0xb89e810] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetRunsOnServer
	// bool GetRunsOnServer();                                                                                               // [0xb89e78c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetNodeEnabled
	// bool GetNodeEnabled();                                                                                                // [0xb89e774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                          // [0xb89e754] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMetaSoundInputNames
	// TSet<FName> GetMetaSoundInputNames();                                                                                 // [0xb89e68c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToManagerGraph
	// void AddToManagerGraph(class UFabricMetaSoundManagerComponent* Manager);                                              // [0x60662a4] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToGraphOnFirstConnect
	// bool AddToGraphOnFirstConnect();                                                                                      // [0x9031c4c] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper
/// Size: 0x00E0 (0x0006A8 - 0x000788)
class UFabricMetaSoundDrumPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x06A8   (0x0008)  MISSED
	FName                                              PitchSampleInputName;                                       // 0x06B0   (0x0004)  
	FName                                              SlotKitInputName;                                           // 0x06B4   (0x0004)  
	SDK_UNDEFINED(16,13631) /* TArray<FString> */      __um(PitchSampleParams);                                    // 0x06B8   (0x0010)  
	SDK_UNDEFINED(16,13632) /* TArray<FString> */      __um(SlotLinkParams);                                       // 0x06C8   (0x0010)  
	SDK_UNDEFINED(16,13633) /* TArray<FString> */      __um(SlotUnlinkedKitParams);                                // 0x06D8   (0x0010)  
	SDK_UNDEFINED(16,13634) /* FString */              __um(CurrentKitParam);                                      // 0x06E8   (0x0010)  
	int32_t                                            NumSamplesPerKit;                                           // 0x06F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06FC   (0x0004)  MISSED
	TArray<FFabricMetaSoundPatchWrapperBinding>        DrumAmplitudes;                                             // 0x0700   (0x0010)  
	SDK_UNDEFINED(16,13635) /* FMulticastInlineDelegate */ __um(OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate); // 0x0710   (0x0010)  
	SDK_UNDEFINED(16,13636) /* FMulticastInlineDelegate */ __um(OnFabricMetaSoundDrumPlayerSampleBanksLoaded);     // 0x0720   (0x0010)  
	unsigned char                                      UnknownData02_5[0x48];                                      // 0x0730   (0x0048)  MISSED
	TArray<class UObject*>                             CurrentKitSamples;                                          // 0x0778   (0x0010)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.SlotUnlinkedKitParamChanged
	// void SlotUnlinkedKitParamChanged(int32_t PitchSampleIndex, int32_t Value);                                            // [0xb89d2d0] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.SlotLinkedParamChanged
	// void SlotLinkedParamChanged(int32_t PitchSampleIndex, bool Value);                                                    // [0xb89d20c] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.PitchSampleParamChanged
	// void PitchSampleParamChanged(int32_t PitchSampleIndex, int32_t Value);                                                // [0xb89c7b4] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.LoadDrumPlayerSampleBanks
	// void LoadDrumPlayerSampleBanks(TArray<TWeakObjectPtr<UFabricMetasoundDrumPlayerSampleBankAsset*>>& SampleBankArray, TSet<int32_t>& KitNumbersToLoad); // [0xb89c558] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.KitIndexChanged
	// void KitIndexChanged(FName& Param, int32_t Value);                                                                    // [0xb89c44c] Final|Native|Private|HasOutParms 
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperWetDryOutputBinding
/// Size: 0x0090 (0x000000 - 0x000090)
struct FFabricMetaSoundPatchWrapperWetDryOutputBinding
{ 
	FFabricMetaSoundPatchWrapperBinding                WetOutputSignalBinding;                                     // 0x0000   (0x0048)  
	FFabricMetaSoundPatchWrapperBinding                DryOutputSignalBinding;                                     // 0x0048   (0x0048)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundWetDryPatchWrapper
/// Size: 0x00A0 (0x0006A8 - 0x000748)
class UFabricMetaSoundWetDryPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	FFabricMetaSoundPatchWrapperWetDryOutputBinding    WetDryOutputBinding;                                        // 0x06A8   (0x0090)  
	SDK_UNDEFINED(16,13637) /* FMulticastInlineDelegate */ __um(OnWetDryOutputSignalUpdate);                       // 0x0738   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundEchoPatchWrapper
/// Size: 0x0018 (0x000748 - 0x000760)
class UFabricMetaSoundEchoPatchWrapper : public UFabricMetaSoundWetDryPatchWrapper
{ 
public:
	bool                                               bAllowWetSignalWaveformTexture;                             // 0x0748   (0x0001)  
	bool                                               bAllowDrySignalWaveformTexture;                             // 0x0749   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x074A   (0x0006)  MISSED
	class UFabricWaveformTexture*                      WetSignalWaveformTexture;                                   // 0x0750   (0x0008)  
	class UFabricWaveformTexture*                      DrySignalWaveformTexture;                                   // 0x0758   (0x0008)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper
/// Size: 0x00E0 (0x0006A8 - 0x000788)
class UFabricMetaSoundInstrumentPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	SDK_UNDEFINED(16,13638) /* FMulticastInlineDelegate */ __um(OnFFTResultsUpdated);                              // 0x06A8   (0x0010)  
	FFabricMetaSoundPatchWrapperBinding                FFTAnalysisOutputBinding;                                   // 0x06B8   (0x0048)  
	int32_t                                            FFTCPDStartIndex;                                           // 0x0700   (0x0004)  
	int32_t                                            FFTLength;                                                  // 0x0704   (0x0004)  
	unsigned char                                      UnknownData00_5[0x78];                                      // 0x0708   (0x0078)  MISSED
	SDK_UNDEFINED(8,13639) /* TWeakObjectPtr<UFusionPatch*> */ __um(CurrentFusionPatch);                           // 0x0780   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.SetFusionPatch
	// void SetFusionPatch(class UFusionPatch* FusionPatch);                                                                 // [0xb89cc34] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.DriveFFTDataOnPrimitive
	// void DriveFFTDataOnPrimitive(class UPrimitiveComponent* Primitive);                                                   // [0xb89beac] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper
/// Size: 0x0030 (0x0006A8 - 0x0006D8)
class UFabricMetaSoundModulatorPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	FName                                              IntModulationOutputName;                                    // 0x06A8   (0x0004)  
	FName                                              FloatModulationOutputName;                                  // 0x06AC   (0x0004)  
	FName                                              BoolModulationOutputName;                                   // 0x06B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x06B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,13640) /* FMulticastInlineDelegate */ __um(OnPatchWrapperVisibilityChanged);                  // 0x06B8   (0x0010)  
	class UPlaylistUserOptionBase*                     CurrentUserOption;                                          // 0x06C8   (0x0008)  
	class UFabricMetaSoundUserOption*                  MetaSoundUserOption;                                        // 0x06D0   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper.SetUserOption
	// void SetUserOption(class UPlaylistUserOptionBase* UserOption);                                                        // [0xb8a0140] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper.ConnectToInput
	// bool ConnectToInput(FFabricMetaSoundNodeInfo& Node, FName InputName, FName InputType);                                // [0xb89e3c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper
/// Size: 0x0018 (0x0006D8 - 0x0006F0)
class UFabricMetaSoundLFOPatchWrapper : public UFabricMetaSoundModulatorPatchWrapper
{ 
public:
	class UFabricFloatProviderWave*                    LFOFloatProvider;                                           // 0x06D8   (0x0008)  
	FName                                              FreePhaseStartName;                                         // 0x06E0   (0x0004)  
	FName                                              RandomSeedInputName;                                        // 0x06E4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x06E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper.UpdateRandomSeed
	// void UpdateRandomSeed();                                                                                              // [0xb89d4a0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUtilityParams
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFabricMetaSoundUtilityParams
{ 
	FName                                              SwitcherEnabledParam;                                       // 0x0000   (0x0004)  
	FName                                              SelectEnabledParam;                                         // 0x0004   (0x0004)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUtilityPatches
/// Size: 0x0088 (0x000000 - 0x000088)
struct FFabricMetaSoundUtilityPatches
{ 
	SDK_UNDEFINED(32,13641) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(CombinerNode);                             // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,13642) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(SwitcherNode);                             // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,13643) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(SelectNode);                               // 0x0040   (0x0020)  
	SDK_UNDEFINED(32,13644) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(AnalyzerNode);                             // 0x0060   (0x0020)  
	FFabricMetaSoundUtilityParams                      UtilityNodeParams;                                          // 0x0080   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntimeGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFabricSignificanceBasedUpdateBucketRuntimeGroup
{ 
	SDK_UNDEFINED(16,13645) /* TArray<TWeakObjectPtr<UObject*>> */ __um(ObjectsInGroup);                           // 0x0008   (0x0010)  
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntime
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricSignificanceBasedUpdateBucketRuntime
{ 
	float                                              ActualMinSignificance;                                      // 0x0000   (0x0004)  
	float                                              ActualMaxSignificance;                                      // 0x0004   (0x0004)  
	int32_t                                            ActualMaxObjectsInBucket;                                   // 0x0008   (0x0004)  
	int32_t                                            ActualFramesPerUpdate;                                      // 0x000C   (0x0004)  
	int32_t                                            TotalObjectsInBucketCount;                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FFabricSignificanceBasedUpdateBucketRuntimeGroup> UpdateGroups;                                         // 0x0018   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundManagerComponent
/// Size: 0x0550 (0x0000A0 - 0x0005F0)
class UFabricMetaSoundManagerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(32,13646) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(HarmonixMusicProviderPatch);               // 0x00A8   (0x0020)  
	FFabricMetaSoundUtilityPatches                     MidiStreamUtilityPatches;                                   // 0x00C8   (0x0088)  
	FFabricMetaSoundUtilityPatches                     AudioUtilityPatches;                                        // 0x0150   (0x0088)  
	FName                                              MusicProviderVolumeName;                                    // 0x01D8   (0x0004)  
	FName                                              MusicProviderPlayTriggerName;                               // 0x01DC   (0x0004)  
	FName                                              MusicProviderRestartTriggerName;                            // 0x01E0   (0x0004)  
	FName                                              MusicProviderSeekTriggerName;                               // 0x01E4   (0x0004)  
	FName                                              MusicProviderPauseTriggerName;                              // 0x01E8   (0x0004)  
	FName                                              MusicProviderContinueTriggerName;                           // 0x01EC   (0x0004)  
	FName                                              MusicProviderStopTriggerName;                               // 0x01F0   (0x0004)  
	FName                                              MusicProviderTempoName;                                     // 0x01F4   (0x0004)  
	FName                                              MusicProviderSpeedName;                                     // 0x01F8   (0x0004)  
	FName                                              MusicProviderRootNoteName;                                  // 0x01FC   (0x0004)  
	FName                                              MusicProviderScaleName;                                     // 0x0200   (0x0004)  
	FName                                              MusicProviderSeekTargetName;                                // 0x0204   (0x0004)  
	FName                                              MusicProviderTimeSigNumName;                                // 0x0208   (0x0004)  
	FName                                              MusicProviderTimeSigDenomName;                              // 0x020C   (0x0004)  
	float                                              CrossfadeSeconds;                                           // 0x0210   (0x0004)  
	float                                              RebuildTimeOutSeconds;                                      // 0x0214   (0x0004)  
	float                                              BlockRateOverride;                                          // 0x0218   (0x0004)  
	FName                                              QualityOverride;                                            // 0x021C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0220   (0x0018)  MISSED
	SDK_UNDEFINED(16,13647) /* FMulticastInlineDelegate */ __um(OnMetasoundGeneratorCrossfadeStarted);             // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_5[0x78];                                      // 0x0248   (0x0078)  MISSED
	SDK_UNDEFINED(16,13648) /* FMulticastInlineDelegate */ __um(OnMusicEventPriorityChanged);                      // 0x02C0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x02D0   (0x0010)  MISSED
	TArray<FFabricSignificanceBasedUpdateBucketRuntime> SignificanceRuntimeBuckets;                                // 0x02E0   (0x0010)  
	class UFabricSignificanceAsset*                    SignificanceBasedUpdate;                                    // 0x02F0   (0x0008)  
	float                                              InitialCooldownTimeInSeconds;                               // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class UMetaSoundSourceBuilder*                     SourceBuilder;                                              // 0x0300   (0x0008)  
	class UMusicClockComponent*                        MusicClock;                                                 // 0x0308   (0x0008)  
	TArray<class UAudioComponent*>                     PlaybackAudioComponents;                                    // 0x0310   (0x0010)  
	TArray<class UMetasoundOfflinePlayerComponent*>    ServerPlaybackComponents;                                   // 0x0320   (0x0010)  
	unsigned char                                      UnknownData05_5[0x50];                                      // 0x0330   (0x0050)  MISSED
	SDK_UNDEFINED(8,13649) /* TWeakObjectPtr<ABuildingActor*> */ __um(StartMetasoundLockDevice);                   // 0x0380   (0x0008)  
	FFabricMetaSoundNodeInfo                           HarmonixMusicProviderNode;                                  // 0x0388   (0x00F0)  
	FMetaSoundBuilderNodeOutputHandle                  OnPlayNodeOutput;                                           // 0x0478   (0x0020)  
	FMetaSoundBuilderNodeInputHandle                   OnFinishedNodeInput;                                        // 0x0498   (0x0020)  
	TArray<FMetaSoundBuilderNodeInputHandle>           AudioOutNodeInputs;                                         // 0x04B8   (0x0010)  
	unsigned char                                      UnknownData06_5[0x38];                                      // 0x04C8   (0x0038)  MISSED
	SDK_UNDEFINED(80,13650) /* TMap<UMetaSoundPatch*, FFabricMetaSoundNodePool> */ __um(FreeMetaSoundNodes);       // 0x0500   (0x0050)  
	SDK_UNDEFINED(80,13651) /* TMap<FName, FFabricLoadedUtilityPatches> */ __um(UtilityNodeTypesToPatches);        // 0x0550   (0x0050)  
	unsigned char                                      UnknownData07_5[0x10];                                      // 0x05A0   (0x0010)  MISSED
	bool                                               bGraphDirty;                                                // 0x05B0   (0x0001)  
	bool                                               bIsAudioless;                                               // 0x05B1   (0x0001)  
	bool                                               bHasCompletedInitialCooldown;                               // 0x05B2   (0x0001)  
	EFabricMetasoundPlayState                          CurrentPlayState;                                           // 0x05B3   (0x0001)  
	EFabricMetasoundPlayState                          PlayStateAfterRebuild;                                      // 0x05B4   (0x0001)  
	EJamFabricSyncType                                 JamSyncType;                                                // 0x05B5   (0x0001)  
	EFabricMetasoundMusicEventPriority                 MusicEventPriority;                                         // 0x05B6   (0x0001)  
	unsigned char                                      UnknownData08_5[0x1];                                       // 0x05B7   (0x0001)  MISSED
	FName                                              ClientCurrentAudibleMusicEventGroup;                        // 0x05B8   (0x0004)  
	FGameplayTag                                       AboveEmotesTag;                                             // 0x05BC   (0x0004)  
	FGameplayTag                                       BelowEmotesTag;                                             // 0x05C0   (0x0004)  
	float                                              ReplicatedReceivedSignalBufferDuration;                     // 0x05C4   (0x0004)  
	unsigned char                                      UnknownData09_6[0x28];                                      // 0x05C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.UnregisterAsAudible
	// void UnregisterAsAudible(class AActor* Device);                                                                       // [0xb89d420] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.StopMetasound
	// bool StopMetasound(class ABuildingActor* InStartMetasoundLockDevice);                                                 // [0xb89d390] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.ShouldSeekToStartOnGameReset
	// bool ShouldSeekToStartOnGameReset();                                                                                  // [0xb89d1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTimeSignature
	// void SetTimeSignature(int32_t Numerator, int32_t Denominator);                                                        // [0xb89d130] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTempo
	// void SetTempo(float Tempo);                                                                                           // [0xb89d0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetSpeed
	// void SetSpeed(float Speed);                                                                                           // [0xb89d030] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicKey
	// void SetMusicKey(EMusicKey Key, EMusicKeyMode Mode);                                                                  // [0xb89ce94] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicEventPriority
	// void SetMusicEventPriority(EFabricMetasoundMusicEventPriority InMusicEventPriority);                                  // [0xb89cdf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* MusicClockComponent);                                                  // [0xb89cd78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetCurrentJamSyncType
	// void SetCurrentJamSyncType(EJamFabricSyncType& InJamSyncType);                                                        // [0xb89cba8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetAudioComponents
	// void SetAudioComponents(TArray<UAudioComponent*> AudioComponents);                                                    // [0xb89cafc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToTimestamp
	// void SeekToTimestamp(FMusicTimestamp& Timestamp);                                                                     // [0xb89ca68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToMs
	// void SeekToMs(float Ms);                                                                                              // [0xb89c9e8] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.RegisterAsAudible
	// void RegisterAsAudible(class AActor* Device, FName& AudibleEventGroup);                                               // [0xb89c904] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PlayMetasound
	// bool PlayMetasound(class ABuildingActor* InStartMetasoundLockDevice);                                                 // [0xb89c874] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PauseMetasound
	// bool PauseMetasound();                                                                                                // [0xb89c790] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.OnGeneratorJustStarted
	// void OnGeneratorJustStarted(int32_t ComponentIndex);                                                                  // [0xb89c710] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.NotifyGraphChanged
	// void NotifyGraphChanged();                                                                                            // [0xb89c6f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.InvalidateMetasoundGeneratorHandle
	// void InvalidateMetasoundGeneratorHandle();                                                                            // [0xb89c438] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicEventTag
	// FGameplayTag GetMusicEventTag(EFabricMetasoundMusicEventPriority InMusicEventPriority);                               // [0xb89c3a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicEventPriority
	// EFabricMetasoundMusicEventPriority GetMusicEventPriority();                                                           // [0x60643b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                          // [0x3602570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundOutputNodeName
	// FName GetMetasoundOutputNodeName(FName NodeName, FName OutputName);                                                   // [0xb89c2ec] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetaSoundNodeForWrapper
	// FFabricMetaSoundNodeInfo GetMetaSoundNodeForWrapper(class UFabricMetaSoundPatchWrapper* PatchWrapper);                // [0xb89c170] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundInputNodeName
	// FName GetMetasoundInputNodeName(FName NodeName, FName InputName);                                                     // [0xb89c234] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentPlaystate
	// EFabricMetasoundPlayState GetCurrentPlaystate();                                                                      // [0xb89c158] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentPlaybackAudioComponent
	// class UAudioComponent* GetCurrentPlaybackAudioComponent();                                                            // [0xb89c138] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentMusicEventTag
	// FGameplayTag GetCurrentMusicEventTag();                                                                               // [0xb89c110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentJamSyncType
	// EJamFabricSyncType GetCurrentJamSyncType();                                                                           // [0x60643cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentClientAudibleMusicEventGroup
	// FName GetCurrentClientAudibleMusicEventGroup();                                                                       // [0x38e5f2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetBuilder
	// class UMetaSoundSourceBuilder* GetBuilder();                                                                          // [0xa0dd368] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.FreeMetaSoundNode
	// void FreeMetaSoundNode(FFabricMetaSoundNodeInfo& Node);                                                               // [0xb89bfb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AreAllPatchesReady
	// bool AreAllPatchesReady();                                                                                            // [0xb89be08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddOutputNodeForOutputVertex
	// void AddOutputNodeForOutputVertex(FMetaSoundBuilderNodeOutputHandle& OutputVertex, FName& NodeName, FName& OutOutputName, EMetaSoundBuilderResult& Result); // [0xb89bc70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddInputNodeForNodeByNameBP
	// void AddInputNodeForNodeByNameBP(FFabricMetaSoundNodeInfo& InOutNode, EFabricUserOptionType UserOptionType, FName& InputName); // [0xb89ba7c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricNoteTriggerPatchWrapper
/// Size: 0x0068 (0x0006A8 - 0x000710)
class UFabricNoteTriggerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	FName                                              NoteOutputName;                                             // 0x06A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x06AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,13652) /* FString */              __um(OctaveParam);                                          // 0x06B0   (0x0010)  
	SDK_UNDEFINED(16,13653) /* TArray<FString> */      __um(TriggerNoteParams);                                    // 0x06C0   (0x0010)  
	SDK_UNDEFINED(16,13654) /* FMulticastInlineDelegate */ __um(OnAnyMidiEventPassed);                             // 0x06D0   (0x0010)  
	SDK_UNDEFINED(16,13655) /* FMulticastInlineDelegate */ __um(OnMatchingMidiEventPassed);                        // 0x06E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x06F0   (0x0020)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricNoteTriggerPatchWrapper.OnTriggerNoteChanged
	// void OnTriggerNoteChanged(int32_t NoteIndex, bool bTriggerActive);                                                    // [0xb89f050] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricNoteTriggerPatchWrapper.OnOctaveChanged
	// void OnOctaveChanged(FName& ParamName, int32_t InOctave);                                                             // [0xb89ef54] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricNoteTriggerPatchWrapper.OnMetaSoundMidiEventPassed
	// void OnMetaSoundMidiEventPassed(FName OutputName, FMetaSoundOutput& Output);                                          // [0xb89ec5c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricMetaSoundTreeNode
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricMetaSoundTreeNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EFabricMetaSoundPinDirection                       PinDirection;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UFabricMetaSoundPatchWrapper*                AssociatedPatchWrapper;                                     // 0x0030   (0x0008)  
	TArray<class UFabricMetaSoundTreeNode*>            Children;                                                   // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.Reset
	// void Reset();                                                                                                         // [0xb89f114] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.GetValidChildren
	// TArray<UFabricMetaSoundTreeNode*> GetValidChildren();                                                                 // [0xb89e7a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.ConnectToChildNodes
	// void ConnectToChildNodes();                                                                                           // [0xb89e3ac] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper
/// Size: 0x0008 (0x0006A8 - 0x0006B0)
class UFabricMetaSoundSequencerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	class UMidiStepSequence*                           CurrentStepSequence;                                        // 0x06A8   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper.SetMidiStepSequence
	// void SetMidiStepSequence(class UMidiStepSequence* StepSequence);                                                      // [0xb89f6e4] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapperEqBandsBinding
/// Size: 0x0008 (0x000048 - 0x000050)
struct FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding : FFabricMetaSoundPatchWrapperBinding
{ 
	int32_t                                            PrimitiveDataIndex;                                         // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper
/// Size: 0x0030 (0x0006A8 - 0x0006D8)
class UFabricMetaSoundSpeakerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	FName                                              SpeakerEnabledMetasoundParam;                               // 0x06A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x06AC   (0x0004)  MISSED
	TArray<FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding> EqBands;                                             // 0x06B0   (0x0010)  
	SDK_UNDEFINED(16,13656) /* FMulticastInlineDelegate */ __um(OnFabricMetaSoundSpeakerPatchEqBandUpdate);        // 0x06C0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x06D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper.SetAudioBusFromSourceBus
	// void SetAudioBusFromSourceBus(class USoundSourceBus* Bus);                                                            // [0xb89f128] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSplitterPatchWrapper
/// Size: 0x0058 (0x0006A8 - 0x000700)
class UFabricMetaSoundSplitterPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x06A8   (0x0008)  MISSED
	SDK_UNDEFINED(80,13657) /* TMap<FName, FFabricMetaSoundNodeInfo> */ __um(SplitterNodes);                       // 0x06B0   (0x0050)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundTickSubsystem
/// Size: 0x0190 (0x0000D0 - 0x000260)
class UFabricMetaSoundTickSubsystem : public UFortManagedTickSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x190];                                     // 0x00D0   (0x0190)  MISSED
};

/// Class /Script/FabricRuntime.FabricModulator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulator : public UInterface
{ 
public:
};

/// Class /Script/FabricRuntime.FabricModulatorSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulatorSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatorSource.GetUserOption
	// class UPlaylistUserOptionBase* GetUserOption(FString Property);                                                       // [0xb8a43a4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricModulatorSource.GetModulators
	// void GetModulators(class UFabricModulatable* Modulatable);                                                            // [0x80c6d98] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricModulatorDevice
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulatorDevice : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatorDevice.SetUserOption
	// void SetUserOption(EFabricUserOptionType UserOptionType, class UPlaylistUserOptionBase* UserOption, class UObject* ModulatorObject); // [0xb8a6bd4] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/FabricRuntime.FabricProgressionPreset
/// Size: 0x0020 (0x000008 - 0x000028)
struct FFabricProgressionPreset : FTableRowBase
{ 
	SDK_UNDEFINED(24,13658) /* FText */                __um(ProgressionName);                                      // 0x0008   (0x0018)  
	EHarmonicProgression                               Interval0;                                                  // 0x0020   (0x0001)  
	EHarmonicProgression                               Interval1;                                                  // 0x0021   (0x0001)  
	EHarmonicProgression                               Interval2;                                                  // 0x0022   (0x0001)  
	EHarmonicProgression                               Interval3;                                                  // 0x0023   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/FabricRuntime.FabricProgressorManager
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UFabricProgressorManager : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13659) /* FMulticastInlineDelegate */ __um(OnGlobalProgressionChanged);                       // 0x00A8   (0x0010)  
	bool                                               bHasActiveGlobalProgression;                                // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            GlobalPresetNumber;                                         // 0x00BC   (0x0004)  
	FFabricProgressionPreset                           GlobalProgression;                                          // 0x00C0   (0x0028)  


	/// Functions
	// Function /Script/FabricRuntime.FabricProgressorManager.SetGlobalProgression
	// void SetGlobalProgression(FFabricProgressionPreset& InProgression, int32_t InPresetNumber);                           // [0xb8a62e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricProgressorManager.OnProgressionChanged__DelegateSignature
	// void OnProgressionChanged__DelegateSignature();                                                                       // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricProgressorManager.IsProgressionGlobal
	// bool IsProgressionGlobal(FFabricProgressionPreset& InProgression);                                                    // [0xb8a52ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricProgressorManager.HasActiveGlobalProgression
	// bool HasActiveGlobalProgression();                                                                                    // [0xb8a4a5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalProgression
	// FFabricProgressionPreset GetGlobalProgression();                                                                      // [0xb8a1be4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalPresetNumber
	// int32_t GetGlobalPresetNumber();                                                                                      // [0xb8a1bcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricSteppedPreviewFXComponent
/// Size: 0x0060 (0x0009C0 - 0x000A20)
class UFabricSteppedPreviewFXComponent : public UInstancedStaticMeshComponent
{ 
public:
	int32_t                                            NumberOfSteps;                                              // 0x09B8   (0x0004)  
	bool                                               bManuallySpaceMeshInstances;                                // 0x09BC   (0x0001)  
	bool                                               bAlignToTransformCenter;                                    // 0x09BD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x09BE   (0x0002)  MISSED
	float                                              CenterAlignmentBounds;                                      // 0x09C0   (0x0004)  
	float                                              DistanceBetweenInstances;                                   // 0x09C4   (0x0004)  
	float                                              DistanceBetweenTripletIntances;                             // 0x09C8   (0x0004)  
	float                                              DistanceBetweenInstanceSets;                                // 0x09CC   (0x0004)  
	float                                              DistanceBetweenTripletInstanceSets;                         // 0x09D0   (0x0004)  
	EFabricNoteStyle                                   NoteStyle;                                                  // 0x09D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x09D5   (0x0003)  MISSED
	int32_t                                            CPDDeviceEnabled;                                           // 0x09D8   (0x0004)  
	int32_t                                            CPDNumSteps;                                                // 0x09DC   (0x0004)  
	int32_t                                            PICDNoteOn;                                                 // 0x09E0   (0x0004)  
	int32_t                                            PICDNoteLength;                                             // 0x09E4   (0x0004)  
	int32_t                                            PICDSpanLength;                                             // 0x09E8   (0x0004)  
	int32_t                                            PICDNoteTime;                                               // 0x09EC   (0x0004)  
	int32_t                                            PICDGenericFloatIndex;                                      // 0x09F0   (0x0004)  
	float                                              LengthStepBeats;                                            // 0x09F4   (0x0004)  
	float                                              StepLengthQuarterNotes;                                     // 0x09F8   (0x0004)  
	float                                              StepBeatScale;                                              // 0x09FC   (0x0004)  
	float                                              StepBeatOffset;                                             // 0x0A00   (0x0004)  
	float                                              LengthTrackBeats;                                           // 0x0A04   (0x0004)  
	double                                             InstanceSpace;                                              // 0x0A08   (0x0008)  
	double                                             InstanceSetSpace;                                           // 0x0A10   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0A18   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateStepData
	// void UpdateStepData(int32_t Index, bool bMarkRenderStateDirty);                                                       // [0xb8a7094] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateExistingTransforms
	// void UpdateExistingTransforms(int32_t NumInstances, int32_t NumSteps);                                                // [0xb8a6ebc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateDeviceEnabledFX
	// void UpdateDeviceEnabledFX(bool bEnabled);                                                                            // [0xb8a6d94] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateAllCurrentStepData
	// void UpdateAllCurrentStepData(int32_t NumSteps, float StepLengthBeats);                                               // [0xb8a6ccc] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetSpanLength
	// void SetSpanLength(int32_t InstanceIndex, float SpanLengthBeats);                                                     // [0xb8a6988] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNumSteps
	// void SetNumSteps(int32_t NumSteps);                                                                                   // [0xb8a67c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteTime
	// void SetNoteTime(int32_t InstanceIndex, float NoteTimeOffsetBeats);                                                   // [0xb8a6704] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteOn
	// void SetNoteOn(int32_t InstanceIndex, float NoteOn, bool bMarkRenderStateDirty);                                      // [0xb8a660c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteLength
	// void SetNoteLength(int32_t InstanceIndex, float NoteLengthBeats);                                                     // [0xb8a6548] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetGenericFloatValue
	// void SetGenericFloatValue(int32_t InstanceIndex, float FloatValue, bool bMarkRenderStateDirty);                       // [0xb8a61d8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNoteLength);                                                            // [0xb8a5f58] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                              // [0xb8a5ed4] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                           // [0xb8a5e50] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                             // [0xb8a5dcc] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                      // [0xb8a5cc4] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                             // [0xb8a5430] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                           // [0xb8a53ac] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.GetNoteOn
	// float GetNoteOn(int32_t InstanceIndex);                                                                               // [0xb8a4310] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.ConstructPreviewVisuals
	// void ConstructPreviewVisuals(int32_t NumSteps, float StepBeatLength, bool bForceUpdateTransform, bool bInTestNotesOn); // [0xb8a18f4] Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSequencerPreviewFXComponent
/// Size: 0x0010 (0x000A20 - 0x000A30)
class UFabricSequencerPreviewFXComponent : public UFabricSteppedPreviewFXComponent
{ 
public:
	SDK_UNDEFINED(8,13660) /* TWeakObjectPtr<UFabricStepSequencerComponent*> */ __um(StepSequencer);               // 0x0A20   (0x0008)  
	SDK_UNDEFINED(8,13661) /* TWeakObjectPtr<UFabricStepSequencerGridComponent*> */ __um(StepSequencerGrid);       // 0x0A28   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.UpdateNoteOn
	// void UpdateNoteOn(int32_t Index, int32_t NumSteps, bool bMarkRenderStateDirty);                                       // [0xb8a6f7c] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSustainLength
	// void SetSustainLength(int32_t InstanceIndex, float SustainLengthBeats);                                               // [0xb8a6b10] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSingleTrackNoteOn
	// void SetSingleTrackNoteOn(int32_t InstanceIndex, int32_t TrackPICDIndex, float NoteOn, bool bMarkRenderStateDirty);   // [0xb8a6848] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                        // [0xb8a5fdc] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                            // [0xb8a54b4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.InitializePreviewFXComponent
	// void InitializePreviewFXComponent(class UFabricStepSequencerComponent* InStepSequencer, class UFabricStepSequencerGridComponent* InStepSequencerGrid, bool bInTestNotesOn); // [0xb8a4a74] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSequencerSustainComponent
/// Size: 0x0080 (0x0009C0 - 0x000A40)
class UFabricSequencerSustainComponent : public UInstancedStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(80,13662) /* TMap<FIntVector2, int32_t> */ __um(StepToInstanceMapping);                          // 0x09B8   (0x0050)  
	int32_t                                            PICDStartBeat;                                              // 0x0A08   (0x0004)  
	int32_t                                            PICDEndBeat;                                                // 0x0A0C   (0x0004)  
	int32_t                                            PICDLoopBeat;                                               // 0x0A10   (0x0004)  
	int32_t                                            CPDDeviceEnabled;                                           // 0x0A14   (0x0004)  
	float                                              GridSquareExtents;                                          // 0x0A18   (0x0004)  
	float                                              SustainInstanceYLocation;                                   // 0x0A1C   (0x0004)  
	float                                              SustainInstanceYScale;                                      // 0x0A20   (0x0004)  
	float                                              SustainInstanceZScale;                                      // 0x0A24   (0x0004)  
	SDK_UNDEFINED(8,13663) /* TWeakObjectPtr<UFabricStepSequencerComponent*> */ __um(StepSequencer);               // 0x0A28   (0x0008)  
	SDK_UNDEFINED(8,13664) /* TWeakObjectPtr<UFabricStepSequencerGridComponent*> */ __um(StepSequencerGrid);       // 0x0A30   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0A38   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateVisibilityOfInstances
	// void UpdateVisibilityOfInstances();                                                                                   // [0xb8a7420] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainMaterial
	// void UpdateSustainMaterial(int32_t InstanceIndex, int32_t HeadNoteStepIndex, int32_t TrackIndex);                     // [0xb8a732c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainInstance
	// void UpdateSustainInstance(int32_t StepIndex, int32_t TrackIndex, int32_t PageIndex, bool bEnabled, bool bContinuous, bool bStepChanged); // [0xb8a715c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdatePipsOnGridChanged
	// void UpdatePipsOnGridChanged();                                                                                       // [0xb8a7080] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateDeviceEnabledOnSustain
	// void UpdateDeviceEnabledOnSustain(bool bEnabled);                                                                     // [0xb8a6e28] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetStartBeat
	// void SetStartBeat(int32_t InstanceIndex, float StartBeatValue);                                                       // [0xb8a6a4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetLoopBeat
	// void SetLoopBeat(int32_t InstanceIndex, float LoopBeatValue);                                                         // [0xb8a6484] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetEndBeat
	// void SetEndBeat(int32_t InstanceIndex, float EndBeatValue);                                                           // [0xb8a6114] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                        // [0xb8a6078] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                              // [0xb8a5e50] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                           // [0xb8a5dcc] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                             // [0xb8a5d48] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                            // [0xb8a54c8] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.InitializeSustainComponent
	// void InitializeSustainComponent(class UFabricStepSequencerComponent* InStepSequencer, class UFabricStepSequencerGridComponent* InStepSequencerGrid); // [0xb8a4b78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindHeadNoteAndUpdateInstance
	// void FindHeadNoteAndUpdateInstance(int32_t StepIndex, int32_t TrackIndex);                                            // [0xb8a1b0c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindAndDeleteInstance
	// void FindAndDeleteInstance(int32_t StepIndex, int32_t TrackIndex);                                                    // [0xb8a1a4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.ConstructSustains
	// void ConstructSustains();                                                                                             // [0xb8a1a38] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.CalculateSustainLength
	// float CalculateSustainLength(float NumStepsCoveredBySustain);                                                         // [0xb8a1864] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.AddSustainInstance
	// void AddSustainInstance(int32_t StepIndex, int32_t TrackIndex);                                                       // [0xb8a17a4] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucket
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFabricSignificanceBasedUpdateBucket
{ 
	float                                              MinDistanceFromPlayer;                                      // 0x0000   (0x0004)  
	float                                              MaxDistanceFromPlayer;                                      // 0x0004   (0x0004)  
	float                                              FramesPerUpdate;                                            // 0x0008   (0x0004)  
	int32_t                                            MaxObjectsInBucket;                                         // 0x000C   (0x0004)  
};

/// Class /Script/FabricRuntime.FabricSignificanceAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricSignificanceAsset : public UDataAsset
{ 
public:
	TArray<FFabricSignificanceBasedUpdateBucket>       UpdateBuckets;                                              // 0x0030   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricStepSequencerModulatable
/// Size: 0x0088 (0x000328 - 0x0003B0)
class UFabricStepSequencerModulatable : public UFabricModulatable
{ 
public:
	unsigned char                                      UnknownData00_3[0x80];                                      // 0x0328   (0x0080)  MISSED
	bool                                               bIsChromatic;                                               // 0x03A8   (0x0001)  
	bool                                               bModulationValueChanged;                                    // 0x03A9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x03AA   (0x0006)  MISSED
};

/// Struct /Script/FabricRuntime.FabricStepTrackPacked
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricStepTrackPacked
{ 
	TArray<int32_t>                                    PackedEnabledSquares;                                       // 0x0000   (0x0010)  
	TArray<int32_t>                                    PackedContinuationSquares;                                  // 0x0010   (0x0010)  
	int32_t                                            TrackIndex;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/FabricRuntime.FabricStepPagePacked
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFabricStepPagePacked
{ 
	TArray<FFabricStepTrackPacked>                     PackedTracks;                                               // 0x0000   (0x0010)  
	int32_t                                            PageNumber;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/FabricRuntime.FabricStepTablePacked
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricStepTablePacked
{ 
	TArray<FFabricStepPagePacked>                      PackedPages;                                                // 0x0000   (0x0010)  
	TArray<FStepSequenceNote>                          Notes;                                                      // 0x0010   (0x0010)  
	int32_t                                            StepSkipIndex;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/FabricRuntime.FabricStepSequencerComponent
/// Size: 0x0260 (0x0000A0 - 0x000300)
class UFabricStepSequencerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13665) /* FMulticastInlineDelegate */ __um(OnNumTracksChanged);                               // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,13666) /* FMulticastInlineDelegate */ __um(OnNumStepsChanged);                                // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,13667) /* FMulticastInlineDelegate */ __um(OnPageChanged);                                    // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,13668) /* FMulticastInlineDelegate */ __um(OnQuarterNotesLengthChanged);                      // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,13669) /* FMulticastInlineDelegate */ __um(OnBeatScaleChanged);                               // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,13670) /* FMulticastInlineDelegate */ __um(OnBeatOffsetChanged);                              // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,13671) /* FMulticastInlineDelegate */ __um(OnStepChanged);                                    // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,13672) /* FMulticastInlineDelegate */ __um(OnNoteStyleChanged);                               // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,13673) /* FMulticastInlineDelegate */ __um(OnFullTableChanged);                               // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,13674) /* FMulticastInlineDelegate */ __um(OnPageCleared);                                    // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,13675) /* FMulticastInlineDelegate */ __um(OnLoopEnded);                                      // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,13676) /* FString */              __um(LengthParam);                                          // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,13677) /* FString */              __um(DurationParam);                                        // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,13678) /* FString */              __um(PageParam);                                            // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,13679) /* FString */              __um(AutoPageParam);                                        // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,13680) /* FString */              __um(OctaveParam);                                          // 0x0198   (0x0010)  
	SDK_UNDEFINED(16,13681) /* FString */              __um(NoteStyleParam);                                       // 0x01A8   (0x0010)  
	SDK_UNDEFINED(16,13682) /* FString */              __um(LoopParam);                                            // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,13683) /* FString */              __um(AutoPagePlaysBlankPagesParam);                         // 0x01C8   (0x0010)  
	bool                                               bMonophonic;                                                // 0x01D8   (0x0001)  
	bool                                               bSupportsContinuation;                                      // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01DA   (0x0002)  MISSED
	float                                              StepLengthQuarterNotes;                                     // 0x01DC   (0x0004)  
	float                                              StepBeatScale;                                              // 0x01E0   (0x0004)  
	bool                                               bSkipFourthStepInTriplet;                                   // 0x01E4   (0x0001)  
	EFabricNoteStyle                                   NoteStyle;                                                  // 0x01E5   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x01E6   (0x0002)  MISSED
	int32_t                                            MaxSteps;                                                   // 0x01E8   (0x0004)  
	int32_t                                            CurrentSteps;                                               // 0x01EC   (0x0004)  
	bool                                               bMatchStepsToTimeSignature;                                 // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01F1   (0x0003)  MISSED
	int32_t                                            MaxPages;                                                   // 0x01F4   (0x0004)  
	int32_t                                            CurrentPage;                                                // 0x01F8   (0x0004)  
	int32_t                                            MaxTracks;                                                  // 0x01FC   (0x0004)  
	int32_t                                            CurrentTracks;                                              // 0x0200   (0x0004)  
	int32_t                                            LocalInteractionStartTrackIndex;                            // 0x0204   (0x0004)  
	int32_t                                            LocalInteractionStartStepIndex;                             // 0x0208   (0x0004)  
	bool                                               bAutoPage;                                                  // 0x020C   (0x0001)  
	bool                                               bAutoPagePlaysBlankPages;                                   // 0x020D   (0x0001)  
	bool                                               bLoop;                                                      // 0x020E   (0x0001)  
	char                                               RandomizationCommonSampleSize;                              // 0x020F   (0x0001)  
	float                                              RandomizationRestSelectionMaxPct;                           // 0x0210   (0x0004)  
	float                                              RandomizationCommonPitchSelectionMaxPct;                    // 0x0214   (0x0004)  
	class UClass*                                      ContinuationControlClass;                                   // 0x0218   (0x0008)  
	FStepSequenceTable                                 LocalStepTable;                                             // 0x0220   (0x0028)  
	FFabricStepTablePacked                             PackedStepTable;                                            // 0x0248   (0x0028)  
	class UFabricStepSequencerModulatable*             StepSequencerModulatable;                                   // 0x0270   (0x0008)  
	class AActor*                                      CachedContinuationControl;                                  // 0x0278   (0x0008)  
	int32_t                                            ContinuationRowIndex;                                       // 0x0280   (0x0004)  
	int32_t                                            ContinuationStepIndex;                                      // 0x0284   (0x0004)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0288   (0x0008)  MISSED
	class UMidiStepSequence*                           MetaSoundMidiStepSequence;                                  // 0x0290   (0x0008)  
	unsigned char                                      UnknownData05_6[0x68];                                      // 0x0298   (0x0068)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.UpdatePackedStepTableSaveRecordIfChanged
	// void UpdatePackedStepTableSaveRecordIfChanged(FFabricStepTablePacked& InPackedStepTable);                             // [0xb8aaab4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabledOnPage
	// void ToggleStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                              // [0xb8aa9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabled
	// void ToggleStepEnabled(int32_t Row, int32_t Column);                                                                  // [0xb8aa8f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabledOnPage
	// void SetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState);                                    // [0xb8aa7bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabled
	// void SetStepEnabled(int32_t Row, int32_t Column, bool bState);                                                        // [0xb8aa6c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuationOnPage
	// void SetStepContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bIsContinuation);                      // [0xb8aa588] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuation
	// void SetStepContinuation(int32_t Row, int32_t Column, bool bIsContinuation);                                          // [0xb8aa490] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetQuarterNotesLength
	// void SetQuarterNotesLength(float QuarterNotes);                                                                       // [0xb8aa410] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetPlaying
	// void SetPlaying(bool bNewPlaying);                                                                                    // [0xb8aa390] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberTracks
	// void SetNumberTracks(int32_t NumTracks);                                                                              // [0xb8aa2cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberSteps
	// void SetNumberSteps(int32_t NumSteps);                                                                                // [0xb8aa24c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberPages
	// void SetNumberPages(int32_t NumPages);                                                                                // [0xb8aa1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteStyle
	// void SetNoteStyle(EFabricNoteStyle style);                                                                            // [0xb8aa130] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteForTrack
	// void SetNoteForTrack(FMidiNote Note, int32_t Track);                                                                  // [0xb8a9f04] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* InMusicClock);                                                         // [0xb8a9e04] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMonophonic
	// void SetMonophonic(bool bNewMonophonic);                                                                              // [0xb8a9d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMaxSteps
	// void SetMaxSteps(int32_t NumSteps);                                                                                   // [0xb8a9cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetLoop
	// void SetLoop(bool bNewLoop);                                                                                          // [0xb8a9c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetCurrentPage
	// void SetCurrentPage(int32_t NewPage);                                                                                 // [0xb8a9aec] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetBeatScale
	// void SetBeatScale(float BeatScale);                                                                                   // [0xb8a99ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizePage
	// void RandomizePage(int32_t Page);                                                                                     // [0xb8a98ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizeCurrentPage
	// void RandomizeCurrentPage();                                                                                          // [0xb8a98d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.OnRep_PackedStepTable
	// void OnRep_PackedStepTable();                                                                                         // [0xb8a9824] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrackOnPage
	// bool IsStepEnabledForAnyTrackOnPage(int32_t Page, int32_t Column);                                                    // [0xb8a928c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrack
	// bool IsStepEnabledForAnyTrack(int32_t Column);                                                                        // [0xb8a91f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsPageBlank
	// bool IsPageBlank(int32_t PageIndex);                                                                                  // [0xb8a9164] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetSupportsContinuation
	// bool GetSupportsContinuation();                                                                                       // [0x87b8a4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartQuarterNotes
	// float GetStepStartQuarterNotes(int32_t Step);                                                                         // [0xb8a90c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartBeat
	// float GetStepStartBeat(int32_t Step);                                                                                 // [0xb8a9014] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuationOnPage
	// bool GetStepIsContinuationOnPage(int32_t Page, int32_t Row, int32_t Column);                                          // [0xb8a8f1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuation
	// bool GetStepIsContinuation(int32_t Row, int32_t Column);                                                              // [0xb8a8e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabledOnPage
	// bool GetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                                 // [0xb8a8d58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabled
	// bool GetStepEnabled(int32_t Row, int32_t Column);                                                                     // [0xb8a8c8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLengthOnPage
	// float GetStepContinuationLengthOnPage(int32_t Page, int32_t Row, int32_t Column);                                     // [0xb8a8b94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLength
	// float GetStepContinuationLength(int32_t Row, int32_t Column);                                                         // [0xb8a8ac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetPageData
	// void GetPageData(int32_t PageIndex, FStepSequencePage& OutPageData);                                                  // [0xb8a89b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumUsedSteps
	// int32_t GetNumUsedSteps(int32_t TotalSteps);                                                                          // [0xb8a88f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberTracks
	// int32_t GetNumberTracks();                                                                                            // [0xb8a8998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberSteps
	// int32_t GetNumberSteps();                                                                                             // [0xb8a8980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMidiStepSequence
	// class UMidiStepSequence* GetMidiStepSequence();                                                                       // [0x642786c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMaxSteps
	// int32_t GetMaxSteps();                                                                                                // [0xb8a88dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumnOnPage
	// float GetLongestContinuationLengthForColumnOnPage(int32_t Page, int32_t Column);                                      // [0xb8a8818] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumn
	// float GetLongestContinuationLengthForColumn(int32_t Column);                                                          // [0xb8a8780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackQuarterNotes
	// float GetLengthTrackQuarterNotes();                                                                                   // [0xb8a8740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackBeats
	// float GetLengthTrackBeats();                                                                                          // [0xb8a86f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepQuarterNotes
	// float GetLengthStepQuarterNotes();                                                                                    // [0xb8a86d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepBeats
	// float GetLengthStepBeats();                                                                                           // [0xb8a86b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetCurrentPage
	// int32_t GetCurrentPage();                                                                                             // [0xb8a8324] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetContinuationFocusIndeces
	// void GetContinuationFocusIndeces(int32_t& OutRowIndex, int32_t& OutStepIndex, int32_t& OutNumContinuationSteps);      // [0xb8a81fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearPage
	// void ClearPage(int32_t Page, bool bUpdateSaveRecord);                                                                 // [0xb8a8140] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearCurrentPage
	// void ClearCurrentPage();                                                                                              // [0xb8a8128] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyTemplate
	// void ApplyTemplate(class UMidiStepSequence* Template, int32_t StepSequencePageIndex, bool bUpdateSaveRecord);         // [0xb8a7f48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyPage
	// void ApplyPage(int32_t PageIndex, FStepSequencePage& PageData);                                                       // [0xb8a7e6c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.TrackRow
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTrackRow
{ 
	TArray<class UFabricStepSequencerGridSquareComponent*> GridSquares;                                            // 0x0000   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricStepSequencerGridComponent
/// Size: 0x0070 (0x000220 - 0x000290)
class UFabricStepSequencerGridComponent : public USceneComponent
{ 
public:
	FVector2D                                          GridExtents;                                                // 0x0220   (0x0010)  
	FVector2D                                          GridSpacing;                                                // 0x0230   (0x0010)  
	int32_t                                            SingleTrackNumItemsPerRow;                                  // 0x0240   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	FVector2D                                          EditorPreviewGridSize;                                      // 0x0248   (0x0010)  
	class UClass*                                      GridSquareClass;                                            // 0x0258   (0x0008)  
	SDK_UNDEFINED(1,13684) /* TEnumAsByte<ESequencerType> */ __um(SequencerType);                                  // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	int32_t                                            ActiveTrack;                                                // 0x0264   (0x0004)  
	class UFabricStepSequencerComponent*               StepSequencer;                                              // 0x0268   (0x0008)  
	TArray<FTrackRow>                                  GridRows;                                                   // 0x0270   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0280   (0x0010)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetGridVisible
	// void SetGridVisible(bool bInGridVisible, bool bForceRefresh);                                                         // [0xb8a9b6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetBypassed
	// void SetBypassed(bool bBypassed);                                                                                     // [0xb8a9a6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetActiveTrackIndex
	// void SetActiveTrackIndex(int32_t ActiveTrackIndex);                                                                   // [0xb8a996c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                        // [0xb8a9838] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNotesLength);                                                           // [0xb8a959c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                           // [0xb8a97a4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                             // [0xb8a9724] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                      // [0xb8a96a8] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                            // [0xb8a9694] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnCurrentPageChanged
	// void OnCurrentPageChanged(int32_t NewPage);                                                                           // [0xb8a9618] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                             // [0xb8a959c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                           // [0xb8a959c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.NotifyInteractionFocusTargetExternallyChanged
	// void NotifyInteractionFocusTargetExternallyChanged(class APlayerController* PlayerController, int32_t SourceRowIndex, int32_t SourceColumnIndex, int32_t FocusRowIndex, int32_t FocusColumnIndex, bool bIsFocused); // [0xb8a93d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsStepToggledOnForAnyTrack
	// bool IsStepToggledOnForAnyTrack(int32_t StepIndex);                                                                   // [0xb8a934c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsBypassed
	// bool IsBypassed();                                                                                                    // [0x38e5ee4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareYPosition
	// float GetGridSquareYPosition(int32_t NumRows, int32_t RowIndex);                                                      // [0xb8a85ec] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareXPosition
	// float GetGridSquareXPosition(int32_t NumSteps, int32_t StepIndex);                                                    // [0xb8a8528] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareSize
	// FVector2D GetGridSquareSize(int32_t NumSteps, int32_t NumRows);                                                       // [0xb8a8410] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareExtents
	// FVector GetGridSquareExtents(int32_t RowIndex, int32_t ColumnIndex);                                                  // [0xb8a833c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricStepSequencerGridSquareComponent
/// Size: 0x0060 (0x0005C0 - 0x000620)
class UFabricStepSequencerGridSquareComponent : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x05C0   (0x0010)  MISSED
	float                                              ContinuationControlInteractionDelay;                        // 0x05D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x05D4   (0x0004)  MISSED
	class UFabricStepSequencerComponent*               AssignedStepSequencer;                                      // 0x05D8   (0x0008)  
	int32_t                                            ActiveTrack;                                                // 0x05E0   (0x0004)  
	int32_t                                            AssignedStep;                                               // 0x05E4   (0x0004)  
	int32_t                                            PreviousFocusStepIndex;                                     // 0x05E8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x34];                                      // 0x05EC   (0x0034)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.SetActiveTrack
	// void SetActiveTrack(int32_t Track);                                                                                   // [0xb8d6078] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_StartInteraction
	// void OnContinuationControl_StartInteraction(class APlayerController* Controller);                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_EndInteraction
	// void OnContinuationControl_EndInteraction(class APlayerController* Controller);                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnStartInteraction
	// bool CanDoInteractionLogicOnStartInteraction();                                                                       // [0xb8d5e4c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnEndInteraction
	// bool CanDoInteractionLogicOnEndInteraction();                                                                         // [0xb8d5e28] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricTextureModifierBase
/// Size: 0x0018 (0x000328 - 0x000340)
class UFabricTextureModifierBase : public UFabricModulatable
{ 
public:
	SDK_UNDEFINED(16,13685) /* FMulticastInlineDelegate */ __um(OnSourceTexturesChanged);                          // 0x0328   (0x0010)  
	class UTexture*                                    ModifiedTexture;                                            // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureModifierBase.OnSourceTextureChanged__DelegateSignature
	// void OnSourceTextureChanged__DelegateSignature(TArray<FFabricTextureProviderTexture>& Textures);                      // [0x3d1d968] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Struct /Script/FabricRuntime.FabricTextureProviderTexture
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFabricTextureProviderTexture
{ 
	class UTexture*                                    Texture;                                                    // 0x0000   (0x0008)  
	FLinearColor                                       Tint;                                                       // 0x0008   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricTextureTreeNode
/// Size: 0x0028 (0x000028 - 0x000050)
class UFabricTextureTreeNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UFabricTextureTreeNode*>              Children;                                                   // 0x0028   (0x0010)  
	FFabricTextureProviderTexture                      Texture;                                                    // 0x0038   (0x0018)  


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureTreeNode.Reset
	// void Reset();                                                                                                         // [0xb8d6064] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureTreeNode.CopyProperties
	// void CopyProperties(class UFabricTextureTreeNode* Other);                                                             // [0xb8d5e70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricTextureProviderBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UFabricTextureProviderBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13686) /* FMulticastInlineDelegate */ __um(OnTextureChanged);                                 // 0x0028   (0x0010)  
	FFabricTextureProviderTexture                      SourceTexture;                                              // 0x0038   (0x0018)  
	float                                              CurrentCableFloatValue;                                     // 0x0050   (0x0004)  
	float                                              CurrentCableFloatDirection;                                 // 0x0054   (0x0004)  
	float                                              TimeElapsedSinceLastCableFloatDirty;                        // 0x0058   (0x0004)  
	bool                                               bCurrentCableFloatDirty;                                    // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureProviderBase.SetSourceTexture
	// void SetSourceTexture(FFabricTextureProviderTexture& InTexture);                                                      // [0xb8d61b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureProviderBase.OnTextureChanged__DelegateSignature
	// void OnTextureChanged__DelegateSignature(FFabricTextureProviderTexture& Texture);                                     // [0x3d1d968] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricTimelinePreviewComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UFabricTimelinePreviewComponent : public UActorComponent
{ 
public:
	class UTimelineComponent*                          CurrentTimeline;                                            // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricTimelinePreviewComponent.PreviewTimeline
	// void PreviewTimeline(class UTimelineComponent* Timeline, float SecondsToPlay, bool bReverseAnimation);                // [0xb8d5f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelinePreviewComponent.GetShouldPreview
	// bool GetShouldPreview();                                                                                              // [0x2c9e4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/FabricRuntime.FabricTimelineSyncServerSongPosition
/// Size: 0x001C (0x000000 - 0x00001C)
struct FFabricTimelineSyncServerSongPosition
{ 
	FMusicTimestamp                                    Timestamp;                                                  // 0x0000   (0x0008)  
	float                                              SecondsIncludingCountIn;                                    // 0x0008   (0x0004)  
	float                                              Tempo;                                                      // 0x000C   (0x0004)  
	float                                              BeatsIncludingCountIn;                                      // 0x0010   (0x0004)  
	float                                              NetServerTimeWhenSent;                                      // 0x0014   (0x0004)  
	float                                              TimeSigDenominator;                                         // 0x0018   (0x0004)  
};

/// Class /Script/FabricRuntime.FabricTimelineSyncComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UFabricTimelineSyncComponent : public UActorComponent
{ 
public:
	float                                              ThresholdForSeekMS;                                         // 0x00A0   (0x0004)  
	float                                              ThresholdForStartSpeedAdjustMS;                             // 0x00A4   (0x0004)  
	float                                              ThresholdForEndOfSpeedAdjustMS;                             // 0x00A8   (0x0004)  
	float                                              SpeedAdjustFactor;                                          // 0x00AC   (0x0004)  
	bool                                               bPrintToScreen;                                             // 0x00B0   (0x0001)  
	bool                                               bLogCorrectedServerTimeDelta;                               // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	float                                              SpeedSyncTimeoutLength;                                     // 0x00B4   (0x0004)  
	float                                              TempoDeltaThrottleSeconds;                                  // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	class UFabricMetaSoundManagerComponent*            MetaSoundManager;                                           // 0x00C0   (0x0008)  
	class UMusicClockComponent*                        MusicClock;                                                 // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00D0   (0x0008)  MISSED
	FMidiSongPos                                       ServerCurrentSongRenderPos;                                 // 0x00D8   (0x0040)  
	FFabricTimelineSyncServerSongPosition              ServerTimelineSyncServerSongPosition;                       // 0x0118   (0x001C)  
	unsigned char                                      UnknownData03_6[0x2C];                                      // 0x0134   (0x002C)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.SetFabricMetaSoundManager
	// void SetFabricMetaSoundManager(class UFabricMetaSoundManagerComponent* InMetaSoundManager);                           // [0xb8d60f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnTimelinePlayingChanged
	// void OnTimelinePlayingChanged(EMusicClockState State);                                                                // [0x80e5218] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnRep_ServerCurrentSongPos
	// void OnRep_ServerCurrentSongPos();                                                                                    // [0xb8d5f68] Final|Native|Public  
};

/// Class /Script/FabricRuntime.FabricWaveformTexture
/// Size: 0x0050 (0x000028 - 0x000078)
class UFabricWaveformTexture : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	int32_t                                            WaveformNumSamplesHeld;                                     // 0x0030   (0x0004)  
	int32_t                                            WaveformSmoothingDistance;                                  // 0x0034   (0x0004)  
	float                                              WaveformSmoothingFactor;                                    // 0x0038   (0x0004)  
	float                                              WaveformDecayPerSecond;                                     // 0x003C   (0x0004)  
	class UTexture2D*                                  WaveformTexture;                                            // 0x0040   (0x0008)  
	bool                                               bEnableTextureRequests;                                     // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2F];                                      // 0x0049   (0x002F)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricWaveformTexture.Initialize
	// void Initialize();                                                                                                    // [0xb8d5f54] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.GetWaveformTexture
	// class UTexture2D* GetWaveformTexture();                                                                               // [0x5e4f978] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddNewValueToWaveformTexture
	// void AddNewValueToWaveformTexture(float Value);                                                                       // [0xb8d5da8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddMultipleValuesToWaveformTexture
	// void AddMultipleValuesToWaveformTexture(TArray<float>& Values);                                                       // [0xb8d5ccc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricSequencerStepChangedInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFabricSequencerStepChangedInfo
{ 
	int32_t                                            Page;                                                       // 0x0000   (0x0004)  
	int32_t                                            Row;                                                        // 0x0004   (0x0004)  
	int32_t                                            Step;                                                       // 0x0008   (0x0004)  
	FStepSequenceCell                                  Cell;                                                       // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/FabricRuntime.FabricLFOGenerator
/// Size: 0x0078 (0x000000 - 0x000078)
struct FFabricLFOGenerator
{ 
	EFabricWaveShape                                   WaveShape;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x0004   (0x0004)  
	float                                              Maximum;                                                    // 0x0008   (0x0004)  
	float                                              Shape;                                                      // 0x000C   (0x0004)  
	int32_t                                            InitialSeed;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x64];                                      // 0x0014   (0x0064)  MISSED
};

/// Struct /Script/FabricRuntime.FabricValueSetterGenerator
/// Size: 0x0058 (0x000000 - 0x000058)
struct FFabricValueSetterGenerator
{ 
	int32_t                                            PhraseLengthInBars;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4C];                                      // 0x000C   (0x004C)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMeshInstanceReference
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFabricMeshInstanceReference
{ 
	FFabricMeshProviderMeshReference                   MeshReference;                                              // 0x0000   (0x0038)  
	TArray<FTransform>                                 InstanceTransforms;                                         // 0x0038   (0x0010)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundNodePool
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFabricMetaSoundNodePool
{ 
	int32_t                                            NumberAdded;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FFabricMetaSoundNodeInfo>                   FreeNodes;                                                  // 0x0008   (0x0010)  
	class UMetaSoundPatch*                             PatchSpawnedFrom;                                           // 0x0018   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricLoadedUtilityPatches
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricLoadedUtilityPatches
{ 
	class UMetaSoundPatch*                             CombinerNode;                                               // 0x0000   (0x0008)  
	class UMetaSoundPatch*                             SwitcherNode;                                               // 0x0008   (0x0008)  
	class UMetaSoundPatch*                             SelectNode;                                                 // 0x0010   (0x0008)  
	class UMetaSoundPatch*                             AnalyzerNode;                                               // 0x0018   (0x0008)  
	FFabricMetaSoundUtilityParams                      UtilityNodeParams;                                          // 0x0020   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricConnectedInputWrapperInfo
/// Size: 0x0230 (0x000000 - 0x000230)
struct FFabricConnectedInputWrapperInfo
{ 
	bool                                               bDirectlyConnected;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UFabricMetaSoundPatchWrapper*                Wrapper;                                                    // 0x0008   (0x0008)  
	FFabricMetaSoundNodeInfo                           OutputNode;                                                 // 0x0010   (0x00F0)  
	FMetaSoundBuilderNodeOutputHandle                  ConnectedNodeOutput;                                        // 0x0100   (0x0020)  
	FFabricMetaSoundNodeInfo                           InputNode;                                                  // 0x0120   (0x00F0)  
	FMetaSoundBuilderNodeInputHandle                   CombinerNodeInput;                                          // 0x0210   (0x0020)  
};

/// Struct /Script/FabricRuntime.FabricStepSequencerComponentBaseInstanceData
/// Size: 0x0028 (0x000068 - 0x000090)
struct FFabricStepSequencerComponentBaseInstanceData : FActorComponentInstanceData
{ 
	FFabricStepTablePacked                             PackedStepTable;                                            // 0x0068   (0x0028)  
};

