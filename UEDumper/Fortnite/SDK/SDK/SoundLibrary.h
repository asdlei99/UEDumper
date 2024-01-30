
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: GameplayTags

/// Enum /Script/SoundLibrary.ESoundLibraryNotifyTriggerType
/// Size: 0x04
enum class ESoundLibraryNotifyTriggerType : uint8_t
{
	ESoundLibraryNotifyTriggerType__Play                                             = 0,
	ESoundLibraryNotifyTriggerType__Stop                                             = 1,
	ESoundLibraryNotifyTriggerType__None                                             = 2,
	ESoundLibraryNotifyTriggerType__ESoundLibraryNotifyTriggerType_MAX               = 3
};

/// Enum /Script/SoundLibrary.ESoundLibrarySelectionBehavior
/// Size: 0x05
enum class ESoundLibrarySelectionBehavior : uint8_t
{
	ESoundLibrarySelectionBehavior__SelectAll                                        = 0,
	ESoundLibrarySelectionBehavior__Random                                           = 1,
	ESoundLibrarySelectionBehavior__Shuffle                                          = 2,
	ESoundLibrarySelectionBehavior__Max_None                                         = 3,
	ESoundLibrarySelectionBehavior__ESoundLibrarySelectionBehavior_MAX               = 4
};

/// Class /Script/SoundLibrary.SoundLibraryContext
/// Size: 0x0030 (0x000028 - 0x000058)
class USoundLibraryContext : public UObject
{ 
public:
	SDK_UNDEFINED(8,2697) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                               // 0x0028   (0x0008)  
	FGameplayTag                                       BaseEventName;                                              // 0x0030   (0x0004)  
	bool                                               bForwardToActorOwner;                                       // 0x0034   (0x0001)  
	bool                                               bForwardToAttachedActors;                                   // 0x0035   (0x0001)  
	bool                                               bAutoResetContext;                                          // 0x0036   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0037   (0x0001)  MISSED
	FGameplayTagContainer                              PlaybackTags;                                               // 0x0038   (0x0020)  


	/// Functions
	// Function /Script/SoundLibrary.SoundLibraryContext.Play
	// bool Play(FSoundLibraryContextEventInput& InEventData, TArray<UAudioComponent*>& OutComponents);                      // [0x15b2e28] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryContext.OnRemovedFromActor
	// void OnRemovedFromActor(class AActor* InActor);                                                                       // [0x70571a4] Native|Event|Public|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryContext.OnAddedToActor
	// void OnAddedToActor(class AActor* InActor);                                                                           // [0x7057120] Native|Event|Public|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryContext.GatherActorTargets
	// bool GatherActorTargets(TArray<AActor*>& OutActors);                                                                  // [0x15c9714] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/SoundLibrary.SoundLibraryContext.CreateEventName
	// bool CreateEventName(FGameplayTag& OutEventName);                                                                     // [0x15c980c] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/SoundLibrary.SoundLibraryAnimContextSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FSoundLibraryAnimContextSettings
{ 
	FFloatInterval                                     AnimRateThreshold;                                          // 0x0000   (0x0008)  
	FGameplayTag                                       EventName;                                                  // 0x0008   (0x0004)  
	bool                                               bAttachToActor;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FName                                              AttachName;                                                 // 0x0010   (0x0004)  
	bool                                               bFadeOutOnEnd;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              FadeTime;                                                   // 0x0018   (0x0004)  
	float                                              NotifyTriggerChance;                                        // 0x001C   (0x0004)  
	float                                              VolumeMultiplier;                                           // 0x0020   (0x0004)  
};

/// Class /Script/SoundLibrary.SoundLibraryAnimContext
/// Size: 0x0040 (0x000058 - 0x000098)
class USoundLibraryAnimContext : public USoundLibraryContext
{ 
public:
	FSoundLibraryAnimContextSettings                   AnimSettings;                                               // 0x0058   (0x0024)  
	SDK_UNDEFINED(8,2698) /* TWeakObjectPtr<UAnimSequenceBase*> */ __um(Animation);                                // 0x007C   (0x0008)  
	SDK_UNDEFINED(8,2699) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(MeshComponent);                       // 0x0084   (0x0008)  
	bool                                               bSupportsNotifyEnd;                                         // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	float                                              AnimRate;                                                   // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED


