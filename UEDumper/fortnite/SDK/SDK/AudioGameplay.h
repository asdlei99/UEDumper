
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/AudioGameplay.AudioComponentGroupExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioComponentGroupExtension : public UInterface
{ 
public:
};

/// Class /Script/AudioGameplay.AudioGameplayCondition
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioGameplayCondition : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AudioGameplay.AudioGameplayCondition.ConditionMet_Position
	// bool ConditionMet_Position(FVector& Position);                                                                        // [0x138ada4] RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioGameplayCondition.ConditionMet
	// bool ConditionMet();                                                                                                  // [0x188e5cc] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/AudioGameplay.AudioGameplayVolumeInteraction
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioGameplayVolumeInteraction : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AudioGameplay.AudioGameplayVolumeInteraction.OnListenerExit
	// void OnListenerExit();                                                                                                // [0x3064200] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AudioGameplay.AudioGameplayVolumeInteraction.OnListenerEnter
	// void OnListenerEnter();                                                                                               // [0x2c35200] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/AudioGameplay.SoundHandleSubsystem
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class USoundHandleSubsystem : public UAudioEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0030   (0x00B0)  MISSED
};

/// Class /Script/AudioGameplay.AudioComponentGroup
/// Size: 0x01B0 (0x000220 - 0x0003D0)
#pragma pack(push, 0x1)
class alignas(0x10) 
UAudioComponentGroup : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0220   (0x0008)  MISSED
	SDK_UNDEFINED(16,1210) /* FMulticastInlineDelegate */ __um(OnStopped);                                         // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,1211) /* FMulticastInlineDelegate */ __um(OnKilled);                                          // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,1212) /* FMulticastInlineDelegate */ __um(OnVirtualized);                                     // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,1213) /* FMulticastInlineDelegate */ __um(OnUnvirtualized);                                   // 0x0258   (0x0010)  
	TArray<class UAudioComponent*>                     Components;                                                 // 0x0268   (0x0010)  
	TArray<FAudioParameter>                            ParamsToSet;                                                // 0x0278   (0x0010)  
	TArray<FAudioParameter>                            PersistentParams;                                           // 0x0288   (0x0010)  
	SDK_UNDEFINED(16,1214) /* TArray<TScriptInterface<Class>> */ __um(Extensions);                                 // 0x0298   (0x0010)  
	unsigned char                                      UnknownData01_6[0x120];                                     // 0x02A8   (0x0120)  MISSED


	/// Functions
	// Function /Script/AudioGameplay.AudioComponentGroup.UnsubscribeObject
	// void UnsubscribeObject(class UObject* Object);                                                                        // [0x6e0f218] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SubscribeToStringParam
	// void SubscribeToStringParam(FName ParamName, FDelegateProperty Delegate);                                             // [0x6e0f0c4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SubscribeToEvent
	// void SubscribeToEvent(FName EventName, FDelegateProperty Delegate);                                                   // [0x6e0ef70] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SubscribeToBool
	// void SubscribeToBool(FName ParamName, FDelegateProperty Delegate);                                                    // [0x6e0ee1c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.StopSound
	// void StopSound(class USoundBase* sound, float FadeTime);                                                              // [0x6e0ecdc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.StaticGetOrCreateComponentGroup
	// class UAudioComponentGroup* StaticGetOrCreateComponentGroup(class AActor* Actor);                                     // [0x6e0ec1c] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SetVolumeMultiplier
	// void SetVolumeMultiplier(float InVolume);                                                                             // [0x6e0eb58] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SetPitchMultiplier
	// void SetPitchMultiplier(float InPitch);                                                                               // [0x6e0ea94] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.SetLowPassFilter
	// void SetLowPassFilter(float InFrequency);                                                                             // [0x6e0e9d0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.RemoveExternalComponent
	// void RemoveExternalComponent(class UAudioComponent* ComponentToRemove);                                               // [0x6e0e880] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.RemoveExtension
	// void RemoveExtension(TScriptInterface<Class> NewExtension);                                                           // [0x6e0e79c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.IsVirtualized
	// bool IsVirtualized();                                                                                                 // [0x6e0e784] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.IsPlayingAny
	// bool IsPlayingAny();                                                                                                  // [0x6e0e768] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.GetStringParamValue
	// FString GetStringParamValue(FName ParamName);                                                                         // [0x6e0e684] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.GetFloatParamValue
	// float GetFloatParamValue(FName ParamName);                                                                            // [0x6e0e5b4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.GetBoolParamValue
	// bool GetBoolParamValue(FName ParamName);                                                                              // [0x6e0e4e8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplay.AudioComponentGroup.EnableVirtualization
	// void EnableVirtualization();                                                                                          // [0x6e0e4d4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.DisableVirtualization
	// void DisableVirtualization();                                                                                         // [0x6e0e4c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.BroadcastStopAll
	// void BroadcastStopAll();                                                                                              // [0x6e0e4a4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.BroadcastKill
	// void BroadcastKill();                                                                                                 // [0x6e0e488] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.BroadcastEvent
	// void BroadcastEvent(FName EventName);                                                                                 // [0x6e0e3c8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.AddExternalComponent
	// void AddExternalComponent(class UAudioComponent* ComponentToAdd);                                                     // [0x6e0df30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplay.AudioComponentGroup.AddExtension
	// void AddExtension(TScriptInterface<Class> NewExtension);                                                              // [0x6e0de5c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};
#pragma pack(pop)

/// Class /Script/AudioGameplay.AudioGameplayComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UAudioGameplayComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/AudioGameplay.AudioRequirementPreset
/// Size: 0x0048 (0x000030 - 0x000078)
class UAudioRequirementPreset : public UDataAsset
{ 
public:
	FGameplayTagQuery                                  Query;                                                      // 0x0030   (0x0048)  
};

/// Class /Script/AudioGameplay.AudioParameterComponent
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UAudioParameterComponent : public UAudioGameplayComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A8   (0x0010)  MISSED
	SDK_UNDEFINED(16,1215) /* TArray<TWeakObjectPtr<UAudioComponent*>> */ __um(ActiveComponents);                  // 0x00B8   (0x0010)  
	TArray<FAudioParameter>                            Parameters;                                                 // 0x00C8   (0x0010)  


	/// Functions
	// Function /Script/AudioGameplay.AudioParameterComponent.GetParameters
	// TArray<FAudioParameter> GetParameters();                                                                              // [0x2e2b894] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AudioGameplay.AudioGameplayRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAudioGameplayRequirements
{ 
	class UAudioRequirementPreset*                     Preset;                                                     // 0x0000   (0x0008)  
	FGameplayTagQuery                                  Custom;                                                     // 0x0008   (0x0048)  
};

