
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/DaySequence.DaySequenceConditionTag
/// Size: 0x0020 (0x000028 - 0x000048)
class UDaySequenceConditionTag : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/DaySequence.DaySequenceConditionTag.SetupBroadcastBindings
	// void SetupBroadcastBindings();                                                                                           // [0x19b5bd0] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/DaySequence.DaySequenceConditionTag.GetConditionName
	// FString GetConditionName();                                                                                              // [0x61ebd8c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DaySequence.DaySequenceConditionTag.Evaluate
	// bool Evaluate();                                                                                                         // [0x1a93cd0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DaySequence.DaySequenceConditionTag.BroadcastOnConditionValueChanged
	// void BroadcastOnConditionValueChanged();                                                                                 // [0x261d880] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/DaySequence.DaySequenceModifierEasingFunction
/// Size: 0x0048 (0x000028 - 0x000070)
class UDaySequenceModifierEasingFunction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/DaySequence.DaySequenceModifierComponent
/// Size: 0x01B0 (0x000220 - 0x0003D0)
class UDaySequenceModifierComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class UDaySequenceModifierEasingFunction*) EasingFunction                                              OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class ADaySequenceActor*)                  TargetActor                                                 OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(TArray<FComponentReference>)               VolumeShapeComponents                                       OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ExternalVolumeBlendTarget                                   OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(class UDaySequence*)                       UserDaySequence                                             OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UDaySequence*)                       ProceduralDaySequence                                       OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(TMap<FName, FDaySequenceModifierNamedSequence>) AdditionalNamedDaySequences                            OFFSET(get<T>, {0x258, 80, 0, 0})
	CMember(TMap<FName, FDaySequenceModifierNamedSequence>) TransientCollectionSequences                           OFFSET(get<T>, {0x2A8, 80, 0, 0})
	CMember(class UDaySequenceCollectionAsset*)        DaySequenceCollection                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(int32_t)                                   Bias                                                        OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(float)                                     DayNightCycleTime                                           OFFSET(get<float>, {0x304, 4, 0, 0})
	DMember(float)                                     BlendAmount                                                 OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     CustomVolumeBlendWeight                                     OFFSET(get<float>, {0x310, 4, 0, 0})
	CMember(EDayNightCycleMode)                        DayNightCycle                                               OFFSET(get<T>, {0x314, 1, 0, 0})
	CMember(EDaySequenceModifierBlendMode)             BlendMode                                                   OFFSET(get<T>, {0x315, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostReinitializeSubSequences                              OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostEnableModifier                                        OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVolumeBlendTargetOverlapBegin                             OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVolumeBlendTargetOverlapEnd                               OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	DMember(bool)                                      bIgnoreBias                                                 OFFSET(get<bool>, {0x358, 1, 1, 0})
	DMember(bool)                                      bUseVolume                                                  OFFSET(get<bool>, {0x358, 1, 1, 1})
	DMember(bool)                                      bIsComponentEnabled                                         OFFSET(get<bool>, {0x358, 1, 1, 2})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x358, 1, 1, 3})
	DMember(bool)                                      bPreview                                                    OFFSET(get<bool>, {0x358, 1, 1, 4})
	DMember(bool)                                      bUseCollection                                              OFFSET(get<bool>, {0x358, 1, 1, 6})


	/// Functions
	// Function /Script/DaySequence.DaySequenceModifierComponent.UnbindFromDaySequenceActor
	// void UnbindFromDaySequenceActor();                                                                                       // [0x2164e18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.SetVolumeCollisionEnabled
	// void SetVolumeCollisionEnabled(TEnumAsByte<ECollisionEnabled> InCollisionType);                                          // [0x2165478] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/DaySequence.DaySequenceModifierComponent.SetUserDaySequence
	// void SetUserDaySequence(class UDaySequence* InDaySequence);                                                              // [0x8002fdc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.SetCustomVolumeBlendWeight
	// void SetCustomVolumeBlendWeight(float Weight);                                                                           // [0x2ed7cd4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.ResetOverrides
	// void ResetOverrides();                                                                                                   // [0x8002b7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.OnVolumeOverlapEnd
	// void OnVolumeOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2b80824] Final|Native|Private 
	// Function /Script/DaySequence.DaySequenceModifierComponent.OnVolumeOverlapBegin
	// void OnVolumeOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2ac0c9c] Final|Native|Private|HasOutParms 
	// Function /Script/DaySequence.DaySequenceModifierComponent.MuteNamedSequence
	// void MuteNamedSequence(FName SequenceKey, bool bState);                                                                  // [0x800294c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.IsNamedSequenceMuted
	// bool IsNamedSequenceMuted(FName SequenceKey);                                                                            // [0x8002880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceModifierComponent.IsBlendTargetInAnyVolume
	// bool IsBlendTargetInAnyVolume();                                                                                         // [0x2165710] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.GetCurrentBlendWeight
	// float GetCurrentBlendWeight();                                                                                           // [0x3cf1ea8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceModifierComponent.EnableModifier
	// void EnableModifier();                                                                                                   // [0x2164c7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.EnableDistanceVolumeBlends
	// void EnableDistanceVolumeBlends(class AActor* InActor);                                                                  // [0x3281708] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.EnableComponent
	// void EnableComponent();                                                                                                  // [0x3494950] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.DisableModifier
	// void DisableModifier();                                                                                                  // [0x2165100] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.DisableComponent
	// void DisableComponent();                                                                                                 // [0x8002464] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.BindToDaySequenceActor
	// void BindToDaySequenceActor(class ADaySequenceActor* DaySequenceActor);                                                  // [0x2164e2c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddVisibilityOverride
	// void AddVisibilityOverride(class UObject* Object, bool bValue);                                                          // [0x8002258] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddVectorOverride
	// void AddVectorOverride(class UObject* Object, FName PropertyName, FVector Value);                                        // [0x8002098] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddTransformOverride
	// void AddTransformOverride(class UObject* Object, FTransform Value);                                                      // [0x8001e80] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddStaticTimeOfDayOverride
	// void AddStaticTimeOfDayOverride(class ADaySequenceActor* Actor, float Hours);                                            // [0x8001dbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddScalarOverride
	// void AddScalarOverride(class UObject* Object, FName PropertyName, double Value);                                         // [0x8001cc0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddScalarMaterialParameterOverride
	// void AddScalarMaterialParameterOverride(class UObject* Object, int32_t MaterialIndex, FName ParameterName, float Value); // [0x8001b84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddMaterialOverride
	// void AddMaterialOverride(class UObject* Object, int32_t MaterialIndex, class UMaterialInterface* Value);                 // [0x8001a8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddColorOverride
	// void AddColorOverride(class UObject* Object, FName PropertyName, FLinearColor Value);                                    // [0x80018d8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddColorMaterialParameterOverride
	// void AddColorMaterialParameterOverride(class UObject* Object, int32_t MaterialIndex, FName ParameterName, FLinearColor Value); // [0x80016e4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddBoolOverride
	// void AddBoolOverride(class UObject* Object, FName PropertyName, bool bValue);                                            // [0x80015e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/DaySequence.DaySequence
