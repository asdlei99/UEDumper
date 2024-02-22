
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
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/AscenderCodeRuntime.FortCheatManager_AscenderZipline
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_AscenderZipline : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/AscenderCodeRuntime.FortCheatManager_AscenderZipline.RemoveAscenders
	// void RemoveAscenders(bool bRemoveAscendersOn);                                                                        // [0x5dd0bf8] Final|Exec|Native|Public 
};

/// Class /Script/AscenderCodeRuntime.FortAscenderZipline
/// Size: 0x0358 (0x000C98 - 0x000FF0)
class AFortAscenderZipline : public AFortAthenaSplineZipline
{ 
public:
	SDK_UNDEFINED(16,11701) /* FMulticastInlineDelegate */ __um(OnAscenderSetupComplete);                          // 0x0C98   (0x0010)  
	FName                                              SplineTopAttachPointName;                                   // 0x0CA8   (0x0004)  
	bool                                               bAutoFindSplineEndLocation;                                 // 0x0CAC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0CAD   (0x0003)  MISSED
	float                                              SplineOffsetFromGround;                                     // 0x0CB0   (0x0004)  
	float                                              CableOffsetFromSplineEnd;                                   // 0x0CB4   (0x0004)  
	float                                              SplineLength;                                               // 0x0CB8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0CBC   (0x0004)  MISSED
	class UStaticMesh*                                 SplineStaticMesh;                                           // 0x0CC0   (0x0008)  
	SDK_UNDEFINED(1,11702) /* TEnumAsByte<ESplineMeshAxis> */ __um(MeshForwardAxis);                               // 0x0CC8   (0x0001)  
	bool                                               bHandleReturning;                                           // 0x0CC9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0CCA   (0x0002)  MISSED
	float                                              HandleReturnSpeed;                                          // 0x0CCC   (0x0004)  
	bool                                               bCableDropping;                                             // 0x0CD0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0CD1   (0x0003)  MISSED
	float                                              CableDropSpeed;                                             // 0x0CD4   (0x0004)  
	float                                              YawRotationOffsetWhileUsingHandle;                          // 0x0CD8   (0x0004)  
	float                                              YawRotationOffsetWhileSlidingDown;                          // 0x0CDC   (0x0004)  
	bool                                               bUseComplexSplineCollision;                                 // 0x0CE0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0CE1   (0x0003)  MISSED
	float                                              SimpleSplineCollisionRadius;                                // 0x0CE4   (0x0004)  
	float                                              SimpleSplineCollisionHeightExtension;                       // 0x0CE8   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0CEC   (0x0004)  MISSED
	FScalableFloat                                     DescendMinDistanceFromBottom;                               // 0x0CF0   (0x0028)  
	FScalableFloat                                     AscendReachedEndHorizontalLaunchSpeed;                      // 0x0D18   (0x0028)  
	FScalableFloat                                     AscendReachedEndVerticalLaunchSpeed;                        // 0x0D40   (0x0028)  
	FScalableFloat                                     AscendJumpedOffHorizontalLaunchSpeed;                       // 0x0D68   (0x0028)  
	FScalableFloat                                     AscendJumpedOffVerticalLaunchSpeed;                         // 0x0D90   (0x0028)  
	FScalableFloat                                     DescendReachedEndHorizontalLaunchSpeed;                     // 0x0DB8   (0x0028)  
	FScalableFloat                                     DescendReachedEndVerticalLaunchSpeed;                       // 0x0DE0   (0x0028)  
	FScalableFloat                                     DescendJumpedOffHorizontalLaunchSpeed;                      // 0x0E08   (0x0028)  
	FScalableFloat                                     DescendJumpedOffVerticalLaunchSpeed;                        // 0x0E30   (0x0028)  
	FScalableFloat                                     HandleActorHitPlayerHorizontalLaunchSpeed;                  // 0x0E58   (0x0028)  
	FScalableFloat                                     HandleActorHitPlayerVerticalLaunchSpeed;                    // 0x0E80   (0x0028)  
	FVector                                            HandleDestroyBuildingsOverlapExtents;                       // 0x0EA8   (0x0018)  
	FVector                                            PlayerDestroyBuildingsOverlapExtents;                       // 0x0EC0   (0x0018)  
	FVector                                            InitialSplineEndLocation;                                   // 0x0ED8   (0x0018)  
	FVector                                            CurrentSplineEndLocation;                                   // 0x0EF0   (0x0018)  
	FVector                                            TargetSplineEndLocation;                                    // 0x0F08   (0x0018)  
	FVector                                            CurrentHandleLocation;                                      // 0x0F20   (0x0018)  
	SDK_UNDEFINED(8,11703) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(CurrentInteractComponent);              // 0x0F38   (0x0008)  
	SDK_UNDEFINED(8,11704) /* TWeakObjectPtr<AFortPlayerPawn*> */ __um(PawnUsingHandle);                           // 0x0F40   (0x0008)  
	SDK_UNDEFINED(8,11705) /* TWeakObjectPtr<AFortPlayerPawn*> */ __um(PreviousPawnUsingHandle);                   // 0x0F48   (0x0008)  
	class USplineMeshComponent*                        SplineMesh;                                                 // 0x0F50   (0x0008)  
	class UCapsuleComponent*                           SimpleSplineMeshCollision;                                  // 0x0F58   (0x0008)  
	SDK_UNDEFINED(8,11706) /* TWeakObjectPtr<ABuildingActor*> */ __um(FloorActor);                                 // 0x0F60   (0x0008)  
	SDK_UNDEFINED(16,11707) /* TArray<TWeakObjectPtr<AFortPlayerPawn*>> */ __um(RotationLockedPawns);              // 0x0F68   (0x0010)  
	unsigned char                                      UnknownData06_5[0x68];                                      // 0x0F78   (0x0068)  MISSED
	class UFortLinkToActorComponent*                   LinkToActorComponent;                                       // 0x0FE0   (0x0008)  
	class UFortZiplineLinkComponent*                   ZiplineLinkComponent;                                       // 0x0FE8   (0x0008)  


