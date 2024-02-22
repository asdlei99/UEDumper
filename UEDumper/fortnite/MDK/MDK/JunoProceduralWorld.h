
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: InstancedActors
/// dependency: JunoGameNative
/// dependency: JunoProceduralLandscape
/// dependency: LagerRuntime
/// dependency: Landscape
/// dependency: MassActors
/// dependency: MassEntity
/// dependency: MassRepresentation
/// dependency: MassSignals
/// dependency: MassSpawner
/// dependency: ModularGameplay
/// dependency: NetCore
/// dependency: PCG
/// dependency: PlayspaceSystem
/// dependency: StructUtils
/// dependency: Water
/// dependency: WorldConditions

/// Class /Script/JunoProceduralWorld.JunoBridgePOISelectorComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoBridgePOISelectorComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FJunoBridgePOISelectorParams)              Params                                                      OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FDataRegistryType)                         DataRegistryType                                            OFFSET(getStruct<T>, {0xB8, 4, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoBridgePOISelectorComponent.DoSelection
	// void DoSelection();                                                                                                      // [0xbf4a094] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoBridgePOISelectorComponent.BeginBridgeSelection
	// void BeginBridgeSelection(FJunoBridgePOISelectorParams& Params);                                                         // [0xbf492b4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoCaveGeneratorDataMergerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCaveGeneratorDataMergerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorDataMergerInterface.MergeCaveData
	// void MergeCaveData(FJunoCaveGeneratorData& CaveData);                                                                    // [0x3d1d968] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent
/// Size: 0x00B0 (0x0000F8 - 0x0001A8)
class UJunoCaveGeneratorPlayspaceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FDataRegistryType)                         CaveGeneratorRegistry                                       OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	SMember(FDataRegistryType)                         CaveGeneratorShellsRegistry                                 OFFSET(getStruct<T>, {0xFC, 4, 0, 0})
	SMember(FDataRegistryType)                         CaveGeneratorRulesRegistry                                  OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	SMember(FDataRegistryType)                         CaveGeneratorThemesRegistry                                 OFFSET(getStruct<T>, {0x104, 4, 0, 0})
	SMember(FDataRegistryType)                         CaveGeneratorTypesRegistry                                  OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	DMember(bool)                                      bUseSplitDataRegistries                                     OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FDataRegistryType)                         POIDataRegistry                                             OFFSET(getStruct<T>, {0x110, 4, 0, 0})
	SMember(FJunoCaveGeneratorData)                    MergedData                                                  OFFSET(getStruct<T>, {0x118, 56, 0, 0})
	DMember(bool)                                      bWasDataMerged                                              OFFSET(get<bool>, {0x1A0, 1, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.SortCaveGeneratorTypes
	// void SortCaveGeneratorTypes(TArray<FJunoCaveGeneratorTypeData>& Types, TArray<FJunoCaveGeneratorTypeData>& SortedTypes); // [0xbf4e9c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.SortCaveGeneratorThemes
	// void SortCaveGeneratorThemes(TArray<FJunoCaveGeneratorThemeEntry>& Themes, TArray<FJunoCaveGeneratorThemeEntry>& SortedThemes); // [0xbf4e8b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.SortCaveGeneratorShells
	// void SortCaveGeneratorShells(TArray<FJunoCaveGeneratorShellData>& Shells, TArray<FJunoCaveGeneratorShellData>& SortedShells); // [0xbf4e7ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.SortCaveGeneratorRules
	// void SortCaveGeneratorRules(TArray<FJunoCaveGeneratorRule>& Rules, TArray<FJunoCaveGeneratorRule>& SortedRules);         // [0xbf4da90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.SetMergedData
	// void SetMergedData(FJunoCaveGeneratorData& Data);                                                                        // [0xbf4d9d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.IsNativeCaveGeneratorEnabled
	// bool IsNativeCaveGeneratorEnabled();                                                                                     // [0xbf4c2e8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.GetRootCaveGeneratorComponent
	// class UJunoCaveGeneratorPlayspaceComponent* GetRootCaveGeneratorComponent(class UObject* WorldContextObject);            // [0xbf4c1a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.GetMergedMultiCaveDataRegistryData
	// void GetMergedMultiCaveDataRegistryData(FDataRegistryType& ShellRegistry, FDataRegistryType& ThemeRegistry, FDataRegistryType& TypeRegistry, FDataRegistryType& RuleRegistry, FJunoCaveGeneratorData& ResourceData, EJunoGetMergedCaveDataRegistryDataResult& Result); // [0xbf4bf10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.GetMergedCaveDataRegistryData
	// void GetMergedCaveDataRegistryData(FDataRegistryType& CaveGeneratorDataRegistry, FJunoCaveGeneratorData& ResourceData, EJunoGetMergedCaveDataRegistryDataResult& Result); // [0xbf4bd6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.GenerateCaveData
	// bool GenerateCaveData(FJunoCaveGeneratorData& ResourceData, FDataRegistryType& POIDataRegistry, FRandomStream& RandomStream, FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, FBox& Bounds, class UClass*& SurfaceTeleporterClass, TArray<FJunoGeneratedCaveShellData>& Shells, TArray<FJunoPOIData>& POIs); // [0xbf4a43c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent.GenerateCave
	// void GenerateCave(class AActor* WorldActor, FRandomStream& RandomStream, FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, FBox& Bounds, class UClass*& SurfaceTeleporterClass); // [0xbf4a180] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProvider
/// Size: 0x0058 (0x000388 - 0x0003E0)
class AJunoLivingWorldStaticPointProvider : public AFortAthenaLivingWorldStaticPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FJunoLivingWorldPointProviderEventLimiter) EventLimiter                                                OFFSET(getStruct<T>, {0x398, 32, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x3B8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProvider.AppendFiltersTags
	// void AppendFiltersTags(FGameplayTagContainer& Container);                                                                // [0xbf8e15c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoCaveLivingWorldStaticPointProvider
/// Size: 0x0050 (0x0003E0 - 0x000430)
class AJunoCaveLivingWorldStaticPointProvider : public AJunoLivingWorldStaticPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FName)                                     CaveShellID                                                 OFFSET(getStruct<T>, {0x3E0, 4, 0, 0})
	CMember(TArray<FJunoCaveConditionalTags>)          ConditionalTags                                             OFFSET(get<T>, {0x3E8, 16, 0, 0})
	SMember(FScalableFloat)                            AssignLeashVolume                                           OFFSET(getStruct<T>, {0x3F8, 40, 0, 0})
	CMember(TWeakObjectPtr<UCaveShellSpawnEntry*>)     CaveShellEntry                                              OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(bool)                                      bNeverEnable                                                OFFSET(get<bool>, {0x428, 1, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveLivingWorldStaticPointProvider.GetCaveShellInstanceData
	// void GetCaveShellInstanceData(FJunoCaveShellInstanceData& Data, EJunoGetCaveShellInstanceDataResult& Result);            // [0xbf4b1a8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoStreamingGameplayVolume
/// Size: 0x0080 (0x000330 - 0x0003B0)
class AJunoStreamingGameplayVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	DMember(bool)                                      bSpawnedByLevelSaveRecord                                   OFFSET(get<bool>, {0x360, 1, 0, 0})
	SMember(FVector)                                   BoundsExtent                                                OFFSET(getStruct<T>, {0x368, 24, 0, 0})
	SMember(FVector)                                   BoundsOffset                                                OFFSET(getStruct<T>, {0x380, 24, 0, 0})
	CMember(TArray<TWeakObjectPtr<UWorld*>>)           LevelsToLoad                                                OFFSET(get<T>, {0x3A0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoStreamingGameplayVolume.Unload
	// void Unload();                                                                                                           // [0x1ae88e0] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoStreamingGameplayVolume.SetBounds
	// void SetBounds(FVector& Offset, FVector& Extent);                                                                        // [0xbf594f4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoStreamingGameplayVolume.Load
	// void Load();                                                                                                             // [0x65f1174] Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoCaveShellGameplayVolume
/// Size: 0x00B8 (0x0003B0 - 0x000468)
class AJunoCaveShellGameplayVolume : public AJunoStreamingGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	SMember(FJunoCaveShellInstanceData)                InstanceData                                                OFFSET(getStruct<T>, {0x3B0, 120, 0, 0})
	SMember(FName)                                     ShellID                                                     OFFSET(getStruct<T>, {0x428, 4, 0, 0})
	SMember(FGuid)                                     CaveGuid                                                    OFFSET(getStruct<T>, {0x42C, 16, 0, 0})
	CMember(TArray<class AJunoTeleporter*>)            Teleporters                                                 OFFSET(get<T>, {0x440, 16, 0, 0})
	CMember(TArray<FJunoWorldTileStreamingLevel>)      LevelsToInject                                              OFFSET(get<T>, {0x450, 16, 0, 0})
	DMember(int32_t)                                   PersistenceVersion                                          OFFSET(get<int32_t>, {0x460, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCaveBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.SetCaveSurfaceData
	// void SetCaveSurfaceData(class AActor* Actor, TArray<FJunoCaveSurfaceData>& CaveSurfaceData);                             // [0xbf4d904] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.QueryCaveSurfaceDataState
	// void QueryCaveSurfaceDataState(class AActor* Actor, EJunoQueryCaveSurfaceDataStateResult& Result);                       // [0xbf4d844] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.QueryCaveShellInstanceDataState
	// EJunoQueryCaveDataResult QueryCaveShellInstanceDataState(class AActor* CaveSlotActor, FGuid& CaveSlotGuid);              // [0xbf4d770] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.QueryCaveDataStateFromSurfaceData
	// void QueryCaveDataStateFromSurfaceData(class AActor* POISlotActor, FJunoCaveSurfaceData& SurfaceData, EJunoQueryCaveDataResult& Result, FBox& WorldTileBounds, TArray<FJunoCaveTeleporterLink>& Teleporters); // [0xbf4cd94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.QueryCaveDataStateFromActor
	// void QueryCaveDataStateFromActor(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, EJunoQueryCaveDataResult& Result, FBox& WorldTileBounds, TArray<FJunoCaveTeleporterLink>& Teleporters); // [0xbf4c3d8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.NeedsCaveShellInstanceData
	// bool NeedsCaveShellInstanceData(class AActor* CaveSlotActor, FGuid& CaveSlotGuid);                                       // [0xbf4c300] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.IsBitSet
	// bool IsBitSet(int32_t BitMask, int32_t Bit);                                                                             // [0xbf4c228] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveSurfaceDataForEntrance
	// void GetCaveSurfaceDataForEntrance(class AActor* Actor, FGuid& EntranceGuid, FJunoCaveSurfaceData& CaveSurfaceData, int32_t& CaveIndex, EJunoGetCaveSurfaceDataForEntranceResult& Result, bool bWorldTeleporterTransforms); // [0xbf4ba18] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveShellVolumeFromArea
	// class AJunoCaveShellGameplayVolume* GetCaveShellVolumeFromArea(class UObject* WorldContextObject, FBox& Area, FName ShellID); // [0xbf4b7d8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveShellInstanceDataFromArea
	// void GetCaveShellInstanceDataFromArea(class UObject* WorldContextObject, FBox& Area, FName ShellID, FJunoCaveShellInstanceData& Data, EJunoGetCaveShellInstanceDataResult& Result); // [0xbf4b568] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveShellInstanceDataFromActor
	// void GetCaveShellInstanceDataFromActor(class AActor* CaveShellChildActor, FName ShellID, FJunoCaveShellInstanceData& Data, EJunoGetCaveShellInstanceDataResult& Result); // [0xbf4b404] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveShellInstanceData
	// FJunoCaveShellInstanceData GetCaveShellInstanceData(class AActor* CaveShellChildActor, FName ShellID, bool& Success);    // [0xbf4b2b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetCaveDataCollectionsFromRegistry
	// void GetCaveDataCollectionsFromRegistry(FDataRegistryType& DataRegistry, TArray<TWeakObjectPtr<UJunoCaveDataCollectionBase*>>& Array, EJunoGetCaveDataCollectionsFromRegistryResult& Result); // [0xbf4b074] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.GetBestCaveShellFromArea
	// void GetBestCaveShellFromArea(class UObject* WorldContextObject, FBox& Area, FJunoCave& Cave, FGuid& CaveGuid, FName& ShellID, EJunoGetBestCaveResult& Result); // [0xbf4a86c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.ExitsUsedMaskToArray
	// TArray<int32_t> ExitsUsedMaskToArray(int32_t ExitsUsedMask);                                                             // [0xbf4a0a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.CreateExitsUsedMaskFromArray
	// int32_t CreateExitsUsedMaskFromArray(TArray<int32_t>& ExitsUsed);                                                        // [0xbf49fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.CreateCaveInstanceDataForSurfaceData
	// void CreateCaveInstanceDataForSurfaceData(class AActor* POISlotActor, FJunoCaveSurfaceData& SurfaceData, TArray<FJunoGeneratedCaveShellData>& CaveShellData, EJunoCreateCaveResult& Result); // [0xbf49e34] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.CreateCaveInstanceData
	// void CreateCaveInstanceData(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, TArray<FJunoGeneratedCaveShellData>& CaveShellData, EJunoCreateCaveResult& Result); // [0xbf49cbc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary.CalculateCaveShellDistance
	// void CalculateCaveShellDistance(FJunoCave& Cave, FName ShellID_A, FName ShellID_B, int32_t& Distance, EJunoCalculateCaveDistanceResult& Result); // [0xbf4934c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UJunoCaveVolumePlayspaceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent.OnPlayerLeavingCaveVolume
	// void OnPlayerLeavingCaveVolume(class AFortPlayerPawnAthena* PlayerPawn);                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent.OnPlayerEnteringCaveVolume
	// void OnPlayerEnteringCaveVolume(class AFortPlayerPawnAthena* PlayerPawn);                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent.NotifyActorEndOverlap
	// void NotifyActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                     // [0xbf51098] Final|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent.NotifyActorBeginOverlap
	// void NotifyActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                   // [0xbf50f98] Final|Native|Private 
};

/// Class /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCheatManager_ProceduralWorld : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoPOIVolumeDumpAll
	// void JunoPOIVolumeDumpAll();                                                                                             // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoPOIVolumeDump
	// void JunoPOIVolumeDump();                                                                                                // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoLogStreamingVolumesDebugInfo
	// void JunoLogStreamingVolumesDebugInfo();                                                                                 // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoGoNearActor
	// void JunoGoNearActor(FString ActorClassName);                                                                            // [0x8c2fc5c] Final|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoGoBiome
	// void JunoGoBiome(FName Biome);                                                                                           // [0x86debf4] Final|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoGoActor
	// void JunoGoActor(FString ActorClassName);                                                                                // [0x8c2fc5c] Final|Exec|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld.JunoDumpMapTileImages
	// void JunoDumpMapTileImages();                                                                                            // [0x3097b14] Final|Exec|Native|Private 
};

/// Class /Script/JunoProceduralWorld.JunoClientInstancedActorSpawnerSubsystem
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UJunoClientInstancedActorSpawnerSubsystem : public UMassActorSpawnerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/JunoProceduralWorld.JunoDynamicRuntimeCell
/// Size: 0x0048 (0x000098 - 0x0000E0)
class UJunoDynamicRuntimeCell : public UWorldPartitionRuntimeLevelStreamingCell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class ULevel*)                             DynamicCellLevel                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<FName>)                             DynamicDataLayers                                           OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoDynamicRuntimeSpatialHash
/// Size: 0x00F0 (0x0000E8 - 0x0001D8)
class UJunoDynamicRuntimeSpatialHash : public UWorldPartitionRuntimeSpatialHash
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FMulticastInlineDelegate)                  OnCellLoad                                                  OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCellUnload                                                OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCellActivate                                              OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCellDeactivate                                            OFFSET(getStruct<T>, {0x118, 16, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoGenerateTileInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGenerateTileInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoGenerateTileInterface.GenerateTile
	// void GenerateTile(FJunoGenerateTileParams& Params);                                                                      // [0xbf508a4] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoProceduralWorld.JunoGenerateTileCommandlet
/// Size: 0x0008 (0x000080 - 0x000088)
class UJunoGenerateTileCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoGenerateTileCommandlet.FinishedGenerating
	// void FinishedGenerating();                                                                                               // [0x3097b14] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoInstancedActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FJunoActorInstanceHandle)                  InstanceHandle                                              OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoInstancedActorComponent.OnRep_InstanceHandle
	// void OnRep_InstanceHandle();                                                                                             // [0xbf51198] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoInstancedActorComponent.HasMassEntity
	// bool HasMassEntity();                                                                                                    // [0xbf50f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorData
/// Size: 0x04D8 (0x000028 - 0x000500)
class UJunoInstancedActorData : public UInstancedActorsData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	DMember(uint16_t)                                  ID                                                          OFFSET(get<uint16_t>, {0x28, 2, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FJunoInstancedActorTagSet)                 Tags                                                        OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(TArray<FTransform>)                        InstanceTransforms                                          OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(uint16_t)                                  NumValidInstances                                           OFFSET(get<uint16_t>, {0x80, 2, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	DMember(uint16_t)                                  NumInstances                                                OFFSET(get<uint16_t>, {0xC0, 2, 0, 0})
	CMember(TArray<FMassEntityHandle>)                 Entities                                                    OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FJunoInstancedActorVisualizationInfo>) InstanceVisualizations                                   OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FJunoCompressedTransforms)                 CompressedInstanceTransforms                                OFFSET(getStruct<T>, {0x140, 560, 0, 0})
	SMember(FJunoInstancedActorDeltaList)              InstanceDeltas                                              OFFSET(getStruct<T>, {0x380, 376, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoInstancedActorData.GetManager
	// class AJunoInstancedActorManager* GetManager();                                                                          // [0x33ac1bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorInitializerProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UJunoInstancedActorInitializerProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorManager
/// Size: 0x0148 (0x000290 - 0x0003D8)
class AJunoInstancedActorManager : public AInstancedActorsManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	CMember(class UJunoInstancedActorSubsystem*)       InstancedActorSubsystem                                     OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FJunoInstancedActorManagerHandle)          ManagerHandle                                               OFFSET(getStruct<T>, {0x2B8, 4, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	DMember(bool)                                      bPersistentDataRestored                                     OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      bHasSpawnedEntities                                         OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	DMember(uint16_t)                                  NextInstanceDataID                                          OFFSET(get<uint16_t>, {0x2FA, 2, 0, 0})
	CMember(TArray<class UJunoInstancedActorData*>)    PerActorClassInstanceData                                   OFFSET(get<T>, {0x300, 16, 0, 0})
	SMember(FBox)                                      InstanceBounds                                              OFFSET(getStruct<T>, {0x310, 56, 0, 0})
	CMember(TMap<UInstancedStaticMeshComponent*, int32_t>) ISMComponentToInstanceDataMap                           OFFSET(get<T>, {0x388, 80, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorModifierBase
/// Size: 0x0050 (0x000028 - 0x000078)
class UJunoInstancedActorModifierBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagQuery)                         InstanceTagsQuery                                           OFFSET(getStruct<T>, {0x28, 72, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoRemoveInstancedActorsModifier
/// Size: 0x0000 (0x000078 - 0x000078)
class UJunoRemoveInstancedActorsModifier : public UJunoInstancedActorModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorModifierVolume
/// Size: 0x0008 (0x000290 - 0x000298)
class AJunoInstancedActorModifierVolume : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UJunoInstancedActorModifierVolumeComponent*) ModifierVolumeComponent                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorRemovalModifierVolume
/// Size: 0x0000 (0x000298 - 0x000298)
class AJunoInstancedActorRemovalModifierVolume : public AJunoInstancedActorModifierVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorModifierVolumeComponent
/// Size: 0x0080 (0x000500 - 0x000580)
class UJunoInstancedActorModifierVolumeComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(EJunoIAVolumeShape)                        Shape                                                       OFFSET(get<T>, {0x508, 1, 0, 0})
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0x510, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x528, 4, 0, 0})
	CMember(TArray<class UJunoInstancedActorModifierBase*>) Modifiers                                              OFFSET(get<T>, {0x530, 16, 0, 0})
	DMember(bool)                                      bIgnoreOwnLevelsInstances                                   OFFSET(get<bool>, {0x540, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UWorld*>>)           LevelsToIgnore                                              OFFSET(get<T>, {0x548, 16, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x558, 4, 0, 0})
	DMember(bool)                                      bDrawOnlyIfSelected                                         OFFSET(get<bool>, {0x55C, 1, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x560, 4, 0, 0})
	SMember(FJunoInstancedActorModifierVolumeHandle)   ModifierVolumeHandle                                        OFFSET(getStruct<T>, {0x564, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<AJunoInstancedActorManager*>>) ModifiedManagers                                  OFFSET(get<T>, {0x568, 16, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoRemoveInstancesModifierVolumeComponent
/// Size: 0x0000 (0x000580 - 0x000580)
class UJunoRemoveInstancesModifierVolumeComponent : public UJunoInstancedActorModifierVolumeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorRepresentationActorManagement
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoInstancedActorRepresentationActorManagement : public UMassRepresentationActorManagement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorRepresentationSubsystem
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UJunoInstancedActorRepresentationSubsystem : public UMassRepresentationSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorProjectSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoInstancedActorProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   GridSize                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FDataRegistryType)                         NamedSettingsRegistryType                                   OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	SMember(FDataRegistryType)                         ActorClassSettingsRegistryType                              OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     DefaultBaseSettingsName                                     OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     EnforcedSettingsName                                        OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorSubsystem
/// Size: 0x02C0 (0x000040 - 0x000300)
class UJunoInstancedActorSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UJunoInstancedActorProjectSettings*) ProjectSettings                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UDataRegistrySubsystem*)             DataRegistrySubsystem                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UActorPartitionSubsystem*)           ActorPartitionSubsystem                                     OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UWorld*)                             ExemplarActorWorld                                          OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TMap<UClass*, AActor*>)                    ExemplarActors                                              OFFSET(get<T>, {0x2B0, 80, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorVisualizationSwitcherProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UJunoInstancedActorVisualizationSwitcherProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/JunoProceduralWorld.JunoInstancedActorVisualizationTrait
/// Size: 0x0000 (0x000120 - 0x000120)
class UJunoInstancedActorVisualizationTrait : public UMassStationaryDistanceVisualizationTrait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TWeakObjectPtr<UJunoInstancedActorData*>)  InstanceData                                                OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoLifecycleComponent
/// Size: 0x0060 (0x0000B0 - 0x000110)
class UJunoLifecycleComponent : public UJunoInstancedActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FJunoLifecyclePhase>)               LifecyclePhases                                             OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bAutoAddFinalLifecyclePhase                                 OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bRepeatLifecyclePhases                                      OFFSET(get<bool>, {0xD1, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLifecyclePhaseChangedDelegate                             OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLifecycleCompletedDelegate                                OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	CMember(class UStaticMeshComponent*)               MeshComponent                                               OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(char)                                      StartingPhaseIndex                                          OFFSET(get<char>, {0x100, 1, 0, 0})
	DMember(char)                                      CurrentPhaseIndex                                           OFFSET(get<char>, {0x101, 1, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.SetCurrentPhaseByIndex
	// bool SetCurrentPhaseByIndex(char NewCurrentPhaseIndex, float TimeElapsedInNewPhase, bool bUpdateMass);                   // [0xbf543f0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.OnRep_CurrentPhaseIndex
	// void OnRep_CurrentPhaseIndex(char PreviousLifecyclePhaseIndex);                                                          // [0xbf54098] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.HasCompletedLifecycle
	// bool HasCompletedLifecycle();                                                                                            // [0xbf53f60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.GetCurrentPhaseTimeElapsed
	// float GetCurrentPhaseTimeElapsed();                                                                                      // [0xbf53f38] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.GetCurrentPhaseIndex
	// char GetCurrentPhaseIndex();                                                                                             // [0xbf53f0c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.BP_GetCurrentPhase
	// bool BP_GetCurrentPhase(FJunoLifecyclePhase& OutCurrentPhase);                                                           // [0xbf5360c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoLifecycleComponent.ApplyCurrentPhaseOverrides
	// void ApplyCurrentPhaseOverrides();                                                                                       // [0xbf535f8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoLifecycleProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UJunoLifecycleProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/JunoProceduralWorld.JunoLifecycleVisualizationProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UJunoLifecycleVisualizationProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/JunoProceduralWorld.JunoLightWeightBuildingProp
/// Size: 0x0000 (0x000290 - 0x000290)
class AJunoLightWeightBuildingProp : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/JunoProceduralWorld.JunoLightWeightBuildingGameplayActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AJunoLightWeightBuildingGameplayActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/JunoProceduralWorld.JunoLightWeightFortStaticMeshActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AJunoLightWeightFortStaticMeshActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/JunoProceduralWorld.JunoMassEntityClientDebugProcessor
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UJunoMassEntityClientDebugProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/JunoProceduralWorld.JunoMassHydrationSignalProcessorBase
/// Size: 0x0000 (0x000420 - 0x000420)
class UJunoMassHydrationSignalProcessorBase : public UMassSignalProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
};

/// Class /Script/JunoProceduralWorld.JunoMassHydrationSignalProcessor
/// Size: 0x0000 (0x000420 - 0x000420)
class UJunoMassHydrationSignalProcessor : public UJunoMassHydrationSignalProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
};

/// Class /Script/JunoProceduralWorld.JunoMassDehydrationSignalProcessor
/// Size: 0x0000 (0x000420 - 0x000420)
class UJunoMassDehydrationSignalProcessor : public UJunoMassHydrationSignalProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
};

/// Class /Script/JunoProceduralWorld.JunoMassStationaryLODBatchProcessor
/// Size: 0x0570 (0x0000C0 - 0x000630)
class UJunoMassStationaryLODBatchProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	DMember(double)                                    DelayPerBulkLOD                                             OFFSET(get<double>, {0x600, 32, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoMinimapGenerator
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AJunoMinimapGenerator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FMulticastInlineDelegate)                  OnTexture2DPackageCreatedDelegate                           OFFSET(getStruct<T>, {0x290, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoMinimapGenerator.CreatePackageAndSaveTexture2D
	// class UPackage* CreatePackageAndSaveTexture2D(class UTextureRenderTarget2D* RenderTarget, FString PackageName);          // [0xbf5381c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoOutOfBoundsTile
/// Size: 0x0000 (0x000290 - 0x000290)
class AJunoOutOfBoundsTile : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/JunoProceduralWorld.JunoPawnComponent_StreamingSourcesProvider
/// Size: 0x0068 (0x0000B0 - 0x000118)
class UJunoPawnComponent_StreamingSourcesProvider : public UJunoPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FVector)                                   AboveGroundLocation                                         OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FRotator)                                  AboveGroundRotation                                         OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   BelowGroundLocation                                         OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FRotator)                                  BelowGroundRotation                                         OFFSET(getStruct<T>, {0x100, 24, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoPCGVolume
/// Size: 0x0070 (0x000290 - 0x000300)
class AJunoPCGVolume : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TMap<FName, FJunoCompressedPointList>)     CompressedData                                              OFFSET(get<T>, {0x290, 80, 0, 0})
	DMember(bool)                                      bIsCompressedDataValid                                      OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	CMember(class UBoxComponent*)                      SceneRootComponent                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UPCGComponent*)                      GeneratorComponent                                          OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UPCGComponent*)                      SpawnerComponent                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoPCGVolume.IsSpawnerBusy
	// bool IsSpawnerBusy();                                                                                                    // [0xbf54064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoPCGVolume.IsGeneratorBusy
	// bool IsGeneratorBusy();                                                                                                  // [0xbf53f8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoPCGVolume.CalculateCompressedDataSize
	// int32_t CalculateCompressedDataSize();                                                                                   // [0xbf537d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoPCGVolume.CalcCompressedObjectCount
	// int32_t CalcCompressedObjectCount();                                                                                     // [0xbf537b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.JunoPOIPreselectorComponent
/// Size: 0x00F0 (0x0000A0 - 0x000190)
class UJunoPOIPreselectorComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FJunoPOIManagerSlot>)               WorldTileSlots                                              OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FPCGJunoWorldTilePOI>)              DebugSpawnPOIs                                              OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FDataRegistryType)                         POIDataRegistry                                             OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	CMember(class AJunoWorldTile*)                     WorldTile                                                   OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoPOIPreselectorComponent.OnWorldTileContentsAvailable
	// void OnWorldTileContentsAvailable();                                                                                     // [0xbf543dc] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoPOIPreselectorComponent.OnSpawnPositionSet
	// void OnSpawnPositionSet(FUniqueNetIdRepl ID, FVector Location);                                                          // [0xbf54134] Final|Native|Protected|HasDefaults 
	// Function /Script/JunoProceduralWorld.JunoPOIPreselectorComponent.BeginPreselection
	// void BeginPreselection();                                                                                                // [0xbf5379c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoCaveGeneratorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCaveGeneratorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveGeneratorInterface.GenerateCave
	// void GenerateCave(FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, int32_t CaveIndex, FBox& Bounds);             // [0x3d1d968] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/JunoProceduralWorld.JunoPOISelectorComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UJunoPOISelectorComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FDataRegistryType)                         DataRegistryType                                            OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     CosmeticEncounterTags                                       OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	CMember(TArray<FJunoPOISelectorTeleporterClass>)   TeleporterClasses                                           OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FJunoPOISelectorParams)                    Params                                                      OFFSET(getStruct<T>, {0xD8, 48, 0, 0})
	CMember(TWeakObjectPtr<UJunoPOIPreselectorComponent*>) PreSelectorComponent                                    OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FJunoCaveSurfaceData)                      CaveSurfaceData                                             OFFSET(getStruct<T>, {0x118, 48, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.TriggerCaveGeneration
	// void TriggerCaveGeneration();                                                                                            // [0xbf544ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.IsPOIPreselectorActorReady
	// bool IsPOIPreselectorActorReady(class AActor* Actor);                                                                    // [0xbf53fd8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.IsNativePOISelectorEnabled
	// bool IsNativePOISelectorEnabled();                                                                                       // [0xbf53fc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.DoSelection
	// void DoSelection();                                                                                                      // [0xbf53ef8] Final|Native|Protected 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.CaveGridResolution
	// int32_t CaveGridResolution();                                                                                            // [0xbf537f8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoPOISelectorComponent.BeginPOISelection
	// void BeginPOISelection(FJunoPOISelectorParams& Params);                                                                  // [0xbf536e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoProceduralWorldBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.UnionActorBounds
	// FBox UnionActorBounds(TArray<AActor*>& Actors);                                                                          // [0xbf59834] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.SetGridCellSize
	// void SetGridCellSize(class AActor* WorldContextObject, FName GridName, float CellSize, float LoadingRange, FVector2D Origin); // [0xbf59654] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.SetBoxBrushSize
	// void SetBoxBrushSize(class AActor* Volume, FVector& Size);                                                               // [0x9244638] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.SaveCurrentLevelAs
	// bool SaveCurrentLevelAs(FString NewPackageName);                                                                         // [0x80d1f40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.RunParallelCommandlets
	// void RunParallelCommandlets(FText& DialogueTitle, TArray<FString>& Commands, int32_t MaxProcesses);                      // [0xbf59334] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.JunoCreateLevel
	// void JunoCreateLevel(FJunoCreateLevelParams& Params, TWeakObjectPtr<UWorld*>& CreatedLevel, EJunoCreateLevelResult& Result); // [0xbf59060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.GetJunoWorldRegistry
	// class UJunoWorldRegistryManager* GetJunoWorldRegistry(class UObject* WorldContextObject);                                // [0xbf58bc4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.FindNextMatchingPOIResourceEx
	// void FindNextMatchingPOIResourceEx(FJunoRandomTableKeysIterator& Iterator, class UDataTable* DataTable, EJunoPOISize Size, EJunoBiome Biome, FPCGJunoWorldTilePOI& FoundPOI, EJunoFindNextMatchingPOIResourceResult& Result); // [0xbf583d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.FindNextMatchingPOIResource
	// void FindNextMatchingPOIResource(FJunoRandomTableKeysIterator& Iterator, class UDataTable* DataTable, EJunoPOISize SlotPOISize, TArray<FName>& SlotTags, FPCGJunoWorldTilePOI& FoundPOI, EJunoFindNextMatchingPOIResourceResult& Result, bool bRemoveFromIterator); // [0xbf57f1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.FindAllResourcesInFolder
	// void FindAllResourcesInFolder(FString Folder, class UClass* AssetClass, TArray<FSoftObjectPath>& OutPaths);              // [0xbf571fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.EnableLandscapeNaniteSkirts
	// void EnableLandscapeNaniteSkirts(class ALandscape* Landscape, bool bEnable, float SkirtDepth);                           // [0xbf57118] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.DisableLandscapeEditLayers
	// void DisableLandscapeEditLayers(class ALandscape* Landscape);                                                            // [0x5decebc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.DeterministicShuffleKeys
	// TArray<FName> DeterministicShuffleKeys(FRandomStream& RandomSource, TArray<FName>& Array);                               // [0xbf56fcc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.CreateJunoWPLevelFromActors
	// void CreateJunoWPLevelFromActors(FString LevelPackageName, TArray<AActor*>& Actors, TWeakObjectPtr<UWorld*>& CreatedLevel, bool bUseWorldPartition, FName GridName, float LoadingRange, int32_t WorldPartitionGridCellSize, FVector2D WorldPartitionGridCellOrigin, class UHLODLayer* DefaultHLODLayer, EWorldPartitionServerStreamingMode ServerStreamingMode, EWorldPartitionServerStreamingOutMode ServerStreamingOutMode); // [0xbf56150] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.CreateJunoRandomTableKeysIterator
	// FJunoRandomTableKeysIterator CreateJunoRandomTableKeysIterator(FRandomStream& RandomStream, TArray<FName>& Keys);        // [0xbf56024] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.CompareTagSets
	// void CompareTagSets(TSet<FName>& Source, TSet<FName>& Target, EJunoCompareTagSetsResult& Result);                        // [0xbf55dbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.CalcPOISizeExtent
	// FVector CalcPOISizeExtent(EJunoPOISize Size);                                                                            // [0xbf55d28] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary.ApplyLandscapeTileSettings
	// void ApplyLandscapeTileSettings(class ALandscape* LandscapeTile, float LODBlendRange, bool bUseCompressedHeightmapStorage, bool bDisableRuntimeGrassMapGeneration); // [0xbf55c08] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoProceduralWorldDeveloperSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoProceduralWorldDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoProceduralWorld.JunoProceduralWorldSettings
/// Size: 0x00E8 (0x0000F8 - 0x0001E0)
class UJunoProceduralWorldSettings : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(bool)                                      bEnableTiledWorldsInPIE                                     OFFSET(get<bool>, {0xF8, 1, 0, 0})
	CMember(EJunoLevelInstanceMode)                    Caves_LevelInstanceMode                                     OFFSET(get<T>, {0xF9, 1, 0, 0})
	CMember(EJunoLevelInstanceMode)                    POI_LevelInstanceMode                                       OFFSET(get<T>, {0xFA, 1, 0, 0})
	DMember(bool)                                      bEnablePOI_HLODs                                            OFFSET(get<bool>, {0xFB, 1, 0, 0})
	DMember(int32_t)                                   MaxPOIsPerTile                                              OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	SMember(FName)                                     InjectedPOI_GridName                                        OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	SMember(FName)                                     InjectedPOI_HLODGridName                                    OFFSET(getStruct<T>, {0x104, 4, 0, 0})
	SMember(FName)                                     InjectedCave_GridName                                       OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	SMember(FName)                                     InjectedCave_HLODGridName                                   OFFSET(getStruct<T>, {0x10C, 4, 0, 0})
	DMember(int32_t)                                   POIStreamingPriority                                        OFFSET(get<int32_t>, {0x110, 4, 0, 0})
	DMember(int32_t)                                   CaveStreamingPriority                                       OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	DMember(int64_t)                                   TileSize                                                    OFFSET(get<int64_t>, {0x118, 8, 0, 0})
	DMember(int64_t)                                   WorldSize                                                   OFFSET(get<int64_t>, {0x120, 8, 0, 0})
	SMember(FIntVector)                                WorldOriginTileOffset                                       OFFSET(getStruct<T>, {0x128, 12, 0, 0})
	DMember(int64_t)                                   DynamicGridLevels                                           OFFSET(get<int64_t>, {0x138, 8, 0, 0})
	DMember(float)                                     DynamicGridWorldMaxExtent                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     DynamicGridLoadingRange                                     OFFSET(get<float>, {0x144, 4, 0, 0})
	SMember(FVector)                                   OffsetTerrain                                               OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	CMember(class UClass*)                             TileSelectionClass                                          OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UClass*)                             WorldTileClass                                              OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UClass*)                             OutOfBoundsTileActor                                        OFFSET(get<T>, {0x170, 8, 0, 0})
	DMember(float)                                     TerrainElevationMinimum                                     OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     TerrainElevationMaximum                                     OFFSET(get<float>, {0x17C, 4, 0, 0})
	CMember(class UClass*)                             CaveVolumeClass                                             OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(class UClass*)                             POIVolumeClass                                              OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               POIResourcesTable                                           OFFSET(get<T>, {0x190, 32, 0, 0})
	SMember(FDataRegistryType)                         POIRegistryType                                             OFFSET(getStruct<T>, {0x1B0, 4, 0, 0})
	SMember(FDataRegistryType)                         TileSelectorRegistryType                                    OFFSET(getStruct<T>, {0x1B4, 4, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   TestOverlayLevel                                            OFFSET(get<T>, {0x1B8, 32, 0, 0})
	SMember(FName)                                     TileSelectorOverride                                        OFFSET(getStruct<T>, {0x1D8, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoServerInstancedActorSpawnerSubsystem
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UJunoServerInstancedActorSpawnerSubsystem : public UMassActorSpawnerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(class AActor*)                             TransientActorBeingSpawned                                  OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FJunoActorInstanceHandle)                  TransientActorSpawningInstance                              OFFSET(getStruct<T>, {0x108, 16, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoStaticMeshPoolSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoStaticMeshPoolSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class AJunoStaticMeshPoolActor*)           StaticMeshPoolActor                                         OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoStreamingGameplayVolumeDebugger
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoStreamingGameplayVolumeDebugger : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoProceduralWorld.JunoStreamingPlayspace
/// Size: 0x0000 (0x000808 - 0x000808)
class AJunoStreamingPlayspace : public AJunoPersistentPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2056;

public:
};

/// Class /Script/JunoProceduralWorld.JunoTerrainGenerationSystem
/// Size: 0x05B0 (0x000040 - 0x0005F0)
class UJunoTerrainGenerationSystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	CMember(TSet<ALandscapeProxy*>)                    TrackedLandscapes                                           OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TSet<UJunoLandscapeComponent*>)            TrackedLandscapeComponents                                  OFFSET(get<T>, {0x90, 80, 0, 0})
	CMember(class UJunoLandscapeManager*)              JunoLandscapeManager                                        OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TMap<FName, UJunoLandscapeLayersData*>)    PluginLayerData                                             OFFSET(get<T>, {0xE8, 80, 0, 0})
	SMember(FJunoTerrainGenerationConfiguration)       VisualsConfiguration                                        OFFSET(getStruct<T>, {0x2B0, 88, 0, 0})
	SMember(FJunoTerrainGenerationConfiguration)       HeightmapConfiguration                                      OFFSET(getStruct<T>, {0x308, 88, 0, 0})
	SMember(FJunoTerrainGenerationConfiguration)       GrassConfiguration                                          OFFSET(getStruct<T>, {0x360, 88, 0, 0})
	SMember(FJunoTerrainGenerationConfiguration)       CollisionConfiguration                                      OFFSET(getStruct<T>, {0x3B8, 88, 0, 0})
	SMember(FJunoTerrainGenerationConfiguration)       WeightmapConfiguration                                      OFFSET(getStruct<T>, {0x410, 88, 0, 0})
	SMember(FJunoTerrainGenerationConfiguration)       WaterConfiguration                                          OFFSET(getStruct<T>, {0x468, 88, 0, 0})
	CMember(TArray<FName>)                             WeightmapsToGather                                          OFFSET(get<T>, {0x4C0, 16, 0, 0})
	DMember(bool)                                      bEnablePhysicsAndGrassStripping                             OFFSET(get<bool>, {0x4D0, 1, 0, 0})
	CMember(TArray<FString>)                           ExcludePhysicsAndGrassStrippingPlatforms                    OFFSET(get<T>, {0x4D8, 16, 0, 0})
	DMember(bool)                                      bEnablePCGCacheStripping                                    OFFSET(get<bool>, {0x4E8, 1, 0, 0})
	CMember(TArray<FString>)                           ExcludePCGCacheStrippingPlatforms                           OFFSET(get<T>, {0x4F0, 16, 0, 0})
	CMember(class UJunoLandscapeCustomMaterial*)       WaterNavigationMaterial                                     OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UJunoLandscapeCustomMaterial*)       WaterIdentificationMaterial                                 OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UJunoLandscapeDynamicCustomMaterial*) WaterIdentificationMaterialDynamic                         OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(class UJunoLandscapeDynamicCustomMaterial*) WaterNavigationMaterialDynamic                             OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UJunoLandscapeCustomMaterial*)       RiverIdentificationMaterial                                 OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UJunoLandscapeCustomMaterial*)       LakeIdentificationMaterial                                  OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             WaterBodyIdentificationTexture                              OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             WaterIdentificationFinal                                    OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.ValidateSavedTiles
	// void ValidateSavedTiles();                                                                                               // [0x3097b14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnProxyDestroyed
	// void OnProxyDestroyed(class AActor* DestroyedActor);                                                                     // [0xbf592b4] Final|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnCellUnload
	// void OnCellUnload(class UJunoDynamicRuntimeCell* Cell);                                                                  // [0xbf59234] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnCellLoad
	// void OnCellLoad(class UJunoDynamicRuntimeCell* Cell);                                                                    // [0x5decebc] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnCellDeactivate
	// void OnCellDeactivate(class UJunoDynamicRuntimeCell* Cell);                                                              // [0x5decebc] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.OnCellActivate
	// void OnCellActivate(class UJunoDynamicRuntimeCell* Cell);                                                                // [0xbf591b4] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.GetWaterInformationInDirection
	// FJunoTerrainWaterInformation GetWaterInformationInDirection(FVector Location, FVector Direction);                        // [0xbf58dd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.GetWaterInformationAtLocation
	// FJunoTerrainWaterInformation GetWaterInformationAtLocation(FVector Location);                                            // [0xbf58c44] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.GetInterpolatedWaterInformation
	// TArray<FJunoTerrainWaterInformation> GetInterpolatedWaterInformation(FVector Location, bool& OutLocationIsWater);        // [0xbf58a08] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.GetInterpolatedOceanInformation
	// TArray<FJunoTerrainWaterInformation> GetInterpolatedOceanInformation(FVector Location, bool& OutLocationIsOcean);        // [0xbf5884c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.GenerateServerPrecachedData
	// void GenerateServerPrecachedData();                                                                                      // [0x3097b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.ForceSaveForMissingLayers
	// void ForceSaveForMissingLayers();                                                                                        // [0x3097b14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.FixupWorldLandscapeWeightmapLayers
	// void FixupWorldLandscapeWeightmapLayers(class UObject* WorldContextObject);                                              // [0x5decebc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoTerrainGenerationSystem.FixupAllJunoLandscapeWeightmapLayers
	// void FixupAllJunoLandscapeWeightmapLayers();                                                                             // [0x3097b14] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoTerrainSystemAssets
/// Size: 0x0020 (0x000030 - 0x000050)
class UJunoTerrainSystemAssets : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UJunoLandscapeCustomMaterial*)       WaterNavigationMaterial                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UJunoLandscapeCustomMaterial*)       WaterIdentificationMaterial                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UJunoLandscapeCustomMaterial*)       RiverIdentificationMaterial                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UJunoLandscapeCustomMaterial*)       LakeIdentificationMaterial                                  OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoTerrainMaterialCollector
/// Size: 0x0070 (0x000028 - 0x000098)
class UJunoTerrainMaterialCollector : public UJunoLandscapeExternalMaterialsCollector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FName>)                             Biomes                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             BorderNames                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FName, FName>)                        SwappableBiomeNames                                         OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData
/// Size: 0x00F8 (0x000040 - 0x000138)
class UJunoTileGridPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FJunoTileGridSaveData)                     TileSaveData                                                OFFSET(getStruct<T>, {0x48, 240, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureDataActor
/// Size: 0x00F8 (0x0002D0 - 0x0003C8)
class AJunoTileGridPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FJunoTileGridPersistentData)               Data                                                        OFFSET(getStruct<T>, {0x2D8, 80, 0, 0})
	CMember(TMap<FName, FJunoReservedAreaPersistentData>) ReservedAreas                                            OFFSET(get<T>, {0x328, 80, 0, 0})
	CMember(TMap<FName, FJunoPOICellDistributionPersistentData>) PerCellRarePOICounts                              OFFSET(get<T>, {0x378, 80, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoTileGridPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoTileGridPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoProceduralWorld.JunoTileSubsystem
/// Size: 0x0108 (0x000030 - 0x000138)
class UJunoTileSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(class UJunoPlayspacePersistenceFeatureHelper*) TileGridPersistenceFeatureHelper                        OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UJunoWorldTileSelectionBase*)        TileSelectionInterfaceObject                                OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TMap<FName, AActor*>)                      OutOfBoundsActors                                           OFFSET(get<T>, {0x48, 80, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.OnCellUnload
	// void OnCellUnload(class UJunoDynamicRuntimeCell* Cell);                                                                  // [0xbf64314] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.OnCellLoad
	// void OnCellLoad(class UJunoDynamicRuntimeCell* Cell);                                                                    // [0x5decebc] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.OnCellDeactivate
	// void OnCellDeactivate(class UJunoDynamicRuntimeCell* Cell);                                                              // [0x5decebc] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.OnCellActivate
	// void OnCellActivate(class UJunoDynamicRuntimeCell* Cell);                                                                // [0xbf64294] Final|Native|Public  
	// Function /Script/JunoProceduralWorld.JunoTileSubsystem.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* Pawn);                                                // [0xbf6410c] Final|Native|Private 
};

/// Class /Script/JunoProceduralWorld.JunoWaterSplineInjector
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoWaterSplineInjector : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWaterSplineInjector.InjectSplineGuideIntoWaterBody
	// void InjectSplineGuideIntoWaterBody(FJunoWaterSplineInjectorParams& Params);                                             // [0xbf641d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoWaterSplineInjector.ForceWaterUpdate
	// void ForceWaterUpdate();                                                                                                 // [0x3097b14] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoWorldLocalEnvironmentComponent
/// Size: 0x0130 (0x0000A0 - 0x0001D0)
class UJunoWorldLocalEnvironmentComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FJunoBiomeInfoQueryResult)                 LocalBiome                                                  OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FJunoBiomeInfoQueryResult)                 ServerBiome                                                 OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	CMember(TArray<FJunoWaterLocationResult>)          WaterDirectionInformation                                   OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FJunoWaterLocationResult)                  LookDirectionWaterInformation                               OFFSET(getStruct<T>, {0x108, 80, 0, 0})
	DMember(bool)                                      bShouldUpdateWaterLocation                                  OFFSET(get<bool>, {0x158, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoEnvironmentChanged                                    OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FGuid)                                     CaveGuid                                                    OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})
	CMember(TWeakObjectPtr<UJunoWorldRegistryManager*>) WeakRegistryManager                                        OFFSET(get<T>, {0x1B8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldLocalEnvironmentComponent.OnRep_ServerBiome
	// void OnRep_ServerBiome();                                                                                                // [0xbf64394] Final|Native|Private 
};

/// Class /Script/JunoProceduralWorld.JunoWorldTilePlayspaceComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UJunoWorldTilePlayspaceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTile
/// Size: 0x0280 (0x0003B0 - 0x000630)
class AJunoWorldTile : public AJunoStreamingGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	SMember(FPCGJunoWorldTile)                         TileInformation                                             OFFSET(getStruct<T>, {0x3B8, 248, 0, 0})
	SMember(FJunoWorldTileStreamingLevelFastArray)     InjectedLevels                                              OFFSET(getStruct<T>, {0x4B0, 288, 0, 0})
	CMember(TArray<class URuntimeSpatialHashExternalStreamingObject*>) InjectedObjects                             OFFSET(get<T>, {0x5D0, 16, 0, 0})
	DMember(int32_t)                                   InjectedLevelCount                                          OFFSET(get<int32_t>, {0x5E0, 4, 0, 0})
	CMember(class UWorldPartition*)                    InjectedObjectsWorldPartition                               OFFSET(get<T>, {0x5E8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldTile.OnUnloadBegin
	// void OnUnloadBegin(class ULevel* Level);                                                                                 // [0xbf643cc] Final|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.IsTestLevelWorldTile
	// bool IsTestLevelWorldTile();                                                                                             // [0x2c9e4a0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.GetJunoWorldTileTransform
	// void GetJunoWorldTileTransform(class AActor* ActorInWorldTile, FTransform& Transform, EJunoGetWorldTileTransformResult& Result); // [0xbf63f34] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.GetJunoWorldTileBounds
	// void GetJunoWorldTileBounds(class AActor* ActorInWorldTile, FBox& TileBounds, EJunoGetWorldTileBoundsResult& Result);    // [0xbf63dd8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.ClientOnAllLevelsLoaded
	// void ClientOnAllLevelsLoaded();                                                                                          // [0x385f960] Final|Native|Private 
	// Function /Script/JunoProceduralWorld.JunoWorldTile.ArePositionsInSameWorldTile
	// bool ArePositionsInSameWorldTile(class UObject* WorldContextObject, FVector& LocationA, FVector& LocationB);             // [0xbf63b94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileDebugger
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoWorldTileDebugger : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoProceduralWorld.JunoTestPOIMarker
/// Size: 0x0008 (0x000290 - 0x000298)
class AJunoTestPOIMarker : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	DMember(float)                                     DebugBoxSize                                                OFFSET(get<float>, {0x290, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileControllerComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UJunoWorldTileControllerComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldTileControllerComponent.ServerCheckWorldTileState
	// void ServerCheckWorldTileState();                                                                                        // [0x839537c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoProceduralWorld.JunoWorldTileControllerComponent.ClientCheckWorldTileState
	// void ClientCheckWorldTileState(TArray<FJunoDebugWorldTileState> WorldTileState);                                         // [0xbf63d48] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/JunoProceduralWorld.JunoCaveDataCollectionBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoCaveDataCollectionBase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileLandscapeSpatialHash
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UJunoWorldTileLandscapeSpatialHash : public UWorldPartitionRuntimeSpatialHash
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldTilePersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWorldTilePersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSaveData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWorldTileSaveData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionBase
/// Size: 0x0020 (0x000030 - 0x000050)
class UJunoWorldTileSelectionBase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     TileExtent                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   WorldGridCount                                              OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int64_t)                                   WorldSize                                                   OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	DMember(bool)                                      bRequiresDebugArea                                          OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FRandomStream)                             RandomStream                                                OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      bEnableBiomeSwaps                                           OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bEnableBorderPermutations                                   OFFSET(get<bool>, {0x4D, 1, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.UseReservedArea
	// bool UseReservedArea(class UObject* WorldContextObject, FName& AreaName, TMap<FName, FBox2D>& AreaTiles, TArray<FPCGJunoWorldTile>& OutNewTiles); // [0xbf69f2c] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.UpdateTile
	// bool UpdateTile(class UObject* WorldContextObject, FPCGJunoWorldTile& CurrentTile, FPCGJunoWorldTile& OutUpdatedTile);   // [0xbf69dbc] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.Setup
	// void Setup(class UObject* WorldContextObject);                                                                           // [0x6fc975c] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.GetDebugLevelLocation
	// FVector GetDebugLevelLocation(class UObject* WorldContextObject);                                                        // [0xbf6785c] RequiredAPI|Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.ChooseTile
	// void ChooseTile(class UObject* WorldContextObject, FVector& Position, FPCGJunoWorldTile& OutSelectedTile);               // [0xbf669c4] RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.ChooseStartTile
	// bool ChooseStartTile(class UObject* WorldContextObject, FVector& StartTileLocation);                                     // [0x9247aa4] RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.ChooseOutOfBoundsTile
	// void ChooseOutOfBoundsTile(class UObject* WorldContextObject, FPCGJunoWorldTile& OutSelectedTile);                       // [0xbf668d0] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionBase.ChooseDebugTile
	// void ChooseDebugTile(class UObject* WorldContextObject, FVector& Position, FPCGJunoWorldTile& OutSelectedTile);          // [0xbf66754] RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionForced
/// Size: 0x0010 (0x000050 - 0x000060)
class UJunoWorldTileSelectionForced : public UJunoWorldTileSelectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   RandomTileSeed                                              OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	CMember(class UDataTable*)                         WorldTilesDataTable                                         OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionAgatha
/// Size: 0x0038 (0x000050 - 0x000088)
class UJunoWorldTileSelectionAgatha : public UJunoWorldTileSelectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UDataTable*)                         WorldTilesDataTable                                         OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<EJunoBiome>)                        ScatteredLandBiomes                                         OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(float)                                     WaterLevel                                                  OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     TileNoiseFrequency                                          OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   NumberOfDarklandsIslands                                    OFFSET(get<int32_t>, {0x70, 4, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldTileSelectionAgatha.GenerateCornersForUI
	// void GenerateCornersForUI(class UObject* WorldContextObject, TArray<EJunoBiome>& Corners);                               // [0xbf67170] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionBeryl
/// Size: 0x0110 (0x000050 - 0x000160)
class UJunoWorldTileSelectionBeryl : public UJunoWorldTileSelectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FDataRegistryType)                         TileRegistryType                                            OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	CMember(TArray<EJunoBiome>)                        ScatteredLandBiomes                                         OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<EJunoBiome>)                        StartTileRequiredBiomes                                     OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     WaterLevel                                                  OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     TileNoiseFrequency                                          OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(int32_t)                                   NumBigAlpineBiomes                                          OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   BigAlpineMaxSize                                            OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	CMember(TArray<EJunoBiome>)                        ScatteredAlpineBiomes                                       OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(int32_t)                                   NumSmallAlpineBiomes                                        OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   NumberOfReservedAreas                                       OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	CMember(TMap<FName, EJunoBiome>)                   AreasToUpdate                                               OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileSelectionCynthia
/// Size: 0x0110 (0x000050 - 0x000160)
class UJunoWorldTileSelectionCynthia : public UJunoWorldTileSelectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FDataRegistryType)                         TileRegistryType                                            OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	CMember(TArray<EJunoBiome>)                        ScatteredLandBiomes                                         OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<EJunoBiome>)                        StartTileRequiredBiomes                                     OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     WaterLevel                                                  OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     TileNoiseFrequency                                          OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(int32_t)                                   NumberOfAlpineRanges                                        OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   AlpineRangeLength                                           OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	CMember(TArray<EJunoBiome>)                        ScatteredAlpineBiomes                                       OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(int32_t)                                   NumberOfReservedAreas                                       OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(bool)                                      bLimitReservedAreasToPerimeter                              OFFSET(get<bool>, {0x9C, 1, 0, 0})
	CMember(TMap<FName, EJunoBiome>)                   AreasToUpdate                                               OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoWorldWeatherLocationComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UJunoWorldWeatherLocationComponent : public UJunoWeatherLocationComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldWeatherLocationComponent.HandleEnvironmentChanged
	// void HandleEnvironmentChanged(class AActor* Actor, FJunoBiomeInfoQueryResult& PreviousEnvironmentResult, FJunoBiomeInfoQueryResult& NewEnvironmentResult); // [0xbf67ae0] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoProceduralWorld.LandmassPathfinder
/// Size: 0x0260 (0x000028 - 0x000288)
class ULandmassPathfinder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	CMember(class ALandscapeProxy*)                    LandscapeProxy                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class ALandmassProceduralRoute*)           RouteSystem                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<class ULandmassPathfinder*>)        BackStopPaths                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class ALandmassProceduralRoute*)           BlockingRoute                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<UPCGSpatialData*>)          PCGSampler                                                  OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  PathfinderSpawnWarpingActorDelegate                         OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FPathfinderHistory)                        PathfinderHistory                                           OFFSET(getStruct<T>, {0x1D0, 72, 0, 0})
	DMember(int32_t)                                   MaxNodesPerCell                                             OFFSET(get<int32_t>, {0x218, 4, 0, 0})
	DMember(bool)                                      bUsePCGSamplerIfAvailable                                   OFFSET(get<bool>, {0x220, 1, 0, 0})
	DMember(bool)                                      bVisualizeHeuristicSteps                                    OFFSET(get<bool>, {0x221, 1, 0, 0})
	DMember(bool)                                      bVisualizeBacktracedPathOfHeuristicSteps                    OFFSET(get<bool>, {0x222, 1, 0, 0})
	DMember(bool)                                      bVisualizeValidLocationSearching                            OFFSET(get<bool>, {0x223, 1, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.StartPathfinder
	// void StartPathfinder(FVector A, FVector B, bool bFindNearestValidLocationForA, bool bFindNearestValidLocationForB);      // [0xbf6999c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.SetDestinationActuallyReached
	// void SetDestinationActuallyReached(FVector Location);                                                                    // [0xbf6984c] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.SetDestination
	// void SetDestination(FVector Location);                                                                                   // [0xbf69704] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.ProjectLocation
	// FVector ProjectLocation(FVector Location, bool& bOutIsValidLocation);                                                    // [0xbf69438] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.OnStartPathfinder
	// void OnStartPathfinder(FVector A, FVector B);                                                                            // [0x3d1d968] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.OnInitialize
	// void OnInitialize(class ALandscapeProxy* InLandscapeProxy, class ALandmassProceduralRoute* InRoute, FLandmassPathfinderRules Rules, class ALandmassProceduralRoute* InBlockingRoute); // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.K2_StepPathfinder
	// EPushFrontierResult K2_StepPathfinder(TArray<FVector>& OutLocations, TArray<float>& OutCosts, TArray<bool>& bOutIsSnapped, TArray<EPathfinderNodeState>& OutNodeStates); // [0xbf688f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.K2_GetPriorityList
	// void K2_GetPriorityList(TArray<FVector>& Locations, TArray<float>& Costs);                                               // [0xbf687a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.IsTargetLocationValid
	// bool IsTargetLocationValid(FVector TargetLocation);                                                                      // [0xbf68640] Native|Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.Initialize
	// bool Initialize(class ALandscapeProxy* LandscapeProxy, class ALandmassProceduralRoute* InRoute, FLandmassPathfinderRules Rules, TArray<ULandmassPathfinder*> InBackStopPaths, class ALandmassProceduralRoute* InBlockingRoute); // [0xbf67bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.GetLandscapeBox
	// FBox GetLandscapeBox();                                                                                                  // [0xbf6791c] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.GetIsInitialized
	// bool GetIsInitialized();                                                                                                 // [0xbf67904] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.FindNearestValidLocation
	// bool FindNearestValidLocation(FVector InLocation, FVector& OutValidLocation, bool bShouldProject);                       // [0xbf66e28] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.ExecutePathfinderSync
	// void ExecutePathfinderSync(FVector A, FVector B, TArray<FVector>& Locations, TArray<float>& Costs);                      // [0xbf66b40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassPathfinder.AdditionalPushFrontierResultCondition
	// EPushFrontierResult AdditionalPushFrontierResultCondition(EPushFrontierResult ResultFromLastPush, FLandmassPathfinderRules InCurrentRules, FVector InHome, FVector InDestination, FVector InCurrentLocation, int32_t InCurrentPushSteps, float InCurrentCost, bool& bShouldUseBestNodeInsteadOfMostRecentNode); // [0xbf65fcc] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UPathfinderGuideSetsDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FPathfinderGuideSet>)               GuideSets                                                   OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset.SaveCurveSetFromSplintComponents
	// void SaveCurveSetFromSplintComponents(TArray<USplineComponent*> SourceComponents, int32_t Index);                        // [0xbf695f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset.LoadCurveSetAndAddSplineComponentsToActor
	// bool LoadCurveSetAndAddSplineComponentsToActor(class AActor* InActor, int32_t Index);                                    // [0xbf690f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset.GetRandomGuideSetFromSeed
	// FPathfinderGuideSet GetRandomGuideSetFromSeed(int32_t Seed);                                                             // [0xbf679fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset.GetRandomGuideSet
	// FPathfinderGuideSet GetRandomGuideSet();                                                                                 // [0xbf67964] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.PCGJunoActorBoundsToPointSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGJunoActorBoundsToPointSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/JunoProceduralWorld.PCGJunoFindFoundationSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoFindFoundationSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(float)                                     DistanceToSample                                            OFFSET(get<float>, {0x150, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoMaskData
/// Size: 0x0058 (0x000038 - 0x000090)
class UPCGJunoMaskData : public UPCGData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/JunoProceduralWorld.PCGJunoCreateMaskDataNodeSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoCreateMaskDataNodeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(bool)                                      bIs2D                                                       OFFSET(get<bool>, {0x150, 1, 0, 0})
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x154, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoApplyMaskNodeSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoApplyMaskNodeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(PCGJunoApplyMaskNodeMode)                  Mode                                                        OFFSET(get<T>, {0x150, 1, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoUnionMasksNodeSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoUnionMasksNodeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(bool)                                      bIs2D                                                       OFFSET(get<bool>, {0x150, 1, 0, 0})
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x154, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoProjectPositionSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGJunoProjectPositionSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(bool)                                      bProjectLandscapeMetadata                                   OFFSET(get<bool>, {0x150, 1, 0, 0})
	DMember(bool)                                      bProjectPositions                                           OFFSET(get<bool>, {0x151, 1, 0, 0})
	DMember(bool)                                      bProjectRotations                                           OFFSET(get<bool>, {0x152, 1, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoProjectPositionTestShape
/// Size: 0x0000 (0x000080 - 0x000080)
class UJunoProjectPositionTestShape : public UPCGSpatialData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/JunoProceduralWorld.PCGJunoStoreDataSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGJunoStoreDataSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TArray<FPCGJunoStoreDataPin>)              ExpectedPins                                                OFFSET(get<T>, {0x150, 16, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoLoadDataSettings
/// Size: 0x0038 (0x000150 - 0x000188)
class UPCGJunoLoadDataSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TArray<FName>)                             Pins                                                        OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(EJunoPCGVolumeSource)                      Source                                                      OFFSET(get<T>, {0x160, 1, 0, 0})
	SMember(FVector)                                   AdditionalExtents                                           OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(getStruct<T>, {0x180, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.ProceduralRiverGenRulesAsset
/// Size: 0x0058 (0x000030 - 0x000088)
class UProceduralRiverGenRulesAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TMap<ELandmassRiverTier, FProceduralRiverGenRules>) RuleSet                                            OFFSET(get<T>, {0x30, 80, 0, 0})
	DMember(float)                                     RiverGridGridSize                                           OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   RasterizeToRiverGridExtent                                  OFFSET(get<int32_t>, {0x84, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoCaveVolume
/// Size: 0x0000 (0x000298 - 0x000298)
class AJunoCaveVolume : public ATriggerBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoCaveVolume.RetrievePointProviders
	// void RetrievePointProviders(TArray<AJunoCaveLivingWorldStaticPointProvider*>& OutPointProviders);                        // [0xbf8fb04] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoCaveVolume.OnPlayerLeavingCaveVolume
	// void OnPlayerLeavingCaveVolume(class AFortPlayerPawnAthena* PlayerPawn);                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.JunoCaveVolume.OnPlayerEnteringCaveVolume
	// void OnPlayerEnteringCaveVolume(class AFortPlayerPawnAthena* PlayerPawn);                                                // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoProceduralWorld.JunoGameFeatureAction_AddTileSet
/// Size: 0x0030 (0x000028 - 0x000058)
class UJunoGameFeatureAction_AddTileSet : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UJunoLandscapeLayersData*>) JunoLandscapeLayers                                         OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TArray<FString>)                           TerrainDirectories                                          OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoLevelInstance
/// Size: 0x0010 (0x0007A8 - 0x0007B8)
class AJunoLevelInstance : public ABuildingLevelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1976;

public:
	SMember(FMulticastInlineDelegate)                  OnLevelLoaded                                               OFFSET(getStruct<T>, {0x7A8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLevelInstance.GetActorsInLevel
	// TArray<AActor*> GetActorsInLevel();                                                                                      // [0xbf8edb4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderCluster
/// Size: 0x0160 (0x000290 - 0x0003F0)
class AJunoLivingWorldStaticPointProviderCluster : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	CMember(TArray<FJunoLivingWorldStaticPointProviderClusterEntry>) Entries                                       OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<FLWMClusterPointInfo>)              PointInfos                                                  OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FScalableFloat)                            PartitionnerCellSize                                        OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	DMember(float)                                     HysteresisSize                                              OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     MaxPlayerQueryRange                                         OFFSET(get<float>, {0x2E0, 4, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderCluster.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0xbf8f55c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoProceduralWorld.JunoPOIGameplayVolume
/// Size: 0x0090 (0x0003B0 - 0x000440)
class AJunoPOIGameplayVolume : public AJunoStreamingGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	SMember(FJunoPOIInstanceData)                      InstanceData                                                OFFSET(getStruct<T>, {0x3B8, 24, 0, 0})
	SMember(FGuid)                                     POIGuid                                                     OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     EncounterCapabilities                                       OFFSET(getStruct<T>, {0x3E0, 32, 0, 0})
	DMember(int32_t)                                   EncounterVariantCount                                       OFFSET(get<int32_t>, {0x400, 4, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               EncounterCategoryTable                                      OFFSET(get<T>, {0x408, 32, 0, 0})
	CMember(TArray<FJunoWorldTileStreamingLevel>)      LevelsToInject                                              OFFSET(get<T>, {0x428, 16, 0, 0})
	SMember(FName)                                     RegistryItemName                                            OFFSET(getStruct<T>, {0x438, 4, 0, 0})
	DMember(int32_t)                                   PersistenceVersion                                          OFFSET(get<int32_t>, {0x43C, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoPOISlot
/// Size: 0x0048 (0x000290 - 0x0002D8)
class AJunoPOISlot : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               PotentialPOIs                                               OFFSET(get<T>, {0x290, 32, 0, 0})
	CMember(EJunoPOISize)                              SlotSize                                                    OFFSET(get<T>, {0x2B0, 1, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               TerrainHeightTexture                                        OFFSET(get<T>, {0x2B8, 32, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPOIBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.SetPOISlotMetaDatas
	// void SetPOISlotMetaDatas(class AActor* POISlotActor, TArray<FJunoPOIManagerSlot>& POISlots, FJunoPOISlotMetaData& POISlotMetaData, EJunoSetSlotPOIMetaDataResult& Result); // [0xbf901c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.QueryPOIState
	// void QueryPOIState(class AActor* POISlotActor, FGuid& POISlotGuid, EQueryPOIStateResult& Result, FJunoPOISlotMetaData& POISlotMetaData, FBox& WorldTileBounds); // [0xbf8f940] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.QueryCavePOIState
	// void QueryCavePOIState(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, FGuid& CaveShellGuid, EQueryPOIStateResult& Result, FBox& WorldTileBounds); // [0xbf8f754] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.MarkPOISlotUnused
	// void MarkPOISlotUnused(class AActor* POISlotActor, FGuid& POISlotGuid, EJunoMarkSlotPOIUnusedResult& Result);            // [0xbf8f44c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.MarkCavePOISlotUnused
	// void MarkCavePOISlotUnused(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, FGuid& CaveShellGuid, EJunoMarkSlotPOIUnusedResult& Result); // [0xbf8f2dc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.GetMatchingPOIsFromDataRegistry
	// void GetMatchingPOIsFromDataRegistry(FDataRegistryType& DataRegistry, TSet<FName>& Tags, TSet<EJunoPOISize>& Sizes, TSet<EJunoBiome>& Biomes, TArray<FPCGJunoWorldTilePOI>& Array, EJunoGetMatchingPOIsFromDataRegistryResult& Result, EJunoWorldTilePOIType Type); // [0xbf8ee40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.FindBestPOISlots
	// void FindBestPOISlots(TArray<FJunoPOIManagerSlot>& PotentialSlots, TArray<FJunoPOIManagerSlot>& AdditionalCompareSlots, int32_t DesiredNumber, double DesiredMinDistance, TArray<FJunoPOIManagerSlot>& Result, TArray<FJunoPOIManagerSlot>& Remainder, FBox& WorldTileBounds, EJunoBiome Biome, bool bEnforceMinDistance); // [0xbf8e814] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.CreateRarePOIs
	// void CreateRarePOIs(class AActor* Actor, FRandomStream& RandomStream, FDataRegistryType& DataRegistry, TArray<FJunoPOIManagerSlot>& PotentialSlots, TArray<FJunoPOIManagerSlot>& UsedSlots, EGeneratePOIResult& Result); // [0xbf8e5e4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.CreatePOI
	// void CreatePOI(class AActor* POISlotActor, FGuid& POISlotGuid, FJunoPOIData& Data, EGeneratePOIResult& Result);          // [0xbf8e434] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary.CreateCavePOI
	// void CreateCavePOI(class AActor* CaveSlotActor, FGuid& CaveSlotGuid, FGuid& CaveShellGuid, FJunoPOIData& Data, EGeneratePOIResult& Result); // [0xbf8e218] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoProceduralFoundation
/// Size: 0x0000 (0x001030 - 0x001030)
class AJunoProceduralFoundation : public ABuildingFoundation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4144;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoProceduralFoundation.AddAdditionalWorld
	// void AddAdditionalWorld(TWeakObjectPtr<UWorld*>& World);                                                                 // [0xbf8e0bc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoRoadAINavigationCluster
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AJunoRoadAINavigationCluster : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(TArray<FJunoRoadAINavigationClusterEntry>) Entries                                                     OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<FRoadPatrolPathInfo>)               PatrolInfos                                                 OFFSET(get<T>, {0x2A0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoRoadAINavigationCluster.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0xbf8f658] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoProceduralWorld.JunoStaticMeshPoolActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AJunoStaticMeshPoolActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTileContentsPersistentData
/// Size: 0x0120 (0x0002D0 - 0x0003F0)
class AJunoWorldTileContentsPersistentData : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	CMember(TMap<FGuid, FJunoCave>)                    Caves                                                       OFFSET(get<T>, {0x2D8, 80, 0, 0})
	CMember(TMap<FGuid, AJunoPOIGameplayVolume*>)      POIs                                                        OFFSET(get<T>, {0x328, 80, 0, 0})
	CMember(TArray<FJunoWorldTileStreamingLevel>)      InjectedLevels                                              OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(TMap<FGuid, FJunoPOISlotMetaData>)         POISlotMetaDatas                                            OFFSET(get<T>, {0x388, 80, 0, 0})
	CMember(TArray<FJunoCaveSurfaceData>)              CaveSurfaceData                                             OFFSET(get<T>, {0x3D8, 16, 0, 0})
	DMember(bool)                                      bIsCaveSurfaceDataValid                                     OFFSET(get<bool>, {0x3E8, 1, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldCaveSpawnLimiterComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UJunoLivingWorldCaveSpawnLimiterComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FCaveShellSpawnLimitData)                  SpawnLimitData                                              OFFSET(getStruct<T>, {0xA0, 120, 0, 0})
};

/// Class /Script/JunoProceduralWorld.CaveShellSpawnEntry
/// Size: 0x0038 (0x000028 - 0x000060)
class UCaveShellSpawnEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldCaveSpawnManager
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJunoLivingWorldCaveSpawnManager : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FCaveShellID, UCaveShellSpawnEntry*>) Entries                                                     OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterRenderComponent
/// Size: 0x0020 (0x000550 - 0x000570)
class UJunoLivingWorldStaticPointProviderClusterRenderComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/JunoProceduralWorld.JunoRoadAINavigationClusterRenderComponent
/// Size: 0x0000 (0x000550 - 0x000550)
class UJunoRoadAINavigationClusterRenderComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
};

/// Class /Script/JunoProceduralWorld.JunoProceduralWorldSystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoProceduralWorldSystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoProceduralWorld.LandmassCluster
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandmassCluster : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bInitialized                                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<class AActor*>)                     Actors                                                      OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.LandmassCluster.K2_AddConnection
	// bool K2_AddConnection(class AActor* LeafActorA, class AActor* LeafActorB);                                               // [0xbff7070] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassCluster.InitializeDentrogram
	// void InitializeDentrogram(TArray<AActor*> InActors, TArray<FDendrogramLeafAttributes>& InAttributes);                    // [0xbff5a6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassCluster.GetTopLevel
	// int32_t GetTopLevel();                                                                                                   // [0xbff45f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassCluster.GetLeafCount
	// int32_t GetLeafCount();                                                                                                  // [0x30d0eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassCluster.GetClustersAtLevel
	// TArray<FDendrogramClusterOutput> GetClustersAtLevel(int32_t InLevel);                                                    // [0xbff3ee8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.LandmassFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandmassFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetStaticMeshAffectDistanceField
	// void SetStaticMeshAffectDistanceField(class UStaticMeshComponent* Mesh, bool bNewValue);                                 // [0xbff7a50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointWidth
	// void SetControlPointWidth(class ULandscapeSplineControlPoint* InControlPoint, float InWidth);                            // [0xbff791c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointSideFalloff
	// void SetControlPointSideFalloff(class ULandscapeSplineControlPoint* InControlPoint, float InSideFalloff);                // [0xbff7868] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointRotation
	// void SetControlPointRotation(class ULandscapeSplineControlPoint* InControlPoint, FRotator InRotation);                   // [0xbff76e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointLocation
	// void SetControlPointLocation(class ULandscapeSplineControlPoint* InControlPoint, FVector InLocation);                    // [0xbff7558] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.SetControlPointLayerWidthRatio
	// void SetControlPointLayerWidthRatio(class ULandscapeSplineControlPoint* InControlPoint, float InLayerWidthRatio);        // [0xbff74a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.ProjectLocationOnLandscape
	// FVector ProjectLocationOnLandscape(class ALandscapeProxy* LandscapeProxy, FVector Location, bool& bIsValidLocation);     // [0xbff720c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.LevelInstanceSetAndUpdateWorldAsset
	// void LevelInstanceSetAndUpdateWorldAsset(class ALevelInstance* LevelInstance, TWeakObjectPtr<UWorld*>& WorldAsset);      // [0xbff7134] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetLandscapeHeightAtLocation
	// float GetLandscapeHeightAtLocation(class ALandscapeProxy* LandscapeProxy, FVector Location, bool& bIsValidLocation);     // [0xbff43b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetLandscapeGradientAtLocation
	// FVector2D GetLandscapeGradientAtLocation(class ALandscapeProxy* LandscapeProxy, FVector Location);                       // [0xbff4210] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointWidth
	// float GetControlPointWidth(class ULandscapeSplineControlPoint* InControlPoint);                                          // [0xbff4194] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointSideFalloff
	// float GetControlPointSideFalloff(class ULandscapeSplineControlPoint* InControlPoint);                                    // [0xbff4118] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointRotation
	// FRotator GetControlPointRotation(class ULandscapeSplineControlPoint* InControlPoint);                                    // [0xbff4090] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointLocation
	// FVector GetControlPointLocation(class ULandscapeSplineControlPoint* InControlPoint);                                     // [0xbff4008] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.LandmassFunctionLibrary.GetControlPointLayerWidthRatio
	// float GetControlPointLayerWidthRatio(class ULandscapeSplineControlPoint* InControlPoint);                                // [0xbff3f8c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoProceduralWorld.LandmassProceduralRoadGenRules
/// Size: 0x0058 (0x000030 - 0x000088)
class ULandmassProceduralRoadGenRules : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TMap<ELandmassRoadTier, FProceduralRoadGenRules>) RuleSet                                              OFFSET(get<T>, {0x30, 80, 0, 0})
	DMember(float)                                     RoadGridGridSize                                            OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   RasterizeToRoadGridExtent                                   OFFSET(get<int32_t>, {0x84, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.ProceduralRouteDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class UProceduralRouteDefinition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.ProceduralRouteDefinition.FindLocationClosestToWorldLocation
	// FVector FindLocationClosestToWorldLocation(FVector& WorldLocation, float& OutDistanceSqr);                               // [0xbff3cd8] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.LandmassProceduralRoute
/// Size: 0x00C8 (0x000290 - 0x000358)
class ALandmassProceduralRoute : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	DMember(bool)                                      EditorTickIsEnabled                                         OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(TWeakObjectPtr<UPCGSpatialData*>)          PCGSampler                                                  OFFSET(get<T>, {0x29C, 8, 0, 0})
	DMember(bool)                                      bRunFromPCG                                                 OFFSET(get<bool>, {0x2A4, 1, 0, 0})
	CMember(class ALandscapeProxy*)                    LandscapeProxy                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(int32_t)                                   TickFrequency                                               OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})
	SMember(FProceduralRouteJunoTileInfo)              JunoTileInfo                                                OFFSET(getStruct<T>, {0x2B4, 12, 0, 0})
	CMember(class UClass*)                             Pathfinder                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(TArray<class AWaterBody*>)                 Lakes                                                       OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGenerationFinishedMulticastDelegate                       OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<class UProceduralRouteDefinition*>) PendingRoutesToAddToRouteGrid                               OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(class ULandmassCluster*)                   LandmassCluster                                             OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      bEnableDebugInfo                                            OFFSET(get<bool>, {0x350, 1, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.WakeUpDormantRoute
	// bool WakeUpDormantRoute();                                                                                               // [0xbff7c60] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.StartRoute
	// void StartRoute();                                                                                                       // [0x1f9c7fc] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.SetWidthForLastAddedPoint
	// void SetWidthForLastAddedPoint(float NewWidth);                                                                          // [0xbff7bdc] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.SetWidthAtPointIndex
	// void SetWidthAtPointIndex(int32_t Index, float NewWidth);                                                                // [0xbff7b14] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.SetEditorTickEnabled
	// void SetEditorTickEnabled(bool bEnabled);                                                                                // [0xbff79d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.SetCurrentRouteGenerationState
	// void SetCurrentRouteGenerationState(ERouteGenerationState InState);                                                      // [0xb2f19e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.ResetAllAndInitialize
	// bool ResetAllAndInitialize(bool bResetAllLandscapeSplines);                                                              // [0xbff740c] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.RasterizeAllPendingRoutesToRouteGrid
	// void RasterizeAllPendingRoutesToRouteGrid();                                                                             // [0xbff73f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.PutIntoDormancy
	// bool PutIntoDormancy();                                                                                                  // [0x9b324b0] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.OnGenerationFinished
	// void OnGenerationFinished();                                                                                             // [0xbff71f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.IsInsideOcean
	// bool IsInsideOcean(FVector Location);                                                                                    // [0xbff6f4c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.IsInsideLake
	// bool IsInsideLake(FVector Location, class AWaterBody* InLake, float Dilation);                                           // [0xbff6af8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.IsInsideAnyLakeAccurate
	// bool IsInsideAnyLakeAccurate(FVector Location);                                                                          // [0xbff6998] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.IsInsideAnyLake
	// bool IsInsideAnyLake(FVector Location, float Tolerance);                                                                 // [0xbff6754] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.InitLandmassClusterLeavesOnly
	// void InitLandmassClusterLeavesOnly(TArray<FDendrogramLeafAttributes>& InLeafAttributes);                                 // [0xbff5398] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.InitLandmassCluster
	// void InitLandmassCluster(TArray<AActor*> InActors, TArray<FDendrogramLeafAttributes>& InLeafAttributes);                 // [0xbff4668] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.GetRouteDefinitions
	// TArray<UProceduralRouteDefinition*> GetRouteDefinitions();                                                               // [0xbff4588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.GetLandmassCluster
	// class ULandmassCluster* GetLandmassCluster();                                                                            // [0xbeb8bd0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.GetCurrentRouteGenerationState
	// ERouteGenerationState GetCurrentRouteGenerationState();                                                                  // [0x31a4534] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.GenerateCluster
	// bool GenerateCluster();                                                                                                  // [0xbff3ebc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.FinishRoute
	// bool FinishRoute(int32_t& OutRouteIndex);                                                                                // [0xbff3e1c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.CustomTick
	// void CustomTick(float DeltaSeconds);                                                                                     // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.ClearCreatedLandscapeSplines
	// bool ClearCreatedLandscapeSplines();                                                                                     // [0xbff3cb0] Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.BeginGeneratePCG
	// void BeginGeneratePCG(TArray<FLandmassPCGRouteInput>& Inputs);                                                           // [0xbff3c14] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.AddControlPoint
	// bool AddControlPoint(FVector WorldPosition);                                                                             // [0xbff3aac] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.AddConnection
	// bool AddConnection(class AActor* LeafActorA, class AActor* LeafActorB);                                                  // [0xbff39e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.LandmassProceduralRoute.AddAvoidancePrimitive
	// void AddAvoidancePrimitive(FRouteAvoidancePrimitive InPrimitive);                                                        // [0xbff3860] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.ProceduralRiverDefinition
/// Size: 0x0018 (0x000030 - 0x000048)
class UProceduralRiverDefinition : public UProceduralRouteDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UProceduralRiverGenRulesAsset*)      GenRulesAsset                                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(ELandmassRiverTier)                        RiverTier                                                   OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(class AWaterBody*)                         WaterBody                                                   OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.ProceduralRiverDefinition.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                           // [0xc032cb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRiverDefinition.GetWaterBodyActor
	// class AWaterBody* GetWaterBodyActor();                                                                                   // [0x5e4f978] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoProceduralWorld.ProceduralRivers
/// Size: 0x0778 (0x000358 - 0x000AD0)
class AProceduralRivers : public ALandmassProceduralRoute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	CMember(class UClass*)                             WaterClass                                                  OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UProceduralRiverGenRulesAsset*)      GenRulesAsset                                               OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(TArray<FProceduralRiverAnchor>)            AnchorsInput                                                OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(TArray<class UProceduralRiverDefinition*>) OutRivers                                                   OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(class UProceduralRiverDefinition*)         CurrentRoute                                                OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(bool)                                      bEnableDebug                                                OFFSET(get<bool>, {0x390, 1, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.ProceduralRivers.VisualizeAnchors
	// void VisualizeAnchors();                                                                                                 // [0x3097b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.SurfaceLocationOverride
	// FVector SurfaceLocationOverride(FVector InLocation, bool& bOutIsOverriden);                                              // [0x3d1d968] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.StartRiverGeneration
	// void StartRiverGeneration();                                                                                             // [0xc032ff8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.SetRiverTier
	// void SetRiverTier(ELandmassRiverTier InRiverTier);                                                                       // [0xc032f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.RebuildLastRiver
	// void RebuildLastRiver();                                                                                                 // [0xc032eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.InitializeNeighborGrid
	// bool InitializeNeighborGrid();                                                                                           // [0xc032cf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.HaltRiverGeneration
	// void HaltRiverGeneration();                                                                                              // [0xc032cdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetVelocityScalarAtDistanceAlongSpline
	// float GetVelocityScalarAtDistanceAlongSpline(class UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline); // [0xc032bac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetRiverMergeSearchNeighborGridSize
	// float GetRiverMergeSearchNeighborGridSize();                                                                             // [0xc032b6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetRiverDefinitions
	// TArray<UProceduralRiverDefinition*> GetRiverDefinitions();                                                               // [0xc032b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetProceduralRiverActorTag
	// FName GetProceduralRiverActorTag();                                                                                      // [0xc032a24] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetHalfWidthAtDistanceAlongSpline
	// float GetHalfWidthAtDistanceAlongSpline(class UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline);   // [0xc03291c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetGenerationRules
	// bool GetGenerationRules(ELandmassRiverTier InRiverTier, FProceduralRiverGenRules& OutRules);                             // [0xc032714] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetDepthAtDistanceAlongSpline
	// float GetDepthAtDistanceAlongSpline(class UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline);       // [0xc03260c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetAvailableTargetAnchors
	// TArray<FProceduralRiverAnchor> GetAvailableTargetAnchors();                                                              // [0xc031f8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetAvailableSourceAnchors
	// TArray<FProceduralRiverAnchor> GetAvailableSourceAnchors();                                                              // [0xc03190c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRivers.GetAudioIntensityAtDistanceAlongSpline
	// float GetAudioIntensityAtDistanceAlongSpline(class UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline); // [0xc031804] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoProceduralWorld.ProceduralRoadDefinition
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UProceduralRoadDefinition : public UProceduralRouteDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class ULandmassProceduralRoadGenRules*)    GenRulesAsset                                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(ELandmassRoadTier)                         RoadTier                                                    OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	CMember(TArray<FInterpSegment>)                    OutInterpSegments                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     LUTGridSize                                                 OFFSET(get<float>, {0xB4, 4, 0, 0})
	CMember(TArray<int32_t>)                           LUT                                                         OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     LUTResolution                                               OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.ProceduralRoads
/// Size: 0x0348 (0x000358 - 0x0006A0)
class AProceduralRoads : public ALandmassProceduralRoute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	DMember(bool)                                      bDoesAffectLandscape                                        OFFSET(get<bool>, {0x358, 1, 0, 0})
	CMember(class ULandscapeSplinesComponent*)         SplinesComponent                                            OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(int32_t)                                   SplineLayerIndex                                            OFFSET(get<int32_t>, {0x368, 4, 0, 0})
	CMember(class ULandmassProceduralRoadGenRules*)    GenRulesAsset                                               OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(TArray<class UProceduralRoadDefinition*>)  OutRoads                                                    OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(class UProceduralRoadDefinition*)          CurrentRoute                                                OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(TArray<class ULandscapeSplineControlPoint*>) SelectedSplineControlPoints                               OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(TArray<class ULandscapeSplineControlPoint*>) ControlPoints                                             OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(TArray<class ULandscapeSplineSegment*>)    Segments                                                    OFFSET(get<T>, {0x688, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.ProceduralRoads.UpdateLandscapeSplines
	// void UpdateLandscapeSplines();                                                                                           // [0x3097b14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.SetRoadTier
	// void SetRoadTier(ELandmassRoadTier InRoadTier);                                                                          // [0xc032f7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.RemoveHardTurnControlPoint
	// void RemoveHardTurnControlPoint();                                                                                       // [0xc032ec8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.K2_GetRoadGridDataAtLocation
	// TArray<FVector> K2_GetRoadGridDataAtLocation(FVector InLocation);                                                        // [0xc032d3c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.InitializeNeighborGrid
	// bool InitializeNeighborGrid();                                                                                           // [0xc032d18] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetRoadMergeSearchNeighborGridSize
	// float GetRoadMergeSearchNeighborGridSize();                                                                              // [0xc032b8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetRoadDefinitions
	// TArray<UProceduralRoadDefinition*> GetRoadDefinitions();                                                                 // [0xc032b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetProceduralRoadLoopAnchorTag
	// FName GetProceduralRoadLoopAnchorTag(int32_t LoopIndex);                                                                 // [0xc032a7c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetProceduralRoadActorTag
	// FName GetProceduralRoadActorTag();                                                                                       // [0xc032a50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetGenerationRules
	// bool GetGenerationRules(ELandmassRoadTier InRoadTier, FProceduralRoadGenRules& OutRules);                                // [0xc032820] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.GetAllControlPoints
	// TArray<ULandscapeSplineControlPoint*> GetAllControlPoints();                                                             // [0xc03115c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.EvaluateRouteAtLength
	// FSegmentInterpResult EvaluateRouteAtLength(class UProceduralRoadDefinition* InRoute, float InLength, bool bTransformToWorld); // [0xc030f48] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.EnableOverrideGenRules
	// void EnableOverrideGenRules(FProceduralRoadGenRules InOverrideGenRules);                                                 // [0xc030dcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralWorld.ProceduralRoads.DisableOverrideGenRules
	// void DisableOverrideGenRules();                                                                                          // [0xc030db4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.PCGAddLandscapeLayerWeightsSettings
/// Size: 0x0000 (0x000150 - 0x000150)
class UPCGAddLandscapeLayerWeightsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/JunoProceduralWorld.PCGJunoFractalNoise2DSettings
/// Size: 0x00B0 (0x000150 - 0x000200)
class UPCGJunoFractalNoise2DSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FVector2D)                                 TilingFactor                                                OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(float)                                     Brightness                                                  OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     Contrast                                                    OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	CMember(PCGJunoFractalNoise2DMode)                 Mode                                                        OFFSET(get<T>, {0x16C, 4, 0, 0})
	SMember(FName)                                     AttributeName                                               OFFSET(getStruct<T>, {0x170, 4, 0, 0})
	SMember(FName)                                     VoronoiIDAttributeName                                      OFFSET(getStruct<T>, {0x174, 4, 0, 0})
	DMember(bool)                                      bVoronoiOrientSamplesToCellEdge                             OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(double)                                    VoronoiDistortion                                           OFFSET(get<double>, {0x180, 8, 0, 0})
	SMember(FVector2D)                                 VoronoiDistortionTiling                                     OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	DMember(int32_t)                                   TiledVoronoiResolution                                      OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	CMember(PCGJunoFractalDensityMode)                 DensityMode                                                 OFFSET(get<T>, {0x19C, 4, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FVector2D)                                 RandomizedOffset                                            OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	DMember(float)                                     EdgeBlendDistance                                           OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     EdgeNoiseBrightness                                         OFFSET(get<float>, {0x1C4, 4, 0, 0})
	DMember(float)                                     EdgeNoiseContrast                                           OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     EdgeBlendCurve                                              OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     EdgeBlendCurveOffset                                        OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     EdgeBlendNoise                                              OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      EdgeBlendFadeOut                                            OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	SMember(FVector2D)                                 EdgeBlendNoiseTilingFactor                                  OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	CMember(PCGJunoFractalNoise2DEdgeMode)             EdgeNoiseMode                                               OFFSET(get<T>, {0x1F0, 4, 0, 0})
	DMember(int32_t)                                   EdgeNoiseIterations                                         OFFSET(get<int32_t>, {0x1F4, 4, 0, 0})
	DMember(int32_t)                                   EdgeBlendCellCount                                          OFFSET(get<int32_t>, {0x1F8, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoPathfindSettings
/// Size: 0x0028 (0x000150 - 0x000178)
class UPCGJunoPathfindSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FName)                                     ProceduralRouteTag                                          OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	CMember(TArray<FName>)                             InputPins                                                   OFFSET(get<T>, {0x158, 16, 0, 0})
	CMember(TArray<FName>)                             OutputPins                                                  OFFSET(get<T>, {0x168, 16, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoReadProceduralSplinesSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGJunoReadProceduralSplinesSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     ProceduralRouteTag                                          OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	CMember(TArray<FName>)                             OutputPins                                                  OFFSET(get<T>, {0x158, 16, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoReadLandscapeSplinesSettings
/// Size: 0x0020 (0x000150 - 0x000170)
class UPCGJunoReadLandscapeSplinesSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FVector)                                   ExtraSearchExtents                                          OFFSET(getStruct<T>, {0x150, 24, 0, 0})
	DMember(bool)                                      bPerformBoundsCheck                                         OFFSET(get<bool>, {0x168, 1, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoRoadAINavigationSettings
/// Size: 0x0068 (0x000150 - 0x0001B8)
class UPCGJunoRoadAINavigationSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(TWeakObjectPtr<UClass*>)                   RoadClusterClass                                            OFFSET(get<T>, {0x150, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PatrolPathClass                                             OFFSET(get<T>, {0x170, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PatrolPointClass                                            OFFSET(get<T>, {0x190, 32, 0, 0})
	DMember(float)                                     StepLength                                                  OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     LineDeviationTolerance                                      OFFSET(get<float>, {0x1B4, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointSettings
/// Size: 0x0088 (0x000150 - 0x0001D8)
class UPCGJunoSpawnLivingWorldStaticPointSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(getStruct<T>, {0x150, 32, 0, 0})
	CMember(TArray<FPCGJunoSpawnLivingWorldStaticPointTag>) ConditionalTags                                        OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TArray<FPCGJunoSpawnLivingWorldStaticPointTagConditionSet>) ConditionalTagsSets                        OFFSET(get<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      bExclusiveConditionalTags                                   OFFSET(get<bool>, {0x190, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   StaticPointClass                                            OFFSET(get<T>, {0x198, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PointClusterClass                                           OFFSET(get<T>, {0x1B8, 32, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGResolveAudioBankSettings
/// Size: 0x0010 (0x000150 - 0x000160)
class UPCGResolveAudioBankSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FName)                                     AttributeNameForBiomeDataTable                              OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedActorPath                           OFFSET(getStruct<T>, {0x154, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedAudioBankPath                       OFFSET(getStruct<T>, {0x158, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGResolveBiomeSettings
/// Size: 0x0048 (0x000150 - 0x000198)
class UPCGResolveBiomeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FPCGJunoBiomeEntry)                        DefaultBiome                                                OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	CMember(TArray<FPCGJunoBiomeEntry>)                Biomes                                                      OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedBiome                               OFFSET(getStruct<T>, {0x188, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedBiomeEnum                           OFFSET(getStruct<T>, {0x18C, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedBiomeDataTable                      OFFSET(getStruct<T>, {0x190, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGResolveBiomeIngredientsSettings
/// Size: 0x0020 (0x000150 - 0x000170)
class UPCGResolveBiomeIngredientsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     AttributeNameForBiomeTypeFilter                             OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     AttributeNameForBiomeDataTable                              OFFSET(getStruct<T>, {0x154, 4, 0, 0})
	SMember(FName)                                     AttributeNameForBiomeLayer                                  OFFSET(getStruct<T>, {0x158, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedActorPath                           OFFSET(getStruct<T>, {0x15C, 4, 0, 0})
	SMember(FName)                                     AttributeNameForRepresentation                              OFFSET(getStruct<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedRowName                             OFFSET(getStruct<T>, {0x164, 4, 0, 0})
	DMember(bool)                                      bApplyBlendToVertical                                       OFFSET(get<bool>, {0x168, 1, 0, 0})
	DMember(bool)                                      bApplyRandomLeanAmount                                      OFFSET(get<bool>, {0x169, 1, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGResolveBiomePOISettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGResolveBiomePOISettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     AttributeNameForBiomeDataTable                              OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedActorPath                           OFFSET(getStruct<T>, {0x154, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedPOIPath                             OFFSET(getStruct<T>, {0x158, 4, 0, 0})
	SMember(FName)                                     AttributeNameForBoundsMultiplier                            OFFSET(getStruct<T>, {0x15C, 4, 0, 0})
	SMember(FName)                                     AttributeNameForRepresentation                              OFFSET(getStruct<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedRowName                             OFFSET(getStruct<T>, {0x164, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGResolvePOISlotsSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGResolvePOISlotsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     AttributeNameForBiomeDataTable                              OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     AttributeNameForPotentialPIOsDataTable                      OFFSET(getStruct<T>, {0x154, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedActorPath                           OFFSET(getStruct<T>, {0x158, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedPOIPath                             OFFSET(getStruct<T>, {0x15C, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedSlotSize                            OFFSET(getStruct<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedTerrainHeightPatch                  OFFSET(getStruct<T>, {0x164, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGSetAudioBankSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGSetAudioBankSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     AttributeNameForResolvedAudioBankPath                       OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     AttributeNameForSpawnedActorPtr                             OFFSET(getStruct<T>, {0x154, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGSetFoundationLevelSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGSetFoundationLevelSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     AttributeNameForResolvedPOIPath                             OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     AttributeNameForSpawnedActorPtr                             OFFSET(getStruct<T>, {0x154, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGSetLevelInstanceLevelSettings
/// Size: 0x0008 (0x000150 - 0x000158)
class UPCGSetLevelInstanceLevelSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     AttributeNameForResolvedPOIPath                             OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     AttributeNameForSpawnedActorPtr                             OFFSET(getStruct<T>, {0x154, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGSetPOISlotPropertiesSettings
/// Size: 0x0018 (0x000150 - 0x000168)
class UPCGSetPOISlotPropertiesSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     AttributeNameForSpawnedActorPtr                             OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     AttributeNameForPotentialPIOsDataTable                      OFFSET(getStruct<T>, {0x154, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedPOIPath                             OFFSET(getStruct<T>, {0x158, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedSlotSize                            OFFSET(getStruct<T>, {0x15C, 4, 0, 0})
	SMember(FName)                                     AttributeNameForResolvedTerrainHeightPatch                  OFFSET(getStruct<T>, {0x160, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGSpawnActorForPathSettings
/// Size: 0x0048 (0x000150 - 0x000198)
class UPCGSpawnActorForPathSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	DMember(bool)                                      bUseLightWeightInstances                                    OFFSET(get<bool>, {0x150, 1, 0, 0})
	SMember(FGameplayTagContainer)                     InstanceTags                                                OFFSET(getStruct<T>, {0x158, 32, 0, 0})
	CMember(TArray<FName>)                             TagsToAddOnActors                                           OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(bool)                                      bAddSpawnedActorAttribute                                   OFFSET(get<bool>, {0x188, 1, 0, 0})
	SMember(FName)                                     AttributeNameForSpawnedActorPtr                             OFFSET(getStruct<T>, {0x18C, 4, 0, 0})
	SMember(FName)                                     PathAttributeName                                           OFFSET(getStruct<T>, {0x190, 4, 0, 0})
	SMember(FName)                                     AttributeNameForRepresentation                              OFFSET(getStruct<T>, {0x194, 4, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGManageLightweightInstances
/// Size: 0x0050 (0x000088 - 0x0000D8)
class UPCGManageLightweightInstances : public UPCGManagedActors
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TSet<FActorInstanceHandle>)                GeneratedLWIs                                               OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGManagedActorInstances
/// Size: 0x0050 (0x000088 - 0x0000D8)
class UPCGManagedActorInstances : public UPCGManagedActors
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TSet<FJunoActorInstanceHandle>)            GeneratedInstances                                          OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Class /Script/JunoProceduralWorld.PCGSpawnJunoBiomeSettings
/// Size: 0x0038 (0x000150 - 0x000188)
class UPCGSpawnJunoBiomeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FPCGJunoBiomeEntry)                        DefaultBiome                                                OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	CMember(TArray<FPCGJunoBiomeEntry>)                Biomes                                                      OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoTileGridPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureData
/// Size: 0x0118 (0x000040 - 0x000158)
class UJunoWorldTilePersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TMap<FGuid, FJunoCave>)                    Caves                                                       OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FGuid, AJunoPOIGameplayVolume*>)      POIs                                                        OFFSET(get<T>, {0xA0, 80, 0, 0})
	SMember(FJunoWorldTileSaveData)                    SaveData                                                    OFFSET(getStruct<T>, {0xF0, 104, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoLivingWorldLightStaticPointProvider
/// Size: 0x0040 (0x000160 - 0x0001A0)
class UJunoLivingWorldLightStaticPointProvider : public UFortAthenaLivingWorldLightStaticPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FJunoLivingWorldPointProviderEventLimiter) EventLimiter                                                OFFSET(getStruct<T>, {0x168, 32, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x188, 16, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoLivingWorldLightStaticPointProvider.AppendFiltersTags
	// void AppendFiltersTags(FGameplayTagContainer& Container);                                                                // [0xc0527c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoProceduralWorld.JunoWorldRegistryActorComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJunoWorldRegistryActorComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGameplayTagContainer)                     WorldRegistryEntryTags                                      OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	CMember(EJunoWorldRegistryType)                    WorldRegistryType                                           OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     VisitedTags                                                 OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
};

/// Class /Script/JunoProceduralWorld.JunoWorldRegistryManager
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UJunoWorldRegistryManager : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:


	/// Functions
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetWorldDebugInfoText
	// void GetWorldDebugInfoText(class AFortPlayerPawn* PlayerPawn, FJunoDebugWorldInfoResult& WorldDebugInfo);                // [0xc059950] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetWorldBounds
	// FBoxSphereBounds GetWorldBounds();                                                                                       // [0xc059900] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetWorldAnalyticsInfo
	// void GetWorldAnalyticsInfo(class UObject* WorldContextObject, FVector& WorldLocation, FJunoWorldAnalyticsInfoResult& WorldAnalyticsInfo); // [0xc05917c] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetWaterInformationInDirection
	// void GetWaterInformationInDirection(FVector& Location, FVector& Direction, FJunoWaterLocationResult& OutResult);         // [0xc058f94] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetWaterDirectionInformationAtLocation
	// void GetWaterDirectionInformationAtLocation(FVector& Location, bool bIncludeNearMisses, bool& OutInWater, TArray<FJunoWaterLocationResult>& OutResult); // [0xc0587b0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetTileMiniMapTexture
	// TWeakObjectPtr<UTexture2D*> GetTileMiniMapTexture(class UObject* WorldContextObject, FVector& WorldLocation);            // [0xc058674] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetTileForLocation
	// class AJunoWorldTile* GetTileForLocation(class UObject* WorldContextObject, FVector& WorldLocation);                     // [0xc05856c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetNormalizedTileLocation
	// bool GetNormalizedTileLocation(class UObject* WorldContextObject, FVector& WorldLocation, FVector& OutResult);           // [0xc0583c4] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetClosestEntryUsingTagQuery
	// FJunoWorldRegistryEntry GetClosestEntryUsingTagQuery(EJunoWorldRegistryType EntryType, FGameplayTagQuery& TagQuery, FVector& QueryLocation); // [0xc05817c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoProceduralWorld.JunoWorldRegistryManager.GetBiomeAtLocation
	// void GetBiomeAtLocation(FVector& Location, FJunoBiomeInfoQueryResult& OutResult);                                        // [0xc058048] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoProceduralWorld.JunoBridgePOISelectorParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoBridgePOISelectorParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(double)                                    RiverWidth                                                  OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorWorldsList
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoCaveGeneratorWorldsList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSoftObjectPath>)                   Worlds                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorResourceWorlds
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoCaveGeneratorResourceWorlds : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TSet<EJunoBiome>)                          ValidBiomes                                                 OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   Worlds                                                      OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorPOIMarker
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FJunoCaveGeneratorPOIMarker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TSet<EJunoPOISize>)                        ValidSizes                                                  OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x50, 96, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorShellData
/// Size: 0x01A0 (0x000008 - 0x0001A8)
class FJunoCaveGeneratorShellData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FSoftObjectPath)                           World                                                       OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TSet<EJunoBiome>)                          ValidBiomes                                                 OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TSet<EJunoCaveGeneratorShellTags>)         ShellTags                                                   OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(EJunoCaveGeneratorShellType)               ShellType                                                   OFFSET(get<T>, {0xC8, 1, 0, 0})
	CMember(EJunoCaveGeneratorShellSize)               ShellSize                                                   OFFSET(get<T>, {0xC9, 1, 0, 0})
	DMember(int32_t)                                   MinDepth                                                    OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	DMember(int32_t)                                   MaxDepth                                                    OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(TArray<FJunoCaveGeneratorResourceWorlds>)  ResourceLevels                                              OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FVector)                                   ShellBoundsSize                                             OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FVector)                                   ShellBoundsCenter                                           OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	CMember(TArray<FTransform>)                        ExitLocations                                               OFFSET(get<T>, {0x120, 16, 0, 0})
	DMember(int32_t)                                   NumOfSpawners                                               OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	CMember(TArray<FJunoCaveGeneratorPOIMarker>)       POIMarkers                                                  OFFSET(get<T>, {0x138, 16, 0, 0})
	DMember(int32_t)                                   NumOfAIPointProviders                                       OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	CMember(TMap<EJunoCaveGeneratorLayoutTags, FJunoCaveGeneratorWorldsList>) SupportedLayouts                     OFFSET(get<T>, {0x150, 80, 0, 0})
	DMember(bool)                                      bHasFixedEntrance                                           OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	DMember(int32_t)                                   PersistenceVersion                                          OFFSET(get<int32_t>, {0x1A4, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorRule
/// Size: 0x0050 (0x000008 - 0x000058)
class FJunoCaveGeneratorRule : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SelectionWeight                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   DepthAttemptThreshold                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberOfTeleporters                                      OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MinPrimaryChainLength                                       OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   MaxPrimaryChainLength                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     PrimaryChainHallwayChance                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   MinNumberOfSecondaryChains                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberOfSecondaryChains                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   MinSecondaryChainLength                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MaxSecondaryChainLength                                     OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MinStartingDepthOfSecondaryChains                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxStartingDepthOfSecondaryChains                           OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bCanSpawnOnSecondaryChains                                  OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     SecondaryChainHallwayChance                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberOfPOIs                                             OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     BasePOISpawnChance                                          OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bAllowPOIsInTeleporterRooms                                 OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorTypeData
/// Size: 0x0160 (0x000008 - 0x000168)
class FJunoCaveGeneratorTypeData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     TypeName                                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(TArray<FJunoCaveGeneratorRule>)            Rules                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TSet<FName>)                               SharedRules                                                 OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(EJunoCaveType)                             Type                                                        OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TSet<EJunoBiome>)                          ValidBiomes                                                 OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TSet<EJunoCaveGeneratorShellTags>)         ShellTags                                                   OFFSET(get<T>, {0xC8, 80, 0, 0})
	CMember(TSet<EJunoCaveGeneratorLayoutTags>)        LayoutTags                                                  OFFSET(get<T>, {0x118, 80, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorPCGResourceMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoCaveGeneratorPCGResourceMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, int32_t>)                      ResourceWeight                                              OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorThemeEntry
/// Size: 0x0158 (0x000008 - 0x000160)
class FJunoCaveGeneratorThemeEntry : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TWeakObjectPtr<UMaterialInterface*>)       CaveMaterial                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       DestructibleCaveMaterial                                    OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               ThemeResourceDataTable                                      OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               POIDataTable                                                OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TMap<EJunoCaveGeneratorPCGType, FJunoCaveGeneratorPCGResourceMap>) PCGTypeWeights                      OFFSET(get<T>, {0x88, 80, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0xDC, 4, 0, 0})
	CMember(TSet<EJunoBiome>)                          Biomes                                                      OFFSET(get<T>, {0xE0, 80, 0, 0})
	DMember(bool)                                      bExportTheme                                                OFFSET(get<bool>, {0x130, 1, 0, 0})
	SMember(FName)                                     ThemeExportName                                             OFFSET(getStruct<T>, {0x134, 4, 0, 0})
	SMember(FName)                                     ThemeExportPath                                             OFFSET(getStruct<T>, {0x138, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TeleporterClass                                             OFFSET(get<T>, {0x140, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorData
/// Size: 0x0030 (0x000008 - 0x000038)
class FJunoCaveGeneratorData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FJunoCaveGeneratorShellData>)       Shells                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FJunoCaveGeneratorThemeEntry>)      Themes                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FJunoCaveGeneratorTypeData>)        Types                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveGeneratorResult
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoCaveGeneratorResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/JunoProceduralWorld.JunoCaveConditionalTags
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoCaveConditionalTags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EJunoCaveType)                             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EJunoBiome)                                Biome                                                       OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToApply                                                 OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveTeleporterLink
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FJunoCaveTeleporterLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                SurfaceTransform                                            OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FTransform)                                CaveTransform                                               OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	CMember(class UClass*)                             SurfaceTeleporterClass                                      OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UClass*)                             CaveTeleporterClass                                         OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveShellInstanceData
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoCaveShellInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   ExitsUsedMask                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Depth                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Tier                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ChainID                                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(EJunoCaveType)                             Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     ThemeName                                                   OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ThemeObject                                                 OFFSET(get<T>, {0x18, 32, 0, 0})
	SMember(FName)                                     BranchParentShellID                                         OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	DMember(double)                                    EntranceZ                                                   OFFSET(get<double>, {0x40, 8, 0, 0})
	CMember(EJunoBiome)                                EntranceBiome                                               OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FVector)                                   TeleporterTargetPosition                                    OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(TArray<FJunoCaveTeleporterLink>)           Teleporters                                                 OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoGeneratedCaveShellData
/// Size: 0x0130 (0x000000 - 0x000130)
class FJunoGeneratedCaveShellData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   BoundsOffset                                                OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FName)                                     ShellID                                                     OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   Levels                                                      OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FJunoCaveShellInstanceData)                InstanceData                                                OFFSET(getStruct<T>, {0xA8, 120, 0, 0})
	DMember(int32_t)                                   PersistenceVersion                                          OFFSET(get<int32_t>, {0x120, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCompressedTransforms
/// Size: 0x0230 (0x000000 - 0x000230)
class FJunoCompressedTransforms : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
};

/// Struct /Script/JunoProceduralWorld.JunoGenerateTileParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoGenerateTileParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   TilesToGenerate                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<UJunoGenerateTileCommandlet*>) Commandlet                                               OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoActorInstanceIndex
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoActorInstanceIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoActorInstanceHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoActorInstanceHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UJunoInstancedActorData*)            InstancedActorData                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoActorInstanceIndex)                   Index                                                       OFFSET(getStruct<T>, {0x8, 2, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.InstancedActorMassSpawnData
/// Size: 0x0008 (0x000000 - 0x000008)
class FInstancedActorMassSpawnData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorIterationContext
/// Size: 0x0070 (0x000000 - 0x000070)
class FJunoInstancedActorIterationContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorDelta
/// Size: 0x0004 (0x00000C - 0x000010)
class FJunoInstancedActorDelta : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FJunoActorInstanceIndex)                   InstanceIndex                                               OFFSET(getStruct<T>, {0xC, 2, 0, 0})
	DMember(bool)                                      bDestroyed                                                  OFFSET(get<bool>, {0xE, 1, 1, 0})
	DMember(char)                                      CurrentLifecyclePhaseIndex                                  OFFSET(get<char>, {0xF, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorDeltaList
/// Size: 0x0070 (0x000108 - 0x000178)
class FJunoInstancedActorDeltaList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TArray<FJunoInstancedActorDelta>)          InstanceDeltas                                              OFFSET(get<T>, {0x160, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorSettings
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FJunoInstancedActorSettings : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bOverride_bInstancesCastShadows                             OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bOverride_MaxActorDistance                                  OFFSET(get<bool>, {0x8, 1, 1, 1})
	DMember(bool)                                      bOverride_bDisableAutoDistanceCulling                       OFFSET(get<bool>, {0x8, 1, 1, 2})
	DMember(bool)                                      bOverride_MaxInstanceDistance                               OFFSET(get<bool>, {0x8, 1, 1, 3})
	DMember(bool)                                      bOverride_MaxInstanceDistances                              OFFSET(get<bool>, {0x8, 1, 1, 4})
	DMember(bool)                                      bOverride_LODDistanceScales                                 OFFSET(get<bool>, {0x8, 1, 1, 5})
	DMember(bool)                                      bOverride_AffectDistanceFieldLighting                       OFFSET(get<bool>, {0x8, 1, 1, 6})
	DMember(bool)                                      bOverride_DetailedRepresentationLODDistance                 OFFSET(get<bool>, {0x8, 1, 1, 7})
	DMember(bool)                                      bOverride_ForceLowRepresentationLODDistance                 OFFSET(get<bool>, {0x9, 1, 1, 0})
	DMember(bool)                                      bOverride_WorldPositionOffsetDisableDistance                OFFSET(get<bool>, {0x9, 1, 1, 1})
	DMember(bool)                                      bOverride_bEjectOnActorMoved                                OFFSET(get<bool>, {0x9, 1, 1, 2})
	DMember(bool)                                      bOverride_ActorEjectionMovementThreshold                    OFFSET(get<bool>, {0x9, 1, 1, 3})
	DMember(bool)                                      bOverride_bCanBeBuiltUpon                                   OFFSET(get<bool>, {0x9, 1, 1, 4})
	DMember(bool)                                      bOverride_bCanEverAffectNavigation                          OFFSET(get<bool>, {0x9, 1, 1, 5})
	DMember(bool)                                      bOverride_OverrideWorldPartitionGrid                        OFFSET(get<bool>, {0x9, 1, 1, 6})
	DMember(bool)                                      bOverride_ScaleEntityCount                                  OFFSET(get<bool>, {0x9, 1, 1, 7})
	DMember(bool)                                      bOverride_ActorClass                                        OFFSET(get<bool>, {0xA, 1, 1, 0})
	DMember(bool)                                      bOverride_bCanBeDamaged                                     OFFSET(get<bool>, {0xA, 1, 1, 1})
	DMember(bool)                                      bOverride_bIgnoreModifierVolumes                            OFFSET(get<bool>, {0xA, 1, 1, 2})
	DMember(bool)                                      bOverride_bControlPhysicsState                              OFFSET(get<bool>, {0xA, 1, 1, 3})
	DMember(bool)                                      bInstancesCastShadows                                       OFFSET(get<bool>, {0xB, 1, 0, 0})
	DMember(double)                                    MaxActorDistance                                            OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      bDisableAutoDistanceCulling                                 OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bControlPhysicsState                                        OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(double)                                    MaxInstanceDistance                                         OFFSET(get<double>, {0x20, 8, 0, 0})
	CMember(TArray<double>)                            MaxInstanceDistances                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<float>)                             LODDistanceScales                                           OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<bool>)                              AffectDistanceFieldLighting                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(double)                                    DetailedRepresentationLODDistance                           OFFSET(get<double>, {0x58, 8, 0, 0})
	DMember(double)                                    ForceLowRepresentationLODDistance                           OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(int32_t)                                   WorldPositionOffsetDisableDistance                          OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bEjectOnActorMoved                                          OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(float)                                     ActorEjectionMovementThreshold                              OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bCanBeBuiltUpon                                             OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      bCanEverAffectNavigation                                    OFFSET(get<bool>, {0x75, 1, 0, 0})
	SMember(FName)                                     OverrideWorldPartitionGrid                                  OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	DMember(float)                                     ScaleEntityCount                                            OFFSET(get<float>, {0x7C, 4, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bCanBeDamaged                                               OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bIgnoreModifierVolumes                                      OFFSET(get<bool>, {0x89, 1, 0, 0})
	CMember(TArray<FName>)                             AppliedSettingsOverrides                                    OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorClassSettings
/// Size: 0x00B0 (0x000008 - 0x0000B8)
class FJunoInstancedActorClassSettings : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FName>)                             BaseSettings                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FJunoInstancedActorSettings)               OverrideSettings                                            OFFSET(getStruct<T>, {0x18, 160, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorTagSet
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoInstancedActorTagSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(uint32_t)                                  Hash                                                        OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorVisualizationDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInstancedActorVisualizationDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FISMComponentDescriptor>)           ISMComponentDescriptors                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorSoftVisualizationDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInstancedActorSoftVisualizationDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSoftISMComponentDescriptor>)       ISMComponentDescriptors                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorVisualizationInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoInstancedActorVisualizationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoInstancedActorVisualizationDesc)      VisualizationDesc                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) ISMComponents                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FStaticMeshInstanceVisualizationDescHandle) MassStaticMeshDescHandle                                   OFFSET(getStruct<T>, {0x20, 2, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.InstancedActorDataSharedFragment
/// Size: 0x000B (0x000001 - 0x00000C)
class FInstancedActorDataSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UJunoInstancedActorData*>)  InstanceData                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorMeshSwitchFragment
/// Size: 0x0001 (0x000001 - 0x000002)
class FJunoInstancedActorMeshSwitchFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FStaticMeshInstanceVisualizationDescHandle) NewStaticMeshDescHandle                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorFragment
/// Size: 0x000B (0x000001 - 0x00000C)
class FJunoInstancedActorFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UJunoInstancedActorData*>)  InstanceData                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoActorInstanceIndex)                   InstanceIndex                                               OFFSET(getStruct<T>, {0x8, 2, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorManagerHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoInstancedActorManagerHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ManagerID                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoInstancedActorModifierVolumeHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoInstancedActorModifierVolumeHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ModifierVolumeID                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoLifecyclePhase
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FJunoLifecyclePhase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FScalableFloat)                            duration                                                    OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	DMember(bool)                                      bOverrideMesh                                               OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              Mesh                                                        OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bOverrideMaterials                                          OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bOverrideCollisionEnabled                                   OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionEnabled>)            CollisionEnabled                                            OFFSET(get<T>, {0x69, 1, 0, 0})
	DMember(bool)                                      bOverrideHealth                                             OFFSET(get<bool>, {0x6A, 1, 0, 0})
	SMember(FScalableFloat)                            Health                                                      OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	SMember(FInstancedStruct)                          CustomData                                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoLifecyclePhaseFragment
/// Size: 0x0001 (0x000001 - 0x000002)
class FJunoLifecyclePhaseFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(char)                                      PrevPhaseIndex                                              OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      CurrentPhaseIndex                                           OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoLifecyclePhaseTimeFragment
/// Size: 0x0003 (0x000001 - 0x000004)
class FJunoLifecyclePhaseTimeFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     CurrentPhaseTimeElapsed                                     OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoLifecycleParameters
/// Size: 0x0017 (0x000001 - 0x000018)
class FJunoLifecycleParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FJunoLifecyclePhase>)               LifecyclePhases                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bRepeatLifecyclePhases                                      OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoLifecycleVisualizationsSharedFragment
/// Size: 0x000F (0x000001 - 0x000010)
class FJunoLifecycleVisualizationsSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              LifecyclePhaseVisualizations                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoPCGVolumePointDataFeatures
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoPCGVolumePointDataFeatures : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bRotationX                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bRotationY                                                  OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bRotationZ                                                  OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bSpawnActorPathAttribute                                    OFFSET(get<bool>, {0x3, 1, 0, 0})
	SMember(FName)                                     SpawnActorPathAttributeName                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     SpawnActorRepresentationAttributeName                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCompressedPoint
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoCompressedPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(char)                                      RotationX                                                   OFFSET(get<char>, {0x6, 1, 0, 0})
	DMember(char)                                      RotationY                                                   OFFSET(get<char>, {0x7, 1, 0, 0})
	DMember(char)                                      RotationZ                                                   OFFSET(get<char>, {0x8, 1, 0, 0})
	DMember(uint16_t)                                  ActorSpawnInfoIndex                                         OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCompressedActorSpawnInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoCompressedActorSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ActorToSpawn                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EJunoRepresentation)                       Representation                                              OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCompressedPointList
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoCompressedPointList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   BoundsMin                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   BoundsMax                                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector3f)                                 RotationMin                                                 OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector3f)                                 RotationMax                                                 OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	CMember(TArray<FJunoCompressedPoint>)              Points                                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(uint16_t)                                  HighResPosCount                                             OFFSET(get<uint16_t>, {0x58, 2, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	CMember(TArray<FJunoCompressedActorSpawnInfo>)     ActorSpawnInfo                                              OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FJunoPCGVolumePointDataFeatures)           Features                                                    OFFSET(getStruct<T>, {0x70, 12, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoPOISelectorTeleporterClass
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoPOISelectorTeleporterClass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EJunoBiome)                                Biome                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UClass*)                             Teleporter                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoPOISelectorParams
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoPOISelectorParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EJunoPOISize)                              Size                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EJunoBiome)                                Biome                                                       OFFSET(get<T>, {0x11, 1, 0, 0})
	CMember(TArray<FName>)                             SlotTags                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(class AActor*)                             PoiManager                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoPOIRegistryItem
/// Size: 0x01C8 (0x000000 - 0x0001C8)
class FJunoPOIRegistryItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FName)                                     Key                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPCGJunoWorldTilePOI)                      Value                                                       OFFSET(getStruct<T>, {0x8, 448, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoWorldTilePOI
/// Size: 0x01B8 (0x000008 - 0x0001C0)
class FPCGJunoWorldTilePOI : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   WorldAsset                                                  OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   HLODWorldAsset                                              OFFSET(get<T>, {0x28, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(EJunoPOISize)                              Size                                                        OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(TSet<EJunoPOISize>)                        SlotSizes                                                   OFFSET(get<T>, {0x50, 80, 0, 0})
	SMember(FVector)                                   BoundsSize                                                  OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	CMember(TSet<EJunoBiome>)                          Biomes                                                      OFFSET(get<T>, {0xB8, 80, 0, 0})
	CMember(TSet<FName>)                               Tags                                                        OFFSET(get<T>, {0x108, 80, 0, 0})
	CMember(EJunoWorldTilePOIType)                     Type                                                        OFFSET(get<T>, {0x158, 1, 0, 0})
	DMember(int32_t)                                   MaximumCountPerWorld                                        OFFSET(get<int32_t>, {0x15C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     EncounterCapabilities                                       OFFSET(getStruct<T>, {0x160, 32, 0, 0})
	DMember(int32_t)                                   EncounterVariantCount                                       OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               EncounterCategoryTable                                      OFFSET(get<T>, {0x188, 32, 0, 0})
	CMember(TArray<FTransform>)                        TeleporterOffsets                                           OFFSET(get<T>, {0x1A8, 16, 0, 0})
	DMember(int32_t)                                   PersistenceVersion                                          OFFSET(get<int32_t>, {0x1B8, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoRandomTableKeysIterator
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoRandomTableKeysIterator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/JunoProceduralWorld.JunoCreateLevelWorldPartitionGrid
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoCreateLevelWorldPartitionGrid : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   CellSize                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     LoadingRange                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bBlockOnSlowStreaming                                       OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FVector2D)                                 Origin                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCreateLevelParams
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoCreateLevelParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   LevelPackageName                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<class AActor*>)                     Actors                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FJunoCreateLevelWorldPartitionGrid>) WorldPartitionGrids                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(class UHLODLayer*)                         WorldPartitionDefaultHLODLayer                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(EWorldPartitionServerStreamingMode)        WorldPartitionServerStreamingMode                           OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(EWorldPartitionServerStreamingOutMode)     WorldPartitionServerStreamingOutMode                        OFFSET(get<T>, {0x39, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoTerrainGenerationConfiguration
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoTerrainGenerationConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     GenerateStart                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     GenerateRemove                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(double)                                    GenerationFlushDistance                                     OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoTerrainWaterInformation
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FJunoTerrainWaterInformation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     WaterSurfaceHeight                                          OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TerrainHeight                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     WaterDepth                                                  OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(EJunoBiomeHabitat)                         WaterType                                                   OFFSET(get<T>, {0x88, 1, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   DirectionMaskIndex                                          OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bWasNearMiss                                                OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bFoundWater                                                 OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(float)                                     NearMissEstimatedDistance                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
	CMember(class AWaterBody*)                         FoundWaterBody                                              OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FName, FPersistenceFrameworkLevelSaveSpawnablePtr>) Tiles                                         OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FName, FJunoReservedAreaPersistentData>) ReservedAreas                                            OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FName, FJunoPOICellDistributionPersistentData>) PerCellRarePOICounts                              OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoPOICellDistributionPersistentData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPOICellDistributionPersistentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, int32_t>)                      POICount                                                    OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoReservedAreaPersistentData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoReservedAreaPersistentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FBox2D>)                       Tiles                                                       OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoTileGridPersistentData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoTileGridPersistentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, AJunoWorldTile*>)              Tiles                                                       OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoTileGridSaveData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FJunoTileGridSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FJunoTileGridPersistentData)               Data                                                        OFFSET(getStruct<T>, {0x0, 80, 0, 0})
	CMember(TMap<FName, FJunoReservedAreaPersistentData>) ReservedAreas                                            OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FName, FJunoPOICellDistributionPersistentData>) PerCellRarePOICounts                              OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoTileSelector
/// Size: 0x0030 (0x000008 - 0x000038)
class FJunoTileSelector : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int64_t)                                   Priority                                                    OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   TileSize                                                    OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   WorldSize                                                   OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	SMember(FIntVector)                                WorldOriginTileOffset                                       OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	CMember(class UClass*)                             TileSelector                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWaterSplineInjectorParams
/// Size: 0x0140 (0x000000 - 0x000140)
class FJunoWaterSplineInjectorParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FSplineGuide)                              SplineGuide                                                 OFFSET(getStruct<T>, {0x0, 288, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	DMember(bool)                                      bAllowRandomYaw                                             OFFSET(get<bool>, {0x124, 1, 0, 0})
	DMember(bool)                                      bAllowRandomScale                                           OFFSET(get<bool>, {0x125, 1, 0, 0})
	SMember(FVector2D)                                 ScaleRange                                                  OFFSET(getStruct<T>, {0x128, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.SplineGuide
/// Size: 0x0120 (0x000000 - 0x000120)
class FSplineGuide : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FSplineCurves)                             SplineCurves                                                OFFSET(getStruct<T>, {0x0, 112, 0, 0})
	DMember(bool)                                      bIsClosedLoop                                               OFFSET(get<bool>, {0x70, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x80, 96, 0, 0})
	SMember(FSplineCurvesInfo)                         SplineCurvesInfo                                            OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	DMember(bool)                                      bAllowRandomYaw                                             OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bAllowRandomScaleVariation                                  OFFSET(get<bool>, {0xF9, 1, 0, 0})
	SMember(FVector2D)                                 ScaleVariation                                              OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(class UClass*)                             GuideClass                                                  OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.SplineCurvesInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FSplineCurvesInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  PointsNum                                                   OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileStreamingLevelEntry
/// Size: 0x00AC (0x00000C - 0x0000B8)
class FJunoWorldTileStreamingLevelEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FJunoWorldTileStreamingLevel)              Value                                                       OFFSET(getStruct<T>, {0x10, 168, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileStreamingLevel
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FJunoWorldTileStreamingLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   WorldAsset                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   HLODWorldAsset                                              OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector3f)                                 BoundsOffset                                                OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	SMember(FVector3f)                                 BoundsExtent                                                OFFSET(getStruct<T>, {0x64, 12, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FGuid)                                     PlayspaceGuid                                               OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FGuid)                                     WorldTileGuid                                               OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	DMember(int32_t)                                   PlayspaceLevelKey                                           OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(EJunoWorldTileInjectedLevelType)           Type                                                        OFFSET(get<T>, {0xA4, 1, 0, 0})
	DMember(char)                                      RotationBits                                                OFFSET(get<char>, {0xA5, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileStreamingLevelFastArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FJunoWorldTileStreamingLevelFastArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FJunoWorldTileStreamingLevelEntry>) Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class AJunoWorldTile*)                     WorldTile                                                   OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoDebugWorldTileState
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoDebugWorldTileState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   TileName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Levels                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoLayerSwap
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoLayerSwap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SwapFrom                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SwapTo                                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoWorldTilePOISlot
/// Size: 0x0040 (0x000008 - 0x000048)
class FPCGJunoWorldTilePOISlot : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(EJunoPOISize)                              Size                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FGuid)                                     POISlotGuid                                                 OFFSET(getStruct<T>, {0x34, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoCaveDataRegistryRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FPCGJunoCaveDataRegistryRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UJunoCaveDataCollectionBase*>) CaveDataCollection                                       OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoWorldTile
/// Size: 0x00F0 (0x000008 - 0x0000F8)
class FPCGJunoWorldTile : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(EJunoTileStatus)                           Status                                                      OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EJunoTileGenerationType)                   GenerationType                                              OFFSET(get<T>, {0x9, 1, 0, 0})
	DMember(bool)                                      bIsDebugTile                                                OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FDataRegistryId)                           OriginRegistryId                                            OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   Terrain                                                     OFFSET(get<T>, {0x18, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               MiniMapTexture                                              OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   StaticBiomeDecorations                                      OFFSET(get<T>, {0x58, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr<UWorld*>>)           Overlays                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UWorld*>>)           PrimaryBiomeResourceVariations                              OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   PrimaryBiomeResource                                        OFFSET(get<T>, {0x98, 32, 0, 0})
	CMember(EJunoBiome)                                NWBiome                                                     OFFSET(get<T>, {0xB8, 1, 0, 0})
	CMember(EJunoBiome)                                NEBiome                                                     OFFSET(get<T>, {0xB9, 1, 0, 0})
	CMember(EJunoBiome)                                SEBiome                                                     OFFSET(get<T>, {0xBA, 1, 0, 0})
	CMember(EJunoBiome)                                SWBiome                                                     OFFSET(get<T>, {0xBB, 1, 0, 0})
	CMember(TArray<FJunoLayerSwap>)                    LayerSwaps                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               POISlots                                                    OFFSET(get<T>, {0xD0, 32, 0, 0})
	SMember(FName)                                     ReservedAreaName                                            OFFSET(getStruct<T>, {0xF0, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoPOISlotMetaData
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoPOISlotMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EJunoPOISlotState)                         State                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCaveSurfaceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoCaveSurfaceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     CaveGuid                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGuid>)                             Entrances                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FTransform>)                        EntranceTeleporterTransforms                                OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoCave
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoCave : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class AJunoCaveShellGameplayVolume*>) Shells                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileSaveData_Cave_PersistentInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoWorldTileSaveData_Cave_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FPersistenceFrameworkLevelSaveSpawnablePtr>) GameplayVolumes                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileSaveData_POI_PersistentInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoWorldTileSaveData_POI_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPersistenceFrameworkLevelSaveSpawnablePtr) GameplayVolume                                             OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoWorldTileSaveData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FJunoWorldTileSaveData)                    SaveData                                                    OFFSET(getStruct<T>, {0x0, 104, 0, 0})
	CMember(TArray<FJunoWorldTileSaveData_Cave_PersistentInfo>) Caves                                              OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FJunoWorldTileSaveData_POI_PersistentInfo>) POIs                                                OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWorldTileSaveData
/// Size: 0x0068 (0x000000 - 0x000068)
class FJunoWorldTileSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FGuid, FJunoPOISlotMetaData>)         POISlotMetaDatas                                            OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FJunoCaveSurfaceData>)              CaveSurfaceData                                             OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bIsCaveSurfaceDataValid                                     OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PathfinderHistory
/// Size: 0x0048 (0x000000 - 0x000048)
class FPathfinderHistory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   NearestLocationToDestination                                OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     NearestLocationToDestinationDistance                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TotalPushSteps                                              OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.ControlPointParameters
/// Size: 0x0060 (0x000000 - 0x000060)
class FControlPointParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LayerWidthRatio                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SideFalloff                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LeftSideFalloffFactor                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     RightSideFalloffFactor                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LeftSideLayerFalloffFactor                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     RightSideLayerFalloffFactor                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     EndFalloff                                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     SegmentMeshOffset                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         MaterialOverrides                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FVector)                                   MeshScale                                                   OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bCastShadow                                                 OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.SegmentParameters
/// Size: 0x0030 (0x000000 - 0x000030)
class FSegmentParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bRaiseTerrain                                               OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bLowerTerrain                                               OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(TArray<FLandscapeSplineMeshEntry>)         SplineMeshes                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bCastShadow                                                 OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bHiddenInGame                                               OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bPlaceSplineMeshesInStreamingLevels                         OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(float)                                     LDMaxDrawDistance                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(char)                                      bRenderCustomDepth                                          OFFSET(get<char>, {0x28, 1, 0, 0})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PathfinderGuideSet
/// Size: 0x0010 (0x000000 - 0x000010)
class FPathfinderGuideSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSplineGuide>)                      Guides                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoBiomeElementRow
/// Size: 0x0058 (0x000008 - 0x000060)
class FPCGJunoBiomeElementRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     Type                                                        OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(TArray<float>)                             LayerWeights                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   PositionOffset                                              OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector2D)                                 ScaleMinMax                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     BlendToVertical                                             OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     RandomLeanAmount                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(EJunoRepresentation)                       Representation                                              OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(class UClass*)                             Actor                                                       OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoPOIElementRow
/// Size: 0x0038 (0x000008 - 0x000040)
class FPCGJunoPOIElementRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     BoundsMultiplier                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(class UClass*)                             POIActor                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UClass*)                             BuildingFoundation                                          OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   Level                                                       OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoPOISlotElementRow
/// Size: 0x0050 (0x000008 - 0x000058)
class FPCGJunoPOISlotElementRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EJunoPOISize)                              Size                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(class UClass*)                             POISlotActor                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               PotentialPOIs                                               OFFSET(get<T>, {0x18, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               TerrainHeightPatch                                          OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoAudioElementRow
/// Size: 0x0030 (0x000008 - 0x000038)
class FPCGJunoAudioElementRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(class UClass*)                             AudioActorToSpawn                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<UAmbientAudioDataAsset*>)   Level                                                       OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoBiomeEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FPCGJunoBiomeEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               BiomeElements                                               OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoCullDistanceGameplayTagRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FPCGJunoCullDistanceGameplayTagRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              CullDistanceTag                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   EndCullDistance                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     LODInstanceScale                                            OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoStoreDataPin
/// Size: 0x0010 (0x000000 - 0x000010)
class FPCGJunoStoreDataPin : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FJunoPCGVolumePointDataFeatures)           Features                                                    OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.ProceduralRiverAnchorConnectionRules
/// Size: 0x0368 (0x000000 - 0x000368)
class FProceduralRiverAnchorConnectionRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	DMember(float)                                     MaxConnectionSlope                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        CarveDownNearSourceAnchor                                   OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        CarveDownNearTargetAnchor                                   OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        WidthMultNearSourceAnchor                                   OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        WidthMultNearTargetAnchor                                   OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        VelocityMultNearSourceAnchor                                OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        VelocityMultNearTargetAnchor                                OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
	SMember(FVector2D)                                 CoastlineAnchorZRange                                       OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	DMember(float)                                     CoastlineProbeAboveZeroPercent                              OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     CoastlineProbeBelowZeroPercent                              OFFSET(get<float>, {0x34C, 4, 0, 0})
	SMember(FVector2D)                                 DeepSeaAnchorZRange                                         OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	DMember(float)                                     DeepSeaAnchorMinDistanceToCoastline                         OFFSET(get<float>, {0x360, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.ProceduralRiverShapeRules
/// Size: 0x0220 (0x000000 - 0x000220)
class FProceduralRiverShapeRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FRuntimeFloatCurve)                        DepthCurve                                                  OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        WidthCurve                                                  OFFSET(getStruct<T>, {0x88, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        VelocityCurve                                               OFFSET(getStruct<T>, {0x110, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        VelocityBySlope                                             OFFSET(getStruct<T>, {0x198, 136, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.ProceduralRiverGenRules
/// Size: 0x0630 (0x000000 - 0x000630)
class FProceduralRiverGenRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	SMember(FProceduralRiverAnchorConnectionRules)     AnchorConnectionRules                                       OFFSET(getStruct<T>, {0x0, 872, 0, 0})
	SMember(FProceduralRiverShapeRules)                ProceduralRiverShapeRules                                   OFFSET(getStruct<T>, {0x368, 544, 0, 0})
	SMember(FLandmassPathfinderRules)                  PathfinderRules                                             OFFSET(getStruct<T>, {0x588, 168, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.LandmassPathfinderRules
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FLandmassPathfinderRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(EVerticalDirection)                        VerticalDirection                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     MaxSlopeWhileGoingAgainstLegalVerticalDirection             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bFavorGoingDown                                             OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     FavorGoingDownWeight                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bUseGravitationalPotentialEnergy                            OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     StartingGravitationalPotentialEnergy                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxSlope                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     VerticalCostMultiplier                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     SideRollCostMultiplier                                      OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     SearchRadius                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector2D)                                 SearchConeInDegrees                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(float)                                     BackStop                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   SearchPointsNum                                             OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     DestinationRadius                                           OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MinimalViableDistance                                       OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     SnapDistance                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MaxCost                                                     OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   MaxSteps                                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     TooCloseDistanceRatio                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     HeuristicToDestinationWeight                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     MaxBoostDistance                                            OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     BoostIntensity                                              OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     SnappedSpeedMultiplier                                      OFFSET(get<float>, {0x64, 4, 0, 0})
	CMember(TArray<FRouteClassAvoidance>)              RouteClassesAvoidances                                      OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     WarpFixedCost                                               OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     WarpAngleConstraint                                         OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     MaxWarpingDistance                                          OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     MaxWarpingZDelta                                            OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     MinPercentageOfLandOnEachSide                               OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     WarpZoneApproximatedGreaterHalfWidth                        OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     WarpZoneApproximatedLesserHalfWidth                         OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bUseWarpZoneDifficultTerrain                                OFFSET(get<bool>, {0x94, 1, 0, 0})
	DMember(float)                                     WarpZoneDifficultTerrainWidth                               OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     WarpZoneDifficultTerrainCostMult                            OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     TileDimension                                               OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     TileEdgeAvoidanceDistance                                   OFFSET(get<float>, {0xA4, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.RouteClassAvoidance
/// Size: 0x0010 (0x000000 - 0x000010)
class FRouteClassAvoidance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             RouteClassesToAvoid                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterEntryData
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoLivingWorldStaticPointProviderClusterEntryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoLivingWorldStaticPointProviderClusterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             PointProviderTemplate                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FJunoLivingWorldStaticPointProviderClusterEntryData>) DataList                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.LWMClusterPointInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FLWMClusterPointInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UJunoLivingWorldLightStaticPointProvider*) PointProvider                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoPOIInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoPOIInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EJunoBiome)                                SlotBiome                                                   OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoPOIData
/// Size: 0x0120 (0x000000 - 0x000120)
class FJunoPOIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   BoundsOffset                                                OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   Levels                                                      OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   HLODLevels                                                  OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FJunoPOIInstanceData)                      InstanceData                                                OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FGameplayTagContainer)                     EncounterCapabilities                                       OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
	DMember(int32_t)                                   EncounterVariantCount                                       OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               EncounterCategoryTable                                      OFFSET(get<T>, {0xF0, 32, 0, 0})
	SMember(FName)                                     RegistryItemName                                            OFFSET(getStruct<T>, {0x110, 4, 0, 0})
	DMember(int32_t)                                   PersistenceVersion                                          OFFSET(get<int32_t>, {0x114, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoPOIManagerSlot
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoPOIManagerSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(EJunoBiome)                                Biome                                                       OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EJunoPOISize)                              Size                                                        OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoRoadAINavigationClusterEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FJunoRoadAINavigationClusterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UClass*)                             PatrolPathTemplate                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             PatrolPointTemplate                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.RoadPatrolPathInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FRoadPatrolPathInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortAthenaPatrolPath*)              PatrolPath                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.CaveShellSpawnLimitData
/// Size: 0x0078 (0x000000 - 0x000078)
class FCaveShellSpawnLimitData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FScalableFloat)                            MaxNumberOfSpawn                                            OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            EventMemoryResetDurationsHours                              OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceToTeleporter                                     OFFSET(getStruct<T>, {0x50, 40, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.CaveSpawnEvent
/// Size: 0x001C (0x000000 - 0x00001C)
class FCaveSpawnEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
};

/// Struct /Script/JunoProceduralWorld.CaveSpawnPointProviderMemory
/// Size: 0x0028 (0x000000 - 0x000028)
class FCaveSpawnPointProviderMemory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/JunoProceduralWorld.CaveShellID
/// Size: 0x0014 (0x000000 - 0x000014)
class FCaveShellID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/JunoProceduralWorld.DendrogramLeafAttributes
/// Size: 0x0020 (0x000000 - 0x000020)
class FDendrogramLeafAttributes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     DistanceScale                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FName)                                     LeafTypeName                                                OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.DendrogramClusterOutput
/// Size: 0x0068 (0x000000 - 0x000068)
class FDendrogramClusterOutput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   NodeLevel                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsLeaf                                                     OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(TArray<class AActor*>)                     Actors                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(class AActor*)                             ConnectedActorA                                             OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class AActor*)                             ConnectedActorB                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FDendrogramLeafAttributes)                 LeafAAttributes                                             OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FDendrogramLeafAttributes)                 LeafBAttributes                                             OFFSET(getStruct<T>, {0x48, 32, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.ProceduralRoadGenRules
/// Size: 0x0138 (0x000000 - 0x000138)
class FProceduralRoadGenRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FLandmassPathfinderRules)                  PathfinderRules                                             OFFSET(getStruct<T>, {0x0, 168, 0, 0})
	SMember(FControlPointParameters)                   ControlPointParams                                          OFFSET(getStruct<T>, {0xA8, 96, 0, 0})
	SMember(FSegmentParameters)                        SegmentParams                                               OFFSET(getStruct<T>, {0x108, 48, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.LandmassPCGRouteInput
/// Size: 0x0018 (0x000000 - 0x000018)
class FLandmassPCGRouteInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<class UPCGSpatialData*>)            Data                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.RouteAvoidancePrimitive
/// Size: 0x0030 (0x000000 - 0x000030)
class FRouteAvoidancePrimitive : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ERouteAvoidancePrimitiveType)              Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector2D)                                 DiscLocation                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(class USplineComponent*)                   SplineComponent                                             OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class ALandmassProceduralRoute*)           ProceduralRoutes                                            OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.ProceduralRouteJunoTileInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FProceduralRouteJunoTileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   TileIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TileId                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(EProceduralRouteGuideSetSelectMethod)      GuideSetSelectMethod                                        OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.ProceduralRiverAnchor
/// Size: 0x0018 (0x000000 - 0x000018)
class FProceduralRiverAnchor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector2D)                                 Location2D                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EProceduralRiverAnchorType)                Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   GroupId                                                     OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.SegmentInterpResult
/// Size: 0x0138 (0x000000 - 0x000138)
class FSegmentInterpResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CosInterp                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LayerWidth                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     LeftFalloff                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     RightFalloff                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     LeftLayerFalloff                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     RightLayerFalloff                                           OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Pos                                                         OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   Tangent                                                     OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   Binormal                                                    OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   LeftPos                                                     OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   RightPos                                                    OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FVector)                                   FalloffLeftPos                                              OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FVector)                                   FalloffRightPos                                             OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FVector)                                   LayerLeftPos                                                OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   LayerRightPos                                               OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FVector)                                   LayerFalloffLeftPos                                         OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   LayerFalloffRightPos                                        OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	DMember(float)                                     StartEndFalloff                                             OFFSET(get<float>, {0x130, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.InterpSegment
/// Size: 0x0070 (0x000000 - 0x000070)
class FInterpSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FInterpCurveVector)                        SplineInfo                                                  OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     SplineLength                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SplineLengthBeforeThis                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     StartFalloffFraction                                        OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     EndFalloffFraction                                          OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     StartWidth                                                  OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     EndWidth                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     StartLayerWidth                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     EndLayerWidth                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     FalloffStartLeftSide                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     FalloffEndLeftSide                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     FalloffStartRightSide                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     FalloffEndRightSide                                         OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     FalloffStartLeftSideLayer                                   OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     FalloffEndLeftSideLayer                                     OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     FalloffStartRightSideLayer                                  OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     FalloffEndRightSideLayer                                    OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     StartRollDegrees                                            OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     EndRollDegrees                                              OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     StartRoll                                                   OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     EndRoll                                                     OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     StartMeshOffset                                             OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     EndMeshOffset                                               OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.BridgeSpawnInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FBridgeSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Start                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   End                                                         OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoPathfindContext
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class FPCGJunoPathfindContext : public FPCGContext
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<ALandmassProceduralRoute*>) LandmassProceduralRoute                                     OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoRoadAINavigationContext
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class FPCGJunoRoadAINavigationContext : public FPCGContext
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UClass*)                             RoadClusterClass                                            OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UClass*)                             PatrolPathClass                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UClass*)                             PatrolPointClass                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UPCGManagedActors*)                  ManagedActors                                               OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointTag
/// Size: 0x0038 (0x000000 - 0x000038)
class FPCGJunoSpawnLivingWorldStaticPointTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FName)                                     AttributeName                                               OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(double)                                    MinValue                                                    OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(double)                                    MaxValue                                                    OFFSET(get<double>, {0x30, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointTagConditionSet
/// Size: 0x0018 (0x000000 - 0x000018)
class FPCGJunoSpawnLivingWorldStaticPointTagConditionSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bOverridePreviousTags                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bExclusiveConditionalTags                                   OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TArray<FPCGJunoSpawnLivingWorldStaticPointTag>) ConditionalTags                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointContext
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class FPCGJunoSpawnLivingWorldStaticPointContext : public FPCGContext
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UClass*)                             StaticPointClass                                            OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UClass*)                             PointClusterClass                                           OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UPCGManagedActors*)                  ManagedActors                                               OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWorldConditionBiome
/// Size: 0x0038 (0x000010 - 0x000048)
class FJunoWorldConditionBiome : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(TArray<EJunoBiome>)                        AllowedBiomes                                               OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bCanBeSecondaryBiome                                        OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<EJunoBiomeHabitat>)                 AllowedHabitats                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bCanBeSecondaryHabitat                                      OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/JunoProceduralWorld.JunoWorldRegistryEntry
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoWorldRegistryEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Enum /Script/JunoProceduralWorld.EJunoGetMergedCaveDataRegistryDataResult
/// Size: 0x03
enum EJunoGetMergedCaveDataRegistryDataResult : uint8_t
{
	EJunoGetMergedCaveDataRegistryDataResult__Success                                = 0,
	EJunoGetMergedCaveDataRegistryDataResult__Failure                                = 1,
	EJunoGetMergedCaveDataRegistryDataResult__EJunoGetMergedCaveDataRegistryDataResult_MAX = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorShellType
/// Size: 0x06
enum EJunoCaveGeneratorShellType : uint8_t
{
	EJunoCaveGeneratorShellType__Room                                                = 0,
	EJunoCaveGeneratorShellType__Connector                                           = 1,
	EJunoCaveGeneratorShellType__Entrance                                            = 2,
	EJunoCaveGeneratorShellType__Hero                                                = 3,
	EJunoCaveGeneratorShellType__FeatureRoom                                         = 4,
	EJunoCaveGeneratorShellType__EJunoCaveGeneratorShellType_MAX                     = 5
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorShellSize
/// Size: 0x05
enum EJunoCaveGeneratorShellSize : uint8_t
{
	EJunoCaveGeneratorShellSize__Small                                               = 0,
	EJunoCaveGeneratorShellSize__Medium                                              = 1,
	EJunoCaveGeneratorShellSize__Large                                               = 2,
	EJunoCaveGeneratorShellSize__Hallway                                             = 3,
	EJunoCaveGeneratorShellSize__EJunoCaveGeneratorShellSize_MAX                     = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorShellTags
/// Size: 0x07
enum EJunoCaveGeneratorShellTags : uint8_t
{
	EJunoCaveGeneratorShellTags__BearCave                                            = 0,
	EJunoCaveGeneratorShellTags__WolfCave                                            = 1,
	EJunoCaveGeneratorShellTags__TreasureCave                                        = 2,
	EJunoCaveGeneratorShellTags__PirateCave                                          = 3,
	EJunoCaveGeneratorShellTags__AnimalDen                                           = 4,
	EJunoCaveGeneratorShellTags__BossRoom                                            = 5,
	EJunoCaveGeneratorShellTags__EJunoCaveGeneratorShellTags_MAX                     = 6
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorLayoutTags
/// Size: 0x02
enum EJunoCaveGeneratorLayoutTags : uint8_t
{
	EJunoCaveGeneratorLayoutTags__OroMine                                            = 0,
	EJunoCaveGeneratorLayoutTags__EJunoCaveGeneratorLayoutTags_MAX                   = 1
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorPCGType
/// Size: 0x08
enum EJunoCaveGeneratorPCGType : uint8_t
{
	EJunoCaveGeneratorPCGType__GemsAndOre                                            = 0,
	EJunoCaveGeneratorPCGType__GemsAndOre_HighValue                                  = 1,
	EJunoCaveGeneratorPCGType__Mushroom                                              = 2,
	EJunoCaveGeneratorPCGType__Plants                                                = 3,
	EJunoCaveGeneratorPCGType__Ceiling                                               = 4,
	EJunoCaveGeneratorPCGType__Clutter                                               = 5,
	EJunoCaveGeneratorPCGType__Rare                                                  = 6,
	EJunoCaveGeneratorPCGType__EJunoCaveGeneratorPCGType_MAX                         = 7
};

/// Enum /Script/JunoProceduralWorld.EAddChainResult
/// Size: 0x07
enum EAddChainResult : uint8_t
{
	EAddChainResult__Success                                                         = 0,
	EAddChainResult__NoMatchingShell                                                 = 1,
	EAddChainResult__InvalidAttachIndex                                              = 2,
	EAddChainResult__NoExitsLeft                                                     = 3,
	EAddChainResult__CannotFitShell                                                  = 4,
	EAddChainResult__NoShellsGenerated                                               = 5,
	EAddChainResult__EAddChainResult_MAX                                             = 6
};

/// Enum /Script/JunoProceduralWorld.EJunoCaveTheme_DEPRECATED
/// Size: 0x06
enum EJunoCaveTheme_DEPRECATED : uint8_t
{
	EJunoCaveTheme_DEPRECATED__Grassland                                             = 0,
	EJunoCaveTheme_DEPRECATED__DarkForest                                            = 1,
	EJunoCaveTheme_DEPRECATED__Tropical                                              = 2,
	EJunoCaveTheme_DEPRECATED__Alpine                                                = 3,
	EJunoCaveTheme_DEPRECATED__Desert                                                = 4,
	EJunoCaveTheme_DEPRECATED__EJunoCaveTheme_MAX                                    = 5
};

/// Enum /Script/JunoProceduralWorld.EJunoCreateCaveResult
/// Size: 0x04
enum EJunoCreateCaveResult : uint8_t
{
	EJunoCreateCaveResult__Success                                                   = 0,
	EJunoCreateCaveResult__Failure                                                   = 1,
	EJunoCreateCaveResult__Disabled                                                  = 2,
	EJunoCreateCaveResult__EJunoCreateCaveResult_MAX                                 = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoQueryCaveDataResult
/// Size: 0x05
enum EJunoQueryCaveDataResult : uint8_t
{
	EJunoQueryCaveDataResult__NotReady                                               = 0,
	EJunoQueryCaveDataResult__NotAllowed                                             = 1,
	EJunoQueryCaveDataResult__Cached                                                 = 2,
	EJunoQueryCaveDataResult__NoEntry                                                = 3,
	EJunoQueryCaveDataResult__EJunoQueryCaveDataResult_MAX                           = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoQueryCaveSurfaceDataStateResult
/// Size: 0x05
enum EJunoQueryCaveSurfaceDataStateResult : uint8_t
{
	EJunoQueryCaveSurfaceDataStateResult__NotReady                                   = 0,
	EJunoQueryCaveSurfaceDataStateResult__NotAllowed                                 = 1,
	EJunoQueryCaveSurfaceDataStateResult__Cached                                     = 2,
	EJunoQueryCaveSurfaceDataStateResult__NoEntry                                    = 3,
	EJunoQueryCaveSurfaceDataStateResult__EJunoQueryCaveSurfaceDataStateResult_MAX   = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoGetCaveSurfaceDataForEntranceResult
/// Size: 0x05
enum EJunoGetCaveSurfaceDataForEntranceResult : uint8_t
{
	EJunoGetCaveSurfaceDataForEntranceResult__NotReady                               = 0,
	EJunoGetCaveSurfaceDataForEntranceResult__NotAllowed                             = 1,
	EJunoGetCaveSurfaceDataForEntranceResult__IsACave                                = 2,
	EJunoGetCaveSurfaceDataForEntranceResult__NotACave                               = 3,
	EJunoGetCaveSurfaceDataForEntranceResult__EJunoGetCaveSurfaceDataForEntranceResult_MAX = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoGetCaveShellInstanceDataResult
/// Size: 0x03
enum EJunoGetCaveShellInstanceDataResult : uint8_t
{
	EJunoGetCaveShellInstanceDataResult__Success                                     = 0,
	EJunoGetCaveShellInstanceDataResult__Failure                                     = 1,
	EJunoGetCaveShellInstanceDataResult__EJunoGetCaveShellInstanceDataResult_MAX     = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoGetBestCaveResult
/// Size: 0x03
enum EJunoGetBestCaveResult : uint8_t
{
	EJunoGetBestCaveResult__Success                                                  = 0,
	EJunoGetBestCaveResult__Failure                                                  = 1,
	EJunoGetBestCaveResult__EJunoGetBestCaveResult_MAX                               = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoCalculateCaveDistanceResult
/// Size: 0x04
enum EJunoCalculateCaveDistanceResult : uint8_t
{
	EJunoCalculateCaveDistanceResult__Success                                        = 0,
	EJunoCalculateCaveDistanceResult__ParentIDsNotCorrect                            = 1,
	EJunoCalculateCaveDistanceResult__ShellsAreNotConnected                          = 2,
	EJunoCalculateCaveDistanceResult__EJunoCalculateCaveDistanceResult_MAX           = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoGetCaveDataCollectionsFromRegistryResult
/// Size: 0x03
enum EJunoGetCaveDataCollectionsFromRegistryResult : uint8_t
{
	EJunoGetCaveDataCollectionsFromRegistryResult__Success                           = 0,
	EJunoGetCaveDataCollectionsFromRegistryResult__Failure                           = 1,
	EJunoGetCaveDataCollectionsFromRegistryResult__EJunoGetCaveDataCollectionsFromRegistryResult_MAX = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoIAVolumeShape
/// Size: 0x03
enum EJunoIAVolumeShape : uint8_t
{
	EJunoIAVolumeShape__Box                                                          = 0,
	EJunoIAVolumeShape__Sphere                                                       = 1,
	EJunoIAVolumeShape__EJunoIAVolumeShape_MAX                                       = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoPCGVolumeSource
/// Size: 0x03
enum EJunoPCGVolumeSource : uint8_t
{
	EJunoPCGVolumeSource__Transient                                                  = 0,
	EJunoPCGVolumeSource__Persistent                                                 = 1,
	EJunoPCGVolumeSource__EJunoPCGVolumeSource_MAX                                   = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoFindNextMatchingPOIResourceResult
/// Size: 0x03
enum EJunoFindNextMatchingPOIResourceResult : uint8_t
{
	EJunoFindNextMatchingPOIResourceResult__Found                                    = 0,
	EJunoFindNextMatchingPOIResourceResult__NotFound                                 = 1,
	EJunoFindNextMatchingPOIResourceResult__EJunoFindNextMatchingPOIResourceResult_MAX = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoCreateLevelResult
/// Size: 0x03
enum EJunoCreateLevelResult : uint8_t
{
	EJunoCreateLevelResult__Success                                                  = 0,
	EJunoCreateLevelResult__Failed                                                   = 1,
	EJunoCreateLevelResult__EJunoCreateLevelResult_MAX                               = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoCompareTagSetsResult
/// Size: 0x04
enum EJunoCompareTagSetsResult : uint8_t
{
	EJunoCompareTagSetsResult__NoMatch                                               = 0,
	EJunoCompareTagSetsResult__PartialMatch                                          = 1,
	EJunoCompareTagSetsResult__FullMatch                                             = 2,
	EJunoCompareTagSetsResult__EJunoCompareTagSetsResult_MAX                         = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoResolveWorldSoftObjectPathResult
/// Size: 0x04
enum EJunoResolveWorldSoftObjectPathResult : uint8_t
{
	EJunoResolveWorldSoftObjectPathResult__Success                                   = 0,
	EJunoResolveWorldSoftObjectPathResult__NotAWorldObject                           = 1,
	EJunoResolveWorldSoftObjectPathResult__InvalidPath                               = 2,
	EJunoResolveWorldSoftObjectPathResult__EJunoResolveWorldSoftObjectPathResult_MAX = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoLevelInstanceMode
/// Size: 0x04
enum EJunoLevelInstanceMode : uint8_t
{
	EJunoLevelInstanceMode__Disabled                                                 = 0,
	EJunoLevelInstanceMode__StreamingWP                                              = 1,
	EJunoLevelInstanceMode__CellInjection                                            = 2,
	EJunoLevelInstanceMode__EJunoLevelInstanceMode_MAX                               = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoWorldRegistryType
/// Size: 0x04
enum EJunoWorldRegistryType : uint8_t
{
	EJunoWorldRegistryType__Invalid                                                  = 0,
	EJunoWorldRegistryType__POI                                                      = 1,
	EJunoWorldRegistryType__Enemy                                                    = 2,
	EJunoWorldRegistryType__EJunoWorldRegistryType_MAX                               = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoGetWorldTileTransformResult
/// Size: 0x03
enum EJunoGetWorldTileTransformResult : uint8_t
{
	EJunoGetWorldTileTransformResult__Success                                        = 0,
	EJunoGetWorldTileTransformResult__Failure                                        = 1,
	EJunoGetWorldTileTransformResult__EJunoGetWorldTileTransformResult_MAX           = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoGetWorldTileBoundsResult
/// Size: 0x03
enum EJunoGetWorldTileBoundsResult : uint8_t
{
	EJunoGetWorldTileBoundsResult__Success                                           = 0,
	EJunoGetWorldTileBoundsResult__Failure                                           = 1,
	EJunoGetWorldTileBoundsResult__EJunoGetWorldTileBoundsResult_MAX                 = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoTileStatus
/// Size: 0x07
enum EJunoTileStatus : uint8_t
{
	EJunoTileStatus__Disabled                                                        = 0,
	EJunoTileStatus__Enabled                                                         = 1,
	EJunoTileStatus__Deprecated                                                      = 2,
	EJunoTileStatus__Instantiated                                                    = 3,
	EJunoTileStatus__Reserved                                                        = 4,
	EJunoTileStatus__OutOfBounds                                                     = 5,
	EJunoTileStatus__EJunoTileStatus_MAX                                             = 6
};

/// Enum /Script/JunoProceduralWorld.EJunoTileGenerationType
/// Size: 0x03
enum EJunoTileGenerationType : uint8_t
{
	EJunoTileGenerationType__Unknown                                                 = 0,
	EJunoTileGenerationType__Cooked                                                  = 1,
	EJunoTileGenerationType__EJunoTileGenerationType_MAX                             = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoWorldTilePOIType
/// Size: 0x05
enum EJunoWorldTilePOIType : uint8_t
{
	EJunoWorldTilePOIType__Overworld                                                 = 0,
	EJunoWorldTilePOIType__Cave                                                      = 1,
	EJunoWorldTilePOIType__CaveEntrance                                              = 2,
	EJunoWorldTilePOIType__Bridge                                                    = 3,
	EJunoWorldTilePOIType__EJunoWorldTilePOIType_MAX                                 = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoPOISlotState
/// Size: 0x06
enum EJunoPOISlotState : uint8_t
{
	EJunoPOISlotState__Normal                                                        = 0,
	EJunoPOISlotState__Unused                                                        = 1,
	EJunoPOISlotState__Cosmetic                                                      = 2,
	EJunoPOISlotState__CaveEntrance                                                  = 3,
	EJunoPOISlotState__UnusedNearWorldStart                                          = 4,
	EJunoPOISlotState__EJunoPOISlotState_MAX                                         = 5
};

/// Enum /Script/JunoProceduralWorld.EJunoWorldTileInjectedLevelType
/// Size: 0x03
enum EJunoWorldTileInjectedLevelType : uint8_t
{
	EJunoWorldTileInjectedLevelType__POI                                             = 0,
	EJunoWorldTileInjectedLevelType__Cave                                            = 1,
	EJunoWorldTileInjectedLevelType__EJunoWorldTileInjectedLevelType_MAX             = 2
};

/// Enum /Script/JunoProceduralWorld.EPushFrontierResult
/// Size: 0x10
enum EPushFrontierResult : uint8_t
{
	EPushFrontierResult__Continue                                                    = 0,
	EPushFrontierResult__Success                                                     = 1,
	EPushFrontierResult__Fail                                                        = 2,
	EPushFrontierResult__OutOfFrontierNodes                                          = 3,
	EPushFrontierResult__NoNewFrontierCreated                                        = 4,
	EPushFrontierResult__ReachedMaxCost                                              = 5,
	EPushFrontierResult__ReachedMaxSteps                                             = 6,
	EPushFrontierResult__ReachedDestination                                          = 7,
	EPushFrontierResult__NoValidResult                                               = 8,
	EPushFrontierResult__EPushFrontierResult_MAX                                     = 9
};

/// Enum /Script/JunoProceduralWorld.EPathfinderNodeState
/// Size: 0x05
enum EPathfinderNodeState : uint8_t
{
	EPathfinderNodeState__Normal                                                     = 0,
	EPathfinderNodeState__Snap                                                       = 1,
	EPathfinderNodeState__Warp                                                       = 2,
	EPathfinderNodeState__Invalid                                                    = 3,
	EPathfinderNodeState__EPathfinderNodeState_MAX                                   = 4
};

/// Enum /Script/JunoProceduralWorld.EJunoRepresentation
/// Size: 0x04
enum EJunoRepresentation : uint8_t
{
	EJunoRepresentation__None                                                        = 0,
	EJunoRepresentation__Actor                                                       = 1,
	EJunoRepresentation__Instance                                                    = 2,
	EJunoRepresentation__EJunoRepresentation_MAX                                     = 3
};

/// Enum /Script/JunoProceduralWorld.EJunoPOISize
/// Size: 0x10
enum EJunoPOISize : uint8_t
{
	EJunoPOISize__None                                                               = 0,
	EJunoPOISize__JPOI_1x1                                                           = 1,
	EJunoPOISize__JPOI_2x2                                                           = 2,
	EJunoPOISize__JPOI_3x3                                                           = 3,
	EJunoPOISize__JPOI_4x4                                                           = 4,
	EJunoPOISize__JPOI_5x5                                                           = 5,
	EJunoPOISize__JPOI_8x8                                                           = 8,
	EJunoPOISize__JPOI_10x10                                                         = 10,
	EJunoPOISize__JPOI_11x11                                                         = 11,
	EJunoPOISize__EJunoPOISize_MAX                                                   = 12
};

/// Enum /Script/JunoProceduralWorld.PCGJunoApplyMaskNodeMode
/// Size: 0x05
enum PCGJunoApplyMaskNodeMode : uint8_t
{
	PCGJunoApplyMaskNodeMode__Subtract                                               = 0,
	PCGJunoApplyMaskNodeMode__Intersect                                              = 1,
	PCGJunoApplyMaskNodeMode__SubtractSmaller                                        = 2,
	PCGJunoApplyMaskNodeMode__SubtractLarger                                         = 3,
	PCGJunoApplyMaskNodeMode__PCGJunoApplyMaskNodeMode_MAX                           = 4
};

/// Enum /Script/JunoProceduralWorld.ELandmassRiverTier
/// Size: 0x02
enum ELandmassRiverTier : uint8_t
{
	ELandmassRiverTier__Default                                                      = 0,
	ELandmassRiverTier__ELandmassRiverTier_MAX                                       = 1
};

/// Enum /Script/JunoProceduralWorld.EQueryPOIStateResult
/// Size: 0x05
enum EQueryPOIStateResult : uint8_t
{
	EQueryPOIStateResult__NotReady                                                   = 0,
	EQueryPOIStateResult__NotAllowed                                                 = 1,
	EQueryPOIStateResult__Cached                                                     = 2,
	EQueryPOIStateResult__NoEntry                                                    = 3,
	EQueryPOIStateResult__EQueryPOIStateResult_MAX                                   = 4
};

/// Enum /Script/JunoProceduralWorld.EGeneratePOIResult
/// Size: 0x03
enum EGeneratePOIResult : uint8_t
{
	EGeneratePOIResult__Success                                                      = 0,
	EGeneratePOIResult__Failure                                                      = 1,
	EGeneratePOIResult__EGeneratePOIResult_MAX                                       = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoMarkSlotPOIUnusedResult
/// Size: 0x03
enum EJunoMarkSlotPOIUnusedResult : uint8_t
{
	EJunoMarkSlotPOIUnusedResult__Success                                            = 0,
	EJunoMarkSlotPOIUnusedResult__Failure                                            = 1,
	EJunoMarkSlotPOIUnusedResult__EJunoMarkSlotPOIUnusedResult_MAX                   = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoSetSlotPOIMetaDataResult
/// Size: 0x03
enum EJunoSetSlotPOIMetaDataResult : uint8_t
{
	EJunoSetSlotPOIMetaDataResult__Success                                           = 0,
	EJunoSetSlotPOIMetaDataResult__Failure                                           = 1,
	EJunoSetSlotPOIMetaDataResult__EJunoSetSlotPOIMetaDataResult_MAX                 = 2
};

/// Enum /Script/JunoProceduralWorld.EJunoGetMatchingPOIsFromDataRegistryResult
/// Size: 0x03
enum EJunoGetMatchingPOIsFromDataRegistryResult : uint8_t
{
	EJunoGetMatchingPOIsFromDataRegistryResult__Success                              = 0,
	EJunoGetMatchingPOIsFromDataRegistryResult__Failure                              = 1,
	EJunoGetMatchingPOIsFromDataRegistryResult__EJunoGetMatchingPOIsFromDataRegistryResult_MAX = 2
};

/// Enum /Script/JunoProceduralWorld.EVerticalDirection
/// Size: 0x04
enum EVerticalDirection : uint8_t
{
	EVerticalDirection__Both                                                         = 0,
	EVerticalDirection__DownwardOnly                                                 = 1,
	EVerticalDirection__UpwardOnly                                                   = 2,
	EVerticalDirection__EVerticalDirection_MAX                                       = 3
};

/// Enum /Script/JunoProceduralWorld.ELandmassRoadTier
/// Size: 0x09
enum ELandmassRoadTier : uint8_t
{
	ELandmassRoadTier__Default                                                       = 0,
	ELandmassRoadTier__Dirt                                                          = 1,
	ELandmassRoadTier__Rural                                                         = 2,
	ELandmassRoadTier__Metropolitan                                                  = 3,
	ELandmassRoadTier__Suburban                                                      = 4,
	ELandmassRoadTier__Highway                                                       = 5,
	ELandmassRoadTier__BreadCrumbs                                                   = 6,
	ELandmassRoadTier__Hidden                                                        = 7,
	ELandmassRoadTier__ELandmassRoadTier_MAX                                         = 8
};

/// Enum /Script/JunoProceduralWorld.ERouteGenerationState
/// Size: 0x04
enum ERouteGenerationState : uint8_t
{
	ERouteGenerationState__Inactive                                                  = 0,
	ERouteGenerationState__Active                                                    = 1,
	ERouteGenerationState__Dormant                                                   = 2,
	ERouteGenerationState__ERouteGenerationState_MAX                                 = 3
};

/// Enum /Script/JunoProceduralWorld.ERouteAvoidancePrimitiveType
/// Size: 0x04
enum ERouteAvoidancePrimitiveType : uint8_t
{
	ERouteAvoidancePrimitiveType__Disc                                               = 0,
	ERouteAvoidancePrimitiveType__Curve                                              = 1,
	ERouteAvoidancePrimitiveType__ProceduralRoutes                                   = 2,
	ERouteAvoidancePrimitiveType__ERouteAvoidancePrimitiveType_MAX                   = 3
};

/// Enum /Script/JunoProceduralWorld.EProceduralRouteGuideSetSelectMethod
/// Size: 0x03
enum EProceduralRouteGuideSetSelectMethod : uint8_t
{
	EProceduralRouteGuideSetSelectMethod__UseTileId                                  = 0,
	EProceduralRouteGuideSetSelectMethod__UseTileIndex                               = 1,
	EProceduralRouteGuideSetSelectMethod__EProceduralRouteGuideSetSelectMethod_MAX   = 2
};

/// Enum /Script/JunoProceduralWorld.EProceduralRiverAnchorType
/// Size: 0x05
enum EProceduralRiverAnchorType : uint8_t
{
	EProceduralRiverAnchorType__Source                                               = 0,
	EProceduralRiverAnchorType__Lake                                                 = 1,
	EProceduralRiverAnchorType__Coastline                                            = 2,
	EProceduralRiverAnchorType__DeepSea                                              = 3,
	EProceduralRiverAnchorType__EProceduralRiverAnchorType_MAX                       = 4
};

/// Enum /Script/JunoProceduralWorld.PCGJunoFractalNoise2DMode
/// Size: 0x07
enum PCGJunoFractalNoise2DMode : uint32_t
{
	PCGJunoFractalNoise2DMode__Perlin                                                = 0,
	PCGJunoFractalNoise2DMode__Caustic                                               = 1,
	PCGJunoFractalNoise2DMode__Voronoi                                               = 2,
	PCGJunoFractalNoise2DMode__TiledVoronoi                                          = 3,
	PCGJunoFractalNoise2DMode__Brownian                                              = 4,
	PCGJunoFractalNoise2DMode__EdgeMask                                              = 5,
	PCGJunoFractalNoise2DMode__PCGJunoFractalNoise2DMode_MAX                         = 6
};

/// Enum /Script/JunoProceduralWorld.PCGJunoFractalNoise2DEdgeMode
/// Size: 0x04
enum PCGJunoFractalNoise2DEdgeMode : uint32_t
{
	PCGJunoFractalNoise2DEdgeMode__Perlin                                            = 0,
	PCGJunoFractalNoise2DEdgeMode__Caustic                                           = 1,
	PCGJunoFractalNoise2DEdgeMode__Brownian                                          = 2,
	PCGJunoFractalNoise2DEdgeMode__PCGJunoFractalNoise2DEdgeMode_MAX                 = 3
};

/// Enum /Script/JunoProceduralWorld.PCGJunoFractalDensityMode
/// Size: 0x05
enum PCGJunoFractalDensityMode : uint32_t
{
	PCGJunoFractalDensityMode__Ignore                                                = 0,
	PCGJunoFractalDensityMode__Set                                                   = 1,
	PCGJunoFractalDensityMode__Add                                                   = 2,
	PCGJunoFractalDensityMode__Multiply                                              = 3,
	PCGJunoFractalDensityMode__PCGJunoFractalDensityMode_MAX                         = 4
};

