
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: GameplayTags
/// dependency: NavigationSystem

/// Enum /Script/AIPatrolPath.EAIPatrolPathVersion
/// Size: 0x06
enum class EAIPatrolPathVersion : uint8_t
{
	EAIPatrolPathVersion__InitialVersion                                             = 0,
	EAIPatrolPathVersion__TemplateFromQuickBarVersion                                = 1,
	EAIPatrolPathVersion__PatrolPointMovedToUserSettingsVersion                      = 2,
	EAIPatrolPathVersion__VersionPlusOne                                             = 3,
	EAIPatrolPathVersion__LatestVersion                                              = 2,
	EAIPatrolPathVersion__EAIPatrolPathVersion_MAX                                   = 4
};

/// Enum /Script/AIPatrolPath.SegmentPathStatus
/// Size: 0x06
enum class SegmentPathStatus : uint8_t
{
	SegmentPathStatus__INVALID                                                       = 0,
	SegmentPathStatus__CALCULATING                                                   = 1,
	SegmentPathStatus__RECALCULATING_PENDING                                         = 2,
	SegmentPathStatus__PATH_FAILED                                                   = 3,
	SegmentPathStatus__PATH_SUCCESS                                                  = 4,
	SegmentPathStatus__SegmentPathStatus_MAX                                         = 5
};

/// Class /Script/AIPatrolPath.AIPatrolPathEditorComponent
/// Size: 0x00A0 (0x000550 - 0x0005F0)
class UAIPatrolPathEditorComponent : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0550   (0x00A0)  MISSED
};

/// Struct /Script/AIPatrolPath.PatrolPathSegmentDetails
/// Size: 0x0108 (0x000000 - 0x000108)
struct FPatrolPathSegmentDetails
{ 
	class UNavigationPath*                             Path;                                                       // 0x00A8   (0x0008)  
	class UAIPatrolPathComponent*                      Start;                                                      // 0x00B0   (0x0008)  
	class UAIPatrolPathComponent*                      End;                                                        // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x00C0   (0x0048)  MISSED
};

