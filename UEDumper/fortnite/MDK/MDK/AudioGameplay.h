
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/AudioGameplay.AudioComponentGroupExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioComponentGroupExtension : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioGameplay.AudioGameplayCondition
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioGameplayCondition : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioGameplay.AudioGameplayCondition.ConditionMet_Position
	// bool ConditionMet_Position(FVector& Position);                                                                           // [0x103cf18] RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioGameplayCondition.ConditionMet
	// bool ConditionMet();                                                                                                     // [0x1377b44] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/AudioGameplay.AudioGameplayVolumeInteraction
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioGameplayVolumeInteraction : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioGameplay.AudioGameplayVolumeInteraction.OnListenerExit
	// void OnListenerExit();                                                                                                   // [0x313fdf0] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AudioGameplay.AudioGameplayVolumeInteraction.OnListenerEnter
	// void OnListenerEnter();                                                                                                  // [0x2c0e95c] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/AudioGameplay.SoundHandleSubsystem
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class USoundHandleSubsystem : public UAudioEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/AudioGameplay.AudioComponentGroup
/// Size: 0x01B0 (0x000220 - 0x0003D0)
class UAudioComponentGroup : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FMulticastInlineDelegate)                  OnStopped                                                   OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKilled                                                    OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVirtualized                                               OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnvirtualized                                             OFFSET(getStruct<T>, {0x258, 16, 0, 0})
	CMember(TArray<class UAudioComponent*>)            Components                                                  OFFSET(get<T>, {0x268, 16, 0, 0})
	CMember(TArray<FAudioParameter>)                   ParamsToSet                                                 OFFSET(get<T>, {0x278, 16, 0, 0})
	CMember(TArray<FAudioParameter>)                   PersistentParams                                            OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           Extensions                                                  OFFSET(get<T>, {0x298, 16, 0, 0})


	/// Functions
	// Function /Script/AudioGameplay.AudioComponentGroup.UnsubscribeObject
	// void UnsubscribeObject(class UObject* Object);                                                                           // [0x6e815b8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SubscribeToStringParam
	// void SubscribeToStringParam(FName ParamName, FDelegateProperty Delegate);                                                // [0x6e814e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SubscribeToEvent
	// void SubscribeToEvent(FName EventName, FDelegateProperty Delegate);                                                      // [0x6e81408] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SubscribeToBool
	// void SubscribeToBool(FName ParamName, FDelegateProperty Delegate);                                                       // [0x6e81330] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.StopSound
	// void StopSound(class USoundBase* sound, float FadeTime);                                                                 // [0x6e8126c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.StaticGetOrCreateComponentGroup
	// class UAudioComponentGroup* StaticGetOrCreateComponentGroup(class AActor* Actor);                                        // [0x6e811ec] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SetVolumeMultiplier
	// void SetVolumeMultiplier(float InVolume);                                                                                // [0x6e8116c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SetPitchMultiplier
	// void SetPitchMultiplier(float InPitch);                                                                                  // [0x6e810ec] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SetLowPassFilter
	// void SetLowPassFilter(float InFrequency);                                                                                // [0x6e8106c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.RemoveExternalComponent
	// void RemoveExternalComponent(class UAudioComponent* ComponentToRemove);                                                  // [0x6e80f5c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.RemoveExtension
	// void RemoveExtension(TScriptInterface<Class> NewExtension);                                                              // [0x6e80dfc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.IsVirtualized
	// bool IsVirtualized();                                                                                                    // [0x6e80de4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.IsPlayingAny
	// bool IsPlayingAny();                                                                                                     // [0x6e80dc8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.GetStringParamValue
	// FString GetStringParamValue(FName ParamName);                                                                            // [0x6e80d24] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.GetFloatParamValue
	// float GetFloatParamValue(FName ParamName);                                                                               // [0x6e80c94] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.GetBoolParamValue
	// bool GetBoolParamValue(FName ParamName);                                                                                 // [0x6e80c08] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.EnableVirtualization
	// void EnableVirtualization();                                                                                             // [0x6e80bf4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.DisableVirtualization
	// void DisableVirtualization();                                                                                            // [0x6e80be0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.BroadcastStopAll
	// void BroadcastStopAll();                                                                                                 // [0x6e80bc4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.BroadcastKill
	// void BroadcastKill();                                                                                                    // [0x6e80ba8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.BroadcastEvent
	// void BroadcastEvent(FName EventName);                                                                                    // [0x6e80b28] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.AddExternalComponent
	// void AddExternalComponent(class UAudioComponent* ComponentToAdd);                                                        // [0x6e80960] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.AddExtension
	// void AddExtension(TScriptInterface<Class> NewExtension);                                                                 // [0x6e8080c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioGameplay.AudioGameplayComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UAudioGameplayComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/AudioGameplay.AudioRequirementPreset
/// Size: 0x0048 (0x000030 - 0x000078)
class UAudioRequirementPreset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagQuery)                         Query                                                       OFFSET(getStruct<T>, {0x30, 72, 0, 0})
};

/// Class /Script/AudioGameplay.AudioParameterComponent
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UAudioParameterComponent : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<TWeakObjectPtr<UAudioComponent*>>)  ActiveComponents                                            OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FAudioParameter>)                   Parameters                                                  OFFSET(get<T>, {0xC8, 16, 0, 0})


	/// Functions
	// Function /Script/AudioGameplay.AudioParameterComponent.GetParameters
	// TArray<FAudioParameter> GetParameters();                                                                                 // [0x2e56884] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AudioGameplay.AudioGameplayRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
class FAudioGameplayRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UAudioRequirementPreset*)            Preset                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagQuery)                         Custom                                                      OFFSET(getStruct<T>, {0x8, 72, 0, 0})
};

