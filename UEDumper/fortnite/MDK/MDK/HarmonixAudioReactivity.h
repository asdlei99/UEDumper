
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HarmonixDsp

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UHarmonixAudioAnalyzerResultsDispatcher : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher.TryGetResults
	// bool TryGetResults(FName& Name, FHarmonixAudioAnalyzerResults& Results);                                                 // [0xb05f23c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher.HasProvider
	// bool HasProvider(FName& Name);                                                                                           // [0xb05f0c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UHarmonixAudioAnalyzerResultsProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider.SetArbitraryTextureData
	// void SetArbitraryTextureData(TArray<float>& ArbitraryTextureData);                                                       // [0xb05f160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider.CreateHarmonixAudioAnalyzerResultsProvider
	// class UHarmonixAudioAnalyzerResultsProvider* CreateHarmonixAudioAnalyzerResultsProvider(FName Name);                     // [0xb05f004] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSourceEffectPreset
/// Size: 0x00C8 (0x000068 - 0x000130)
class UHarmonixAudioAnalyzerSourceEffectPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FHarmonixAudioAnalyzerSourceEffectSettings) Settings                                                   OFFSET(getStruct<T>, {0xE0, 80, 0, 0})
};

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSubmixEffectPreset
/// Size: 0x00C8 (0x000068 - 0x000130)
class UHarmonixAudioAnalyzerSubmixEffectPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FHarmonixAudioAnalyzerSubmixEffectSettings) Settings                                                   OFFSET(getStruct<T>, {0xE0, 80, 0, 0})
};

/// Class /Script/HarmonixAudioReactivity.HarmonixTextureBase
/// Size: 0x0010 (0x000130 - 0x000140)
class UHarmonixTextureBase : public UTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	CMember(EHarmonixTextureFilterMode)                TextureFilterMode                                           OFFSET(get<T>, {0x138, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               TextureTilingMode                                           OFFSET(get<T>, {0x139, 1, 0, 0})


	/// Functions
	// Function /Script/HarmonixAudioReactivity.HarmonixTextureBase.GetCurrentTextureWidth
	// int32_t GetCurrentTextureWidth();                                                                                        // [0x9600160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixAudioReactivity.HarmonixTextureBase.GetCurrentTextureHeight
	// int32_t GetCurrentTextureHeight();                                                                                       // [0xb05f0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HarmonixAudioReactivity.HarmonixHysteresisTextureBase
/// Size: 0x0030 (0x000140 - 0x000170)
class UHarmonixHysteresisTextureBase : public UHarmonixTextureBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(float)                                     TicksPerShift                                               OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(int32_t)                                   NumHysteresisSamples                                        OFFSET(get<int32_t>, {0x150, 4, 0, 0})
};

/// Class /Script/HarmonixAudioReactivity.HarmonixAudioAnalysisTexture
/// Size: 0x0018 (0x000170 - 0x000188)
class UHarmonixAudioAnalysisTexture : public UHarmonixHysteresisTextureBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TWeakObjectPtr<UMusicClockComponent*>)     MusicClock                                                  OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(EHarmonixAudioAnalysisType)                Type                                                        OFFSET(get<T>, {0x178, 1, 0, 0})
	SMember(FName)                                     InstanceName                                                OFFSET(getStruct<T>, {0x17C, 4, 0, 0})
	DMember(bool)                                      ResetMonoPeakOnUpdate                                       OFFSET(get<bool>, {0x180, 1, 0, 0})
	DMember(bool)                                      WarnIfNotEnabled                                            OFFSET(get<bool>, {0x181, 1, 0, 0})
};

/// Class /Script/HarmonixAudioReactivity.HarmonixPeakTamer
/// Size: 0x0020 (0x000028 - 0x000048)
class UHarmonixPeakTamer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.Update
	// void Update(float InputValue, float DeltaTimeSeconds);                                                                   // [0xb05f36c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.GetValue
	// float GetValue();                                                                                                        // [0x340306c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.GetPeak
	// float GetPeak();                                                                                                         // [0x330bfdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.CreateHarmonixPeakTamer
	// class UHarmonixPeakTamer* CreateHarmonixPeakTamer();                                                                     // [0xb05f084] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixAudioReactivity.HarmonixPeakTamer.Configure
	// void Configure(FHarmonixPeakTamerSettings& Settings);                                                                    // [0xb05ef58] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResults
/// Size: 0x0060 (0x000000 - 0x000060)
class FHarmonixAudioAnalyzerResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FHarmonixVuMeterAnalyzerResults)           VuMeterResults                                              OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FHarmonixFFTAnalyzerResults)               FFTResults                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FHarmonixWaveformAnalyzerResults)          WaveformAnalyzerResults                                     OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	CMember(TArray<float>)                             ArbitraryTextureData                                        OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FHarmonixAudioAnalyzerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FHarmonixVuMeterAnalyzerSettings)          VuMeterSettings                                             OFFSET(getStruct<T>, {0x4, 24, 0, 0})
	SMember(FHarmonixFFTAnalyzerSettings)              FFTAnalyzerSettings                                         OFFSET(getStruct<T>, {0x1C, 36, 0, 0})
	SMember(FHarmonixWaveformAnalyzerSettings)         WaveformAnalyzerSettings                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSourceEffectSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FHarmonixAudioAnalyzerSourceEffectSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FHarmonixAudioAnalyzerSettings)            AnalyzerSettings                                            OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerSubmixEffectSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FHarmonixAudioAnalyzerSubmixEffectSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FHarmonixAudioAnalyzerSettings)            AnalyzerSettings                                            OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/HarmonixAudioReactivity.HarmonixPeakTamerSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FHarmonixPeakTamerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     PeakAttackTimeSeconds                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PeakReleaseTimeSeconds                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bEnableValueSmoothing                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     ValueAttackTimeSeconds                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ValueReleaseTimeSeconds                                     OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Enum /Script/HarmonixAudioReactivity.EHarmonixAudioAnalysisType
/// Size: 0x06
enum EHarmonixAudioAnalysisType : uint8_t
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
enum EHarmonixTextureFilterMode : uint8_t
{
	EHarmonixTextureFilterMode__Point                                                = 0,
	EHarmonixTextureFilterMode__Linear                                               = 1,
	EHarmonixTextureFilterMode__Count                                                = 2,
	EHarmonixTextureFilterMode__Invalid                                              = 3,
	EHarmonixTextureFilterMode__EHarmonixTextureFilterMode_MAX                       = 4
};

