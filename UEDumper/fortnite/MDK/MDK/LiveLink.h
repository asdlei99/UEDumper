
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface
/// dependency: TimeManagement

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bInterpolatePropertyValues                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0010 (0x000040 - 0x000050)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x0008 (0x000158 - 0x000160)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	DMember(bool)                                      bAppendSubjectNameToBones                                   OFFSET(get<bool>, {0x159, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformNames
	// void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& TransformNames);                             // [0xc46c414] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformName
	// void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name);                                                  // [0xc46c280] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	// void SetLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bEnabled);                                           // [0xc46c0ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	// bool RemoveSource(FLiveLinkSourceHandle& SourceHandle);                                                                  // [0xc46bfdc] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	// void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);                             // [0xc46bd88] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	// int32_t NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle);                                                     // [0xc46bc78] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	// bool IsSpecificLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bForThisFrame);                               // [0xc46bae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	// bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle);                                                            // [0xc46b9bc] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	// bool IsLiveLinkSubjectEnabled(FLiveLinkSubjectName SubjectName);                                                         // [0xc46b8bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.HasParent
	// bool HasParent(FLiveLinkTransform& LiveLinkTransform);                                                                   // [0xc46b794] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	// void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform); // [0xc46b4ec] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	// void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, FLiveLinkTransform& LiveLinkTransform); // [0xc46b244] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	// class UClass* GetSpecificLiveLinkSubjectRole(FLiveLinkSubjectKey SubjectKey);                                            // [0xc46aa3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid
	// FText GetSourceTypeFromGuid(FGuid SourceGuid);                                                                           // [0xc46a8f4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	// FText GetSourceType(FLiveLinkSourceHandle& SourceHandle);                                                                // [0xc46a7a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	// FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle);                                                              // [0xc46a64c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	// FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle);                                                         // [0xc46a4f8] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	// void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform);                   // [0xc46a2b8] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	// bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value);                         // [0xc46a050] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetParent
	// void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent);                                       // [0xc469e40] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	// void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData);                                   // [0xc469c34] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	// TArray<FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);              // [0xc469a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	// class UClass* GetLiveLinkSubjectRole(FLiveLinkSubjectName SubjectName);                                                  // [0xc469954] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	// TArray<FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);                                // [0xc469858] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetCurves
	// void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves);                                     // [0xc469678] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetChildren
	// void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children);                           // [0xc4694fc] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	// void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData);             // [0xc469334] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
	// bool GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData);  // [0xc468e94] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
	// bool GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData);    // [0xc468ce0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	// bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, class UClass* Role, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc468aa8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	// bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, class UClass* Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc4687dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	// bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, class UClass* Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc468518] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	// bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc468350] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	// void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);                              // [0xc467ef8] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ChildCount
	// int32_t ChildCount(FLiveLinkTransform& LiveLinkTransform);                                                               // [0xc467dac] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULiveLinkComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  OnLiveLinkUpdated                                           OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	// void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0xc46afe8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	// void GetSubjectDataAtSceneTime(FName SubjectName, FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0xc46ad3c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectData
	// void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);                         // [0xc46ab64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	// void GetAvailableSubjectNames(TArray<FName>& SubjectNames);                                                              // [0xc469298] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class ULiveLinkDrivenComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     ActorTransformBone                                          OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bModifyActorTransform                                       OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bSetRelativeLocation                                        OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0058 (0x000028 - 0x000080)
class ULiveLinkMessageBusFinder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	// void GetAvailableProviders(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float duration, TArray<FProviderPollResult>& AvailableProviders); // [0xc469058] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	// class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();                                                            // [0xc468324] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
	// void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle);                              // [0xc46814c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0028 (0x000028 - 0x000050)
class ULiveLinkPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FLiveLinkSourcePreset>)             Sources                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FLiveLinkSubjectPreset>)            Subjects                                                    OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/LiveLink.LiveLinkPreset.BuildFromClient
	// void BuildFromClient();                                                                                                  // [0xc467d98] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClientLatent
	// void ApplyToClientLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo);                               // [0xc467c38] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClient
	// bool ApplyToClient();                                                                                                    // [0xc467c14] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LiveLink.LiveLinkPreset.AddToClient
	// bool AddToClient(bool bRecreatePresets);                                                                                 // [0xc467b44] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/LiveLink.LiveLinkUserSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class ULiveLinkUserSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FDirectoryPath)                            PresetSaveDir                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class ULiveLinkSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FLiveLinkRoleProjectSetting>)       DefaultRoleSettings                                         OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UClass*)                             FrameInterpolationProcessor                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<ULiveLinkPreset*>)          DefaultLiveLinkPreset                                       OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(float)                                     ClockOffsetCorrectionStep                                   OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(ELiveLinkSourceMode)                       DefaultMessageBusSourceMode                                 OFFSET(get<T>, {0x64, 1, 0, 0})
	DMember(double)                                    MessageBusPingRequestFrequency                              OFFSET(get<double>, {0x68, 8, 0, 0})
	DMember(double)                                    MessageBusHeartbeatFrequency                                OFFSET(get<double>, {0x70, 8, 0, 0})
	DMember(double)                                    MessageBusHeartbeatTimeout                                  OFFSET(get<double>, {0x78, 8, 0, 0})
	DMember(double)                                    MessageBusTimeBeforeRemovingInactiveSource                  OFFSET(get<double>, {0x80, 8, 0, 0})
	DMember(double)                                    TimeWithoutFrameToBeConsiderAsInvalid                       OFFSET(get<double>, {0x88, 8, 0, 0})
	SMember(FLinearColor)                              ValidColor                                                  OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FLinearColor)                              InvalidColor                                                OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(char)                                      TextSizeSource                                              OFFSET(get<char>, {0xB0, 1, 0, 0})
	DMember(char)                                      TextSizeSubject                                             OFFSET(get<char>, {0xB1, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x0090 (0x000030 - 0x0000C0)
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FLiveLinkSubjectKey)                       SubjectKey                                                  OFFSET(getStruct<T>, {0x30, 20, 0, 0})
	CMember(ELiveLinkTimecodeProviderEvaluationType)   Evaluation                                                  OFFSET(get<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bOverrideFrameRate                                          OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FFrameRate)                                OverrideFrameRate                                           OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0050 (0x000030 - 0x000080)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0048 (0x000028 - 0x000070)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(ELiveLinkAxis)                             FrontAxis                                                   OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(ELiveLinkAxis)                             RightAxis                                                   OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(ELiveLinkAxis)                             UpAxis                                                      OFFSET(get<T>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bUseOffsetPosition                                          OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bUseOffsetOrientation                                       OFFSET(get<bool>, {0x2C, 1, 0, 0})
	SMember(FVector)                                   OffsetPosition                                              OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FRotator)                                  OffsetOrientation                                           OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0000 (0x000070 - 0x000070)
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0028 (0x000158 - 0x000180)
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	// bool UpdateVirtualSubjectStaticData_Internal(FLiveLinkBaseStaticData& InStruct);                                         // [0xc46c728] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	// bool UpdateVirtualSubjectFrameData_Internal(FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);           // [0xc46c594] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	// void OnUpdate();                                                                                                         // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
	// void OnInitialize();                                                                                                     // [0x130d900] Event|Public|BlueprintEvent 
};

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (0x000000 - 0x000001)
class FLiveLinkRetargetAssetReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0090 (0x000000 - 0x000090)
class FProviderPollResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   MachineName                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(double)                                    MachineTimeOffset                                           OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(bool)                                      bIsValidProvider                                            OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (0x000000 - 0x000028)
class FLiveLinkRoleProjectSetting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             Role                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             SettingClass                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UClass*)                             FrameInterpolationProcessor                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<class UClass*>)                     FramePreProcessors                                          OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04
enum ELiveLinkTimecodeProviderEvaluationType : uint32_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp                                    = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest                                 = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest                                  = 2,
	ELiveLinkTimecodeProviderEvaluationType__ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x07
enum ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X                                                                 = 0,
	ELiveLinkAxis__Y                                                                 = 1,
	ELiveLinkAxis__Z                                                                 = 2,
	ELiveLinkAxis__XNeg                                                              = 3,
	ELiveLinkAxis__YNeg                                                              = 4,
	ELiveLinkAxis__ZNeg                                                              = 5,
	ELiveLinkAxis__ELiveLinkAxis_MAX                                                 = 6
};