	/// Functions
	// Function /Script/SoundLibrary.SoundLibraryAnimContext.ConfigureContext
	// void ConfigureContext(class AActor* OwningActor, class UAnimSequenceBase* InAnimation, FSoundLibraryAnimContextSettings& InSettings); // [0x70569d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SoundLibrary.SoundLibraryAnimNotifyHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class USoundLibraryAnimNotifyHelper : public UObject
{ 
public:
	SDK_UNDEFINED(16,2700) /* TArray<TWeakObjectPtr<UAudioComponent*>> */ __um(PlayingComps);                      // 0x0028   (0x0010)  
};

/// Class /Script/SoundLibrary.AnimNotify_SoundLibrary
/// Size: 0x0010 (0x000038 - 0x000048)
class UAnimNotify_SoundLibrary : public UAnimNotify
{ 
public:
	class USoundLibraryContext*                        SoundContext;                                               // 0x0038   (0x0008)  
	class USoundLibraryAnimNotifyHelper*               NotifyHelper;                                               // 0x0040   (0x0008)  
};

/// Class /Script/SoundLibrary.AnimNotifyState_SoundLibrary
/// Size: 0x0010 (0x000030 - 0x000040)
class UAnimNotifyState_SoundLibrary : public UAnimNotifyState
{ 
public:
	class USoundLibraryContext*                        SoundContext;                                               // 0x0030   (0x0008)  
	class USoundLibraryAnimNotifyHelper*               NotifyHelper;                                               // 0x0038   (0x0008)  
};

/// Class /Script/SoundLibrary.GameFeatureAction_AddSoundLibraryCollection
/// Size: 0x0030 (0x000028 - 0x000058)
class UGameFeatureAction_AddSoundLibraryCollection : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(16,2701) /* TArray<TWeakObjectPtr<USoundLibraryCollection*>> */ __um(CollectionList);            // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2702) /* TArray<TWeakObjectPtr<USoundLibrarySubsystem*>> */ __um(TrackedSubsystems);          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/SoundLibrary.SoundLibrary
/// Size: 0x0198 (0x000028 - 0x0001C0)
class USoundLibrary : public UObject
{ 
public:
	SDK_UNDEFINED(80,2703) /* TMap<FGameplayTag, TWeakObjectPtr<USoundBase*>> */ __um(Sounds);                     // 0x0028   (0x0050)  
	FAudioGameplayRequirements                         LibraryRequirements;                                        // 0x0078   (0x0050)  
	FGameplayTag                                       Channel;                                                    // 0x00C8   (0x0004)  
	int32_t                                            Priority;                                                   // 0x00CC   (0x0004)  
	FGameplayTagContainer                              MetaData;                                                   // 0x00D0   (0x0020)  
	SDK_UNDEFINED(80,2704) /* TMap<FGameplayTag, TWeakObjectPtr<USoundBase*>> */ __um(FullLibrary);                // 0x00F0   (0x0050)  
	SDK_UNDEFINED(80,2705) /* TMap<FGameplayTag, USoundBase*> */ __um(RuntimeSounds);                              // 0x0140   (0x0050)  
	TArray<class USoundBase*>                          LoadedSoundObjects;                                         // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,2706) /* TArray<TWeakObjectPtr<USoundBase*>> */ __um(Assets);                                 // 0x01A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/SoundLibrary.SoundLibrary.SetPriority
	// void SetPriority(int32_t InPriority);                                                                                 // [0x7057ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrary.SetChannel
	// void SetChannel(FGameplayTag InTag);                                                                                  // [0x7057984] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrary.FindSound
	// class USoundBase* FindSound(FGameplayTag InTag);                                                                      // [0x7056d64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SoundLibrary.SoundLibrary.AddSound
	// void AddSound(FGameplayTag InTag, class USoundBase* InSound);                                                         // [0x70567c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SoundLibrary.SoundLibraryComponent
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class USoundLibraryComponent : public UAudioGameplayComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FGameplayTag                                       ComponentTag;                                               // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	class UClass*                                      ContextClass;                                               // 0x00B8   (0x0008)  
	TArray<class USoundLibrary*>                       Libraries;                                                  // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,2707) /* FMulticastInlineDelegate */ __um(OnSoundLibraryPlayEvent);                           // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,2708) /* FMulticastInlineDelegate */ __um(OnEventPlayedDelegate);                             // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,2709) /* FMulticastInlineDelegate */ __um(OnEventStoppedDelegate);                            // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x0100   (0x0050)  MISSED
	class USoundLibraryContext*                        Context;                                                    // 0x0150   (0x0008)  


