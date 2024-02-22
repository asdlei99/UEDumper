
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PlayspaceSystem

/// Enum /Script/FNE_VolumeRuntime.EFNEVolumeShapeTypeEnum
/// Size: 0x05
enum class EFNEVolumeShapeTypeEnum : uint8_t
{
	EFNEVolumeShapeTypeEnum__BoxVolume                                               = 0,
	EFNEVolumeShapeTypeEnum__CylinderVolume                                          = 1,
	EFNEVolumeShapeTypeEnum__SphereVolume                                            = 2,
	EFNEVolumeShapeTypeEnum__CustomVolume                                            = 3,
	EFNEVolumeShapeTypeEnum__EFNEVolumeShapeTypeEnum_MAX                             = 4
};

/// Class /Script/FNE_VolumeRuntime.FNE_Volume
/// Size: 0x0000 (0x000330 - 0x000330)
class AFNE_Volume : public AGameplayVolume
{ 
public:
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeComponent
/// Size: 0x00A0 (0x000270 - 0x000310)
class UFNE_VolumeComponent : public UChildActorComponent
{ 
public:
	SDK_UNDEFINED(16,13871) /* FMulticastInlineDelegate */ __um(OnPlayerStateBeginOverlap);                        // 0x0270   (0x0010)  
	SDK_UNDEFINED(16,13872) /* FMulticastInlineDelegate */ __um(OnPlayerStateEndOverlap);                          // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,13873) /* FMulticastInlineDelegate */ __um(OnOtherActorBeginOverlap);                         // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,13874) /* FMulticastInlineDelegate */ __um(OnOtherActorEndOverlap);                           // 0x02A0   (0x0010)  
	bool                                               bEnableOverlap;                                             // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02B1   (0x0007)  MISSED
	SDK_UNDEFINED(80,13875) /* TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*> */ __um(FNEVolumeShapeMap);             // 0x02B8   (0x0050)  
	class USpatialGameplayActorTrackerComponent*       SpatialGameplayActorTracker;                                // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);        // [0xb81de78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                    // [0xb81dd30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                  // [0xb81dbe8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                     // [0xb81d908] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                          // [0xb81d780] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                  // [0xb81d680] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateEndOverlap
	// void HandleNotifyPlayerStateEndOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);       // [0xb81d0a4] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateBeginOverlap
	// void HandleNotifyPlayerStateBeginOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);     // [0xb81cfe0] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorEndOverlap
	// void HandleNotifyActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                            // [0xb81cf1c] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorBeginOverlap
	// void HandleNotifyActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                          // [0xb81ce58] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolumeBoundsComponent
	// class UOverlapComponent* GetSpawnedVolumeBoundsComponent();                                                           // [0xb81ce34] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolume
	// class AFNE_Volume* GetSpawnedVolume();                                                                                // [0xb81ce10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                              // [0xb81cde0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                // [0xb81cd60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                           // [0xb81cce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                   // [0xb81cc68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                        // [0xb81caf4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                      // [0xb81c994] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent
/// Size: 0x0130 (0x0005C0 - 0x0006F0)
class UFNE_VolumeOverlapComponent : public UStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(16,13876) /* FMulticastInlineDelegate */ __um(OnPlayerStateBeginOverlap);                        // 0x05C0   (0x0010)  
	SDK_UNDEFINED(16,13877) /* FMulticastInlineDelegate */ __um(OnPlayerStateEndOverlap);                          // 0x05D0   (0x0010)  
	SDK_UNDEFINED(16,13878) /* FMulticastInlineDelegate */ __um(OnOtherActorBeginOverlap);                         // 0x05E0   (0x0010)  
	SDK_UNDEFINED(16,13879) /* FMulticastInlineDelegate */ __um(OnOtherActorEndOverlap);                           // 0x05F0   (0x0010)  
	bool                                               bEnableOverlap;                                             // 0x0600   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0601   (0x0007)  MISSED
	SDK_UNDEFINED(80,13880) /* TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*> */ __um(FNEVolumeShapeMap);             // 0x0608   (0x0050)  
	EFNEVolumeShapeTypeEnum                            SceneQueryShape;                                            // 0x0658   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0659   (0x0007)  MISSED
	SDK_UNDEFINED(16,13881) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(SceneQueryObjectTypes);               // 0x0660   (0x0010)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x0670   (0x0020)  MISSED
	SDK_UNDEFINED(8,13882) /* TWeakObjectPtr<AFortMinigame*> */ __um(CachedMinigame);                              // 0x0690   (0x0008)  
	unsigned char                                      UnknownData03_6[0x58];                                      // 0x0698   (0x0058)  MISSED


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);        // [0xb81df80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                    // [0xb81ddd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                  // [0xb81dc8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ShouldAllowOverlapEventToFire
	// bool ShouldAllowOverlapEventToFire(class AActor* OverlapActor);                                                       // [0xb81db54] Native|Event|Public|BlueprintEvent 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetVolumeMaterial
	// void SetVolumeMaterial(TWeakObjectPtr<UMaterialInterface*> MaterialToLoad, int32_t ElementIndex);                     // [0xb81da28] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                     // [0xb81d998] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                          // [0xb81d844] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                  // [0xb81d700] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                             // [0xb81d66c] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameRoundEnded
	// void OnMinigameRoundEnded(class AFortPlayerController* Instigator, EFortMinigameEnd EndMethod, EFortMinigameState NextState); // [0xb81d574] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameEnded
	// void OnMinigameEnded();                                                                                               // [0xb81d560] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnEndActorOverlap
	// void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xb81d434] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnBeginActorOverlap
	// void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb81d22c] Final|Native|Private|HasOutParms 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.HandleTrackedActorEndPlay
	// void HandleTrackedActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                       // [0xb81d168] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                              // [0xb81cdf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                // [0xb81cda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                           // [0xb81cd20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                   // [0xb81cca4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.CheckCollidingActorsSceneQuery
	// void CheckCollidingActorsSceneQuery();                                                                                // [0xb81cc54] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                        // [0xb81cba4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                      // [0xb81ca44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorExitVolume
	// void ActorExitVolume(class AActor* LeavingActor);                                                                     // [0xb81c914] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorEnteredVolume
	// void ActorEnteredVolume(class AActor* EnteringActor);                                                                 // [0xb81c894] Final|Native|Private 
};

