
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: ModularGameplay
/// dependency: NetCore
/// dependency: VerseAssets

/// Class /Script/VGameplayRst.AudioComponentBase
/// Size: 0x0010 (0x000088 - 0x000098)
class UAudioComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UVerseAssetPtr*)                     SoundAsset                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FActiveSoundInfo)                          ActiveSoundInfo                                             OFFSET(getStruct<T>, {0x90, 8, 0, 0})


	/// Functions
	// Function /Script/VGameplayRst.AudioComponentBase.OnRep_SoundAsset
	// void OnRep_SoundAsset();                                                                                                 // [0xa64664c] Final|Native|Protected 
	// Function /Script/VGameplayRst.AudioComponentBase.OnRep_ActiveSoundInfo
	// void OnRep_ActiveSoundInfo();                                                                                            // [0xa646450] Final|Native|Protected 
};

/// Class /Script/VGameplayRst.ControllerStateComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UControllerStateComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FString>)                           ActiveStates                                                OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/VGameplayRst.ControllerStateComponent.OnRep_ActiveStates
	// void OnRep_ActiveStates();                                                                                               // [0xa646480] Final|Native|Private 
};

/// Class /Script/VGameplayRst.DatastoreComponentBase
/// Size: 0x0140 (0x0000D0 - 0x000210)
class UDatastoreComponentBase : public UEntityActorPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FDatastoreState)                           ReplicatedDatastoreState                                    OFFSET(getStruct<T>, {0xD0, 296, 0, 0})
};

/// Class /Script/VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UVerseLevelStreamingPlayerControllerRpcComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelUnloaded
	// void TellServer_ClientLevelUnloaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent);                   // [0x680a298] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelLoaded
	// void TellServer_ClientLevelLoaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent);                     // [0x69aeebc] Net|NetReliableNative|Event|Public|NetServer 
};

/// Class /Script/VGameplayRst.VerseLevelStreamingComponentBase
/// Size: 0x00A8 (0x000088 - 0x000130)
class UVerseLevelStreamingComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FVerseLevelStreamingLevelIdentifier)       NewLevel                                                    OFFSET(getStruct<T>, {0x88, 40, 0, 0})
	SMember(FVerseLevelStreamingLevelStatus)           LevelStatus                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})


	/// Functions
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnRep_NewLevel
	// void OnRep_NewLevel();                                                                                                   // [0xa6465f0] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Server
	// void OnLevelUnloaded_Server();                                                                                           // [0xa64643c] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Client
	// void OnLevelUnloaded_Client();                                                                                           // [0xa646428] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Server
	// void OnLevelShown_Server();                                                                                              // [0xa646414] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Client
	// void OnLevelShown_Client();                                                                                              // [0xa646400] Final|Native|Public  
};

/// Class /Script/VGameplayRst.PointLightComponentBase
/// Size: 0x0008 (0x000088 - 0x000090)
class UPointLightComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UVerseLightPropertiesBase*)          ReplicatedLightProperties                                   OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VGameplayRst.SpotLightComponentBase
/// Size: 0x0008 (0x000088 - 0x000090)
class USpotLightComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UVerseLightPropertiesBase*)          ReplicatedLightProperties                                   OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VGameplayRst.VerseLightPropertiesBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseLightPropertiesBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Intensity                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FLinearColor)                              LightColor                                                  OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	CMember(class ULightComponentBase*)                LightComponent                                              OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/VGameplayRst.VerseLightPropertiesBase.OnRep_LightComponent
	// void OnRep_LightComponent();                                                                                             // [0xa646570] Final|Native|Protected 
	// Function /Script/VGameplayRst.VerseLightPropertiesBase.OnRep_LightColor
	// void OnRep_LightColor();                                                                                                 // [0xa646530] Final|Native|Protected 
	// Function /Script/VGameplayRst.VerseLightPropertiesBase.OnRep_Intensity
	// void OnRep_Intensity();                                                                                                  // [0xa6464fc] Final|Native|Protected 
};