	/// Functions
	// Function /Script/SoundLibrary.SoundLibraryComponent.StopEvent
	// bool StopEvent(FGameplayTag InEventName);                                                                             // [0x1853908] Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.RemoveLibrary
	// void RemoveLibrary(class USoundLibrary* InLibrary);                                                                   // [0x70578cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.RemoveLibraries
	// void RemoveLibraries(TArray<USoundLibrary*>& InLibraries);                                                            // [0x705782c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.PlayEvent
	// FSoundLibraryPlayResult PlayEvent(FGameplayTag InEventName);                                                          // [0x3143100] Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.OnSoundStopped
	// void OnSoundStopped(FGameplayTag InEventName, class UAudioComponent* InComponent, bool& bStopped);                    // [0x7057438] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryComponent.OnSoundPlayed
	// void OnSoundPlayed(FGameplayTag InEventName, class UAudioComponent* InComponent);                                     // [0x7057228] Native|Event|Public|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryComponent.OnEventStopped
	// void OnEventStopped(FGameplayTag InEventName);                                                                        // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryComponent.OnEventPlayed
	// void OnEventPlayed(FGameplayTag InEventName);                                                                         // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryComponent.IsEventActive
	// bool IsEventActive(FGameplayTag InEventName);                                                                         // [0x3475f5c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SoundLibrary.SoundLibraryComponent.GetContext
	// class USoundLibraryContext* GetContext();                                                                             // [0x7056ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SoundLibrary.SoundLibraryComponent.AddLibrary
	// void AddLibrary(class USoundLibrary* InLibrary);                                                                      // [0x705670c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.AddLibraries
	// void AddLibraries(TArray<USoundLibrary*>& InLibraries);                                                               // [0x705666c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SoundLibrary.SoundLibraryProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundLibraryProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/SoundLibrary.SoundLibraryCollection
/// Size: 0x0050 (0x000030 - 0x000080)
class USoundLibraryCollection : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,2710) /* TMap<FGameplayTag, FSoundLibrarySet> */ __um(Libraries);                             // 0x0030   (0x0050)  
};

/// Class /Script/SoundLibrary.SoundLibrarySettings
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundLibrarySettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(32,2711) /* TWeakObjectPtr<USoundLibraryCollection*> */ __um(CommonLibraries);                   // 0x0030   (0x0020)  
};

/// Struct /Script/SoundLibrary.SoundLibrarySimpleContextSettings
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSoundLibrarySimpleContextSettings
{ 
	FGameplayTag                                       EventName;                                                  // 0x0000   (0x0004)  
	bool                                               bAttachedSound;                                             // 0x0004   (0x0001)  
	bool                                               bStopWhenAttachedDestroyed;                                 // 0x0005   (0x0001)  
	bool                                               bAutoDestroy;                                               // 0x0006   (0x0001)  
	bool                                               bForceComponentCreation;                                    // 0x0007   (0x0001)  
	float                                              VolumeMultiplier;                                           // 0x0008   (0x0004)  
	float                                              PitchMultiplier;                                            // 0x000C   (0x0004)  
	float                                              StartTime;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class USoundConcurrency*                           ConcurrencySettings;                                        // 0x0018   (0x0008)  
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0020   (0x0008)  
	FName                                              AttachName;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class USceneComponent*                             AttachToComponent;                                          // 0x0030   (0x0008)  
	SDK_UNDEFINED(1,2712) /* TEnumAsByte<EAttachLocation> */ __um(LocationType);                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Location;                                                   // 0x0040   (0x0018)  
};

/// Class /Script/SoundLibrary.SoundLibrarySimpleContext
/// Size: 0x0058 (0x000058 - 0x0000B0)
class USoundLibrarySimpleContext : public USoundLibraryContext
{ 
public:
	FSoundLibrarySimpleContextSettings                 Settings;                                                   // 0x0058   (0x0058)  


