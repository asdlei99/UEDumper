
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: JsonUtilities
/// dependency: McpProfileSys

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldManagementHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoWorldManagement.JunoWorld
/// Size: 0x0108 (0x000028 - 0x000130)
class UJunoWorld : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/JunoWorldManagement.JunoUserWorldView
/// Size: 0x0028 (0x000130 - 0x000158)
class UJunoUserWorldView : public UJunoWorld
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Class /Script/JunoWorldManagement.JunoWorldManagerSubsystem
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoWorldManagerSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bEnableWorldManager                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bEnableWorldManagerInPIE                                    OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(int32_t)                                   WorldPersistenceCompatibilityVersion                        OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FString)                                   DeviceProfileSuffix                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UJunoWorldManagementHandler*)        WorldManagementHandler                                      OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/JunoWorldManagement.JunoWorldManagerSubsystemData
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoWorldManagerSubsystemData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UClass*>)                     AvailableWorldManagementHandlerClasses                      OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UClass*)                             DefaultWorldManagementHandlerClass                          OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/JunoWorldManagement.JunoPersistenceFeatureWorldMetadataCorrespondentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPersistenceFeatureWorldMetadataCorrespondentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler_MCPProto
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoWorldManagementHandler_MCPProto : public UJunoWorldManagementHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UJunoWorldMCPProto_Profile*)         ProfilePtr                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/JunoWorldManagement.JunoWorldMCPProto_Profile
/// Size: 0x0080 (0x000140 - 0x0001C0)
class UJunoWorldMCPProto_Profile : public UMcpProfile
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TMap<FString, UJunoUserWorldView*>)        WorldViewMap                                                OFFSET(get<T>, {0x170, 80, 0, 0})


	/// Functions
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_UpdateWorldSysMetadata
	// void ProtoJuno_UpdateWorldSysMetadata(FString WorldId, FJsonObjectWrapper SysMetadata, FDedicatedServerUrlContext& Context); // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_UpdateWorldMetadata
	// void ProtoJuno_UpdateWorldMetadata(FString WorldId, FJsonObjectWrapper WorldMetadata, FClientUrlContext& Context);       // [0xffff8009b6310000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_UpdateWorldLastAccessTime
	// void ProtoJuno_UpdateWorldLastAccessTime(FString WorldId, FClientUrlContext& Context);                                   // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_SetWorldName
	// void ProtoJuno_SetWorldName(FString WorldId, FString Name, FClientUrlContext& Context);                                  // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_MarkWorldDeleted
	// void ProtoJuno_MarkWorldDeleted(FString WorldId, FClientUrlContext& Context);                                            // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_DeleteWorld
	// void ProtoJuno_DeleteWorld(FString WorldId, FClientUrlContext& Context);                                                 // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_DeleteAllWorlds
	// void ProtoJuno_DeleteAllWorlds(FClientUrlContext& Context);                                                              // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_CreateWorld
	// void ProtoJuno_CreateWorld(FJsonObjectWrapper world_metadata, FClientUrlContext& Context);                               // [0xffff8009b6310000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
};

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler_WorldArbitrationService
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UJunoWorldManagementHandler_WorldArbitrationService : public UJunoWorldManagementHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TMap<FString, UJunoUserWorldView*>)        WorldViewMap                                                OFFSET(get<T>, {0x28, 80, 0, 0})
	DMember(uint32_t)                                  GetAllAccessibleWorldsCacheTime                             OFFSET(get<uint32_t>, {0xC8, 4, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldSysMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoWorldSysMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   McpBackend                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   DeltasRevisionIndex                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameplayProperty
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoWorldGameplayProperty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameMetadata
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoWorldGameMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   PersistenceVersion                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AdventureSeed                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   MapName                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<FJunoWorldGameplayProperty>)        GameplayProperties                                          OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        DevProperties                                               OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldMetadata
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoWorldMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FJunoWorldSysMetadata)                     Sys                                                         OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FJunoWorldGameMetadata)                    Game                                                        OFFSET(getStruct<T>, {0x28, 88, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameMetadata_v0_Initial
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoWorldGameMetadata_v0_Initial : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FName>)                      GameplayProperties                                          OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldQuery
/// Size: 0x0090 (0x000000 - 0x000090)
class FJunoWorldQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoWorldMetadata)                        MetaData                                                    OFFSET(getStruct<T>, {0x8, 136, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldQueryResult
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UJunoUserWorldView*)                 UserWorldView                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldMCPProto_CreateWorldResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWorldMCPProto_CreateWorldResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   WorldId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/JunoWorldManagement.EJunoWorldOccupantKind
/// Size: 0x05
enum EJunoWorldOccupantKind : uint8_t
{
	EJunoWorldOccupantKind__Owner                                                    = 0,
	EJunoWorldOccupantKind__Keyholder                                                = 1,
	EJunoWorldOccupantKind__Guest                                                    = 2,
	EJunoWorldOccupantKind__Count                                                    = 3,
	EJunoWorldOccupantKind__EJunoWorldOccupantKind_MAX                               = 4
};

/// Enum /Script/JunoWorldManagement.EJunoWorldMetadataVersion
/// Size: 0x05
enum EJunoWorldMetadataVersion : uint8_t
{
	EJunoWorldMetadataVersion__Initial                                               = 0,
	EJunoWorldMetadataVersion__GameplayPropertiesConvertedToArray                    = 1,
	EJunoWorldMetadataVersion__LastPlusOne                                           = 2,
	EJunoWorldMetadataVersion__Current                                               = 1,
	EJunoWorldMetadataVersion__EJunoWorldMetadataVersion_MAX                         = 3
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_BuildMode
/// Size: 0x03
enum EJunoWorldSettingOptions_BuildMode : uint8_t
{
	EJunoWorldSettingOptions_BuildMode__Survival                                     = 0,
	EJunoWorldSettingOptions_BuildMode__Sandbox                                      = 1,
	EJunoWorldSettingOptions_BuildMode__EJunoWorldSettingOptions_MAX                 = 2
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_CreatureActivation
/// Size: 0x03
enum EJunoWorldSettingOptions_CreatureActivation : uint8_t
{
	EJunoWorldSettingOptions_CreatureActivation__On                                  = 0,
	EJunoWorldSettingOptions_CreatureActivation__Off                                 = 1,
	EJunoWorldSettingOptions_CreatureActivation__EJunoWorldSettingOptions_MAX        = 2
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_WorldSwitch
/// Size: 0x03
enum EJunoWorldSettingOptions_WorldSwitch : uint8_t
{
	EJunoWorldSettingOptions_WorldSwitch__On                                         = 0,
	EJunoWorldSettingOptions_WorldSwitch__Off                                        = 1,
	EJunoWorldSettingOptions_WorldSwitch__EJunoWorldSettingOptions_MAX               = 2
};

