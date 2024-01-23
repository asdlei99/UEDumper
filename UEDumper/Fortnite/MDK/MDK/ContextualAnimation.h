
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ContextualAnimation.AnimNotifyState_EarlyOutContextualAnimWindow
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_EarlyOutContextualAnimWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ContextualAnimation.AnimNotifyState_IKWindow
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UAnimNotifyState_IKWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FAlphaBlend)                               BlendIn                                                     OFFSET(getStruct<T>, {0x38, 48, 0, 0})
	SMember(FAlphaBlend)                               BlendOut                                                    OFFSET(getStruct<T>, {0x68, 48, 0, 0})
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UContextualAnimActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimActorInterface.GetMesh
	// class USkeletalMeshComponent* GetMesh();                                                                                 // [0x7cd0038] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimManager
/// Size: 0x0068 (0x000028 - 0x000090)
class UContextualAnimManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TSet<UContextualAnimSceneActorComponent*>) SceneActorCompContainer                                     OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<class UContextualAnimSceneInstance*>) Instances                                                 OFFSET(get<T>, {0x80, 16, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimManager.TryStopSceneWithActor
	// bool TryStopSceneWithActor(class AActor* Actor);                                                                         // [0x7cd10b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimManager.OnSceneInstanceEnded
	// void OnSceneInstanceEnded(class UContextualAnimSceneInstance* SceneInstance);                                            // [0x7cd08fc] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimManager.IsActorInAnyScene
	// bool IsActorInAnyScene(class AActor* Actor);                                                                             // [0x7cd021c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimManager.GetSceneWithActor
	// class UContextualAnimSceneInstance* GetSceneWithActor(class AActor* Actor);                                              // [0x7cd0160] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimManager.GetContextualAnimManager
	// class UContextualAnimManager* GetContextualAnimManager(class UObject* WorldContextObject);                               // [0x7ccfe4c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimManager.BP_TryStartScene
	// class UContextualAnimSceneInstance* BP_TryStartScene(class UContextualAnimSceneAsset* SceneAsset, FContextualAnimStartSceneParams& Params); // [0x7cceaec] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneActorComponent
/// Size: 0x01B0 (0x000570 - 0x000720)
class UContextualAnimSceneActorComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	SMember(FMulticastInlineDelegate)                  OnJoinedSceneDelegate                                       OFFSET(getStruct<T>, {0x578, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLeftSceneDelegate                                         OFFSET(getStruct<T>, {0x588, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayMontageNotifyBeginDelegate                            OFFSET(getStruct<T>, {0x598, 16, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          SceneAsset                                                  OFFSET(get<T>, {0x5A8, 8, 0, 0})
	DMember(bool)                                      bEnableDebug                                                OFFSET(get<bool>, {0x5B0, 1, 0, 0})
	SMember(FContextualAnimRepBindingsData)            RepBindings                                                 OFFSET(getStruct<T>, {0x5B8, 80, 0, 0})
	SMember(FContextualAnimRepLateJoinData)            RepLateJoinData                                             OFFSET(getStruct<T>, {0x608, 56, 0, 0})
	SMember(FContextualAnimRepTransitionData)          RepTransitionData                                           OFFSET(getStruct<T>, {0x640, 40, 0, 0})
	SMember(FContextualAnimRepTransitionData)          RepTransitionSingleActorData                                OFFSET(getStruct<T>, {0x668, 40, 0, 0})
	SMember(FContextualAnimSceneBindings)              Bindings                                                    OFFSET(getStruct<T>, {0x690, 40, 0, 0})
	CMember(TArray<FContextualAnimIKTarget>)           IKTargets                                                   OFFSET(get<T>, {0x6B8, 16, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.TransitionSingleActor
	// bool TransitionSingleActor(int32_t SectionIdx, int32_t AnimSetIdx);                                                      // [0x7cd0ff8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.TransitionContextualAnimScene
	// bool TransitionContextualAnimScene(FName SectionName);                                                                   // [0x7cd0f6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.StartContextualAnimScene
	// bool StartContextualAnimScene(FContextualAnimSceneBindings& InBindings);                                                 // [0x7cd0eb4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.ServerStartContextualAnimScene
	// void ServerStartContextualAnimScene(FContextualAnimSceneBindings InBindings);                                            // [0x7cd0d40] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.ServerEarlyOutContextualAnimScene
	// void ServerEarlyOutContextualAnimScene();                                                                                // [0x7cd0cf4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnTickPose
	// void OnTickPose(class USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion);         // [0x7cd09a0] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_TransitionData
	// void OnRep_TransitionData();                                                                                             // [0x7cd08e8] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_RepTransitionSingleActor
	// void OnRep_RepTransitionSingleActor();                                                                                   // [0x7cd08d4] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_LateJoinData
	// void OnRep_LateJoinData();                                                                                               // [0x7cd08c0] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_Bindings
	// void OnRep_Bindings();                                                                                                   // [0x7cd08ac] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnPlayMontageNotifyBegin
	// void OnPlayMontageNotifyBegin(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);              // [0x7cd07cc] Final|Native|Protected|HasOutParms 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x7cd047c] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnLeftScene
	// void OnLeftScene();                                                                                                      // [0x32e6c74] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnJoinedScene
	// void OnJoinedScene(FContextualAnimSceneBindings& InBindings);                                                            // [0x7cd03f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.LateJoinContextualAnimScene
	// bool LateJoinContextualAnimScene(class AActor* Actor, FName Role);                                                       // [0x7cd0330] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.IsInActiveScene
	// bool IsInActiveScene();                                                                                                  // [0x7cd02d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargets
	// TArray<FContextualAnimIKTarget> GetIKTargets();                                                                          // [0x7ccffc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargetByGoalName
	// FContextualAnimIKTarget GetIKTargetByGoalName(FName GoalName);                                                           // [0x7ccfedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.EarlyOutContextualAnimScene
	// void EarlyOutContextualAnimScene();                                                                                      // [0x7ccec38] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ContextualAnimation.ContextualAnimRolesAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimRolesAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FContextualAnimRoleDefinition>)     Roles                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneAsset
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UContextualAnimSceneAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UContextualAnimRolesAsset*)          RolesAsset                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     PrimaryRole                                                 OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(TArray<FContextualAnimActorPreviewData>)   OverridePreviewData                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FContextualAnimSceneSection>)       Sections                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(class UClass*)                             SceneInstanceClass                                          OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(EContextualAnimCollisionBehavior)          CollisionBehavior                                           OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TArray<FContextualAnimIgnoreChannelsParam>) CollisionChannelsToIgnoreParams                            OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FContextualAnimAttachmentParams>)   AttachmentParams                                            OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bPrecomputeAlignmentTracks                                  OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x9C, 4, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.Query
	// bool Query(FName Role, FContextualAnimQueryResult& OutResult, FContextualAnimQueryParams& QueryParams, FTransform& ToWorldTransform); // [0x7cd0a98] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetRoles
	// TArray<FName> GetRoles();                                                                                                // [0x7cd0060] Final|Native|Public|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria
	// void GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Querier, EContextualAnimCriterionToConsider CriterionToConsider, TArray<FContextualAnimPoint>& OutResult); // [0x7ccf508] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRole
	// void GetAlignmentPointsForSecondaryRole(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, TArray<FContextualAnimPoint>& OutResult); // [0x7cced30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetStartAndEndTimeForWarpSection
	// void BP_GetStartAndEndTimeForWarpSection(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName WarpSectionName, float& OutStartTime, float& OutEndTime); // [0x7ccbeb4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetIKTargetTransformForRoleAtTime
	// FTransform BP_GetIKTargetTransformForRoleAtTime(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName TrackName, float Time); // [0x7ccbcf8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetAlignmentTransformForRoleRelativeToWarpPoint
	// FTransform BP_GetAlignmentTransformForRoleRelativeToWarpPoint(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, float Time); // [0x7ccbb64] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimSetIndexByAnimation
	// int32_t BP_FindAnimSetIndexByAnimation(int32_t SectionIdx, class UAnimSequenceBase* Animation);                          // [0x7ccb930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimationForRole
	// class UAnimSequenceBase* BP_FindAnimationForRole(int32_t SectionIdx, int32_t AnimSetIdx, FName Role);                    // [0x7ccba50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneInstance
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UContextualAnimSceneInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMulticastInlineDelegate)                  OnSectionEndTimeReached                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSceneEnded                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorJoined                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorLeft                                                 OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyBegin                                               OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyEnd                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          SceneAsset                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FContextualAnimSceneBindings)              Bindings                                                    OFFSET(getStruct<T>, {0x90, 40, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.OnNotifyEndReceived
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                   // [0x7cd06ec] Final|Native|Protected|HasOutParms 
	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x7cd060c] Final|Native|Protected|HasOutParms 
	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x7cd0544] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.GetActorByRole
	// class AActor* GetActorByRole(FName Role);                                                                                // [0x7ccec4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion
/// Size: 0x0008 (0x000028 - 0x000030)
class UContextualAnimSelectionCriterion : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EContextualAnimCriterionType)              Type                                                        OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint
/// Size: 0x0000 (0x000030 - 0x000030)
class UContextualAnimSelectionCriterion_Blueprint : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.GetSceneAsset
	// class UContextualAnimSceneAsset* GetSceneAsset();                                                                        // [0x7cd0118] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.BP_DoesQuerierPassCondition
	// bool BP_DoesQuerierPassCondition(FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Querier); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea
/// Size: 0x0018 (0x000030 - 0x000048)
class UContextualAnimSelectionCriterion_TriggerArea : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FVector>)                           PolygonPoints                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Cone
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimSelectionCriterion_Cone : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EContextualAnimCriterionConeMode)          Mode                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     HalfAngle                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Distance
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimSelectionCriterion_Distance : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EContextualAnimCriterionDistanceMode)      Mode                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimTransition
/// Size: 0x0000 (0x000028 - 0x000028)
class UContextualAnimTransition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimTransition.CanEnterTransition
	// bool CanEnterTransition(class UContextualAnimSceneInstance* SceneInstance, FName& FromSection, FName& ToSection);        // [0x2177018] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UContextualAnimUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSectionAndAnimSetIndices
	// void BP_SceneBindings_GetSectionAndAnimSetIndices(FContextualAnimSceneBindings& Bindings, int32_t& SectionIdx, int32_t& AnimSetIdx); // [0x7cce9a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSceneAsset
	// class UContextualAnimSceneAsset* BP_SceneBindings_GetSceneAsset(FContextualAnimSceneBindings& Bindings);                 // [0x7cce8f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindings
	// TArray<FContextualAnimSceneBinding> BP_SceneBindings_GetBindings(FContextualAnimSceneBindings& Bindings);                // [0x7cce848] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByRole
	// FContextualAnimSceneBinding BP_SceneBindings_GetBindingByRole(FContextualAnimSceneBindings& Bindings, FName Role);       // [0x7cce698] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByActor
	// FContextualAnimSceneBinding BP_SceneBindings_GetBindingByActor(FContextualAnimSceneBindings& Bindings, class AActor* Actor); // [0x7cce4e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformFromBinding
	// FTransform BP_SceneBindings_GetAlignmentTransformFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding, FContextualAnimWarpPoint& WarpPoint); // [0x7cce2e8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint
	// FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint(FContextualAnimSceneBindings& Bindings, FName Role, FContextualAnimWarpPoint& WarpPoint, float Time); // [0x7ccdfa4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole
	// FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(FContextualAnimSceneBindings& Bindings, FName Role, FName RelativeToRole, float Time); // [0x7ccdc18] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_CalculateWarpPoints
	// void BP_SceneBindings_CalculateWarpPoints(FContextualAnimSceneBindings& Bindings, TArray<FContextualAnimWarpPoint>& OutWarpPoints); // [0x7ccd4fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_AddOrUpdateWarpTargetsForBindings
	// void BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(FContextualAnimSceneBindings& Bindings);                         // [0x7ccd460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActorWithExternalTransform
	// FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActorWithExternalTransform(class AActor* Actor, FTransform ExternalTransform); // [0x7cccd48] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActor
	// FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActor(class AActor* Actor);                            // [0x7cccc6c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_HasMatchingGameplayTag
	// bool BP_SceneBindingContext_HasMatchingGameplayTag(FContextualAnimSceneBindingContext& BindingContext, FGameplayTag& TagToCheck); // [0x7cccaa8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_HasAnyMatchingGameplayTags
	// bool BP_SceneBindingContext_HasAnyMatchingGameplayTags(FContextualAnimSceneBindingContext& BindingContext, FGameplayTagContainer& TagContainer); // [0x7ccc938] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_HasAllMatchingGameplayTags
	// bool BP_SceneBindingContext_HasAllMatchingGameplayTags(FContextualAnimSceneBindingContext& BindingContext, FGameplayTagContainer& TagContainer); // [0x7ccc790] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetVelocity
	// FVector BP_SceneBindingContext_GetVelocity(FContextualAnimSceneBindingContext& BindingContext);                          // [0x7ccc658] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetTransform
	// FTransform BP_SceneBindingContext_GetTransform(FContextualAnimSceneBindingContext& BindingContext);                      // [0x7ccc548] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetGameplayTags
	// FGameplayTagContainer BP_SceneBindingContext_GetGameplayTags(FContextualAnimSceneBindingContext& BindingContext);        // [0x7ccc460] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetActor
	// class AActor* BP_SceneBindingContext_GetActor(FContextualAnimSceneBindingContext& BindingContext);                       // [0x7ccc380] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetSkeletalMesh
	// class USkeletalMeshComponent* BP_SceneBinding_GetSkeletalMesh(FContextualAnimSceneBinding& Binding);                     // [0x7ccd320] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetRoleFromBinding
	// FName BP_SceneBinding_GetRoleFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding);  // [0x7ccd1b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetAnimationFromBinding
	// class UAnimSequenceBase* BP_SceneBinding_GetAnimationFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding); // [0x7ccd050] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetActor
	// class AActor* BP_SceneBinding_GetActor(FContextualAnimSceneBinding& Binding);                                            // [0x7cccf6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionTimeLeftFromPos
	// float BP_Montage_GetSectionTimeLeftFromPos(class UAnimMontage* Montage, float Position);                                 // [0x7ccc2b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionStartAndEndTime
	// void BP_Montage_GetSectionStartAndEndTime(class UAnimMontage* Montage, int32_t SectionIndex, float& OutStartTime, float& OutEndTime); // [0x7ccc164] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionLength
	// float BP_Montage_GetSectionLength(class UAnimMontage* Montage, int32_t SectionIndex);                                    // [0x7ccc098] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_DrawDebugPose
	// void BP_DrawDebugPose(class UObject* WorldContextObject, class UAnimSequenceBase* Animation, float Time, FTransform LocalToWorldTransform, FLinearColor Color, float Lifetime, float Thickness); // [0x7ccb408] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindingsForTwoActors
	// bool BP_CreateContextualAnimSceneBindingsForTwoActors(class UContextualAnimSceneAsset* SceneAsset, FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Secondary, FContextualAnimSceneBindings& OutBindings); // [0x7ccb1cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindings
	// bool BP_CreateContextualAnimSceneBindings(class UContextualAnimSceneAsset* SceneAsset, TMap<FName, FContextualAnimSceneBindingContext>& Params, FContextualAnimSceneBindings& OutBindings); // [0x7ccb040] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpTarget
/// Size: 0x0040 (0x000000 - 0x000040)
class FContextualAnimWarpTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TargetName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     TargetRotation                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepData
/// Size: 0x0001 (0x000000 - 0x000001)
class FContextualAnimRepData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      RepCounter                                                  OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepBindingsData
/// Size: 0x004F (0x000001 - 0x000050)
class FContextualAnimRepBindingsData : public FContextualAnimRepData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FContextualAnimSceneBindings)              Bindings                                                    OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	CMember(TArray<FContextualAnimWarpPoint>)          WarpPoints                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPoint
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimWarpPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBindings
/// Size: 0x0028 (0x000000 - 0x000028)
class FContextualAnimSceneBindings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(char)                                      ID                                                          OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          SceneAsset                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(TArray<FContextualAnimSceneBinding>)       Data                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBinding
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FContextualAnimSceneBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FContextualAnimSceneBindingContext)        Context                                                     OFFSET(getStruct<T>, {0x0, 224, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBindingContext
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimSceneBindingContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UContextualAnimSceneActorComponent*>) CachedSceneActorComp                              OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimInstance*>)            CachedAnimInstance                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   CachedSkeletalMesh                                          OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterMovementComponent*>) CachedMovementComp                                       OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepLateJoinData
/// Size: 0x0037 (0x000001 - 0x000038)
class FContextualAnimRepLateJoinData : public FContextualAnimRepData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(TArray<FContextualAnimWarpPoint>)          WarpPoints                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepTransitionData
/// Size: 0x0027 (0x000001 - 0x000028)
class FContextualAnimRepTransitionData : public FContextualAnimRepData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(char)                                      ID                                                          OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(char)                                      SectionIdx                                                  OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      AnimSetIdx                                                  OFFSET(get<char>, {0x3, 1, 0, 0})
	CMember(TArray<FContextualAnimWarpPoint>)          WarpPoints                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIgnoreChannelsParam
/// Size: 0x0018 (0x000000 - 0x000018)
class FContextualAnimIgnoreChannelsParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<TEnumAsByte<ECollisionChannel>>)    Channels                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimAttachmentParams
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimAttachmentParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSet
/// Size: 0x0068 (0x000000 - 0x000068)
class FContextualAnimSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FContextualAnimTrack>)              Tracks                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, FTransform>)                   WarpPoints                                                  OFFSET(get<T>, {0x10, 80, 0, 0})
	DMember(float)                                     RandomWeight                                                OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimTrack
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UAnimSequenceBase*)                  Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     AnimMaxStartTime                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TEnumAsByte<EMovementMode>)                MovementMode                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(bool)                                      bOptional                                                   OFFSET(get<bool>, {0xD, 1, 0, 0})
	SMember(FContextualAnimAlignmentTrackContainer)    AlignmentData                                               OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FContextualAnimAlignmentTrackContainer)    IKTargetData                                                OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(TArray<class UContextualAnimSelectionCriterion*>) SelectionCriteria                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FTransform)                                MeshToScene                                                 OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimAlignmentTrackContainer
/// Size: 0x0028 (0x000000 - 0x000028)
class FContextualAnimAlignmentTrackContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FAnimSequenceTrackContainer)               Tracks                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     SampleInterval                                              OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneSection
/// Size: 0x0078 (0x000000 - 0x000078)
class FContextualAnimSceneSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FContextualAnimSet>)                AnimSets                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FName, FContextualAnimIKTargetDefContainer>) RoleToIKTargetDefsMap                                OFFSET(get<T>, {0x18, 80, 0, 0})
	CMember(TArray<FContextualAnimWarpPointDefinition>) WarpPointDefinitions                                       OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPointDefinition
/// Size: 0x001C (0x000000 - 0x00001C)
class FContextualAnimWarpPointDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     WarpTargetName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EContextualAnimWarpPointDefinitionMode)    Mode                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FContextualAnimWarpPointCustomParams)      Params                                                      OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPointCustomParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FContextualAnimWarpPointCustomParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Origin                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAlongClosestDistance                                       OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FName)                                     OtherRole                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTargetDefContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FContextualAnimIKTargetDefContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FContextualAnimIKTargetDefinition>) IKTargetDefs                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTargetDefinition
/// Size: 0x0014 (0x000000 - 0x000014)
class FContextualAnimIKTargetDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(EContextualAnimIKTargetProvider)           Provider                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FName)                                     TargetRoleName                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     TargetBoneName                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimPoint
/// Size: 0x0080 (0x000000 - 0x000080)
class FContextualAnimPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimActorPreviewData
/// Size: 0x0088 (0x000000 - 0x000088)
class FContextualAnimActorPreviewData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EContextualAnimActorPreviewType)           Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PreviewSkeletalMesh                                         OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewAnimInstance                                         OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              PreviewStaticMesh                                           OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewActorClass                                           OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTarget
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimIKTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRoleDefinition
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimRoleDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsCharacter                                                OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FTransform)                                MeshToComponent                                             OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimStartSceneParams
/// Size: 0x0068 (0x000000 - 0x000068)
class FContextualAnimStartSceneParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FName, FContextualAnimSceneBindingContext>) RoleToActorMap                                        OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimQueryResult
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<UAnimMontage*>)             Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                EntryTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                SyncTransform                                               OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	DMember(float)                                     AnimStartTime                                               OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimQueryParams
/// Size: 0x0080 (0x000000 - 0x000080)
class FContextualAnimQueryParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Querier                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                QueryTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bComplexQuery                                               OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bFindAnimStartTime                                          OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Enum /Script/ContextualAnimation.EContextualAnimCollisionBehavior
/// Size: 0x04
enum EContextualAnimCollisionBehavior : uint8_t
{
	EContextualAnimCollisionBehavior__None                                           = 0,
	EContextualAnimCollisionBehavior__IgnoreActorWhenMoving                          = 1,
	EContextualAnimCollisionBehavior__IgnoreChannels                                 = 2,
	EContextualAnimCollisionBehavior__EContextualAnimCollisionBehavior_MAX           = 3
};