	/// Functions
	// Function /Script/SoundLibrary.SoundLibrarySimpleContext.ConfigureContext
	// void ConfigureContext(class AActor* OwningActor, FSoundLibrarySimpleContextSettings& InSettings);                     // [0x7056bf8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SoundLibrary.SoundLibrarySubsystem
/// Size: 0x0068 (0x000030 - 0x000098)
class USoundLibrarySubsystem : public UWorldSubsystem
{ 
public:
	TArray<class USoundLibraryCollection*>             LibraryCollections;                                         // 0x0030   (0x0010)  
	class USoundLibrarySimpleContext*                  SimpleContext;                                              // 0x0040   (0x0008)  
	SDK_UNDEFINED(80,2713) /* TMap<uint32_t, FSoundLibraryActorData> */ __um(ActorDataMap);                        // 0x0048   (0x0050)  


	/// Functions
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveLibrary
	// void RemoveLibrary(class AActor* Actor, class USoundLibrary* Library);                                                // [0x2fdaf3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveLibrariesFromCollections
	// void RemoveLibrariesFromCollections(class AActor* Actor, FGameplayTagContainer& CollectionTags);                      // [0x2aa00e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveLibraries
	// void RemoveLibraries(class AActor* Actor, TArray<USoundLibrary*> Libraries);                                          // [0x31bf704] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveContext
	// bool RemoveContext(class AActor* Actor, class UClass* ContextClass);                                                  // [0x705767c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.PlaySoundSimple
	// FSoundLibraryPlayResult PlaySoundSimple(class AActor* OwningActor, FSoundLibrarySimpleContextSettings& InSettings);   // [0x2d7a814] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.PlaySound
	// void PlaySound(class USoundLibraryContext* Context, FSoundLibraryPlayResult& OutResults);                             // [0x339e1b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.GetContext
	// class USoundLibraryContext* GetContext(class AActor* Actor, class UClass* ContextClass);                              // [0x7056eb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor
	// void EnableEventsForActor(class AActor* Actor);                                                                       // [0x7056ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor
	// void DisableEventsForActor(class AActor* Actor);                                                                      // [0x2d6e49c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddLibrary
	// void AddLibrary(class AActor* Actor, class USoundLibrary* Library);                                                   // [0x2f5c5d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddLibrariesFromCollections
	// void AddLibrariesFromCollections(class AActor* Actor, FGameplayTagContainer& CollectionTags);                         // [0x33f4750] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddLibraries
	// void AddLibraries(class AActor* Actor, TArray<USoundLibrary*> Libraries);                                             // [0x32b7058] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddContext
	// class USoundLibraryContext* AddContext(class AActor* Actor, class UClass* ContextClass);                              // [0x7056424] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SoundLibrary.SoundLibraryTagHelperFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundLibraryTagHelperFunctions : public UObject
{ 
public:


	/// Functions
	// Function /Script/SoundLibrary.SoundLibraryTagHelperFunctions.MakeSoundLibraryTag
	// FSoundLibraryTag MakeSoundLibraryTag(FGameplayTag& tag);                                                              // [0x705705c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/SoundLibrary.SoundLibraryPlayResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSoundLibraryPlayResult
{ 
	FGameplayTag                                       EventName;                                                  // 0x0000   (0x0004)  
	bool                                               bWasBlocked;                                                // 0x0004   (0x0001)  
	bool                                               bSuccess;                                                   // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	TArray<class UAudioComponent*>                     AudioComponents;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/SoundLibrary.SoundLibraryContextEventInput
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSoundLibraryContextEventInput
{ 
	class USoundBase*                                  sound;                                                      // 0x0000   (0x0008)  
	class AActor*                                      Owner;                                                      // 0x0008   (0x0008)  
	FGameplayTag                                       EventTag;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FGameplayTagContainer                              LibraryTags;                                                // 0x0018   (0x0020)  
};

/// Struct /Script/SoundLibrary.SoundLibrarySet
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSoundLibrarySet
{ 
	SDK_UNDEFINED(80,2714) /* TSet<USoundLibrary*> */  __um(LibrarySet);                                           // 0x0000   (0x0050)  
	ESoundLibrarySelectionBehavior                     SelectionType;                                              // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/SoundLibrary.SoundLibraryActorData
/// Size: 0x0088 (0x000000 - 0x000088)
struct FSoundLibraryActorData
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	SDK_UNDEFINED(80,2715) /* TSet<USoundLibrary*> */  __um(SoundLibraries);                                       // 0x0020   (0x0050)  
	TArray<class USoundLibraryContext*>                SoundLibraryContexts;                                       // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Struct /Script/SoundLibrary.SoundLibraryTag
/// Size: 0x0000 (0x000004 - 0x000004)
struct FSoundLibraryTag : FGameplayTag
{ 
};