	/// Functions
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.SetupAscender
	// void SetupAscender(bool bFromConstruction, bool bFromReplication);                                                    // [0x32f8c48] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation
	// void OnRep_TargetSplineEndLocation();                                                                                 // [0x3396a3c] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle
	// void OnRep_PawnUsingHandle();                                                                                         // [0x39543b8] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation
	// void OnRep_InitialSplineEndLocation();                                                                                // [0x2e66f54] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied
	// void HandlePawnUsingHandleDied(class AFortPawn* DeadPawn);                                                            // [0xad7b404] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged
	// void HandleFloorActorHealthChanged();                                                                                 // [0xad7b3f0] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed
	// void HandleFloorActorDestroyed(class AActor* Actor);                                                                  // [0xad7b370] Final|Native|Protected 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetTopComponent
	// class UPrimitiveComponent* GetTopComponent();                                                                         // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle
	// class AFortPlayerPawn* GetPawnUsingHandle();                                                                          // [0x3767cd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride
	// class UPrimitiveComponent* GetInteractComponentOverride(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent); // [0xad7b2a4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent
	// class UPrimitiveComponent* GetHandleComponent();                                                                      // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle
	// void BP_HandleUpdatedLoweringHandle();                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable
	// void BP_HandleUpdatedLoweringCable();                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle
	// void BP_HandleStoppedLoweringHandle();                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable
	// void BP_HandleStoppedLoweringCable();                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle
	// void BP_HandleStartedLoweringHandle();                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable
	// void BP_HandleStartedLoweringCable();                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle
	// void BP_HandlePlayerStoppedUsingHandle(class AFortPlayerPawn* Player);                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle
	// void BP_HandlePlayerStartedUsingHandle(class AFortPlayerPawn* Player);                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage
	// void ApplyStructureDamage(class ABuildingSMActor* BuildingActor, class AActor* DamageSource);                         // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent|Const 
};