/// Size: 0x00C8 (0x000068 - 0x000130)
class UDaySequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UMovieScene*)                        MovieScene                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FDaySequenceBindingReferences)             BindingReferences                                           OFFSET(getStruct<T>, {0x78, 160, 0, 0})
	CMember(class UClass*)                             DirectorClass                                               OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<class UAssetUserData*>)             AssetUserData                                               OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceActor
/// Size: 0x01F0 (0x000290 - 0x000480)
class ADaySequenceActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(class UDaySequencePlayer*)                 SequencePlayer                                              OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UCurveFloat*)                        DayInterpCurve                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TMap<FName, FDaySequenceAssetData>)        DaySequences                                                OFFSET(get<T>, {0x2B0, 80, 0, 0})
	CMember(TMap<FName, FDaySequenceAssetData>)        TransientCollectionSequences                                OFFSET(get<T>, {0x300, 80, 0, 0})
	CMember(class UDaySequenceCollectionAsset*)        DaySequenceCollection                                       OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(int32_t)                                   Bias                                                        OFFSET(get<int32_t>, {0x358, 4, 0, 0})
	CMember(class UMovieSceneBindingOverrides*)        BindingOverrides                                            OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      bReplicatePlayback                                          OFFSET(get<bool>, {0x368, 1, 1, 0})
	CMember(class UDaySequence*)                       RootSequence                                                OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(bool)                                      bRunDayCycle                                                OFFSET(get<bool>, {0x378, 1, 0, 0})
	DMember(bool)                                      bUseInterpCurve                                             OFFSET(get<bool>, {0x379, 1, 0, 0})
	DMember(bool)                                      bUseCollection                                              OFFSET(get<bool>, {0x37A, 1, 0, 0})
	SMember(FTimecode)                                 DayLength                                                   OFFSET(getStruct<T>, {0x37C, 20, 0, 0})
	SMember(FTimecode)                                 TimePerCycle                                                OFFSET(getStruct<T>, {0x390, 20, 0, 0})
	SMember(FTimecode)                                 InitialTimeOfDay                                            OFFSET(getStruct<T>, {0x3A4, 20, 0, 0})
	CMember(TMap<UClass*, UDaySequenceConditionTag*>)  TrackConditionMap                                           OFFSET(get<T>, {0x430, 80, 0, 0})


	/// Functions
	// Function /Script/DaySequence.DaySequenceActor.SetTimeOfDayPreview
	// void SetTimeOfDayPreview(float InHours);                                                                                 // [0x621acf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetTimeOfDay
	// bool SetTimeOfDay(float InHours);                                                                                        // [0x8002f4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetStaticTimeOfDay
	// void SetStaticTimeOfDay(float InHours);                                                                                  // [0x8002ecc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                       // [0x8002e3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetDaySequence
	// void SetDaySequence(FName SequenceName, class UDaySequence* InDaySequence);                                              // [0x8002c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetBias
	// void SetBias(FName SequenceKey, int32_t Bias);                                                                           // [0x8002b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.RemoveStaticTimeOfDay
	// void RemoveStaticTimeOfDay(bool bResumeFromStaticTime);                                                                  // [0x8002afc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.Play
	// void Play();                                                                                                             // [0x8002ae8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.Pause
	// void Pause();                                                                                                            // [0x8002ad4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.MuteSequence
	// void MuteSequence(FName SequenceKey, bool bState);                                                                       // [0x8002a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.Multicast_SetTimePerCycle
	// void Multicast_SetTimePerCycle(float InHours);                                                                           // [0x5decb3c] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DaySequence.DaySequenceActor.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x800292c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.IsPaused
	// bool IsPaused();                                                                                                         // [0x800290c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.IsMuteSequence
	// bool IsMuteSequence(FName SequenceKey);                                                                                  // [0x80027f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.HasStaticTimeOfDay
	// bool HasStaticTimeOfDay();                                                                                               // [0x8002784] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetTimePerCycle
	// float GetTimePerCycle();                                                                                                 // [0x800275c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetTimeOfDayPreview
	// float GetTimeOfDayPreview();                                                                                             // [0x8002748] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetTimeOfDay
	// float GetTimeOfDay();                                                                                                    // [0x8002720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetStaticTimeOfDay
	// float GetStaticTimeOfDay();                                                                                              // [0x80026f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetSequencePlayer
	// class UDaySequencePlayer* GetSequencePlayer();                                                                           // [0x608e164] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetInitialTimeOfDay
	// float GetInitialTimeOfDay();                                                                                             // [0x8002670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetFirstDaySequence
	// class UDaySequence* GetFirstDaySequence();                                                                               // [0x800264c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetDaySequence
	// class UDaySequence* GetDaySequence(FName SequenceName);                                                                  // [0x8002554] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetDayLength
	// float GetDayLength();                                                                                                    // [0x800252c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetBias
	// int32_t GetBias(FName SequenceKey);                                                                                      // [0x80024a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.ContainsDaySequence
	// bool ContainsDaySequence(class UDaySequence* InDaySequence);                                                             // [0x8002320] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DaySequence.DaySequenceCollectionAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UDaySequenceCollectionAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FDaySequenceCollectionEntry>)       DaySequences                                                OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceDirector
/// Size: 0x0010 (0x000028 - 0x000038)
class UDaySequenceDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UDaySequencePlayer*)                 Player                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   SubSequenceID                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MovieScenePlayerIndex                                       OFFSET(get<int32_t>, {0x34, 4, 0, 0})


	/// Functions
	// Function /Script/DaySequence.DaySequenceDirector.OnCreated
	// void OnCreated();                                                                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/DaySequence.DaySequenceDirector.GetSequence
	// class UMovieSceneSequence* GetSequence();                                                                                // [0x6105d78] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetRootSequenceTime
	// FQualifiedFrameTime GetRootSequenceTime();                                                                               // [0x80026c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceDirector.GetMasterSequenceTime
	// FQualifiedFrameTime GetMasterSequenceTime();                                                                             // [0x8002698] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceDirector.GetCurrentTime
	// FQualifiedFrameTime GetCurrentTime();                                                                                    // [0x6105cb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x6105b24] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundObject
	// class UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                                 // [0x61059a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x6105814] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundActor
	// class AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                   // [0x6105698] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DaySequence.DaySequencePlayer
/// Size: 0x0008 (0x0004E0 - 0x0004E8)
class UDaySequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
};

/// Class /Script/DaySequence.DaySequenceProjectSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class UDaySequenceProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bDefaultLockEngineToDisplayRate                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   DefaultDisplayRate                                          OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DefaultTickResolution                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(EUpdateClockSource)                        DefaultClockSource                                          OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceProvider
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ADaySequenceProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(TArray<class UDaySequence*>)               DaySequenceAssets                                           OFFSET(get<T>, {0x290, 16, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceSubsystem
/// Size: 0x0030 (0x000030 - 0x000060)
class UDaySequenceSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnDaySequenceActorSet                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/DaySequence.DaySequenceSubsystem.SetDaySequenceActor
	// void SetDaySequenceActor(class ADaySequenceActor* InActor);                                                              // [0x8002d14] Final|Native|Public  
	// Function /Script/DaySequence.DaySequenceSubsystem.GetDaySequenceActor
	// class ADaySequenceActor* GetDaySequenceActor();                                                                          // [0x8002628] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DaySequence.DaySequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UDaySequenceTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/DaySequence.EnvironmentLightingActor
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class AEnvironmentLightingActor : public ADaySequenceProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class USkyAtmosphereComponent*)            SkyAtmosphereComponent                                      OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class USkyLightComponent*)                 SkyLightComponent                                           OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class USceneComponent*)                    SunRootComponent                                            OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UDirectionalLightComponent*)         SunComponent                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UExponentialHeightFogComponent*)     ExponentialHeightFogComponent                               OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UVolumetricCloudComponent*)          VolumetricCloudComponent                                    OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceAssetData
/// Size: 0x0060 (0x000000 - 0x000060)
class FDaySequenceAssetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UDaySequence*)                       Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Bias                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bMuted                                                      OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FDaySequenceConditionSet)                  Conditions                                                  OFFSET(getStruct<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceConditionSet
/// Size: 0x0050 (0x000000 - 0x000050)
class FDaySequenceConditionSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<UClass*, bool>)                       Conditions                                                  OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceModifierNamedSequence
/// Size: 0x0060 (0x000000 - 0x000060)
class FDaySequenceModifierNamedSequence : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UDaySequence*)                       Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   BiasOffset                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FDaySequenceConditionSet)                  Conditions                                                  OFFSET(getStruct<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceBindingReference
/// Size: 0x0030 (0x000000 - 0x000030)
class FDaySequenceBindingReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UObject*>)                  ExternalObjectPath                                          OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FString)                                   ObjectPath                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FDaySequenceBindingReferenceArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FDaySequenceBindingReference>)      References                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceBindingReferences
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FDaySequenceBindingReferences : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FGuid, FDaySequenceBindingReferenceArray>) BindingIdToReferences                                  OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<FGuid>)                               AnimSequenceInstances                                       OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceCollectionEntry
/// Size: 0x0060 (0x000000 - 0x000060)
class FDaySequenceCollectionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UDaySequence*)                       Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   BiasOffset                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FDaySequenceConditionSet)                  Conditions                                                  OFFSET(getStruct<T>, {0x10, 80, 0, 0})
};

/// Enum /Script/DaySequence.EDayNightCycleMode
/// Size: 0x06
enum EDayNightCycleMode : uint8_t
{
	EDayNightCycleMode__Default                                                      = 0,
	EDayNightCycleMode__FixedTime                                                    = 1,
	EDayNightCycleMode__StartAtSpecifiedTime                                         = 2,
	EDayNightCycleMode__RandomFixedTime                                              = 3,
	EDayNightCycleMode__RandomStartTime                                              = 4,
	EDayNightCycleMode__EDayNightCycleMode_MAX                                       = 5
};

/// Enum /Script/DaySequence.EDaySequenceModifierBlendMode
/// Size: 0x03
enum EDaySequenceModifierBlendMode : uint8_t
{
	EDaySequenceModifierBlendMode__None                                              = 0,
	EDaySequenceModifierBlendMode__Distance                                          = 1,
	EDaySequenceModifierBlendMode__EDaySequenceModifierBlendMode_MAX                 = 2
};

