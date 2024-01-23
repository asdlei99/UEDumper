
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface
/// dependency: TimeManagement

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04
enum class ELiveLinkTimecodeProviderEvaluationType : uint32_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp                                    = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest                                 = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest                                  = 2,
	ELiveLinkTimecodeProviderEvaluationType__ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x07
enum class ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X                                                                 = 0,
	ELiveLinkAxis__Y                                                                 = 1,
	ELiveLinkAxis__Z                                                                 = 2,
	ELiveLinkAxis__XNeg                                                              = 3,
	ELiveLinkAxis__YNeg                                                              = 4,
	ELiveLinkAxis__ZNeg                                                              = 5,
	ELiveLinkAxis__ELiveLinkAxis_MAX                                                 = 6
};

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{ 
public:
	bool                                               bInterpolatePropertyValues;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0029   (0x0017)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0010 (0x000040 - 0x000050)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x0008 (0x000158 - 0x000160)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0158   (0x0001)  MISSED
	bool                                               bAppendSubjectNameToBones;                                  // 0x0159   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x015A   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformNames
	// void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& TransformNames);                          // [0xc116ce0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformName
	// void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name);                                               // [0xc116b64] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	// void SetLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bEnabled);                                        // [0xc116948] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	// bool RemoveSource(FLiveLinkSourceHandle& SourceHandle);                                                               // [0xc116850] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	// void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);                          // [0xc116630] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	// int32_t NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle);                                                  // [0xc116534] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	// bool IsSpecificLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bForThisFrame);                            // [0xc11630c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	// bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle);                                                         // [0xc116200] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	// bool IsLiveLinkSubjectEnabled(FLiveLinkSubjectName SubjectName);                                                      // [0xc1160d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.HasParent
	// bool HasParent(FLiveLinkTransform& LiveLinkTransform);                                                                // [0xc115fc0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	// void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform); // [0xc115d5c] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	// void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, FLiveLinkTransform& LiveLinkTransform); // [0xc115af8] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	// class UClass* GetSpecificLiveLinkSubjectRole(FLiveLinkSubjectKey SubjectKey);                                         // [0xc115458] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid
	// FText GetSourceTypeFromGuid(FGuid SourceGuid);                                                                        // [0xc1152f8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	// FText GetSourceType(FLiveLinkSourceHandle& SourceHandle);                                                             // [0xc1151bc] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	// FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle);                                                           // [0xc115080] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	// FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle);                                                      // [0xc114f44] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	// void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform);                // [0xc114d34] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	// bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value);                      // [0xc114af4] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetParent
	// void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent);                                    // [0xc114908] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	// void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData);                                // [0xc114714] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	// TArray<FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);           // [0xc1145c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	// class UClass* GetLiveLinkSubjectRole(FLiveLinkSubjectName SubjectName);                                               // [0xc114484] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	// TArray<FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);                             // [0xc1143cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetCurves
	// void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves);                                  // [0xc114204] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetChildren
	// void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children);                        // [0xc1140a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	// void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData);          // [0xc113ef0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
	// bool GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData); // [0xc1139d8] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
	// bool GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData); // [0xc11383c] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	// bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, class UClass* Role, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc1134d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	// bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, class UClass* Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc11307c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	// bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, class UClass* Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc112c38] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	// bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc1129ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	// void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);                           // [0xc1125a0] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ChildCount
	// int32_t ChildCount(FLiveLinkTransform& LiveLinkTransform);                                                            // [0xc112468] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULiveLinkComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,14457) /* FMulticastInlineDelegate */ __um(OnLiveLinkUpdated);                                // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	// void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0xc115920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	// void GetSubjectDataAtSceneTime(FName SubjectName, FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0xc115738] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectData
	// void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);                      // [0xc1155ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	// void GetAvailableSubjectNames(TArray<FName>& SubjectNames);                                                           // [0xc113e54] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class ULiveLinkDrivenComponent : public UActorComponent
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x00A0   (0x0004)  
	FName                                              ActorTransformBone;                                         // 0x00A4   (0x0004)  
	bool                                               bModifyActorTransform;                                      // 0x00A8   (0x0001)  
	bool                                               bSetRelativeLocation;                                       // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0058 (0x000028 - 0x000080)
class ULiveLinkMessageBusFinder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	// void GetAvailableProviders(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float duration, TArray<FProviderPollResult>& AvailableProviders); // [0xc113b88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	// class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();                                                         // [0xc112980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
	// void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle);                           // [0xc1127c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0028 (0x000028 - 0x000050)
class ULiveLinkPreset : public UObject
{ 
public:
	TArray<FLiveLinkSourcePreset>                      Sources;                                                    // 0x0028   (0x0010)  
	TArray<FLiveLinkSubjectPreset>                     Subjects;                                                   // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0048   (0x0008)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkPreset.BuildFromClient
	// void BuildFromClient();                                                                                               // [0xc112454] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClientLatent
	// void ApplyToClientLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo);                            // [0xc1122c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClient
	// bool ApplyToClient();                                                                                                 // [0xc1122a4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LiveLink.LiveLinkPreset.AddToClient
	// bool AddToClient(bool bRecreatePresets);                                                                              // [0xc112214] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/LiveLink.LiveLinkUserSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class ULiveLinkUserSettings : public UObject
{ 
public:
	FDirectoryPath                                     PresetSaveDir;                                              // 0x0028   (0x0010)  
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLiveLinkRoleProjectSetting
{ 
	class UClass*                                      Role;                                                       // 0x0000   (0x0008)  
	class UClass*                                      SettingClass;                                               // 0x0008   (0x0008)  
	class UClass*                                      FrameInterpolationProcessor;                                // 0x0010   (0x0008)  
	TArray<class UClass*>                              FramePreProcessors;                                         // 0x0018   (0x0010)  
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class ULiveLinkSettings : public UObject
{ 
public:
	TArray<FLiveLinkRoleProjectSetting>                DefaultRoleSettings;                                        // 0x0028   (0x0010)  
	class UClass*                                      FrameInterpolationProcessor;                                // 0x0038   (0x0008)  
	SDK_UNDEFINED(32,14458) /* TWeakObjectPtr<ULiveLinkPreset*> */ __um(DefaultLiveLinkPreset);                    // 0x0040   (0x0020)  
	float                                              ClockOffsetCorrectionStep;                                  // 0x0060   (0x0004)  
	ELiveLinkSourceMode                                DefaultMessageBusSourceMode;                                // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	double                                             MessageBusPingRequestFrequency;                             // 0x0068   (0x0008)  
	double                                             MessageBusHeartbeatFrequency;                               // 0x0070   (0x0008)  
	double                                             MessageBusHeartbeatTimeout;                                 // 0x0078   (0x0008)  
	double                                             MessageBusTimeBeforeRemovingInactiveSource;                 // 0x0080   (0x0008)  
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                      // 0x0088   (0x0008)  
	FLinearColor                                       ValidColor;                                                 // 0x0090   (0x0010)  
	FLinearColor                                       InvalidColor;                                               // 0x00A0   (0x0010)  
	char                                               TextSizeSource;                                             // 0x00B0   (0x0001)  
	char                                               TextSizeSubject;                                            // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x0090 (0x000030 - 0x0000C0)
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{ 
public:
	FLiveLinkSubjectKey                                SubjectKey;                                                 // 0x0030   (0x0014)  
	ELiveLinkTimecodeProviderEvaluationType            Evaluation;                                                 // 0x0044   (0x0004)  
	bool                                               bOverrideFrameRate;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FFrameRate                                         OverrideFrameRate;                                          // 0x004C   (0x0008)  
	int32_t                                            BufferSize;                                                 // 0x0054   (0x0004)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x0058   (0x0068)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0050 (0x000030 - 0x000080)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4C];                                      // 0x0034   (0x004C)  MISSED
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{ 
public:
	FName                                              SourceName;                                                 // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0048 (0x000028 - 0x000070)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{ 
public:
	ELiveLinkAxis                                      FrontAxis;                                                  // 0x0028   (0x0001)  
	ELiveLinkAxis                                      RightAxis;                                                  // 0x0029   (0x0001)  
	ELiveLinkAxis                                      UpAxis;                                                     // 0x002A   (0x0001)  
	bool                                               bUseOffsetPosition;                                         // 0x002B   (0x0001)  
	bool                                               bUseOffsetOrientation;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FVector                                            OffsetPosition;                                             // 0x0030   (0x0018)  
	FRotator                                           OffsetOrientation;                                          // 0x0048   (0x0018)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0000 (0x000070 - 0x000070)
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{ 
public:
	FName                                              BoneName;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x002C   (0x0014)  MISSED
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0028 (0x000158 - 0x000180)
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0158   (0x0028)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	// bool UpdateVirtualSubjectStaticData_Internal(FLiveLinkBaseStaticData& InStruct);                                      // [0xc1170ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	// bool UpdateVirtualSubjectFrameData_Internal(FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);        // [0xc116e48] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	// void OnUpdate();                                                                                                      // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
	// void OnInitialize();                                                                                                  // [0x2177018] Event|Public|BlueprintEvent 
};

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLiveLinkRetargetAssetReference
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0090 (0x000000 - 0x000090)
struct FProviderPollResult
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	SDK_UNDEFINED(16,14459) /* FString */              __um(Name);                                                 // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,14460) /* FString */              __um(MachineName);                                          // 0x0020   (0x0010)  
	double                                             MachineTimeOffset;                                          // 0x0030   (0x0008)  
	bool                                               bIsValidProvider;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x57];                                      // 0x0039   (0x0057)  MISSED
};

