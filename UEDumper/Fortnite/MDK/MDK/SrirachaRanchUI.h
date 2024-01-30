
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: Paper2D
/// dependency: SrirachaRanch
/// dependency: UMG

/// Class /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
/// Size: 0x0010 (0x000138 - 0x000148)
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class UPaperSprite*)                       ToggleRadioOffSprite                                        OFFSET(get<T>, {0x138, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
	// void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0xa85899c] Final|Native|Private 
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
	// void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0xa858808] Final|Native|Private 
};

/// Class /Script/SrirachaRanchUI.RadioPlayerWidgetBase
/// Size: 0x0050 (0x000328 - 0x000378)
class URadioPlayerWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FFortPrioritizedWidgetData)                PriorityData                                                OFFSET(getStruct<T>, {0x368, 2, 0, 0})
	CMember(class UStreamingRadioPlayerComponent*)     LastValidComp                                               OFFSET(get<T>, {0x370, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
	// void SetControllable(bool bCanControl);                                                                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
	// void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                           // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
	// void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                          // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
	// void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation LastSource);                        // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnMetadataChanged
	// void OnMetadataChanged(FFortMediaInBandMetadata MediaMetadata);                                                          // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
	// void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
	// void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn
	// void OnControllerGainedNewFortPawn(class AFortPawn* FortPawn);                                                           // [0xa858d68] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
	// void NativeExitedVehicle();                                                                                              // [0xa858d54] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
	// void NativeEnteredVehicle();                                                                                             // [0xa858d40] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.IsMetadataEmpty
	// bool IsMetadataEmpty(FFortMediaInBandMetadata& MediaMetadata);                                                           // [0xa858c48] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.HaveToChangeSongInfo
	// bool HaveToChangeSongInfo(FFortMediaInBandMetadata& MediaMetadata);                                                      // [0xa858b30] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.GetRadioStatusOnScreenTime
	// float GetRadioStatusOnScreenTime();                                                                                      // [0xa8587d8] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

