
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: JsonUtilities
/// dependency: McpProfileSys

/// Enum /Script/JunoWorldManagement.EJunoWorldOccupantKind
/// Size: 0x05
enum class EJunoWorldOccupantKind : uint8_t
{
	EJunoWorldOccupantKind__Owner                                                    = 0,
	EJunoWorldOccupantKind__Keyholder                                                = 1,
	EJunoWorldOccupantKind__Guest                                                    = 2,
	EJunoWorldOccupantKind__Count                                                    = 3,
	EJunoWorldOccupantKind__EJunoWorldOccupantKind_MAX                               = 4
};

/// Enum /Script/JunoWorldManagement.EJunoWorldMetadataVersion
/// Size: 0x05
enum class EJunoWorldMetadataVersion : uint8_t
{
	EJunoWorldMetadataVersion__Initial                                               = 0,
	EJunoWorldMetadataVersion__GameplayPropertiesConvertedToArray                    = 1,
	EJunoWorldMetadataVersion__LastPlusOne                                           = 2,
	EJunoWorldMetadataVersion__Current                                               = 1,
	EJunoWorldMetadataVersion__EJunoWorldMetadataVersion_MAX                         = 3
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_BuildMode
/// Size: 0x03
enum class EJunoWorldSettingOptions_BuildMode : uint8_t
{
	EJunoWorldSettingOptions_BuildMode__Survival                                     = 0,
	EJunoWorldSettingOptions_BuildMode__Sandbox                                      = 1,
	EJunoWorldSettingOptions_BuildMode__EJunoWorldSettingOptions_MAX                 = 2
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_CreatureActivation
/// Size: 0x03
enum class EJunoWorldSettingOptions_CreatureActivation : uint8_t
{
	EJunoWorldSettingOptions_CreatureActivation__On                                  = 0,
	EJunoWorldSettingOptions_CreatureActivation__Off                                 = 1,
	EJunoWorldSettingOptions_CreatureActivation__EJunoWorldSettingOptions_MAX        = 2
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_WorldSwitch
/// Size: 0x03
enum class EJunoWorldSettingOptions_WorldSwitch : uint8_t
{
	EJunoWorldSettingOptions_WorldSwitch__On                                         = 0,
	EJunoWorldSettingOptions_WorldSwitch__Off                                        = 1,
	EJunoWorldSettingOptions_WorldSwitch__EJunoWorldSettingOptions_MAX               = 2
};

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldManagementHandler : public UObject
{ 
public:
};

/// Class /Script/JunoWorldManagement.JunoWorld
/// Size: 0x0108 (0x000028 - 0x000130)
class UJunoWorld : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x108];                                     // 0x0028   (0x0108)  MISSED
};

/// Class /Script/JunoWorldManagement.JunoUserWorldView
/// Size: 0x0028 (0x000130 - 0x000158)
class UJunoUserWorldView : public UJunoWorld
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0130   (0x0028)  MISSED
};

/// Class /Script/JunoWorldManagement.JunoWorldManagerSubsystem
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoWorldManagerSubsystem : public UWorldSubsystem
{ 
public:
	bool                                               bEnableWorldManager;                                        // 0x0030   (0x0001)  
	bool                                               bEnableWorldManagerInPIE;                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            WorldPersistenceCompatibilityVersion;                       // 0x0034   (0x0004)  
	SDK_UNDEFINED(16,11764) /* FString */              __um(DeviceProfileSuffix);                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x0048   (0x0028)  MISSED
	class UJunoWorldManagementHandler*                 WorldManagementHandler;                                     // 0x0070   (0x0008)  
};

/// Class /Script/JunoWorldManagement.JunoWorldManagerSubsystemData
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoWorldManagerSubsystemData : public UPrimaryDataAsset
{ 
public:
	TArray<class UClass*>                              AvailableWorldManagementHandlerClasses;                     // 0x0030   (0x0010)  
	class UClass*                                      DefaultWorldManagementHandlerClass;                         // 0x0040   (0x0008)  
};

