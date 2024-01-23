
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: UMG

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UDefaultLevelSequenceInstanceData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	class AActor*                                      TransformOriginActor;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         TransformOrigin;                                            // 0x0040   (0x0060)  
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0028 (0x000028 - 0x000050)
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
public:
	FGuid                                              SkelTrackGuid;                                              // 0x0028   (0x0010)  
	FSoftObjectPath                                    PathToLevelSequence;                                        // 0x0038   (0x0018)  
};

/// Struct /Script/LevelSequence.UpgradedLevelSequenceBindingReferences
/// Size: 0x0000 (0x000010 - 0x000010)
struct FUpgradedLevelSequenceBindingReferences : FMovieSceneBindingReferences
{ 
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x0038 (0x000068 - 0x0000A0)
class ULevelSequence : public UMovieSceneSequence
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	class UMovieScene*                                 MovieScene;                                                 // 0x0070   (0x0008)  
	FUpgradedLevelSequenceBindingReferences            BindingReferences;                                          // 0x0078   (0x0010)  
	class UClass*                                      DirectorClass;                                              // 0x0088   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	// void RemoveMetaDataByClass(class UClass* InClass);                                                                    // [0x6301954] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// class UObject* FindOrAddMetaDataByClass(class UClass* InClass);                                                       // [0x6300c5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	// class UObject* FindMetaDataByClass(class UClass* InClass);                                                            // [0x6300c5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	// class UObject* CopyMetaData(class UObject* InMetaData);                                                               // [0x63009d4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelSequenceBurnInInitSettings : public UObject
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0028 (0x000028 - 0x000050)
class ULevelSequenceBurnInOptions : public UObject
{ 
public:
	bool                                               bUseBurnIn;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSoftClassPath                                     BurnInClass;                                                // 0x0030   (0x0018)  
	class ULevelSequenceBurnInInitSettings*            Settings;                                                   // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// void SetBurnIn(FSoftClassPath InBurnInClass);                                                                         // [0x6301ff8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FLevelSequenceCameraSettings
{ 
	bool                                               bOverrideAspectRatioAxisConstraint;                         // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,2482) /* TEnumAsByte<EAspectRatioAxisConstraint> */ __um(AspectRatioAxisConstraint);           // 0x0001   (0x0001)  
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x00A0 (0x000290 - 0x000330)
class ALevelSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0290   (0x0018)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02A8   (0x0028)  
	class ULevelSequencePlayer*                        SequencePlayer;                                             // 0x02D0   (0x0008)  
	class ULevelSequence*                              LevelSequenceAsset;                                         // 0x02D8   (0x0008)  
	FLevelSequenceCameraSettings                       CameraSettings;                                             // 0x02E0   (0x0002)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x02E2   (0x0006)  MISSED
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                              // 0x02E8   (0x0008)  
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                           // 0x02F0   (0x0008)  
	bool                                               bAutoPlay : 1;                                              // 0x02F8:0 (0x0001)  
	bool                                               bOverrideInstanceData : 1;                                  // 0x02F8:1 (0x0001)  
	bool                                               bReplicatePlayback : 1;                                     // 0x02F8:2 (0x0001)  
	unsigned char                                      UnknownData02_4[0x7];                                       // 0x02F9   (0x0007)  MISSED
	class UObject*                                     DefaultInstanceData;                                        // 0x0300   (0x0008)  
	class ULevelSequenceBurnIn*                        BurnInInstance;                                             // 0x0308   (0x0008)  
	bool                                               bShowBurnin;                                                // 0x0310   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0311   (0x0003)  MISSED
	FWorldPartitionResolveData                         WorldPartitionResolveData;                                  // 0x0314   (0x0018)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x032C   (0x0004)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	// void ShowBurnin();                                                                                                    // [0x6302248] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	// void SetSequence(class ULevelSequence* InSequence);                                                                   // [0x63021c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                    // [0x6302148] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	// void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                        // [0x6301e4c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);           // [0x6301b68] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	// void ResetBindings();                                                                                                 // [0x6301b24] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	// void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                // [0x63019cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// void RemoveBindingByTag(FName tag, class AActor* Actor);                                                              // [0x6301890] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	// void RemoveBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor);                                          // [0x630165c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// void OnLevelSequenceLoaded__DelegateSignature();                                                                      // [0x2177018] Public|Delegate      
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	// void HideBurnin();                                                                                                    // [0x6301618] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	// class ULevelSequencePlayer* GetSequencePlayer();                                                                      // [0x3b1de98] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	// class ULevelSequence* GetSequence();                                                                                  // [0x6301538] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	// TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName tag);                                                      // [0x6300db4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	// FMovieSceneObjectBindingID FindNamedBinding(FName tag);                                                               // [0x6300ce4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	// void AddBindingByTag(FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);                            // [0x63008dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	// void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);               // [0x63005d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.ReplicatedLevelSequenceActor
/// Size: 0x0000 (0x000330 - 0x000330)
class AReplicatedLevelSequenceActor : public ALevelSequenceActor
{ 
public:
};

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0030 (0x000000 - 0x000030)
struct FLevelSequenceAnimSequenceLinkItem
{ 
	FGuid                                              SkelTrackGuid;                                              // 0x0000   (0x0010)  
	FSoftObjectPath                                    PathToAnimSequence;                                         // 0x0010   (0x0018)  
	bool                                               bExportTransforms;                                          // 0x0028   (0x0001)  
	bool                                               bExportMorphTargets;                                        // 0x0029   (0x0001)  
	bool                                               bExportAttributeCurves;                                     // 0x002A   (0x0001)  
	bool                                               bExportMaterialCurves;                                      // 0x002B   (0x0001)  
	EAnimInterpolationType                             Interpolation;                                              // 0x002C   (0x0001)  
	SDK_UNDEFINED(1,2483) /* TEnumAsByte<ERichCurveInterpMode> */ __um(CurveInterpolation);                        // 0x002D   (0x0001)  
	bool                                               bRecordInWorldSpace;                                        // 0x002E   (0x0001)  
	bool                                               bEvaluateAllSkeletalMeshComponents;                         // 0x002F   (0x0001)  
};

/// Class /Script/LevelSequence.LevelSequenceAnimSequenceLink
/// Size: 0x0010 (0x000028 - 0x000038)
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{ 
public:
	TArray<FLevelSequenceAnimSequenceLinkItem>         AnimSequenceLinks;                                          // 0x0028   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FLevelSequencePlayerSnapshot
{ 
	SDK_UNDEFINED(16,2484) /* FString */               __um(RootName);                                             // 0x0000   (0x0010)  
	FQualifiedFrameTime                                RootTime;                                                   // 0x0010   (0x0010)  
	FQualifiedFrameTime                                SourceTime;                                                 // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,2485) /* FString */               __um(CurrentShotName);                                      // 0x0030   (0x0010)  
	FQualifiedFrameTime                                CurrentShotLocalTime;                                       // 0x0040   (0x0010)  
	FQualifiedFrameTime                                CurrentShotSourceTime;                                      // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,2486) /* FString */               __um(SourceTimecode);                                       // 0x0060   (0x0010)  
	SDK_UNDEFINED(32,2487) /* TWeakObjectPtr<UCameraComponent*> */ __um(CameraComponent);                          // 0x0070   (0x0020)  
	class ULevelSequence*                              ActiveShot;                                                 // 0x0090   (0x0008)  
	FMovieSceneSequenceID                              ShotID;                                                     // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2488) /* FString */               __um(MasterName);                                           // 0x00A0   (0x0010)  
	FQualifiedFrameTime                                MasterTime;                                                 // 0x00B0   (0x0010)  
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x00C8 (0x0002C0 - 0x000388)
class ULevelSequenceBurnIn : public UUserWidget
{ 
public:
	FLevelSequencePlayerSnapshot                       FrameInformation;                                           // 0x02C0   (0x00C0)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x0380   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	// void SetSettings(class UObject* InSettings);                                                                          // [0x2177018] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// class UClass* GetSettingsClass();                                                                                     // [0x63015e0] RequiredAPI|Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0010 (0x000028 - 0x000038)
class ULevelSequenceDirector : public UObject
{ 
public:
	class ULevelSequencePlayer*                        Player;                                                     // 0x0028   (0x0008)  
	int32_t                                            SubSequenceID;                                              // 0x0030   (0x0004)  
	int32_t                                            MovieScenePlayerIndex;                                      // 0x0034   (0x0004)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
	// void OnCreated();                                                                                                     // [0x2177018] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetSequence
	// class UMovieSceneSequence* GetSequence();                                                                             // [0x6301568] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetRootSequenceTime
	// FQualifiedFrameTime GetRootSequenceTime();                                                                            // [0x6301508] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
	// FQualifiedFrameTime GetMasterSequenceTime();                                                                          // [0x63014d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetCurrentTime
	// FQualifiedFrameTime GetCurrentTime();                                                                                 // [0x63014a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                           // [0x6301328] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject
	// class UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x63011c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                             // [0x6301044] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor
	// class AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x6300ee0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0128 (0x0004E0 - 0x000608)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x04E0   (0x0008)  MISSED
	SDK_UNDEFINED(16,2489) /* FMulticastInlineDelegate */ __um(OnCameraCut);                                       // 0x04E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x110];                                     // 0x04F8   (0x0110)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// class UCameraComponent* GetActiveCameraComponent();                                                                   // [0x6300eb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor); // [0x6300a44] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceProjectSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class ULevelSequenceProjectSettings : public UDeveloperSettings
{ 
public:
	bool                                               bDefaultLockEngineToDisplayRate;                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(16,2490) /* FString */               __um(DefaultDisplayRate);                                   // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2491) /* FString */               __um(DefaultTickResolution);                                // 0x0048   (0x0010)  
	EUpdateClockSource                                 DefaultClockSource;                                         // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ALevelSequenceMediaController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	class ALevelSequenceActor*                         Sequence;                                                   // 0x0298   (0x0008)  
	class UMediaComponent*                             MediaComponent;                                             // 0x02A0   (0x0008)  
	float                                              ServerStartTimeSeconds;                                     // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x02AC   (0x000C)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	// void SynchronizeToServer(float DesyncThresholdSeconds);                                                               // [0x6302264] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	// void Play();                                                                                                          // [0x6301648] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	// void OnRep_ServerStartTimeSeconds();                                                                                  // [0x6301634] Final|RequiredAPI|Native|Private 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	// class ALevelSequenceActor* GetSequence();                                                                             // [0x6301550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	// class UMediaComponent* GetMediaComponent();                                                                           // [0x60618d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LevelSequence.LegacyLazyObjectPtrFragment
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLegacyLazyObjectPtrFragment
{ 
	FGuid                                              LazyObjectId;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLevelSequenceLegacyObjectReference
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLevelSequenceObjectReferenceMap
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (0x000000 - 0x000001)
struct FBoundActorProxy
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLevelSequenceBindingReference
{ 
	SDK_UNDEFINED(16,2492) /* FString */               __um(PackageName);                                          // 0x0000   (0x0010)  
	FSoftObjectPath                                    ExternalObjectPath;                                         // 0x0010   (0x0018)  
	SDK_UNDEFINED(16,2493) /* FString */               __um(ObjectPath);                                           // 0x0028   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLevelSequenceBindingReferenceArray
{ 
	TArray<FLevelSequenceBindingReference>             References;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FLevelSequenceBindingReferences
{ 
	SDK_UNDEFINED(80,2494) /* TMap<FGuid, FLevelSequenceBindingReferenceArray> */ __um(BindingIdToReferences);     // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,2495) /* TSet<FGuid> */           __um(AnimSequenceInstances);                                // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,2496) /* TSet<FGuid> */           __um(PostProcessInstances);                                 // 0x00A0   (0x0050)  
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0030 (0x000000 - 0x000030)
struct FLevelSequenceObject
{ 
	SDK_UNDEFINED(24,2497) /* TLazyObjectPtr<UObject*> */ __um(ObjectOrOwner);                                     // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,2498) /* FString */               __um(ComponentName);                                        // 0x0018   (0x0010)  
	SDK_UNDEFINED(8,2499) /* TWeakObjectPtr<UObject*> */ __um(CachedComponent);                                    // 0x0028   (0x0008)  
};

