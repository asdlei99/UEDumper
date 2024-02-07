
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioGameplayBehavior.AudioGameplayBehavior
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UAudioGameplayBehavior : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bKillOnSoundsFinished                                       OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bTickWhileStopped                                           OFFSET(get<bool>, {0xA9, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAllSoundsFinished                                         OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSoundFinished                                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FActiveVoice>)                      PlayingSounds                                               OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(class UAudioComponentGroup*)               ComponentGroupOwner                                         OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SubscribeToStringParam
	// void SubscribeToStringParam(FName ParamName, FDelegateProperty Delegate);                                                // [0xb917fcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SubscribeToEvent
	// void SubscribeToEvent(FName EventName, FDelegateProperty Delegate);                                                      // [0xb917e78] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SubscribeToBoolParam
	// void SubscribeToBoolParam(FName ParamName, FDelegateProperty Delegate);                                                  // [0xb917d24] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopSound
	// void StopSound(class USoundBase* sound, float InFadeOutTime, EAudioFaderCurve InFadeCurve);                              // [0xb917b68] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopComponent
	// void StopComponent(class UAudioComponent* Comp, float InFadeOutTime, EAudioFaderCurve InFadeCurve);                      // [0xb917994] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopById
	// void StopById(FPlayingId ID, float InFadeOutTime, EAudioFaderCurve InFadeCurve);                                         // [0xb9177b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopAllPlayingVoices
	// void StopAllPlayingVoices(float InFadeOutTime);                                                                          // [0xb9176ec] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.Stop
	// void Stop();                                                                                                             // [0x1fda954] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.Start
	// void Start();                                                                                                            // [0x6d0e0b0] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SetPlayState
	// void SetPlayState(EAudioGameplayBehaviorPlayState NewState);                                                             // [0x6f7afb8] Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.PlaySound
	// FActiveVoice PlaySound(class USoundBase* sound, float InFadeInTime, float InTargetVolume, float InStartTime, bool bDisableAttenuation, EAudioFaderCurve InFadeCurve, FVector InRelativeLocation, FRotator InRelativeRotation); // [0xb917060] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.PlayFrom
	// void PlayFrom(class UAudioComponentGroup* SoundGroup);                                                                   // [0x7fac19c] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.Kill
	// void Kill();                                                                                                             // [0x1c0d610] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.IsVirtualized
	// bool IsVirtualized();                                                                                                    // [0x1ab2b0c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.IsPlayingAny
	// bool IsPlayingAny();                                                                                                     // [0x1f54790] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetStringParamValue
	// FString GetStringParamValue(FName ParamName);                                                                            // [0xb91696c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetStopState
	// EAudioGameplayBehaviorPlayState GetStopState();                                                                          // [0x6d0da80] Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetSoundGroup
	// class UAudioComponentGroup* GetSoundGroup();                                                                             // [0x6ee7c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetPlayState
	// EAudioGameplayBehaviorPlayState GetPlayState();                                                                          // [0xa0e4620] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetFloatParamValue
	// float GetFloatParamValue(FName ParamName);                                                                               // [0xb916894] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetBoolParamValue
	// bool GetBoolParamValue(FName ParamName);                                                                                 // [0xb9167b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.EnableVirtualization
	// void EnableVirtualization();                                                                                             // [0xb9167a4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.DisableVirtualization
	// void DisableVirtualization();                                                                                            // [0xb916790] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnVirtualized
	// void BP_OnVirtualized();                                                                                                 // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnUnvirtualized
	// void BP_OnUnvirtualized();                                                                                               // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnStop
	// void BP_OnStop();                                                                                                        // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnStart
	// void BP_OnStart();                                                                                                       // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnGroupSet
	// void BP_OnGroupSet(class UAudioComponentGroup* SoundGroup);                                                              // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnFinished
	// void BP_OnFinished();                                                                                                    // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Struct /Script/AudioGameplayBehavior.ActiveVoice
/// Size: 0x0018 (0x000000 - 0x000018)
class FActiveVoice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundBase*)                         sound                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UAudioComponent*)                    Component                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FPlayingId)                                ID                                                          OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/AudioGameplayBehavior.PlayingId
/// Size: 0x0004 (0x000000 - 0x000004)
class FPlayingId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AudioGameplayBehavior.AudioGameplayBehaviorInstance
/// Size: 0x0010 (0x000000 - 0x000010)
class FAudioGameplayBehaviorInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             sound                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UAudioGameplayBehavior*)             Instance                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Enum /Script/AudioGameplayBehavior.EAudioGameplayBehaviorPlayState
/// Size: 0x04
enum EAudioGameplayBehaviorPlayState : uint8_t
{
	EAudioGameplayBehaviorPlayState__Stopped                                         = 0,
	EAudioGameplayBehaviorPlayState__Playing                                         = 1,
	EAudioGameplayBehaviorPlayState__TickingWhileStopped                             = 2,
	EAudioGameplayBehaviorPlayState__EAudioGameplayBehaviorPlayState_MAX             = 3
};

