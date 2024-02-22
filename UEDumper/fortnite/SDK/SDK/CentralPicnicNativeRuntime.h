
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MeshNetwork

/// Class /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge
/// Size: 0x0060 (0x000290 - 0x0002F0)
class ACentralPicnicMeshNetworkBridge : public AInfo
{ 
public:
	class UMeshNetworkComponent*                       MeshNetworkComponent;                                       // 0x0290   (0x0008)  
	int64_t                                            CurrentHealth;                                              // 0x0298   (0x0008)  
	int64_t                                            DefaultHealth;                                              // 0x02A0   (0x0008)  
	float                                              DamageModifier;                                             // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x44];                                      // 0x02AC   (0x0044)  MISSED


	/// Functions
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.WaitForMeshNetwork
	// void WaitForMeshNetwork();                                                                                            // [0xb810824] Final|Native|Protected 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.OnRep_DefaultHealth
	// void OnRep_DefaultHealth(int64_t OldValue);                                                                           // [0xb8107a4] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.OnRep_DamageModifier
	// void OnRep_DamageModifier(float OldValue);                                                                            // [0xb810724] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.OnRep_CurrentHealth
	// void OnRep_CurrentHealth(int64_t OldValue);                                                                           // [0xb8106a4] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.HandleMeshNetworkTypeSet
	// void HandleMeshNetworkTypeSet(EMeshNetworkNodeType NodeType);                                                         // [0xb810624] Final|Native|Private 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.BroadcastEvent_HealthUpdated
	// void BroadcastEvent_HealthUpdated(int64_t NewValue);                                                                  // [0xb8105a4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.BroadcastEvent_DefaultHealthUpdated
	// void BroadcastEvent_DefaultHealthUpdated(int64_t NewValue);                                                           // [0xb810524] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.BroadcastEvent_DamageModifierUpdated
	// void BroadcastEvent_DamageModifierUpdated(float NewValue);                                                            // [0xb8104a4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.BroadcastEvent_ChainsDamaged
	// void BroadcastEvent_ChainsDamaged(int64_t DamageDealt);                                                               // [0xb810424] Final|Native|Public|BlueprintCallable|Const 
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCentralPicnicMeshNetworkMetadata
{ 
	int64_t                                            CurrentHealth;                                              // 0x0000   (0x0008)  
	int64_t                                            DefaultHealth;                                              // 0x0008   (0x0008)  
	float                                              DamageModifier;                                             // 0x0010   (0x0004)  
	bool                                               bHasInitialized;                                            // 0x0014   (0x0001)  
	bool                                               bHasCompleted;                                              // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicEvent_HealthUpdated
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCentralPicnicEvent_HealthUpdated
{ 
	int64_t                                            CurrentHealth;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicEvent_DefaultHealthUpdated
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCentralPicnicEvent_DefaultHealthUpdated
{ 
	int64_t                                            CurrentDefaultHealth;                                       // 0x0000   (0x0008)  
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicEvent_DamageModifierUpdated
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCentralPicnicEvent_DamageModifierUpdated
{ 
	float                                              CurrentDamageModifier;                                      // 0x0000   (0x0004)  
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicEvent_ChainsDamaged
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCentralPicnicEvent_ChainsDamaged
{ 
	int64_t                                            DamageDealt;                                                // 0x0000   (0x0008)  
};

