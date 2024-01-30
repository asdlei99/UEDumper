
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioMixer.AudioBusSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UAudioBusSubsystem : public UAudioEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/AudioMixer.AudioDeviceNotificationSubsystem
/// Size: 0x00F8 (0x000030 - 0x000128)
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMulticastInlineDelegate)                  DefaultCaptureDeviceChanged                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DefaultRenderDeviceChanged                                  OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceAdded                                                 OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceRemoved                                               OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceStateChanged                                          OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceSwitched                                              OFFSET(getStruct<T>, {0x100, 16, 0, 0})
};

/// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.UnregisterAudioBusFromSubmix
	// void UnregisterAudioBusFromSubmix(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus); // [0x62f112c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	// float TrimAudioCache(float InMegabytesToFree);                                                                           // [0x62f10a8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
	// void SwapAudioOutputDevice(class UObject* WorldContextObject, FString NewDeviceId, FDelegateProperty& OnCompletedDeviceSwap); // [0x62f0970] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	// class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite); // [0x62f0198] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
	// void StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                         // [0x62f0084] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	// void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);                  // [0x62eff98] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	// void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord); // [0x62efea0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
	// void StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                        // [0x62efd80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	// void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType); // [0x62efb78] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
	// void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // [0x62ef3e8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // [0x62ef200] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	// void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                        // [0x62ef14c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
	// void ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62eef80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	// void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62eef80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	// void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // [0x62eee88] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	// void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62eed90] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
	// void RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // [0x62eee88] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
	// void RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62eed90] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // [0x62eebbc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);    // [0x62eeaa8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RegisterAudioBusToSubmix
	// void RegisterAudioBusToSubmix(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus); // [0x62ee9b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	// void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty OnLoadCompletion);                             // [0x62ee828] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	// void PrimeSoundCueForPlayback(class USoundCue* SoundCue);                                                                // [0x62ee7bc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	// void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                         // [0x62ee708] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x62ee5a8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x62ee404] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x62ee260] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
	// bool IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                     // [0x62ee14c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	// void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze); // [0x62edeb4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// int32_t GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain); // [0x62edd98] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	// void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze); // [0x62edb00] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
	// void GetCurrentAudioOutputDeviceName(class UObject* WorldContextObject, FDelegateProperty& OnObtainCurrentDeviceEvent);  // [0x62eda28] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
	// void GetAvailableAudioOutputDevices(class UObject* WorldContextObject, FDelegateProperty& OnObtainDevicesEvent);         // [0x62ed950] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
	// FString Conv_AudioOutputDeviceInfoToString(FAudioOutputDeviceInfo& Info);                                                // [0x62ed898] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	// void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);                             // [0x62ed7d8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
	// void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec); // [0x62ed6e0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// void ClearMasterSubmixEffects(class UObject* WorldContextObject);                                                        // [0x62ed644] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	// int32_t AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62ed4b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry); // [0x62ed23c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);       // [0x62ed08c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.SynthSound
/// Size: 0x0020 (0x000470 - 0x000490)
class USynthSound : public USoundWaveProcedural
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(TWeakObjectPtr<USynthComponent*>)          OwningSynthComponent                                        OFFSET(get<T>, {0x470, 8, 0, 0})
};

