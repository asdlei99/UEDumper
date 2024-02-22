
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/FMJamUI.JamEmoteWheelOverlay
/// Size: 0x0000 (0x000400 - 0x000400)
class UJamEmoteWheelOverlay : public UCommonActivatableWidget
{ 
public:
};

/// Class /Script/FMJamUI.JamUIManagerComponent_SongIndicators
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UJamUIManagerComponent_SongIndicators : public UFortControllerComponent
{ 
public:
	class UClass*                                      JamSongIndicatorClass;                                      // 0x00A8   (0x0008)  
	FUserWidgetPool                                    IndicatorPool;                                              // 0x00B0   (0x0088)  


	/// Functions
	// Function /Script/FMJamUI.JamUIManagerComponent_SongIndicators.RebuildJamSongIndicatorsForPlayspace
	// void RebuildJamSongIndicatorsForPlayspace(class AJamPlayspace* Playspace);                                            // [0xb0a433c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamUI.JamUIManagerComponent_SongIndicators.ClearJamIndicators
	// void ClearJamIndicators();                                                                                            // [0xb0a42bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMJamUI.JamSongIndicator
/// Size: 0x0028 (0x0003D0 - 0x0003F8)
class UJamSongIndicator : public UFortActorIndicatorWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x03D0   (0x0028)  MISSED


	/// Functions
	// Function /Script/FMJamUI.JamSongIndicator.OnScreenClampChanged
	// void OnScreenClampChanged(bool bIsClamped);                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FMJamUI.JamSongIndicator.OnInitInfo
	// void OnInitInfo(class UCatalogData* Song, EFMJamLoopType Type);                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FMJamUI.JamSongIndicator.OnDistanceChanged
	// void OnDistanceChanged(int32_t Distance);                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FMJamUI.JamSongIndicator.GetIndicatedPlayerStateAthena
	// class AFortPlayerStateAthena* GetIndicatedPlayerStateAthena();                                                        // [0xb0a42d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

