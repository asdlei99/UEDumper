
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/REVRuntime.REVComponent
/// Size: 0x0030 (0x0008F0 - 0x000920)
class UREVComponent : public USynthComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x08F0   (0x0008)  MISSED
	class UREVModel*                                   Model;                                                      // 0x08F8   (0x0008)  
	class URevSettings*                                SimSettings;                                                // 0x0900   (0x0008)  
	float                                              PitchMultiplier;                                            // 0x0908   (0x0004)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x090C   (0x0014)  MISSED


	/// Functions
	// Function /Script/REVRuntime.REVComponent.UpdateSimSettings
	// void UpdateSimSettings();                                                                                             // [0xa805e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/REVRuntime.REVComponent.UpdateParameters
	// void UpdateParameters(float InPitch, float InRPM, float InThrottle, float InVelocity, int32_t InGear, bool bInEnableShifting); // [0xa805c64] Final|Native|Public|BlueprintCallable 
	// Function /Script/REVRuntime.REVComponent.SetSettings
	// void SetSettings(class URevSettings* InSettings);                                                                     // [0xa805bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/REVRuntime.REVComponent.SetRevModel
	// void SetRevModel(class UREVModel* InModel);                                                                           // [0x1555480] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/REVRuntime.REVModel
/// Size: 0x0048 (0x000028 - 0x000070)
class UREVModel : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0028   (0x0030)  MISSED
	float                                              SampleRate;                                                 // 0x0058   (0x0004)  
	int32_t                                            NumChannels;                                                // 0x005C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/REVRuntime.RevSettings
/// Size: 0x0058 (0x000028 - 0x000080)
class URevSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	float                                              UpShiftDuration;                                            // 0x0030   (0x0004)  
	float                                              UpShiftAttackDuration;                                      // 0x0034   (0x0004)  
	float                                              UpShiftAttackVolumeSpike;                                   // 0x0038   (0x0004)  
	float                                              UpShiftAttackRPM;                                           // 0x003C   (0x0004)  
	float                                              UpShiftAttackThrottleTime;                                  // 0x0040   (0x0004)  
	float                                              UpShiftWobblePitchFreq;                                     // 0x0044   (0x0004)  
	float                                              UpShiftWobblePitchAmp;                                      // 0x0048   (0x0004)  
	bool                                               UpShiftWobbleEnabled;                                       // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              UpShiftWobbleVolFreq;                                       // 0x0050   (0x0004)  
	float                                              UpShiftWobbleVolAmp;                                        // 0x0054   (0x0004)  
	float                                              UpShiftWobbleDuration;                                      // 0x0058   (0x0004)  
	float                                              DownShiftDuration;                                          // 0x005C   (0x0004)  
	float                                              PopDuration;                                                // 0x0060   (0x0004)  
	float                                              ClutchRPMSpike;                                             // 0x0064   (0x0004)  
	float                                              ClutchRPMSpikeDuration;                                     // 0x0068   (0x0004)  
	float                                              ClutchRPMMergeTime;                                         // 0x006C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/REVRuntime.RevSettings.UpdateSettings
	// void UpdateSettings();                                                                                                // [0xa805e2c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

