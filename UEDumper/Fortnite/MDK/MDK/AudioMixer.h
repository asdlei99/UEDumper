
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
	// void UnregisterAudioBusFromSubmix(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus); // [0x62a61fc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	// float TrimAudioCache(float InMegabytesToFree);                                                                           // [0x62a6178] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
	// void SwapAudioOutputDevice(class UObject* WorldContextObject, FString NewDeviceId, FDelegateProperty& OnCompletedDeviceSwap); // [0x62a5a40] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	// class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite); // [0x62a5268] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
	// void StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                         // [0x62a5154] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	// void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);                  // [0x62a5068] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	// void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord); // [0x62a4f70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
	// void StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                        // [0x62a4e50] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	// void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType); // [0x62a4c48] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
	// void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // [0x62a44b8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // [0x62a42d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	// void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                        // [0x62a421c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
	// void ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62a4050] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	// void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62a4050] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	// void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // [0x62a3f58] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	// void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62a3e60] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
	// void RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // [0x62a3f58] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
	// void RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62a3e60] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // [0x62a3c8c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);    // [0x62a3b78] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RegisterAudioBusToSubmix
	// void RegisterAudioBusToSubmix(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus); // [0x62a3a80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	// void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty OnLoadCompletion);                             // [0x62a38f8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	// void PrimeSoundCueForPlayback(class USoundCue* SoundCue);                                                                // [0x62a388c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	// void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                         // [0x62a37d8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x62a3678] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x62a34d4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x62a3330] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
	// bool IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                     // [0x62a321c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	// void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze); // [0x62a2f84] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// int32_t GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain); // [0x62a2e68] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	// void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze); // [0x62a2bd0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
	// void GetCurrentAudioOutputDeviceName(class UObject* WorldContextObject, FDelegateProperty& OnObtainCurrentDeviceEvent);  // [0x62a2af8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
	// void GetAvailableAudioOutputDevices(class UObject* WorldContextObject, FDelegateProperty& OnObtainDevicesEvent);         // [0x62a2a20] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
	// FString Conv_AudioOutputDeviceInfoToString(FAudioOutputDeviceInfo& Info);                                                // [0x62a2968] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	// void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);                             // [0x62a28a8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
	// void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec); // [0x62a27b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// void ClearMasterSubmixEffects(class UObject* WorldContextObject);                                                        // [0x62a2714] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	// int32_t AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x62a2580] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry); // [0x62a230c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);       // [0x62a215c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
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
	// void Stop();                                                                                                             // [0x1555780] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.Start
	// void Start();                                                                                                            // [0xf7d540] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier
	// void SetVolumeMultiplier(float VolumeMultiplier);                                                                        // [0x1da293c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend
	// void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);                                                     // [0x62b6e34] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSourceBusSendPreEffect
	// void SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);                         // [0x62b6d6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSourceBusSendPostEffect
	// void SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);                        // [0x62b6ca4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetOutputToBusOnly
	// void SetOutputToBusOnly(bool bInOutputToBusOnly);                                                                        // [0x62b5f78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetModulationRouting
	// void SetModulationRouting(TSet<USoundModulatorBase*>& Modulators, EModulationDestination Destination, EModulationRouting RoutingMethod); // [0x62b5cb0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterFrequency
	// void SetLowPassFilterFrequency(float InLowPassFilterFrequency);                                                          // [0x62b59ac] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterEnabled
	// void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);                                                               // [0x62b5928] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetAudioBusSendPreEffect
	// void SetAudioBusSendPreEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);                                       // [0x62b5508] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetAudioBusSendPostEffect
	// void SetAudioBusSendPostEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);                                      // [0x62b5440] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x1da3df4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.SynthComponent.GetModulators
	// TSet<USoundModulatorBase*> GetModulators(EModulationDestination Destination);                                            // [0x62b45b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.SynthComponent.FadeOut
	// void FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve);                                  // [0x2391cd4] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AudioMixer.SynthComponent.FadeIn
	// void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve);                   // [0x33abe70] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AudioMixer.SynthComponent.AdjustVolume
	// void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve);                      // [0x62b31dc] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
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
	// void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings);                                                      // [0x62b6278] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	// void SetExternalSubmix(class USoundSubmix* Submix);                                                                      // [0x62b5850] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
	// void SetAudioBus(class UAudioBus* AudioBus);                                                                             // [0x62b5360] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
	// void ResetKey();                                                                                                         // [0x62b4f48] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	// void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);                                                             // [0x62b6450] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
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
	// void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                   // [0x62b6b10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectReverbSettings& InSettings);                                                               // [0x62b6370] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
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
	// void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle*& ClockHandle); // [0x62b7b80] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
	// void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);         // [0x62b7ab4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
	// void SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // [0x62b7940] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
	// void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, FDelegateProperty& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // [0x62b7814] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StopClock
	// void StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle*& ClockHandle);     // [0x62b7704] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StartOtherClock
	// void StartOtherClock(class UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate); // [0x62b74c8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StartClock
	// void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                              // [0x62b73f8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetTicksPerSecond
	// void SetTicksPerSecond(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float TicksPerSecond); // [0x62b7178] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
	// void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute); // [0x62b6ef8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetSecondsPerTick
	// void SetSecondsPerTick(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float SecondsPerTick); // [0x62b5ff8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
	// void SetMillisecondsPerTick(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick); // [0x62b5a30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetBeatsPerMinute
	// void SetBeatsPerMinute(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float BeatsPerMinute); // [0x62b55d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResumeClock
	// void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                             // [0x62b5294] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransportQuantized
	// void ResetTransportQuantized(class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, class UQuartzClockHandle*& ClockHandle); // [0x62b5040] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransport
	// void ResetTransport(class UObject* WorldContextObject, FDelegateProperty& InDelegate);                                   // [0x62b4f5c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.PauseClock
	// void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                              // [0x62b4e7c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.NotifyOnQuantizationBoundary
	// void NotifyOnQuantizationBoundary(class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, float InMsOffset); // [0x62b4b94] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.IsClockRunning
	// bool IsClockRunning(class UObject* WorldContextObject);                                                                  // [0x62b4a20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetTicksPerSecond
	// float GetTicksPerSecond(class UObject* WorldContextObject);                                                              // [0x62b4994] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
	// float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject);                                                  // [0x62b4908] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetSecondsPerTick
	// float GetSecondsPerTick(class UObject* WorldContextObject);                                                              // [0x62b487c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
	// float GetMillisecondsPerTick(class UObject* WorldContextObject);                                                         // [0x62b452c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetEstimatedRunTime
	// float GetEstimatedRunTime(class UObject* WorldContextObject);                                                            // [0x62b42b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
	// float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, EQuartzCommandQuantization& QuantizationType, float Multiplier); // [0x62b3e40] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetCurrentTimestamp
	// FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject* WorldContextObject);                                        // [0x62b3da8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetBeatsPerMinute
	// float GetBeatsPerMinute(class UObject* WorldContextObject);                                                              // [0x62b3c18] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetBeatProgressPercent
	// float GetBeatProgressPercent(EQuartzCommandQuantization QuantizationBoundary, float PhaseOffset, float MsOffset);        // [0x62b3b1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	// bool IsQuartzEnabled();                                                                                                  // [0x321ca58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.IsClockRunning
	// bool IsClockRunning(class UObject* WorldContextObject, FName ClockName);                                                 // [0x62b4aac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
	// float GetRoundTripMinLatency(class UObject* WorldContextObject);                                                         // [0x62b47d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
	// float GetRoundTripMaxLatency(class UObject* WorldContextObject);                                                         // [0x62b4744] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
	// float GetRoundTripAverageLatency(class UObject* WorldContextObject);                                                     // [0x62b46b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetHandleForClock
	// class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, FName ClockName);                         // [0x62b4468] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
	// float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject);                                     // [0x62b43d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
	// float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject);                                     // [0x62b43d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
	// float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject);                                 // [0x62b4348] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
	// float GetEstimatedClockRunTime(class UObject* WorldContextObject, FName& InClockName);                                   // [0x62b41ec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
	// float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, FName ClockName, EQuartzCommandQuantization& QuantizationType, float Multiplier); // [0x62b3ff8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
	// FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject* WorldContextObject, FName& InClockName);               // [0x62b3ca4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
	// float GetAudioRenderThreadToGameThreadMinLatency();                                                                      // [0x62b3af0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
	// float GetAudioRenderThreadToGameThreadMaxLatency();                                                                      // [0x62b3ac8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
	// float GetAudioRenderThreadToGameThreadAverageLatency();                                                                  // [0x62b3a9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DoesClockExist
	// bool DoesClockExist(class UObject* WorldContextObject, FName ClockName);                                                 // [0x62b39b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByName
	// void DeleteClockByName(class UObject* WorldContextObject, FName ClockName);                                              // [0x62b38f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByHandle
	// void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);                   // [0x62b3820] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.CreateNewClock
	// class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager); // [0x62b32d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
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

