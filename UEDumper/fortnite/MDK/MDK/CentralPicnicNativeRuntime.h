
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MeshNetwork

/// Class /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge
/// Size: 0x0060 (0x000290 - 0x0002F0)
class ACentralPicnicMeshNetworkBridge : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UMeshNetworkComponent*)              MeshNetworkComponent                                        OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(int64_t)                                   CurrentHealth                                               OFFSET(get<int64_t>, {0x298, 8, 0, 0})
	DMember(int64_t)                                   DefaultHealth                                               OFFSET(get<int64_t>, {0x2A0, 8, 0, 0})
	DMember(float)                                     DamageModifier                                              OFFSET(get<float>, {0x2A8, 4, 0, 0})


	/// Functions
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.WaitForMeshNetwork
	// void WaitForMeshNetwork();                                                                                               // [0xb810824] Final|Native|Protected 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.OnRep_DefaultHealth
	// void OnRep_DefaultHealth(int64_t OldValue);                                                                              // [0xb8107a4] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.OnRep_DamageModifier
	// void OnRep_DamageModifier(float OldValue);                                                                               // [0xb810724] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.OnRep_CurrentHealth
	// void OnRep_CurrentHealth(int64_t OldValue);                                                                              // [0xb8106a4] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.HandleMeshNetworkTypeSet
	// void HandleMeshNetworkTypeSet(EMeshNetworkNodeType NodeType);                                                            // [0xb810624] Final|Native|Private 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.BroadcastEvent_HealthUpdated
	// void BroadcastEvent_HealthUpdated(int64_t NewValue);                                                                     // [0xb8105a4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.BroadcastEvent_DefaultHealthUpdated
	// void BroadcastEvent_DefaultHealthUpdated(int64_t NewValue);                                                              // [0xb810524] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.BroadcastEvent_DamageModifierUpdated
	// void BroadcastEvent_DamageModifierUpdated(float NewValue);                                                               // [0xb8104a4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkBridge.BroadcastEvent_ChainsDamaged
	// void BroadcastEvent_ChainsDamaged(int64_t DamageDealt);                                                                  // [0xb810424] Final|Native|Public|BlueprintCallable|Const 
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicMeshNetworkMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
class FCentralPicnicMeshNetworkMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   CurrentHealth                                               OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   DefaultHealth                                               OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(float)                                     DamageModifier                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bHasInitialized                                             OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bHasCompleted                                               OFFSET(get<bool>, {0x15, 1, 0, 0})
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicEvent_HealthUpdated
/// Size: 0x0008 (0x000000 - 0x000008)
class FCentralPicnicEvent_HealthUpdated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   CurrentHealth                                               OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicEvent_DefaultHealthUpdated
/// Size: 0x0008 (0x000000 - 0x000008)
class FCentralPicnicEvent_DefaultHealthUpdated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   CurrentDefaultHealth                                        OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicEvent_DamageModifierUpdated
/// Size: 0x0004 (0x000000 - 0x000004)
class FCentralPicnicEvent_DamageModifierUpdated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     CurrentDamageModifier                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/CentralPicnicNativeRuntime.CentralPicnicEvent_ChainsDamaged
/// Size: 0x0008 (0x000000 - 0x000008)
class FCentralPicnicEvent_ChainsDamaged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   DamageDealt                                                 OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