/// Enum /Script/ContextualAnimation.EContextualAnimPointType
/// Size: 0x04
enum EContextualAnimPointType : uint8_t
{
	EContextualAnimPointType__FirstFrame                                             = 0,
	EContextualAnimPointType__SyncFrame                                              = 1,
	EContextualAnimPointType__LastFrame                                              = 2,
	EContextualAnimPointType__EContextualAnimPointType_MAX                           = 3
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionToConsider
/// Size: 0x04
enum EContextualAnimCriterionToConsider : uint8_t
{
	EContextualAnimCriterionToConsider__All                                          = 0,
	EContextualAnimCriterionToConsider__Spatial                                      = 1,
	EContextualAnimCriterionToConsider__Other                                        = 2,
	EContextualAnimCriterionToConsider__EContextualAnimCriterionToConsider_MAX       = 3
};

/// Enum /Script/ContextualAnimation.EContextualAnimActorPreviewType
/// Size: 0x05
enum EContextualAnimActorPreviewType : uint8_t
{
	EContextualAnimActorPreviewType__SkeletalMesh                                    = 0,
	EContextualAnimActorPreviewType__StaticMesh                                      = 1,
	EContextualAnimActorPreviewType__Actor                                           = 2,
	EContextualAnimActorPreviewType__None                                            = 3,
	EContextualAnimActorPreviewType__EContextualAnimActorPreviewType_MAX             = 4
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionType
/// Size: 0x03
enum EContextualAnimCriterionType : uint8_t
{
	EContextualAnimCriterionType__Spatial                                            = 0,
	EContextualAnimCriterionType__Other                                              = 1,
	EContextualAnimCriterionType__EContextualAnimCriterionType_MAX                   = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionConeMode
/// Size: 0x03
enum EContextualAnimCriterionConeMode : uint8_t
{
	EContextualAnimCriterionConeMode__ToPrimary                                      = 0,
	EContextualAnimCriterionConeMode__FromPrimary                                    = 1,
	EContextualAnimCriterionConeMode__EContextualAnimCriterionConeMode_MAX           = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionDistanceMode
/// Size: 0x03
enum EContextualAnimCriterionDistanceMode : uint8_t
{
	EContextualAnimCriterionDistanceMode__Distance_3D                                = 0,
	EContextualAnimCriterionDistanceMode__Distance_2D                                = 1,
	EContextualAnimCriterionDistanceMode__Distance_MAX                               = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimJoinRule
/// Size: 0x03
enum EContextualAnimJoinRule : uint8_t
{
	EContextualAnimJoinRule__Default                                                 = 0,
	EContextualAnimJoinRule__Late                                                    = 1,
	EContextualAnimJoinRule__EContextualAnimJoinRule_MAX                             = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimIKTargetProvider
/// Size: 0x03
enum EContextualAnimIKTargetProvider : uint8_t
{
	EContextualAnimIKTargetProvider__Autogenerated                                   = 0,
	EContextualAnimIKTargetProvider__Bone                                            = 1,
	EContextualAnimIKTargetProvider__EContextualAnimIKTargetProvider_MAX             = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimWarpPointDefinitionMode
/// Size: 0x04
enum EContextualAnimWarpPointDefinitionMode : uint8_t
{
	EContextualAnimWarpPointDefinitionMode__PrimaryActor                             = 0,
	EContextualAnimWarpPointDefinitionMode__Socket                                   = 1,
	EContextualAnimWarpPointDefinitionMode__Custom                                   = 2,
	EContextualAnimWarpPointDefinitionMode__EContextualAnimWarpPointDefinitionMode_MAX = 3
};

