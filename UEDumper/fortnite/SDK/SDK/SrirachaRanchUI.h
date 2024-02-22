
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	class UPaperSprite*                                ToggleRadioOffSprite;                                       // 0x0138   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0140   (0x0008)  MISSED


	/// Functions
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
	// void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                     // [0xad76684] Final|Native|Private 
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
	// void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                     // [0xad764d8] Final|Native|Private 
};

/// Class /Script/SrirachaRanchUI.RadioPlayerWidgetBase
/// Size: 0x0050 (0x000328 - 0x000378)
class URadioPlayerWidgetBase : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0328   (0x0040)  MISSED
	FFortPrioritizedWidgetData                         PriorityData;                                               // 0x0368   (0x0002)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x036A   (0x0006)  MISSED
	class UStreamingRadioPlayerComponent*              LastValidComp;                                              // 0x0370   (0x0008)  


	/// Functions
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
	// void SetControllable(bool bCanControl);                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
	// void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
	// void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
	// void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation LastSource);                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnMetadataChanged
	// void OnMetadataChanged(FFortMediaInBandMetadata MediaMetadata);                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
	// void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
	// void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                   // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn
	// void OnControllerGainedNewFortPawn(class AFortPawn* FortPawn);                                                        // [0xad76a68] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
	// void NativeExitedVehicle();                                                                                           // [0xad76a54] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
	// void NativeEnteredVehicle();                                                                                          // [0xad76a40] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.IsMetadataEmpty
	// bool IsMetadataEmpty(FFortMediaInBandMetadata& MediaMetadata);                                                        // [0xad76948] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.HaveToChangeSongInfo
	// bool HaveToChangeSongInfo(FFortMediaInBandMetadata& MediaMetadata);                                                   // [0xad76830] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.GetRadioStatusOnScreenTime
	// float GetRadioStatusOnScreenTime();                                                                                   // [0xad764a8] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

