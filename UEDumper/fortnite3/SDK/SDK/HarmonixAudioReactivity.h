
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HarmonixDsp

/// Enum /Script/HarmonixAudioReactivity.EHarmonixAudioAnalysisType
/// Size: 0x06
enum class EHarmonixAudioAnalysisType : uint8_t
{
	EHarmonixAudioAnalysisType__VUMeter                                              = 0,
	EHarmonixAudioAnalysisType__FFT                                                  = 1,
	EHarmonixAudioAnalysisType__Waveform                                             = 2,
	EHarmonixAudioAnalysisType__Arbitrary                                            = 3,
	EHarmonixAudioAnalysisType__Count                                                = 4,
	EHarmonixAudioAnalysisType__EHarmonixAudioAnalysisType_MAX                       = 5
};

/// Enum /Script/HarmonixAudioReactivity.EHarmonixTextureFilterMode
/// Size: 0x05
enum class EHarmonixTextureFilterMode : uint8_t
{
	EHarmonixTextureFilterMode__Point                                                = 0,
	EHarmonixTextureFilterMode__Linear                                               = 1,
	EHarmonixTextureFilterMode__Count                                                = 2,
	EHarmonixTextureFilterMode__Invalid                                              = 3,
	EHarmonixTextureFilterMode__EHarmonixTextureFilterMode_MAX                       = 4
};

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UHarmonixAudioAnalyzerResultsDispatcher : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0030   (0x0078)  MISSED


	/// Functions
	// Function /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher.TryGetResults
	// bool TryGetResults(FName& Name, FHarmonixAudioAnalyzerResults& Results);                                              // [0xad305a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher.HasProvider
	// bool HasProvider(FName& Name);                                                                                        // [0xad30434] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UHarmonixAudioAnalyzerResultsProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED


	/// Functions
	// Function /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider.SetArbitraryTextureData
	// void SetArbitraryTextureData(TArray<float>& ArbitraryTextureData);                                                    // [0xad304cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider.CreateHarmonixAudioAnalyzerResultsProvider
	// class UHarmonixAudioAnalyzerResultsProvider* CreateHarmonixAudioAnalyzerResultsProvider(FName Name);                  // [0xad30330] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FHarmonixAudioAnalyzerSettings
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FHarmonixVuMeterAnalyzerSettings                   VuMeterSettings;                                            // 0x0004   (0x0018)  
	FHarmonixFFTAnalyzerSettings                       FFTAnalyzerSettings;                                        // 0x001C   (0x0024)  
	FHarmonixWaveformAnalyzerSettings                  WaveformAnalyzerSettings;                                   // 0x0040   (0x0010)  
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSourceEffectSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FHarmonixAudioAnalyzerSourceEffectSettings
{ 
	FHarmonixAudioAnalyzerSettings                     AnalyzerSettings;                                           // 0x0000   (0x0050)  
};

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSourceEffectPreset
/// Size: 0x00C8 (0x000068 - 0x000130)
class UHarmonixAudioAnalyzerSourceEffectPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x0068   (0x0078)  MISSED
	FHarmonixAudioAnalyzerSourceEffectSettings         Settings;                                                   // 0x00E0   (0x0050)  
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSubmixEffectSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FHarmonixAudioAnalyzerSubmixEffectSettings
{ 
	FHarmonixAudioAnalyzerSettings                     AnalyzerSettings;                                           // 0x0000   (0x0050)  
};

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSubmixEffectPreset
/// Size: 0x00C8 (0x000068 - 0x000130)
class UHarmonixAudioAnalyzerSubmixEffectPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x0068   (0x0078)  MISSED
	FHarmonixAudioAnalyzerSubmixEffectSettings         Settings;                                                   // 0x00E0   (0x0050)  
};

