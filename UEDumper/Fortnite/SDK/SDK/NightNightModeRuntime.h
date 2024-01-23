
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/NightNightModeRuntime.FortCameraMode_NightNight
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortCameraMode_NightNight : public UFortCinematicCamera
{ 
public:
};

/// Class /Script/NightNightModeRuntime.FortPawnComponent_NightNight
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortPawnComponent_NightNight : public UFortPawnOverrideComponent
{ 
public:
	bool                                               bAutoPossess;                                               // 0x00A8   (0x0001)  
	bool                                               bAllowUIViewTarget;                                         // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	class UClass*                                      CameraModeOverrideClass;                                    // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/NightNightModeRuntime.FortPawnComponent_NightNight.SetAllowUIViewTarget
	// void SetAllowUIViewTarget(bool bAllow);                                                                               // [0xbe0fb48] Final|Native|Public|BlueprintCallable 
	// Function /Script/NightNightModeRuntime.FortPawnComponent_NightNight.OnUIViewTargetChanged
	// void OnUIViewTargetChanged(class UFortUICameraManagerComponent* InUICameraManagerComponent, class AActor* OldUIViewTarget, class AActor* NewUIViewTarget); // [0xbe0fa50] Final|Native|Private 
};

