
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTasks

/// Enum /Script/TargetingSystem.ETargetingAOEShape
/// Size: 0x06
enum class ETargetingAOEShape : uint8_t
{
	ETargetingAOEShape__Box                                                          = 0,
	ETargetingAOEShape__Cylinder                                                     = 1,
	ETargetingAOEShape__Sphere                                                       = 2,
	ETargetingAOEShape__Capsule                                                      = 3,
	ETargetingAOEShape__SourceComponent                                              = 4,
	ETargetingAOEShape__ETargetingAOEShape_MAX                                       = 5
};

/// Enum /Script/TargetingSystem.ETargetingTraceType
/// Size: 0x03
enum class ETargetingTraceType : uint8_t
{
	ETargetingTraceType__Line                                                        = 0,
	ETargetingTraceType__Sweep                                                       = 1,
	ETargetingTraceType__ETargetingTraceType_MAX                                     = 2
};

/// Class /Script/TargetingSystem.AbilityTask_PerformTargeting
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UAbilityTask_PerformTargeting : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,2734) /* FMulticastInlineDelegate */ __um(OnTargetReady);                                     // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0088   (0x0020)  MISSED


	/// Functions
	// Function /Script/TargetingSystem.AbilityTask_PerformTargeting.PerformTargetingRequest
	// class UAbilityTask_PerformTargeting* PerformTargetingRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* InTargetingPreset, bool bAllowAsync); // [0x755e240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TargetingSystem.AbilityTask_PerformTargeting.PerformFilteringRequest
	// class UAbilityTask_PerformTargeting* PerformFilteringRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* TargetingPreset, TArray<AActor*> InTargets, bool bAllowAsync); // [0x755dc14] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/TargetingSystem.TargetingRequestHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FTargetingRequestHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Class /Script/TargetingSystem.AsyncAction_PerformTargeting
/// Size: 0x0038 (0x000030 - 0x000068)
class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,2735) /* FMulticastInlineDelegate */ __um(Targeted);                                          // 0x0030   (0x0010)  
	class UTargetingPreset*                            TargetingPreset;                                            // 0x0040   (0x0008)  
	SDK_UNDEFINED(8,2736) /* TWeakObjectPtr<AActor*> */ __um(WeakSourceActor);                                     // 0x0048   (0x0008)  
	TArray<class AActor*>                              InitialTargets;                                             // 0x0050   (0x0010)  
	FTargetingRequestHandle                            TargetingHandle;                                            // 0x0060   (0x0004)  
	bool                                               bUseAsyncTargeting : 1;                                     // 0x0064:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED


	/// Functions
	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest
	// class UAsyncAction_PerformTargeting* PerformTargetingRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting); // [0x755e42c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest
	// class UAsyncAction_PerformTargeting* PerformFilteringRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting, TArray<AActor*> InTargets); // [0x755ded0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.GetTargetingHandle
	// FTargetingRequestHandle GetTargetingHandle();                                                                         // [0x755d384] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TargetingSystem.TargetingTask
/// Size: 0x0000 (0x000028 - 0x000028)
class UTargetingTask : public UObject
{ 
public:


	/// Functions
	// Function /Script/TargetingSystem.TargetingTask.GetTargetingSubsystem
	// class UTargetingSubsystem* GetTargetingSubsystem(FTargetingRequestHandle& TargetingHandle);                           // [0x755d890] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TargetingSystem.TargetingFilterTask_BasicFilterTemplate
/// Size: 0x0000 (0x000028 - 0x000028)
class UTargetingFilterTask_BasicFilterTemplate : public UTargetingTask
{ 
public:
};

/// Class /Script/TargetingSystem.SimpleTargetingFilterTask
/// Size: 0x0000 (0x000028 - 0x000028)
class USimpleTargetingFilterTask : public UTargetingFilterTask_BasicFilterTemplate
{ 
public:


	/// Functions
	// Function /Script/TargetingSystem.SimpleTargetingFilterTask.BP_ShouldFilterTarget
	// bool BP_ShouldFilterTarget(FTargetingRequestHandle& TargetingHandle, FTargetingDefaultResultData& TargetData);        // [0x130d900] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.SimpleTargetingSelectionTask
/// Size: 0x0000 (0x000028 - 0x000028)
class USimpleTargetingSelectionTask : public UTargetingTask
{ 
public:


