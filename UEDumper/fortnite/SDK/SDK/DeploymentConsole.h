
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
/// dependency: GameplayAbilities

/// Struct /Script/DeploymentConsole.DeploymentConsoleAircraftData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDeploymentConsoleAircraftData
{ 
	char                                               Team;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AFortAthenaAircraft*                         Aircraft;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/DeploymentConsole.DeploymentConsoleTeamData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDeploymentConsoleTeamData
{ 
	char                                               Team;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FVector2D>                                  SpawnLocations;                                             // 0x0008   (0x0010)  
};

/// Class /Script/DeploymentConsole.DeploymentConsoleComponent
/// Size: 0x0198 (0x0000A0 - 0x000238)
class UDeploymentConsoleComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x00A0   (0x0028)  MISSED
	TArray<FDeploymentConsoleAircraftData>             Aircrafts;                                                  // 0x00C8   (0x0010)  
	FScalableFloat                                     RadiusPercentForRespawnMin;                                 // 0x00D8   (0x0028)  
	FScalableFloat                                     RadiusPercentForRespawnMax;                                 // 0x0100   (0x0028)  
	FScalableFloat                                     MaxRespawnRadius;                                           // 0x0128   (0x0028)  
	FScalableFloat                                     TeamMemberSpread;                                           // 0x0150   (0x0028)  
	FScalableFloat                                     TraceForGroundStart;                                        // 0x0178   (0x0028)  
	FScalableFloat                                     TraceForGroundEnd;                                          // 0x01A0   (0x0028)  
	FScalableFloat                                     MinHeightFromGround;                                        // 0x01C8   (0x0028)  
	FScalableFloat                                     MinHeightFromZero;                                          // 0x01F0   (0x0028)  
	TArray<FVector2D>                                  SpawnPoints;                                                // 0x0218   (0x0010)  
	TArray<FDeploymentConsoleTeamData>                 TeamSpawnData;                                              // 0x0228   (0x0010)  


	/// Functions
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SpawnAircrafts
	// TArray<FDeploymentConsoleAircraftData> SpawnAircrafts(bool bSpawnAircraftForEachTeam);                                // [0xb88b434] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SpawnAircraft
	// class AFortAthenaAircraft* SpawnAircraft(int32_t FlightIndex);                                                        // [0xb88b3c8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetupTeamSpawnPoints
	// void SetupTeamSpawnPoints(bool bGroupTeams);                                                                          // [0x5dd0bf8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetPlayerIsWaiting
	// void SetPlayerIsWaiting(class AController* InController, bool bInPlayerIsWaiting);                                    // [0xb88b2ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetAircraftLock
	// void SetAircraftLock(bool bIsLocked);                                                                                 // [0x5dd0bf8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetAircraftDropZone
	// void SetAircraftDropZone(FBox2D& InDropZone);                                                                         // [0xb88b288] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.RetrievePlayerSpawnLocation
	// FVector2D RetrievePlayerSpawnLocation(bool bIsGameInProgress, bool bGroupTeams, char InTeam);                         // [0xb88b194] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ResetSpawnPoints
	// void ResetSpawnPoints();                                                                                              // [0x3097b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.MoveBoxTo
	// FBox2D MoveBoxTo(FBox2D& InBox, FVector2D& VectorToMoveTo);                                                           // [0xb88b094] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.InitializeFlightPath
	// void InitializeFlightPath(class AFortGameStateAthena* GSA, FAircraftFlightConstructionInfo& FlightPathConstructionInfo); // [0xb88afd8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetTeamSpawnData
	// TArray<FDeploymentConsoleTeamData> GetTeamSpawnData();                                                                // [0xb88af60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetSpawnPoints
	// TArray<FVector2D> GetSpawnPoints();                                                                                   // [0xb88af44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetMinigameTeamsWithPlayers
	// TArray<char> GetMinigameTeamsWithPlayers(class AFortMinigame* InMinigame);                                            // [0xb88aeb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetMapInfo
	// class AFortAthenaMapInfo* GetMapInfo();                                                                               // [0xb88ae8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetDefaultFlightPathConstructionInfo
	// FAircraftFlightConstructionInfo GetDefaultFlightPathConstructionInfo(class AFortGameStateAthena* GameStateAthena, EAirCraftBehavior AirCraftBehavior); // [0xb88accc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetCachedAircraftSpawnZone
	// FBox2D GetCachedAircraftSpawnZone();                                                                                  // [0xb88ac40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ForcePlayerEnterAircraft
	// void ForcePlayerEnterAircraft(class AFortPlayerControllerAthena* InController, class AFortAthenaAircraft* InAircraft); // [0xb88ab50] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ConstructInventoryOnController
	// void ConstructInventoryOnController(class AFortPlayerControllerAthena* InController);                                 // [0x5decebc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ClearFlightInfos
	// void ClearFlightInfos();                                                                                              // [0xb88ab3c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.CalculateSpawnRotationFromLocation
	// FRotator CalculateSpawnRotationFromLocation(FVector& InSpawnLocation);                                                // [0xb88aa58] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.AdjustLocationToValidHeight
	// FVector AdjustLocationToValidHeight(FVector& RespawnLocation);                                                        // [0xb88a974] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DeploymentConsole.FortAthenaMutator_CR_Respawn
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_CR_Respawn : public AFortAthenaMutator
{ 
public:
};