/// Class /Script/HarmonixAudioReactivity.HarmonixTextureBase
/// Size: 0x0010 (0x000130 - 0x000140)
class UHarmonixTextureBase : public UTexture
{ 
public:
	int32_t                                            Width;                                                      // 0x0130   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	EHarmonixTextureFilterMode                         TextureFilterMode;                                          // 0x0138   (0x0001)  
	SDK_UNDEFINED(1,14008) /* TEnumAsByte<TextureAddress> */ __um(TextureTilingMode);                              // 0x0139   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x013A   (0x0006)  MISSED


	/// Functions
	// Function /Script/HarmonixAudioReactivity.HarmonixTextureBase.GetCurrentTextureWidth
	// int32_t GetCurrentTextureWidth();                                                                                     // [0x95af880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixAudioReactivity.HarmonixTextureBase.GetCurrentTextureHeight
	// int32_t GetCurrentTextureHeight();                                                                                    // [0xad3041c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HarmonixAudioReactivity.HarmonixHysteresisTextureBase
/// Size: 0x0030 (0x000140 - 0x000170)
class UHarmonixHysteresisTextureBase : public UHarmonixTextureBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0140   (0x0008)  MISSED
	float                                              TicksPerShift;                                              // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	int32_t                                            NumHysteresisSamples;                                       // 0x0150   (0x0004)  
	unsigned char                                      UnknownData02_6[0x1C];                                      // 0x0154   (0x001C)  MISSED
};

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalysisTexture
/// Size: 0x0018 (0x000170 - 0x000188)
class UHarmonixAudioAnalysisTexture : public UHarmonixHysteresisTextureBase
{ 
public:
	SDK_UNDEFINED(8,14009) /* TWeakObjectPtr<UMusicClockComponent*> */ __um(MusicClock);                           // 0x0170   (0x0008)  
	EHarmonixAudioAnalysisType                         Type;                                                       // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0179   (0x0003)  MISSED
	FName                                              InstanceName;                                               // 0x017C   (0x0004)  
	bool                                               ResetMonoPeakOnUpdate;                                      // 0x0180   (0x0001)  
	bool                                               WarnIfNotEnabled;                                           // 0x0181   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0182   (0x0006)  MISSED
};

/// Class /Script/HarmonixAudioReactivity.HarmonixPeakTamer
/// Size: 0x0020 (0x000028 - 0x000048)
class UHarmonixPeakTamer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED


	/// Functions
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.Update
	// void Update(float InputValue, float DeltaTimeSeconds);                                                                // [0xad306d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.GetValue
	// float GetValue();                                                                                                     // [0x34193cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.GetPeak
	// float GetPeak();                                                                                                      // [0x339d7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.CreateHarmonixPeakTamer
	// class UHarmonixPeakTamer* CreateHarmonixPeakTamer();                                                                  // [0xad303f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.Configure
	// void Configure(FHarmonixPeakTamerSettings& Settings);                                                                 // [0xad30284] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResults
/// Size: 0x0060 (0x000000 - 0x000060)
struct FHarmonixAudioAnalyzerResults
{ 
	FHarmonixVuMeterAnalyzerResults                    VuMeterResults;                                             // 0x0000   (0x0020)  
	FHarmonixFFTAnalyzerResults                        FFTResults;                                                 // 0x0020   (0x0010)  
	FHarmonixWaveformAnalyzerResults                   WaveformAnalyzerResults;                                    // 0x0030   (0x0020)  
	TArray<float>                                      ArbitraryTextureData;                                       // 0x0050   (0x0010)  
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixPeakTamerSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FHarmonixPeakTamerSettings
{ 
	float                                              PeakAttackTimeSeconds;                                      // 0x0000   (0x0004)  
	float                                              PeakReleaseTimeSeconds;                                     // 0x0004   (0x0004)  
	bool                                               bEnableValueSmoothing;                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ValueAttackTimeSeconds;                                     // 0x000C   (0x0004)  
	float                                              ValueReleaseTimeSeconds;                                    // 0x0010   (0x0004)  
};