/// Class /Script/VGameplayRst.VerseLocalLightProperties
/// Size: 0x0008 (0x000048 - 0x000050)
class UVerseLocalLightProperties : public UVerseLightPropertiesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     AttenuationRadius                                           OFFSET(get<float>, {0x48, 4, 0, 0})


	/// Functions
	// Function /Script/VGameplayRst.VerseLocalLightProperties.OnRep_AttenuationRadius
	// void OnRep_AttenuationRadius();                                                                                          // [0xa646494] Final|Native|Protected 
};

/// Class /Script/VGameplayRst.VersePointLightProperties
/// Size: 0x0008 (0x000050 - 0x000058)
class UVersePointLightProperties : public UVerseLocalLightProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     SourceRadius                                                OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     SourceLength                                                OFFSET(get<float>, {0x54, 4, 0, 0})


	/// Functions
	// Function /Script/VGameplayRst.VersePointLightProperties.OnRep_SourceRadius
	// void OnRep_SourceRadius();                                                                                               // [0xa6466a8] Final|Native|Public  
	// Function /Script/VGameplayRst.VersePointLightProperties.OnRep_SourceLength
	// void OnRep_SourceLength();                                                                                               // [0xa646674] Final|Native|Public  
};

/// Class /Script/VGameplayRst.VerseSpotLightProperties
/// Size: 0x0008 (0x000058 - 0x000060)
class UVerseSpotLightProperties : public UVersePointLightProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     InnerConeAngle                                              OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     OuterConeAngle                                              OFFSET(get<float>, {0x5C, 4, 0, 0})


	/// Functions
	// Function /Script/VGameplayRst.VerseSpotLightProperties.OnRep_OuterConeAngle
	// void OnRep_OuterConeAngle();                                                                                             // [0xa646604] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseSpotLightProperties.OnRep_InnerConeAngle
	// void OnRep_InnerConeAngle();                                                                                             // [0xa6464c8] Final|Native|Public  
};

/// Class /Script/VGameplayRst.ParticleSystemComponentBase
/// Size: 0x0010 (0x000088 - 0x000098)
class UParticleSystemComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UVerseAssetPtr*)                     ParticleSystemAsset                                         OFFSET(get<T>, {0x88, 8, 0, 0})
	DMember(bool)                                      bActive                                                     OFFSET(get<bool>, {0x90, 1, 0, 0})


	/// Functions
	// Function /Script/VGameplayRst.ParticleSystemComponentBase.OnRep_ParticleSystemAsset
	// void OnRep_ParticleSystemAsset();                                                                                        // [0xa646638] Final|Native|Protected 
	// Function /Script/VGameplayRst.ParticleSystemComponentBase.OnRep_bActive
	// void OnRep_bActive();                                                                                                    // [0xa6466dc] Final|Native|Protected 
};

/// Struct /Script/VGameplayRst.ActiveSoundInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FActiveSoundInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bActive                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/VGameplayRst.DatastoreEntry
/// Size: 0x0014 (0x00000C - 0x000020)
class FDatastoreEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     KeyName                                                     OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FString)                                   ValueData                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VGameplayRst.DatastoreState
/// Size: 0x0020 (0x000108 - 0x000128)
class FDatastoreState : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<FDatastoreEntry>)                   EntriesArray                                                OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(class UDatastoreComponentBase*)            OwningComponent                                             OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/VGameplayRst.VerseLevelStreamingLevelStatus
/// Size: 0x0028 (0x000000 - 0x000028)
class FVerseLevelStreamingLevelStatus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class ULevelStreamingDynamic*)             Streamer                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UVerseAssetPtr*)                     LevelAsset                                                  OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/VGameplayRst.VerseLevelStreamingLevelIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
class FVerseLevelStreamingLevelIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSoftObjectPath)                           LevelPath                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   LevelNameOverride                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