/// Class /Script/AudioMixer.SynthComponent
/// Size: 0x0660 (0x000290 - 0x0008F0)
class USynthComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	DMember(bool)                                      bAutoDestroy                                                OFFSET(get<bool>, {0x290, 1, 1, 0})
	DMember(bool)                                      bStopWhenOwnerDestroyed                                     OFFSET(get<bool>, {0x290, 1, 1, 1})
	DMember(bool)                                      bAllowSpatialization                                        OFFSET(get<bool>, {0x290, 1, 1, 2})
	DMember(bool)                                      bOverrideAttenuation                                        OFFSET(get<bool>, {0x290, 1, 1, 3})
	DMember(bool)                                      bEnableBusSends                                             OFFSET(get<bool>, {0x294, 1, 1, 0})
	DMember(bool)                                      bEnableBaseSubmix                                           OFFSET(get<bool>, {0x294, 1, 1, 1})
	DMember(bool)                                      bEnableSubmixSends                                          OFFSET(get<bool>, {0x294, 1, 1, 2})
	CMember(class USoundAttenuation*)                  AttenuationSettings                                         OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FSoundAttenuationSettings)                 AttenuationOverrides                                        OFFSET(getStruct<T>, {0x2A0, 976, 0, 0})
	CMember(class USoundConcurrency*)                  ConcurrencySettings                                         OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(TSet<USoundConcurrency*>)                  ConcurrencySet                                              OFFSET(get<T>, {0x678, 80, 0, 0})
	SMember(FSoundModulationDefaultRoutingSettings)    ModulationRouting                                           OFFSET(getStruct<T>, {0x6C8, 360, 0, 0})
	CMember(class USoundClass*)                        SoundClass                                                  OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(class USoundEffectSourcePresetChain*)      SourceEffectChain                                           OFFSET(get<T>, {0x838, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   SoundSubmix                                                 OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(TArray<FSoundSubmixSendInfo>)              SoundSubmixSends                                            OFFSET(get<T>, {0x848, 16, 0, 0})
	CMember(TArray<FSoundSourceBusSendInfo>)           BusSends                                                    OFFSET(get<T>, {0x858, 16, 0, 0})
	CMember(TArray<FSoundSourceBusSendInfo>)           PreEffectBusSends                                           OFFSET(get<T>, {0x868, 16, 0, 0})
	DMember(bool)                                      bIsUISound                                                  OFFSET(get<bool>, {0x878, 1, 1, 0})
	DMember(bool)                                      bIsPreviewSound                                             OFFSET(get<bool>, {0x878, 1, 1, 1})
	DMember(int32_t)                                   EnvelopeFollowerAttackTime                                  OFFSET(get<int32_t>, {0x87C, 4, 0, 0})
	DMember(int32_t)                                   EnvelopeFollowerReleaseTime                                 OFFSET(get<int32_t>, {0x880, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudioEnvelopeValue                                        OFFSET(getStruct<T>, {0x888, 16, 0, 0})
	CMember(class USynthSound*)                        Synth                                                       OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(class UAudioComponent*)                    AudioComponent                                              OFFSET(get<T>, {0x8C0, 8, 0, 0})


	/// Functions
	// Function /Script/AudioMixer.SynthComponent.Stop
	// void Stop();                                                                                                             // [0x39ad548] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.Start
	// void Start();                                                                                                            // [0x1e1ebd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier
	// void SetVolumeMultiplier(float VolumeMultiplier);                                                                        // [0x1900d94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend
	// void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);                                                     // [0x6301cd4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSourceBusSendPreEffect
	// void SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);                         // [0x6301c0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSourceBusSendPostEffect
	// void SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);                        // [0x6301b44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetOutputToBusOnly
	// void SetOutputToBusOnly(bool bInOutputToBusOnly);                                                                        // [0x6300e18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetModulationRouting
	// void SetModulationRouting(TSet<USoundModulatorBase*>& Modulators, EModulationDestination Destination, EModulationRouting RoutingMethod); // [0x6300b50] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterFrequency
	// void SetLowPassFilterFrequency(float InLowPassFilterFrequency);                                                          // [0x630084c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterEnabled
	// void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);                                                               // [0x63007c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetAudioBusSendPreEffect
	// void SetAudioBusSendPreEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);                                       // [0x63003a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetAudioBusSendPostEffect
	// void SetAudioBusSendPostEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);                                      // [0x63002e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x19005d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.SynthComponent.GetModulators
	// TSet<USoundModulatorBase*> GetModulators(EModulationDestination Destination);                                            // [0x62ff458] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.SynthComponent.FadeOut
	// void FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve);                                  // [0x1e1b824] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AudioMixer.SynthComponent.FadeIn
	// void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve);                   // [0x33a3ec4] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AudioMixer.SynthComponent.AdjustVolume
	// void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve);                      // [0x62fe07c] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
/// Size: 0x00E8 (0x000068 - 0x000150)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FSubmixEffectDynamicsProcessorSettings)    Settings                                                    OFFSET(getStruct<T>, {0xF0, 96, 0, 0})


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings);                                                      // [0x6301118] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	// void SetExternalSubmix(class USoundSubmix* Submix);                                                                      // [0x63006f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
	// void SetAudioBus(class UAudioBus* AudioBus);                                                                             // [0x6300200] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
	// void ResetKey();                                                                                                         // [0x62ffde8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSubmixEffectSubmixEQSettings)             Settings                                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	// void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);                                                             // [0x63012f0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectReverbPreset
/// Size: 0x00A8 (0x000068 - 0x000110)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FSubmixEffectReverbSettings)               Settings                                                    OFFSET(getStruct<T>, {0xD0, 64, 0, 0})


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	// void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                   // [0x63019b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectReverbSettings& InSettings);                                                               // [0x6301210] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.AudioGenerator
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAudioGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/AudioMixer.QuartzClockHandle
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UQuartzClockHandle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:


	/// Functions
	// Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
	// void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle*& ClockHandle); // [0x6302a20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
	// void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);         // [0x6302954] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
	// void SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // [0x63027e0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
	// void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, FDelegateProperty& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // [0x63026b4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StopClock
	// void StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle*& ClockHandle);     // [0x63025a4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StartOtherClock
	// void StartOtherClock(class UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate); // [0x6302368] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StartClock
	// void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                              // [0x6302298] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetTicksPerSecond
	// void SetTicksPerSecond(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float TicksPerSecond); // [0x6302018] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
	// void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute); // [0x6301d98] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetSecondsPerTick
	// void SetSecondsPerTick(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float SecondsPerTick); // [0x6300e98] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
	// void SetMillisecondsPerTick(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick); // [0x63008d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetBeatsPerMinute
	// void SetBeatsPerMinute(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float BeatsPerMinute); // [0x6300470] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResumeClock
	// void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                             // [0x6300134] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransportQuantized
	// void ResetTransportQuantized(class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, class UQuartzClockHandle*& ClockHandle); // [0x62ffee0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransport
	// void ResetTransport(class UObject* WorldContextObject, FDelegateProperty& InDelegate);                                   // [0x62ffdfc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.PauseClock
	// void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                              // [0x62ffd1c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.NotifyOnQuantizationBoundary
	// void NotifyOnQuantizationBoundary(class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, float InMsOffset); // [0x62ffa34] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.IsClockRunning
	// bool IsClockRunning(class UObject* WorldContextObject);                                                                  // [0x62ff8c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetTicksPerSecond
	// float GetTicksPerSecond(class UObject* WorldContextObject);                                                              // [0x62ff834] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
	// float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject);                                                  // [0x62ff7a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetSecondsPerTick
	// float GetSecondsPerTick(class UObject* WorldContextObject);                                                              // [0x62ff71c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
	// float GetMillisecondsPerTick(class UObject* WorldContextObject);                                                         // [0x62ff3cc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetEstimatedRunTime
	// float GetEstimatedRunTime(class UObject* WorldContextObject);                                                            // [0x62ff158] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
	// float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, EQuartzCommandQuantization& QuantizationType, float Multiplier); // [0x62fece0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetCurrentTimestamp
	// FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject* WorldContextObject);                                        // [0x62fec48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetBeatsPerMinute
	// float GetBeatsPerMinute(class UObject* WorldContextObject);                                                              // [0x62feab8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetBeatProgressPercent
	// float GetBeatProgressPercent(EQuartzCommandQuantization QuantizationBoundary, float PhaseOffset, float MsOffset);        // [0x62fe9bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.QuartzSubsystem
/// Size: 0x0020 (0x000040 - 0x000060)
class UQuartzSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:


	/// Functions
	// Function /Script/AudioMixer.QuartzSubsystem.IsQuartzEnabled
	// bool IsQuartzEnabled();                                                                                                  // [0x3213b4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.IsClockRunning
	// bool IsClockRunning(class UObject* WorldContextObject, FName ClockName);                                                 // [0x62ff94c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
	// float GetRoundTripMinLatency(class UObject* WorldContextObject);                                                         // [0x62ff674] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
	// float GetRoundTripMaxLatency(class UObject* WorldContextObject);                                                         // [0x62ff5e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
	// float GetRoundTripAverageLatency(class UObject* WorldContextObject);                                                     // [0x62ff554] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetHandleForClock
	// class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, FName ClockName);                         // [0x62ff308] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
	// float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject);                                     // [0x62ff278] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
	// float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject);                                     // [0x62ff278] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
	// float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject);                                 // [0x62ff1e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
	// float GetEstimatedClockRunTime(class UObject* WorldContextObject, FName& InClockName);                                   // [0x62ff08c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
	// float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, FName ClockName, EQuartzCommandQuantization& QuantizationType, float Multiplier); // [0x62fee98] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
	// FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject* WorldContextObject, FName& InClockName);               // [0x62feb44] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
	// float GetAudioRenderThreadToGameThreadMinLatency();                                                                      // [0x62fe990] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
	// float GetAudioRenderThreadToGameThreadMaxLatency();                                                                      // [0x62fe968] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
	// float GetAudioRenderThreadToGameThreadAverageLatency();                                                                  // [0x62fe93c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DoesClockExist
	// bool DoesClockExist(class UObject* WorldContextObject, FName ClockName);                                                 // [0x62fe854] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByName
	// void DeleteClockByName(class UObject* WorldContextObject, FName ClockName);                                              // [0x62fe790] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByHandle
	// void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);                   // [0x62fe6c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.CreateNewClock
	// class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager); // [0x62fe178] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/AudioMixer.AudioOutputDeviceInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FAudioOutputDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DeviceID                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   NumChannels                                                 OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	CMember(EAudioMixerStreamDataFormatType)           Format                                                      OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TArray<EAudioMixerChannelType>)            OutputChannelArray                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bIsSystemDefault                                            OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bIsCurrentDevice                                            OFFSET(get<bool>, {0x40, 1, 1, 1})
};

/// Struct /Script/AudioMixer.SwapAudioOutputResult
/// Size: 0x0028 (0x000000 - 0x000028)
class FSwapAudioOutputResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   CurrentDeviceId                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RequestedDeviceId                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(ESwapAudioOutputDeviceResultState)         Result                                                      OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubmixEffectDynamicProcessorFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(float)                                     Cutoff                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainDb                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FSubmixEffectDynamicsProcessorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(ESubmixEffectDynamicsProcessorType)        DynamicsProcessorType                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubmixEffectDynamicsPeakMode)             PeakMode                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ESubmixEffectDynamicsChannelLinkMode)      LinkMode                                                    OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     KneeBandwidthDb                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LookAheadMsec                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AttackTimeMsec                                              OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ReleaseTimeMsec                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(ESubmixEffectDynamicsKeySource)            KeySource                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(class UAudioBus*)                          ExternalAudioBus                                            OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class USoundSubmix*)                       ExternalSubmix                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bChannelLinked                                              OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(bool)                                      bAnalogMode                                                 OFFSET(get<bool>, {0x38, 1, 1, 1})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x38, 1, 1, 2})
	DMember(bool)                                      bKeyAudition                                                OFFSET(get<bool>, {0x38, 1, 1, 3})
	DMember(float)                                     KeyGainDb                                                   OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FSubmixEffectDynamicProcessorFilterSettings) KeyHighshelf                                              OFFSET(getStruct<T>, {0x44, 12, 0, 0})
	SMember(FSubmixEffectDynamicProcessorFilterSettings) KeyLowshelf                                               OFFSET(getStruct<T>, {0x50, 12, 0, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubmixEffectEQBand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Bandwidth                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainDb                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xC, 1, 1, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectSubmixEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubmixEffectSubmixEQSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSubmixEffectEQBand>)               EqBands                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectReverbSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FSubmixEffectReverbSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bBypassEarlyReflections                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     ReflectionsDelay                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainHF                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ReflectionsGain                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bBypassLateReflections                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LateDelay                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Diffusion                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     AirAbsorptionGainHF                                         OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     DecayHFRatio                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     LateGain                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Enum /Script/AudioMixer.EAudioDeviceChangedRole
/// Size: 0x06
enum EAudioDeviceChangedRole : uint8_t
{
	EAudioDeviceChangedRole__Invalid                                                 = 0,
	EAudioDeviceChangedRole__Console                                                 = 1,
	EAudioDeviceChangedRole__Multimedia                                              = 2,
	EAudioDeviceChangedRole__Communications                                          = 3,
	EAudioDeviceChangedRole__Count                                                   = 4,
	EAudioDeviceChangedRole__EAudioDeviceChangedRole_MAX                             = 5
};

/// Enum /Script/AudioMixer.EAudioDeviceChangedState
/// Size: 0x07
enum EAudioDeviceChangedState : uint8_t
{
	EAudioDeviceChangedState__Invalid                                                = 0,
	EAudioDeviceChangedState__Active                                                 = 1,
	EAudioDeviceChangedState__Disabled                                               = 2,
	EAudioDeviceChangedState__NotPresent                                             = 3,
	EAudioDeviceChangedState__Unplugged                                              = 4,
	EAudioDeviceChangedState__Count                                                  = 5,
	EAudioDeviceChangedState__EAudioDeviceChangedState_MAX                           = 6
};

/// Enum /Script/AudioMixer.EAudioMixerChannelType
/// Size: 0x22
enum EAudioMixerChannelType : uint8_t
{
	EAudioMixerChannelType__FrontLeft                                                = 0,
	EAudioMixerChannelType__FrontRight                                               = 1,
	EAudioMixerChannelType__FrontCenter                                              = 2,
	EAudioMixerChannelType__LowFrequency                                             = 3,
	EAudioMixerChannelType__BackLeft                                                 = 4,
	EAudioMixerChannelType__BackRight                                                = 5,
	EAudioMixerChannelType__FrontLeftOfCenter                                        = 6,
	EAudioMixerChannelType__FrontRightOfCenter                                       = 7,
	EAudioMixerChannelType__BackCenter                                               = 8,
	EAudioMixerChannelType__SideLeft                                                 = 9,
	EAudioMixerChannelType__SideRight                                                = 10,
	EAudioMixerChannelType__TopCenter                                                = 11,
	EAudioMixerChannelType__TopFrontLeft                                             = 12,
	EAudioMixerChannelType__TopFrontCenter                                           = 13,
	EAudioMixerChannelType__TopFrontRight                                            = 14,
	EAudioMixerChannelType__TopBackLeft                                              = 15,
	EAudioMixerChannelType__TopBackCenter                                            = 16,
	EAudioMixerChannelType__TopBackRight                                             = 17,
	EAudioMixerChannelType__Unknown                                                  = 18,
	EAudioMixerChannelType__ChannelTypeCount                                         = 19,
	EAudioMixerChannelType__DefaultChannel                                           = 0,
	EAudioMixerChannelType__EAudioMixerChannelType_MAX                               = 20
};

/// Enum /Script/AudioMixer.EAudioMixerStreamDataFormatType
/// Size: 0x05
enum EAudioMixerStreamDataFormatType : uint8_t
{
	EAudioMixerStreamDataFormatType__Unknown                                         = 0,
	EAudioMixerStreamDataFormatType__Float                                           = 1,
	EAudioMixerStreamDataFormatType__Int16                                           = 2,
	EAudioMixerStreamDataFormatType__Unsupported                                     = 3,
	EAudioMixerStreamDataFormatType__EAudioMixerStreamDataFormatType_MAX             = 4
};

/// Enum /Script/AudioMixer.ESwapAudioOutputDeviceResultState
/// Size: 0x04
enum ESwapAudioOutputDeviceResultState : uint8_t
{
	ESwapAudioOutputDeviceResultState__Failure                                       = 0,
	ESwapAudioOutputDeviceResultState__Success                                       = 1,
	ESwapAudioOutputDeviceResultState__None                                          = 2,
	ESwapAudioOutputDeviceResultState__ESwapAudioOutputDeviceResultState_MAX         = 3
};

/// Enum /Script/AudioMixer.ERequiredSubmixes
/// Size: 0x06
enum ERequiredSubmixes : uint8_t
{
	ERequiredSubmixes__Main                                                          = 0,
	ERequiredSubmixes__BaseDefault                                                   = 1,
	ERequiredSubmixes__Reverb                                                        = 2,
	ERequiredSubmixes__EQ                                                            = 3,
	ERequiredSubmixes__Count                                                         = 4,
	ERequiredSubmixes__ERequiredSubmixes_MAX                                         = 5
};

/// Enum /Script/AudioMixer.ESourceManagerRenderThreadPhase
/// Size: 0x14
enum ESourceManagerRenderThreadPhase : uint8_t
{
	Begin                                                                            = 0,
	PumpMpscCmds                                                                     = 1,
	PumpCmds                                                                         = 2,
	ProcessModulators                                                                = 3,
	UpdatePendingReleaseData                                                         = 4,
	GenerateSrcAudio_WithBusses                                                      = 5,
	ComputeBusses                                                                    = 6,
	GenerateSrcAudio_WithoutBusses                                                   = 7,
	UpdateBusses                                                                     = 8,
	SpatialInterface_OnAllSourcesProcessed                                           = 9,
	SourceDataOverride_OnAllSourcesProcessed                                         = 10,
	UpdateGameThreadCopies                                                           = 11,
	Finished                                                                         = 12,
	ESourceManagerRenderThreadPhase_MAX                                              = 13
};

/// Enum /Script/AudioMixer.EMusicalNoteName
/// Size: 0x13
enum EMusicalNoteName : uint8_t
{
	EMusicalNoteName__C                                                              = 0,
	EMusicalNoteName__Db                                                             = 1,
	EMusicalNoteName__D                                                              = 2,
	EMusicalNoteName__Eb                                                             = 3,
	EMusicalNoteName__E                                                              = 4,
	EMusicalNoteName__F                                                              = 5,
	EMusicalNoteName__Gb                                                             = 6,
	EMusicalNoteName__G                                                              = 7,
	EMusicalNoteName__Ab                                                             = 8,
	EMusicalNoteName__A                                                              = 9,
	EMusicalNoteName__Bb                                                             = 10,
	EMusicalNoteName__B                                                              = 11,
	EMusicalNoteName__EMusicalNoteName_MAX                                           = 12
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x07
enum ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor                                   = 0,
	ESubmixEffectDynamicsProcessorType__Limiter                                      = 1,
	ESubmixEffectDynamicsProcessorType__Expander                                     = 2,
	ESubmixEffectDynamicsProcessorType__Gate                                         = 3,
	ESubmixEffectDynamicsProcessorType__UpwardsCompressor                            = 4,
	ESubmixEffectDynamicsProcessorType__Count                                        = 5,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX       = 6
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
/// Size: 0x05
enum ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESubmixEffectDynamicsPeakMode__Peak                                              = 2,
	ESubmixEffectDynamicsPeakMode__Count                                             = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
/// Size: 0x05
enum ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled                                   = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average                                    = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak                                       = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count                                      = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX   = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsKeySource
/// Size: 0x05
enum ESubmixEffectDynamicsKeySource : uint8_t
{
	ESubmixEffectDynamicsKeySource__Default                                          = 0,
	ESubmixEffectDynamicsKeySource__AudioBus                                         = 1,
	ESubmixEffectDynamicsKeySource__Submix                                           = 2,
	ESubmixEffectDynamicsKeySource__Count                                            = 3,
	ESubmixEffectDynamicsKeySource__ESubmixEffectDynamicsKeySource_MAX               = 4
};

