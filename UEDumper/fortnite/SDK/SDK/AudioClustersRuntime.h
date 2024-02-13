
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/AudioClustersRuntime.AudioClusterConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UAudioClusterConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UAudioClusterBehavior*                       Behavior;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/AudioClustersRuntime.AudioClusterConfigMap
/// Size: 0x0050 (0x000028 - 0x000078)
class UAudioClusterConfigMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,11692) /* TMap<FGameplayTag, UAudioClusterConfig*> */ __um(TagConfigMap);                     // 0x0028   (0x0050)  
};

/// Class /Script/AudioClustersRuntime.AudioClusterBehavior
/// Size: 0x0008 (0x000028 - 0x000030)
class UAudioClusterBehavior : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED


	/// Functions
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnStop
	// void OnStop();                                                                                                        // [0x60ab0dc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnStart
	// void OnStart();                                                                                                       // [0x16aa59c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnSizeUpdated
	// void OnSizeUpdated(int32_t Size);                                                                                     // [0x2a20c18] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnPositionUpdated
	// void OnPositionUpdated(FVector& Position);                                                                            // [0xb43a0d8] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnActorRemoved
	// void OnActorRemoved(class AActor* Actor);                                                                             // [0x6f4ff34] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnActorAdded
	// void OnActorAdded(class AActor* Actor);                                                                               // [0xa80b1fc] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/AudioClustersRuntime.AudioClustersSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UAudioClustersSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED


	/// Functions
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.UpdateClusters
	// void UpdateClusters(float DeltaTimeSeconds);                                                                          // [0xb43a74c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.Unregister
	// bool Unregister(FAudioClusterActorInfo& ActorInfo);                                                                   // [0xb43a6b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.SetParam
	// bool SetParam(FGameplayTag& tag, double Value);                                                                       // [0xb43a554] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.SetListenerPosition
	// void SetListenerPosition(FVector& InListenerPosition);                                                                // [0xb43a490] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.RemoveConfigMap
	// bool RemoveConfigMap(class UAudioClusterConfigMap* Map);                                                              // [0xb43a2f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.RegisterOneShot
	// bool RegisterOneShot(FAudioClusterOneShotInfo& OneShotInfo);                                                          // [0xb43a23c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.Register
	// bool Register(FAudioClusterActorInfo& ActorInfo);                                                                     // [0xb43a1a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.AddConfigMap
	// bool AddConfigMap(class UAudioClusterConfigMap* Map);                                                                 // [0xb43a008] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AudioClustersRuntime.AudioClusterActorInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAudioClusterActorInfo
{ 
	SDK_UNDEFINED(8,11693) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0000   (0x0008)  
	FGameplayTag                                       tag;                                                        // 0x0008   (0x0004)  
};

/// Struct /Script/AudioClustersRuntime.AudioClusterOneShotInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAudioClusterOneShotInfo
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0008   (0x0018)  
	float                                              LifetimeSeconds;                                            // 0x0020   (0x0004)  
	float                                              TimeRemainingSeconds;                                       // 0x0024   (0x0004)  
};