/// Class /Script/AIPatrolPath.AIPatrolPathComponent
/// Size: 0x0308 (0x0000A0 - 0x0003A8)
class UAIPatrolPathComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x00A0   (0x0028)  MISSED
	SDK_UNDEFINED(16,11600) /* TArray<FString> */      __um(SharedOptionNames);                                    // 0x00C8   (0x0010)  
	SDK_UNDEFINED(32,11601) /* TWeakObjectPtr<UClass*> */ __um(DefaultAIPawn);                                     // 0x00D8   (0x0020)  
	class UClass*                                      PathRendererClass;                                          // 0x00F8   (0x0008)  
	bool                                               bAllowPartialPaths;                                         // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0101   (0x0007)  MISSED
	FGameplayTagContainer                              UnableToPlaceNewDeviceTags;                                 // 0x0108   (0x0020)  
	FNavAgentProperties                                CachedAIAgentProperties;                                    // 0x0128   (0x0030)  
	class UNavigationSystemV1*                         CachedNavSystem;                                            // 0x0158   (0x0008)  
	class ANavigationData*                             CachedNavData;                                              // 0x0160   (0x0008)  
	class UClass*                                      CachedFilterClass;                                          // 0x0168   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0170   (0x0010)  MISSED
	SDK_UNDEFINED(16,11602) /* FMulticastInlineDelegate */ __um(OnPatrolPointFailedToReach);                       // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,11603) /* FMulticastInlineDelegate */ __um(OnPatrolPointReached);                             // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,11604) /* FMulticastInlineDelegate */ __um(OnPatrolPathStarted);                              // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,11605) /* FMulticastInlineDelegate */ __um(OnPatrolPathStopped);                              // 0x01B0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x01C0   (0x0008)  MISSED
	TArray<class AActor*>                              PatrolPath;                                                 // 0x01C8   (0x0010)  
	FPatrolPathSegmentDetails                          PathSegmentDetails;                                         // 0x01D8   (0x0108)  
	unsigned char                                      UnknownData04_5[0x10];                                      // 0x02E0   (0x0010)  MISSED
	class UAIPatrolPathComponent*                      CopiedFrom;                                                 // 0x02F0   (0x0008)  
	class AActor*                                      CurrentCloningNode;                                         // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x0300   (0x0008)  MISSED
	class UAIPatrolPathComponent*                      CopiedFromCut;                                              // 0x0308   (0x0008)  
	class AFortCreativePatrolPath*                     PatrolPathActor;                                            // 0x0310   (0x0008)  
	class AFortAthenaPatrolPoint*                      PatrolPointActor;                                           // 0x0318   (0x0008)  
	TArray<class UAIPatrolPathComponent*>              MultiSelectActorToEnterList;                                // 0x0320   (0x0010)  
	unsigned char                                      UnknownData06_5[0x70];                                      // 0x0330   (0x0070)  MISSED
	class UAIPatrolPathEditorComponent*                PatrolPathEditorComponent;                                  // 0x03A0   (0x0008)  


	/// Functions
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.UpdateEditorComponent
	// void UpdateEditorComponent();                                                                                         // [0x3047908] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.ShouldRenderPath
	// bool ShouldRenderPath();                                                                                              // [0x130d900] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetRenderPath
	// void SetRenderPath(bool bRenderPath);                                                                                 // [0xb30af0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrolPathGroup
	// void SetPatrolPathGroup(EFortCreativePatrolPathGroup PatrolPathGroup);                                                // [0xb30ad78] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrolPathEnabled
	// void SetPatrolPathEnabled(bool bIsEnabled);                                                                           // [0xb30acb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrollingMode
	// void SetPatrollingMode(EPatrollingMode NewMode);                                                                      // [0xb30ae38] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RequestRenderPath
	// void RequestRenderPath();                                                                                             // [0xb30aca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RenderToNextPoint
	// void RenderToNextPoint();                                                                                             // [0xb30ac8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RenderToNextAndPreviousPoint
	// void RenderToNextAndPreviousPoint();                                                                                  // [0xb30ac20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RemovePoint
	// bool RemovePoint();                                                                                                   // [0xb30abfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathPointIndexToDevice
	// void PropagatePatrolPathPointIndexToDevice(int32_t NewPatrolPathPointIndex);                                          // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathIndexToDevice
	// void PropagatePatrolPathIndexToDevice(int32_t NewPatrolPathIndex);                                                    // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PostFinishSpawningActor
	// void PostFinishSpawningActor();                                                                                       // [0xb30abe8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPointReached
	// void PatrolPointReached(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator);                    // [0xb30aaa8] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPointFailedToReach
	// void PatrolPointFailedToReach(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator);              // [0xb30a968] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPathStopped
	// void PatrolPathStopped(class AAIController* Instigator);                                                              // [0xb30a8a8] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPathStarted
	// void PatrolPathStarted(class AAIController* Instigator);                                                              // [0xb30a7e8] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnPatrolPathActorAssigned
	// void OnPatrolPathActorAssigned();                                                                                     // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnPathExtremitiesChanged
	// void OnPathExtremitiesChanged(bool bIsStart, bool bIsEnd);                                                            // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnAnyPropertyChanged
	// void OnAnyPropertyChanged();                                                                                          // [0x3047908] Final|Native|Protected 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.NotifyEditorUserOptionChanged
	// void NotifyEditorUserOptionChanged(TArray<FString>& UserOptions);                                                     // [0x83cd920] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.HasValidPatrolPath
	// bool HasValidPatrolPath();                                                                                            // [0xb30a79c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndexFromDevice
	// int32_t GetPatrolPathPointIndexFromDevice();                                                                          // [0x130d900] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndex
	// int32_t GetPatrolPathPointIndex();                                                                                    // [0xb30a778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPoint
	// class UAIPatrolPathComponent* GetPatrolPathPoint(int32_t InPatrolPathIndex, int32_t InPatrolPathPointIndex);          // [0xb30a62c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndexFromDevice
	// int32_t GetPatrolPathIndexFromDevice();                                                                               // [0x130d900] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndex
	// int32_t GetPatrolPathIndex();                                                                                         // [0xb30a608] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathGroup
	// EFortCreativePatrolPathGroup GetPatrolPathGroup();                                                                    // [0x130d900] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrollingMode
	// EPatrollingMode GetPatrollingMode();                                                                                  // [0x130d900] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolFilterOptions
	// class UClass* GetPatrolFilterOptions();                                                                               // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetNextAvailablePatrolPathIndex
	// bool GetNextAvailablePatrolPathIndex(int32_t& NextAvailableIndex);                                                    // [0xb30a570] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetLinkedPatrolPoints
	// TArray<UAIPatrolPathComponent*> GetLinkedPatrolPoints();                                                              // [0xb30a504] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GeneratePathPoints
	// void GeneratePathPoints(EFortCreativePatrolPathGroup PatrolPathGroup, bool bGenerationCausedByDuplication);           // [0xb30a3c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.CanNextPointBeReached
	// bool CanNextPointBeReached();                                                                                         // [0xb30a3a4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