/// Class /Script/JunoWorldManagement.JunoPersistenceFeatureWorldMetadataCorrespondentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPersistenceFeatureWorldMetadataCorrespondentInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler_MCPProto
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoWorldManagementHandler_MCPProto : public UJunoWorldManagementHandler
{ 
public:
	class UJunoWorldMCPProto_Profile*                  ProfilePtr;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/JunoWorldManagement.JunoWorldMCPProto_Profile
/// Size: 0x0080 (0x000140 - 0x0001C0)
class UJunoWorldMCPProto_Profile : public UMcpProfile
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0140   (0x0030)  MISSED
	SDK_UNDEFINED(80,11765) /* TMap<FString, UJunoUserWorldView*> */ __um(WorldViewMap);                           // 0x0170   (0x0050)  


	/// Functions
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_UpdateWorldSysMetadata
	// void ProtoJuno_UpdateWorldSysMetadata(FString WorldId, FJsonObjectWrapper SysMetadata, FDedicatedServerUrlContext& Context); // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_UpdateWorldMetadata
	// void ProtoJuno_UpdateWorldMetadata(FString WorldId, FJsonObjectWrapper WorldMetadata, FClientUrlContext& Context);    // [0xffff8009b6310000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_UpdateWorldLastAccessTime
	// void ProtoJuno_UpdateWorldLastAccessTime(FString WorldId, FClientUrlContext& Context);                                // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_SetWorldName
	// void ProtoJuno_SetWorldName(FString WorldId, FString Name, FClientUrlContext& Context);                               // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_MarkWorldDeleted
	// void ProtoJuno_MarkWorldDeleted(FString WorldId, FClientUrlContext& Context);                                         // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_DeleteWorld
	// void ProtoJuno_DeleteWorld(FString WorldId, FClientUrlContext& Context);                                              // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_DeleteAllWorlds
	// void ProtoJuno_DeleteAllWorlds(FClientUrlContext& Context);                                                           // [0xffff8009b6310000] Net|NetReliableNetRequest|Native|Event|Public|HasOutParms 
	// Function /Script/JunoWorldManagement.JunoWorldMCPProto_Profile.ProtoJuno_CreateWorld
	// void ProtoJuno_CreateWorld(FJsonObjectWrapper world_metadata, FClientUrlContext& Context);                            // [0xffff8009b6310000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
};

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler_WorldArbitrationService
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UJunoWorldManagementHandler_WorldArbitrationService : public UJunoWorldManagementHandler
{ 
public:
	SDK_UNDEFINED(80,11766) /* TMap<FString, UJunoUserWorldView*> */ __um(WorldViewMap);                           // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0078   (0x0050)  MISSED
	uint32_t                                           GetAllAccessibleWorldsCacheTime;                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00CC   (0x000C)  MISSED
};

/// Struct /Script/JunoWorldManagement.JunoWorldSysMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoWorldSysMetadata
{ 
	SDK_UNDEFINED(16,11767) /* FString */              __um(McpBackend);                                           // 0x0000   (0x0010)  
	int32_t                                            DeltasRevisionIndex;                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameplayProperty
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoWorldGameplayProperty
{ 
	SDK_UNDEFINED(16,11768) /* FString */              __um(ID);                                                   // 0x0000   (0x0010)  
	FName                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameMetadata
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoWorldGameMetadata
{ 
	int32_t                                            PersistenceVersion;                                         // 0x0000   (0x0004)  
	int32_t                                            AdventureSeed;                                              // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,11769) /* FString */              __um(Title);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,11770) /* FString */              __um(MapName);                                              // 0x0018   (0x0010)  
	TArray<FJunoWorldGameplayProperty>                 GameplayProperties;                                         // 0x0028   (0x0010)  
	FJsonObjectWrapper                                 DevProperties;                                              // 0x0038   (0x0020)  
};

/// Struct /Script/JunoWorldManagement.JunoWorldMetadata
/// Size: 0x0088 (0x000000 - 0x000088)
struct FJunoWorldMetadata
{ 
	SDK_UNDEFINED(16,11771) /* FString */              __um(ID);                                                   // 0x0000   (0x0010)  
	FJunoWorldSysMetadata                              Sys;                                                        // 0x0010   (0x0018)  
	FJunoWorldGameMetadata                             Game;                                                       // 0x0028   (0x0058)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameMetadata_v0_Initial
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoWorldGameMetadata_v0_Initial
{ 
	SDK_UNDEFINED(80,11772) /* TMap<FString, FName> */ __um(GameplayProperties);                                   // 0x0000   (0x0050)  
};

/// Struct /Script/JunoWorldManagement.JunoWorldQuery
/// Size: 0x0090 (0x000000 - 0x000090)
struct FJunoWorldQuery
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FJunoWorldMetadata                                 MetaData;                                                   // 0x0008   (0x0088)  
};

/// Struct /Script/JunoWorldManagement.JunoWorldQueryResult
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoWorldQueryResult
{ 
	class UJunoUserWorldView*                          UserWorldView;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/JunoWorldManagement.JunoWorldMCPProto_CreateWorldResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoWorldMCPProto_CreateWorldResult
{ 
	SDK_UNDEFINED(16,11773) /* FString */              __um(WorldId);                                              // 0x0000   (0x0010)  
};

