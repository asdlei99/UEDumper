
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CrowdVolume.CrowdSpawner
/// Size: 0x0040 (0x000290 - 0x0002D0)
class UCrowdSpawner : public USceneComponent
{ 
public:
	TArray<class UHierarchicalInstancedStaticMeshComponent*> CharacterMeshes;                                      // 0x0290   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x02A0   (0x0030)  MISSED


	/// Functions
	// Function /Script/CrowdVolume.CrowdSpawner.SpawnCrowd
	// void SpawnCrowd(int32_t Width, int32_t Depth, int32_t Height, int32_t Precision, int32_t CharacterScaleRandomness, int32_t CharacterAngleRandomness, int32_t Density); // [0xb4f568c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CrowdVolume.CrowdSpawner.RefreshTrackedActors
	// void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);   // [0xb4a44a0] Final|Native|Public|BlueprintCallable 
};