	/// Functions
	// Function /Script/TargetingSystem.SimpleTargetingSelectionTask.SelectTargets
	// void SelectTargets(FTargetingRequestHandle& TargetingHandle, FTargetingSourceContext& SourceContext);                 // [0x130d900] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.SimpleTargetingSelectionTask.AddTargetActor
	// bool AddTargetActor(FTargetingRequestHandle& TargetingHandle, class AActor* Actor);                                   // [0x755c7d0] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/TargetingSystem.SimpleTargetingSelectionTask.AddHitResult
	// bool AddHitResult(FTargetingRequestHandle& TargetingHandle, FHitResult& HitResult);                                   // [0x755c698] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/TargetingSystem.TargetingSortTask_Base
/// Size: 0x0008 (0x000028 - 0x000030)
class UTargetingSortTask_Base : public UTargetingTask
{ 
public:
	bool                                               bAscending : 1;                                             // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/TargetingSystem.SimpleTargetingSortTask
/// Size: 0x0000 (0x000030 - 0x000030)
class USimpleTargetingSortTask : public UTargetingSortTask_Base
{ 
public:


	/// Functions
	// Function /Script/TargetingSystem.SimpleTargetingSortTask.BP_GetScoreForTarget
	// float BP_GetScoreForTarget(FTargetingRequestHandle& TargetingHandle, FTargetingDefaultResultData& TargetData);        // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.TargetingFilterTask_ActorClass
/// Size: 0x0020 (0x000028 - 0x000048)
class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate
{ 
public:
	TArray<class UClass*>                              RequiredActorClassFilters;                                  // 0x0028   (0x0010)  
	TArray<class UClass*>                              IgnoredActorClassFilters;                                   // 0x0038   (0x0010)  
};

/// Struct /Script/TargetingSystem.TargetingTaskSet
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTargetingTaskSet
{ 
	TArray<class UTargetingTask*>                      Tasks;                                                      // 0x0000   (0x0010)  
};

/// Class /Script/TargetingSystem.TargetingPreset
/// Size: 0x0010 (0x000030 - 0x000040)
class UTargetingPreset : public UDataAsset
{ 
public:
	FTargetingTaskSet                                  TargetingTaskSet;                                           // 0x0030   (0x0010)  
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_AOE
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UTargetingSelectionTask_AOE : public UTargetingTask
{ 
public:
	ETargetingAOEShape                                 ShapeType;                                                  // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,2737) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannel);                             // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	FCollisionProfileName                              CollisionProfileName;                                       // 0x002C   (0x0004)  
	SDK_UNDEFINED(16,2738) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(CollisionObjectTypes);                 // 0x0030   (0x0010)  
	FVector                                            DefaultSourceOffset;                                        // 0x0040   (0x0018)  
	bool                                               bUseRelativeOffset : 1;                                     // 0x0058:0 (0x0001)  
	bool                                               bIgnoreSourceActor : 1;                                     // 0x0058:1 (0x0001)  
	bool                                               bIgnoreInstigatorActor : 1;                                 // 0x0058:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0059   (0x0007)  MISSED
	FVector                                            HalfExtent;                                                 // 0x0060   (0x0018)  
	FScalableFloat                                     Radius;                                                     // 0x0078   (0x0028)  
	FScalableFloat                                     HalfHeight;                                                 // 0x00A0   (0x0028)  
	FName                                              ComponentTag;                                               // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceRotation
	// FQuat GetSourceRotation(FTargetingRequestHandle& TargetingHandle);                                                    // [0x755d234] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset
	// FVector GetSourceOffset(FTargetingRequestHandle& TargetingHandle);                                                    // [0x755d0d4] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation
	// FVector GetSourceLocation(FTargetingRequestHandle& TargetingHandle);                                                  // [0x755cf74] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_SourceActor
/// Size: 0x0000 (0x000028 - 0x000028)
class UTargetingSelectionTask_SourceActor : public UTargetingTask
{ 
public:
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_Trace
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UTargetingSelectionTask_Trace : public UTargetingTask
{ 
public:
	ETargetingTraceType                                TraceType;                                                  // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,2739) /* TEnumAsByte<ETraceTypeQuery> */ __um(TraceChannel);                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	FCollisionProfileName                              CollisionProfileName;                                       // 0x002C   (0x0004)  
	FScalableFloat                                     DefaultSweptTraceRadius;                                    // 0x0030   (0x0028)  
	FScalableFloat                                     DefaultTraceLength;                                         // 0x0058   (0x0028)  
	FVector                                            DefaultSourceOffset;                                        // 0x0080   (0x0018)  
	FVector                                            ExplicitTraceDirection;                                     // 0x0098   (0x0018)  
	bool                                               bComplexTrace : 1;                                          // 0x00B0:0 (0x0001)  
	bool                                               bIgnoreSourceActor : 1;                                     // 0x00B0:1 (0x0001)  
	bool                                               bIgnoreInstigatorActor : 1;                                 // 0x00B0:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength
	// float GetTraceLength(FTargetingRequestHandle& TargetingHandle);                                                       // [0x755d9d8] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection
	// FVector GetTraceDirection(FTargetingRequestHandle& TargetingHandle);                                                  // [0x755d928] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius
	// float GetSweptTraceRadius(FTargetingRequestHandle& TargetingHandle);                                                  // [0x755d2e4] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset
	// FVector GetSourceOffset(FTargetingRequestHandle& TargetingHandle);                                                    // [0x755d184] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation
	// FVector GetSourceLocation(FTargetingRequestHandle& TargetingHandle);                                                  // [0x755d024] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore
	// void GetAdditionalActorsToIgnore(FTargetingRequestHandle& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore); // [0x755ce38] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.TargetingSubsystem
/// Size: 0x0048 (0x000030 - 0x000078)
class UTargetingSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0030   (0x0010)  MISSED
	TArray<FTargetingRequestHandle>                    AsyncTargetingRequests;                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest
	// FTargetingRequestHandle StartAsyncTargetingRequest(class UTargetingPreset* TargetingPreset, FTargetingSourceContext& InSourceContext, FDelegateProperty CompletionDynamicDelegate); // [0x755e75c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TargetingSystem.TargetingSubsystem.RemoveAsyncTargetingRequestWithHandle
	// void RemoveAsyncTargetingRequestWithHandle(FTargetingRequestHandle& TargetingHandle);                                 // [0x755e6d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TargetingSystem.TargetingSubsystem.OverrideCollisionQueryTaskData
	// void OverrideCollisionQueryTaskData(FTargetingRequestHandle TargetingHandle, FCollisionQueryTaskData& CollisionQueryDataOverride); // [0x755da78] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingSourceContext
	// FTargetingSourceContext GetTargetingSourceContext(FTargetingRequestHandle TargetingHandle);                           // [0x755d720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingResultsActors
	// void GetTargetingResultsActors(FTargetingRequestHandle TargetingHandle, TArray<AActor*>& Targets);                    // [0x755d558] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingResults
	// void GetTargetingResults(FTargetingRequestHandle TargetingHandle, TArray<FHitResult>& OutTargets);                    // [0x755d398] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest
	// void ExecuteTargetingRequest(class UTargetingPreset* TargetingPreset, FTargetingSourceContext& InSourceContext, FDelegateProperty CompletionDynamicDelegate); // [0x755cb08] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TargetingSystem.TargetingFilterTask_SortByDistance
/// Size: 0x0000 (0x000030 - 0x000030)
class UTargetingFilterTask_SortByDistance : public UTargetingSortTask_Base
{ 
public:
};

/// Struct /Script/TargetingSystem.CollisionQueryTaskData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCollisionQueryTaskData
{ 
	TArray<class AActor*>                              IgnoredActors;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/TargetingSystem.TargetingDefaultResultData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FTargetingDefaultResultData
{ 
	FHitResult                                         HitResult;                                                  // 0x0000   (0x00E8)  
	float                                              Score;                                                      // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/TargetingSystem.TargetingDefaultResultsSet
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTargetingDefaultResultsSet
{ 
	TArray<FTargetingDefaultResultData>                TargetResults;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/TargetingSystem.TargetingSourceContext
/// Size: 0x0038 (0x000000 - 0x000038)
struct FTargetingSourceContext
{ 
	class AActor*                                      SourceActor;                                                // 0x0000   (0x0008)  
	class AActor*                                      InstigatorActor;                                            // 0x0008   (0x0008)  
	FVector                                            SourceLocation;                                             // 0x0010   (0x0018)  
	FName                                              SourceSocketName;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UObject*                                     SourceObject;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/TargetingSystem.TargetingRequestData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTargetingRequestData
{ 
	SDK_UNDEFINED(12,2740) /* FDelegateProperty */     __um(TargetingRequestDynamicDelegate);                      // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/TargetingSystem.TargetingAsyncTaskData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTargetingAsyncTaskData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TargetingSystem.TargetingImmediateTaskData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTargetingImmediateTaskData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TargetingSystem.TargetingDebugData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTargetingDebugData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

