
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/DelMarTrackRuntime.DelMarTrackBase
/// Size: 0x0080 (0x000290 - 0x000310)
class ADelMarTrackBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UDelMarTrackSplineComponent*)        Spline                                                      OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UDelMarTrackPalette*)                TrackPalette                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UDelMarTrackPaletteTheme*)           TrackPalette_V2                                             OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UDelMarTrackPointData*)              TrackSplinePointData                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TArray<FDelMarTrackPropSection>)           TrackPropData                                               OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(TArray<FDelMarSegmentActorCollection>)     SegmentCollections                                          OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(bool)                                      bForceValidOOBTube                                          OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	DMember(bool)                                      bForceValidTrack                                            OFFSET(get<bool>, {0x2F1, 1, 0, 0})
	DMember(float)                                     DefaultMaxTrackWidth                                        OFFSET(get<float>, {0x2F4, 4, 0, 0})
	DMember(bool)                                      bEnableGlobalMaterialCollectionIndex                        OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(uint32_t)                                  GlobalMaterialCollectionIndex                               OFFSET(get<uint32_t>, {0x2FC, 4, 0, 0})
	DMember(int32_t)                                   TotalSegmentActors                                          OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(float)                                     TrackLength                                                 OFFSET(get<float>, {0x304, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.SetTrackTypeTagAtIndex
	// void SetTrackTypeTagAtIndex(int32_t SplineIndex, FGameplayTag& tag);                                                     // [0xbd1e48c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.RebuildTrack
	// void RebuildTrack();                                                                                                     // [0xbd1e478] Final|Native|Public  
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.PreSplineSegmentGenerated
	// void PreSplineSegmentGenerated(class UDelMarTrackSplineComponent* SplineComp, int32_t PointIndex);                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.PreRebuildTrack_BP
	// void PreRebuildTrack_BP();                                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.PostSplineSegmentGenerated
	// void PostSplineSegmentGenerated(class UDelMarTrackSplineComponent* SplineComp, int32_t PointIndex);                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.PostRebuildTrack_BP
	// void PostRebuildTrack_BP();                                                                                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnSplinePointRemoved
	// void OnSplinePointRemoved(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                             // [0xbd1e3b4] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnSplinePointChanged
	// void OnSplinePointChanged(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                             // [0xbd1e2f0] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnSplinePointAdded
	// void OnSplinePointAdded(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                               // [0xbd1e22c] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnSplineClosedLoopChanged
	// void OnSplineClosedLoopChanged(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                        // [0xbd1e168] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnMetadataChanged
	// void OnMetadataChanged(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                                // [0xbd1e0a4] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsTrackable
	// bool IsTrackable();                                                                                                      // [0xbd1dd24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsSecondary
	// bool IsSecondary();                                                                                                      // [0xbd1dc08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsPrimary
	// bool IsPrimary();                                                                                                        // [0xbd1dbe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsPointInOOBTube
	// bool IsPointInOOBTube(FVector& Point);                                                                                   // [0x3d1d968] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsDistanceWithinRange
	// bool IsDistanceWithinRange(float InDistance, float StartDistance, float EndDistance);                                    // [0xbd1dae4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsCosmetic
	// bool IsCosmetic();                                                                                                       // [0xbd1dac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.InitializeSpline
	// void InitializeSpline();                                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetTransitionSegmentClass
	// class UClass* GetTransitionSegmentClass(int32_t FromSplineIndex, int32_t ToSplineIndex);                                 // [0xbd1d8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetStartCapClass
	// class UClass* GetStartCapClass(int32_t SplineIndex);                                                                     // [0xbd1d864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetSegmentTrackTypeTag
	// FGameplayTag GetSegmentTrackTypeTag(int32_t SplineIndex);                                                                // [0xbd1d73c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetSegmentClassAtSplinePoint
	// class UClass* GetSegmentClassAtSplinePoint(int32_t SplineIndex);                                                         // [0xbd1d6b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetPreviousSplineSegment
	// int32_t GetPreviousSplineSegment(int32_t InSplineSegmentIndex);                                                          // [0xbd1d554] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetPreviousSplinePoint
	// int32_t GetPreviousSplinePoint(int32_t InSplinePoint);                                                                   // [0xbd1d554] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetNextSplineSegment
	// int32_t GetNextSplineSegment(int32_t InSplineSegmentIndex);                                                              // [0xbd1d4ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetNextSplinePoint
	// int32_t GetNextSplinePoint(int32_t InSplinePoint);                                                                       // [0xbd1d41c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetMetaDataAtSplinePoint
	// FDelMarSplinePointMetaData GetMetaDataAtSplinePoint(int32_t SplineIndex);                                                // [0xbd1d388] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetLoopDistance
	// float GetLoopDistance(float InTotalDistance);                                                                            // [0xbd1d2f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetForwardDistance
	// float GetForwardDistance(float Start, float End);                                                                        // [0xbd1d228] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetEndCapClass
	// class UClass* GetEndCapClass(int32_t SplineIndex);                                                                       // [0xbd1d19c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetDistanceRangeFromPointRange
	// FDelMarTrackPointDistanceRange GetDistanceRangeFromPointRange(FDelMarTrackPointIndexRange& InRange);                     // [0xbd1d104] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetAllTrackSegmentActors
	// TArray<ADelMarTrackSegmentBase*> GetAllTrackSegmentActors();                                                             // [0xbd1ca50] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.ForceValidTrack
	// bool ForceValidTrack();                                                                                                  // [0xbd1ca38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.ForceValidOOBTube
	// bool ForceValidOOBTube();                                                                                                // [0xa142244] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.ConvertTrackTagsToV2
	// void ConvertTrackTagsToV2();                                                                                             // [0xbd1c95c] Final|Native|Public  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrack
/// Size: 0x0058 (0x000310 - 0x000368)
class ADelMarTrack : public ADelMarTrackBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(EDelMarTrackType)                          TrackType                                                   OFFSET(get<T>, {0x310, 1, 0, 0})
	DMember(bool)                                      bUserSelectedStartTrack                                     OFFSET(get<bool>, {0x311, 1, 0, 0})
	CMember(class ADelMarTrack*)                       StartTrackConnection                                        OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(bool)                                      bUserSelectedEndTrack                                       OFFSET(get<bool>, {0x320, 1, 0, 0})
	CMember(class ADelMarTrack*)                       EndTrackConnection                                          OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(float)                                     ParentStartDistance                                         OFFSET(get<float>, {0x330, 4, 0, 0})
	DMember(float)                                     ParentEndDistance                                           OFFSET(get<float>, {0x334, 4, 0, 0})
	DMember(float)                                     PrimaryStartDistance                                        OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     PrimaryEndDistance                                          OFFSET(get<float>, {0x33C, 4, 0, 0})
	DMember(float)                                     PrimarySegmentLength                                        OFFSET(get<float>, {0x340, 4, 0, 0})
	CMember(class UClass*)                             OobTubeClass                                                OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarTrackOobTube*>)      AttachedOobTube                                             OFFSET(get<T>, {0x350, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrack.SplitTrackAtPoint
	// bool SplitTrackAtPoint(int32_t SplitAtPoint);                                                                            // [0xbd1e5bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.MergeTrack
	// bool MergeTrack(class ADelMarTrack* OtherTrack, bool MergeToEndPoint, bool CopyFromStartPoint);                          // [0xbd1dd48] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetSecondaryStartTrack
	// class ADelMarTrack* GetSecondaryStartTrack();                                                                            // [0x7feed30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetSecondaryEndTrack
	// class ADelMarTrack* GetSecondaryEndTrack();                                                                              // [0x9245d08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetPrimaryStartDistance
	// float GetPrimaryStartDistance();                                                                                         // [0xa2162fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetPrimaryEndDistance
	// float GetPrimaryEndDistance();                                                                                           // [0xbd1d698] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetPrimaryDistance
	// float GetPrimaryDistance(float DistanceOnThisTrack);                                                                     // [0xbd1d5e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetParentStartDistance
	// float GetParentStartDistance();                                                                                          // [0x6178db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetParentEndDistance
	// float GetParentEndDistance();                                                                                            // [0xbd1d53c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackBlueprintFunctionLibrary.TrackPositionDebugDrawEnabled
	// bool TrackPositionDebugDrawEnabled();                                                                                    // [0xbd1e648] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBlueprintFunctionLibrary.IsTrackRadiusCheckDisabled
	// bool IsTrackRadiusCheckDisabled();                                                                                       // [0xbd1dd08] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackCustomizationInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackCustomizationInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSegmentBase
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ADelMarTrackSegmentBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(bool)                                      bIgnoreSplineLength                                         OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(TWeakObjectPtr<ADelMarTrackBase*>)         Track                                                       OFFSET(get<T>, {0x29C, 8, 0, 0})
	CMember(class UDelMarTrackMatLayerComponent*)      MaterialLayerComponent                                      OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(float)                                     BeginDistanceAlongSpline                                    OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(float)                                     EndDistanceAlongSpline                                      OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(int32_t)                                   TrackSegmentIndex                                           OFFSET(get<int32_t>, {0x2B8, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackSegmentBase.GetSplineMeshComponent
	// class USplineMeshComponent* GetSplineMeshComponent();                                                                    // [0x20b7ce8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSegmentBase.GetSplineDistanceRange
	// FDelMarTrackPointDistanceRange GetSplineDistanceRange();                                                                 // [0xbd282a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSegmentBase.ContainsDistanceAlongSpline
	// bool ContainsDistanceAlongSpline(float DistanceAlongSpline);                                                             // [0xbd280f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackCustomSegment
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class ADelMarTrackCustomSegment : public ADelMarTrackSegmentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	DMember(float)                                     SegmentLength                                               OFFSET(get<float>, {0x2C0, 4, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackMaterialCollection
/// Size: 0x0030 (0x000030 - 0x000060)
class UDelMarTrackMaterialCollection : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(uint32_t)                                  SelectedIndex                                               OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	CMember(TArray<FDelMarTrackMaterialCollectionEntry>) Materials                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackMatLayerComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UDelMarTrackMatLayerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TWeakObjectPtr<UStaticMeshComponent*>)     RoadMesh                                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarTrackBase*>)         Track                                                       OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UDelMarTrackMaterialCollection*)     MaterialCollection                                          OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackMeshCustomization
/// Size: 0x0010 (0x000700 - 0x000710)
class UDelMarTrackMeshCustomization : public USplineMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(bool)                                      bIsADefaultCustomization                                    OFFSET(get<bool>, {0x709, 1, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTube
/// Size: 0x00E0 (0x000290 - 0x000370)
class ADelMarTrackOobTube : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(class ADelMarTrack*)                       AttachedTrack                                               OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UDelMarTrackSplineComponent*)        Spline                                                      OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UDelMarTrackOobTubePointData*)       SplinePointData                                             OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TubeMeshComponentClass                                      OFFSET(get<T>, {0x2A8, 32, 0, 0})
	CMember(TArray<FDelMarTrackOobTubeMeshSection>)    OobTubeMeshSections                                         OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              TubeMesh                                                    OFFSET(get<T>, {0x2D8, 32, 0, 0})
	CMember(TMap<EDelMarTrackOobTubeTransitionType, TWeakObjectPtr<UStaticMesh*>>) TransitionMeshes                OFFSET(get<T>, {0x2F8, 80, 0, 0})
	DMember(float)                                     DefaultTransitionMeshLength                                 OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(int32_t)                                   DefaultNumSubsections                                       OFFSET(get<int32_t>, {0x34C, 4, 0, 0})
	DMember(float)                                     SmallestSubsectionLength                                    OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(float)                                     MinimumMeshScale                                            OFFSET(get<float>, {0x354, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnPostContructedOOBTube
	// void OnPostContructedOOBTube();                                                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnConstructTubeMesh
	// void OnConstructTubeMesh(class USplineMeshComponent* TubeMeshComponent, bool bIsTransitionMesh, bool bIsTransitionIn);   // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnAttachedTrackPointRemoved
	// void OnAttachedTrackPointRemoved(class UDelMarTrackSplineComponent* InSpline, int32_t PointIndex);                       // [0xbd1dfe0] Final|Native|Private 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnAttachedTrackPointChanged
	// void OnAttachedTrackPointChanged(class UDelMarTrackSplineComponent* InSpline, int32_t PointIndex);                       // [0xbd1df1c] Final|Native|Private 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnAttachedTrackPointAdded
	// void OnAttachedTrackPointAdded(class UDelMarTrackSplineComponent* InSpline, int32_t PointIndex);                         // [0xbd1de58] Final|Native|Private 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.IsSplinePointOffset
	// bool IsSplinePointOffset(int32_t PointIndex);                                                                            // [0xbd1dc2c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.IsAttachedToSecondaryTrack
	// bool IsAttachedToSecondaryTrack();                                                                                       // [0xbd1da84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.IsAttachedToPrimaryTrack
	// bool IsAttachedToPrimaryTrack();                                                                                         // [0xbd1da40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.HasTubeMeshAtDistance
	// bool HasTubeMeshAtDistance(float InDistance);                                                                            // [0xbd1d9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.GetSplinePointTagAtIndex
	// FGameplayTag GetSplinePointTagAtIndex(int32_t PointIndex);                                                               // [0xbd1d7cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.DetermineTubeMeshTransitionType
	// EDelMarTrackOobTubeTransitionType DetermineTubeMeshTransitionType(int32_t CurrentPointIndex, int32_t NextPointIndex);    // [0xbd1c970] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTubePointData
/// Size: 0x0010 (0x000028 - 0x000038)
class UDelMarTrackOobTubePointData : public USplineMetadata
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FDelMarTrackOobTubePointMetaData>)  MetaData                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTubePositionalRenderingComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UDelMarTrackOobTubePositionalRenderingComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TWeakObjectPtr<UDelMarTrackPositionComponent*>) PlayerPositionComponent                                OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TSet<USplineMeshComponent*>)               ActiveOOBTubeMeshes                                         OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(class ADelMarTrackOobTube*)                ActiveOOBTube                                               OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(float)                                     RenderDistanceInFrontOfPlayer                               OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     RenderDistanceBehindPlayer                                  OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     UpdateIntervalInSeconds                                     OFFSET(get<float>, {0x108, 4, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackOobTubeProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetSplineVisualizationOffset
	// double GetSplineVisualizationOffset();                                                                                   // [0xbd28380] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetSplineMetadata
	// FDelMarTrackOobTubePointMetaData GetSplineMetadata(int32_t PointIndex);                                                  // [0xbd282d0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetSplineComponent
	// class USplineComponent* GetSplineComponent();                                                                            // [0x63ca434] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetSmallestSubsectionLength
	// double GetSmallestSubsectionLength();                                                                                    // [0xbd2827c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetOobTubeActor
	// class AActor* GetOobTubeActor();                                                                                         // [0x7ddeb78] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetMinimumMeshScale
	// double GetMinimumMeshScale();                                                                                            // [0xbd281bc] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetDefaultTransitionMeshLength
	// double GetDefaultTransitionMeshLength();                                                                                 // [0xbd28190] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetDefaultSubsectionCount
	// int32_t GetDefaultSubsectionCount();                                                                                     // [0x6178d90] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetAttachedTrack
	// class ADelMarTrack* GetAttachedTrack();                                                                                  // [0x27ccc08] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarTrackOobTubeCollectionProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             OobTubeClass                                                OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy.RegisterOobTube
	// void RegisterOobTube(class AActor* OobTubeActor);                                                                        // [0xa801a8c] Native|Event|Public|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy.GetOobTubeProxy
	// class UDelMarTrackOobTubeProxy* GetOobTubeProxy(int32_t OobTubeIndex);                                                   // [0xbd281e8] Native|Event|Public|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy.GetNumOobTubeProxies
	// int32_t GetNumOobTubeProxies();                                                                                          // [0x616271c] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPaletteTrackType
/// Size: 0x0020 (0x000030 - 0x000050)
class UDelMarTrackPaletteTrackType : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FDelMarTrackPaletteTrackTypeEntry>) StyleArray                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bShouldOOBTubeFunnel                                        OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(class UStaticMesh*)                        OOBTubeMeshOverride                                         OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackPaletteTrackType.AddSegmentClassActorToStyle
	// void AddSegmentClassActorToStyle(FGameplayTag& StyleTag, class UClass* SegmentClass);                                    // [0xbd27f9c] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPaletteTransitions
/// Size: 0x0010 (0x000030 - 0x000040)
class UDelMarTrackPaletteTransitions : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FDelMarTrackPaletteTransitionEntry_v2>) TransitionArray                                         OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPaletteTheme
/// Size: 0x0040 (0x000030 - 0x000070)
class UDelMarTrackPaletteTheme : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     ThemeName                                                   OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FString)                                   ThemeDescription                                            OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UDelMarTrackPaletteTrackType*>) Tracks                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(class UDelMarTrackPaletteTransitions*)     Transitions                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UStaticMesh*)                        OOBTubeMesh                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber
/// Size: 0x00B8 (0x000290 - 0x000348)
class ADelMarTrackPerformanceScrubber : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class UCameraComponent*)                   Camera                                                      OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTrackSplineComponent*>) Spline                                                   OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FString)                                   SplineSelection                                             OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(int32_t)                                   ScrubUnits                                                  OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})
	DMember(float)                                     CameraHeightOffset                                          OFFSET(get<float>, {0x2B4, 4, 0, 0})
	CMember(class UCurveFloat*)                        FloatCurve                                                  OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(int32_t)                                   RuntimeSpeed                                                OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(bool)                                      bRunCsvProfilerDuringScrub                                  OFFSET(get<bool>, {0x2C4, 1, 1, 0})
	DMember(int32_t)                                   ScrubUnitMax                                                OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bRuntimeEnabled                                             OFFSET(get<bool>, {0x2E4, 1, 1, 0})
	CMember(TMap<FString, UDelMarTrackSplineComponent*>) StringToSplineMap                                         OFFSET(get<T>, {0x2E8, 80, 0, 0})
	CMember(class UTimelineComponent*)                 Timeline                                                    OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.UpdateSplines
	// TArray<FString> UpdateSplines();                                                                                         // [0xbd28518] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.TimelineTickFloatCallback
	// void TimelineTickFloatCallback(float Progress);                                                                          // [0xbd28498] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.TimelineTickCallback
	// void TimelineTickCallback();                                                                                             // [0xbd28474] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.TimelineFinishedCallback
	// void TimelineFinishedCallback();                                                                                         // [0xbd2843c] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.ReceiveRuntimeTrackScrubbingStart
	// void ReceiveRuntimeTrackScrubbingStart();                                                                                // [0xbd28418] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.ReceiveRuntimeTrackScrubbingSpeed
	// void ReceiveRuntimeTrackScrubbingSpeed();                                                                                // [0xbd283ac] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.ClientStopScrub
	// void ClientStopScrub();                                                                                                  // [0x2fef0f4] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.ClientStartScrub
	// void ClientStartScrub();                                                                                                 // [0x18017a4] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackRoadProp
/// Size: 0x0010 (0x000BC8 - 0x000BD8)
class ADelMarTrackRoadProp : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3032;

public:
	CMember(EDelMarTrackRoadPropType)                  RoadPropType                                                OFFSET(get<T>, {0xBC8, 1, 0, 0})
	CMember(class UDelMarTrackSnapToComponent*)        SnapToComponent                                             OFFSET(get<T>, {0xBD0, 8, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSegmentCollectionSpawnDataProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackSegmentCollectionSpawnDataProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UDelMarTrackSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              RootTrackTag                                                OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(TArray<FDelMarTrackTagConverterData>)      TagConverterData                                            OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FGameplayTag)                              DefaultConverterTag                                         OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	SMember(FGameplayTag)                              HiddenTrackTag                                              OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSnapToComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UDelMarTrackSnapToComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FVector)                                   OffsetToOwnerActor                                          OFFSET(getStruct<T>, {0x220, 24, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSnapToSplinePointComponent
/// Size: 0x0020 (0x000250 - 0x000270)
class UDelMarTrackSnapToSplinePointComponent : public UDelMarTrackSnapToComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class USplineComponent*)                   SplineToSnapTo                                              OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(EDelMarTrackSplinePointSnapMode)           SplinePointSnapMode                                         OFFSET(get<T>, {0x258, 1, 0, 0})
	DMember(int32_t)                                   SplinePointIndexToSnapTo                                    OFFSET(get<int32_t>, {0x25C, 4, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackStaticMeshSegment
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class ADelMarTrackStaticMeshSegment : public ADelMarTrackSegmentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UStaticMeshComponent*)               StaticMeshComponent                                         OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPositionComponent
/// Size: 0x0080 (0x000220 - 0x0002A0)
class UDelMarTrackPositionComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FTrackPosition)                            ActiveTrackPosition                                         OFFSET(getStruct<T>, {0x250, 32, 0, 0})
	DMember(float)                                     TrackRadius                                                 OFFSET(get<float>, {0x270, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.SetActiveTrack
	// void SetActiveTrack(class ADelMarTrackBase* Track, int32_t TrackSegmentIndex, bool bForce);                              // [0xbd3a8dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.IsTouchingTrack
	// bool IsTouchingTrack();                                                                                                  // [0x38e632c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.IsOnPrimaryTrack
	// bool IsOnPrimaryTrack();                                                                                                 // [0xbd3a894] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.HasValidPosition
	// bool HasValidPosition();                                                                                                 // [0xbd3a584] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldUpVectorAlongSpline
	// FVector GetWorldUpVectorAlongSpline();                                                                                   // [0xbd3a504] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldTransformAlongSpline
	// FTransform GetWorldTransformAlongSpline();                                                                               // [0xbd3a488] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldRightVectorAlongSpline
	// FVector GetWorldRightVectorAlongSpline();                                                                                // [0xbd3a408] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldLocationAlongSpline
	// FVector GetWorldLocationAlongSpline();                                                                                   // [0xbd3a3d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldDirectionAlongSpline
	// FVector GetWorldDirectionAlongSpline();                                                                                  // [0xbd3a398] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetTrackRadius
	// float GetTrackRadius(class ADelMarTrackBase* InTrack, float InDistanceAlongTrack);                                       // [0xbd3a290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetRawDistanceAlongSpline
	// float GetRawDistanceAlongSpline();                                                                                       // [0xbd39cdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetRawClosestSplineLocation
	// FVector GetRawClosestSplineLocation();                                                                                   // [0xbd39c5c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetPrimaryWorldLocationAlongSpline
	// FVector GetPrimaryWorldLocationAlongSpline();                                                                            // [0xbd39c24] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetPrimaryTrack
	// class ADelMarTrackBase* GetPrimaryTrack();                                                                               // [0xbd39c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetPrimaryDistance
	// float GetPrimaryDistance();                                                                                              // [0xbd39bd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetLastKnowGoodSplineLocation
	// FVector GetLastKnowGoodSplineLocation();                                                                                 // [0xbd39924] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetDistanceAlongSpline
	// float GetDistanceAlongSpline();                                                                                          // [0xbd397b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveTrackRadius
	// float GetActiveTrackRadius();                                                                                            // [0xbd39834] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveTrackPosition
	// FTrackPosition GetActiveTrackPosition();                                                                                 // [0xbd397d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveTrackDistance
	// float GetActiveTrackDistance();                                                                                          // [0xbd397b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveTrack
	// class ADelMarTrackBase* GetActiveTrack();                                                                                // [0xbd397a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveSegmentIndex
	// int32_t GetActiveSegmentIndex();                                                                                         // [0xa1717a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackVehiclePositionComponent
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class UDelMarTrackVehiclePositionComponent : public UDelMarTrackPositionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class AFortAthenaVehicle*)                 Vehicle                                                     OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackManager
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarTrackManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<class ADelMarTrackBase*>)           DelMarTracks                                                OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(class ADelMarTrackBase*)                   PrimaryTrack                                                OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class ADelMarTrackBase*)                   LowestTrack                                                 OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPalette
/// Size: 0x0030 (0x000030 - 0x000060)
class UDelMarTrackPalette : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FDelMarTrackPaletteEntry>)          Palette                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FDelMarTrackPaletteTransitionEntry>) Transitions                                                OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FDelMarTrackCapEntry>)              Caps                                                        OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPrefabSegment
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class ADelMarTrackPrefabSegment : public ADelMarTrackSegmentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	DMember(float)                                     TangentLength                                               OFFSET(get<float>, {0x2C0, 4, 0, 0})
	CMember(class UStaticMeshComponent*)               PrefabStaticMesh                                            OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FName)                                     StartSocketName                                             OFFSET(getStruct<T>, {0x2D0, 4, 0, 0})
	SMember(FName)                                     EndSocketName                                               OFFSET(getStruct<T>, {0x2D4, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackPrefabSegment.GetSockets
	// TArray<FString> GetSockets();                                                                                            // [0xbd3a060] Final|Native|Private|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSegmentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackSegmentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPointData
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarTrackPointData : public USplineMetadata
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FDelMarSplinePointMetaData>)        MetaData                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UDelMarTrackSplineComponent*)        Spline                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSplineComponent
/// Size: 0x00B0 (0x000600 - 0x0006B0)
class UDelMarTrackSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	DMember(int32_t)                                   WorldPlaneLookupSubsteps                                    OFFSET(get<int32_t>, {0x600, 4, 0, 0})
	CMember(TArray<FDelMarRotationalMinimalFrame>)     RotationalMinimalFrameNormals                               OFFSET(get<T>, {0x698, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.IsDistanceWithinRange
	// bool IsDistanceWithinRange(float InDistance, float StartDistance, float EndDistance);                                    // [0xbd3a798] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.IsDistanceBehindOtherDistance
	// bool IsDistanceBehindOtherDistance(float Distance, float OtherDistance, float BaseDistance);                             // [0xbd3a698] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.IsDistanceAheadOfOtherDistance
	// bool IsDistanceAheadOfOtherDistance(float Distance, float OtherDistance, float BaseDistance);                            // [0xbd3a59c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetSplinePointClosestToWorldLocation
	// int32_t GetSplinePointClosestToWorldLocation(FVector& WorldLocation);                                                    // [0xbd3a1bc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetSplinePointClosestToDistanceAlongSpline
	// int32_t GetSplinePointClosestToDistanceAlongSpline(float DistanceAlongSpline);                                           // [0xbd3a12c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetSplinePointAtDistanceAlongSpline
	// int32_t GetSplinePointAtDistanceAlongSpline(float DistanceAlongSpline);                                                  // [0xbd3a09c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetRotationalMinimalUpVectorAtSplinePoint
	// FVector GetRotationalMinimalUpVectorAtSplinePoint(int32_t SplinePoint, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbd39f90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetRotationalMinimalUpVectorAtDistanceAlongSpline
	// FVector GetRotationalMinimalUpVectorAtDistanceAlongSpline(float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbd39d6c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetRotationalMinimalFrames
	// TArray<FDelMarRotationalMinimalFrame> GetRotationalMinimalFrames();                                                      // [0xbd39cf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetPreviousSplineSegment
	// int32_t GetPreviousSplineSegment(int32_t InSplineSegmentIndex);                                                          // [0xbd39b4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetPreviousSplinePoint
	// int32_t GetPreviousSplinePoint(int32_t InSplinePoint);                                                                   // [0xbd39b4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetNextSplineSegment
	// int32_t GetNextSplineSegment(int32_t InSplineSegmentIndex);                                                              // [0xbd39ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetNextSplinePoint
	// int32_t GetNextSplinePoint(int32_t InSplinePoint);                                                                       // [0xbd39a34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetLoopDistance
	// float GetLoopDistance(float InTotalDistance);                                                                            // [0xbd399a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetForwardDistance
	// float GetForwardDistance(float Start, float End);                                                                        // [0xbd3985c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.FindInputKeyForNeighboringSegmentClosestToWorldPlane
	// FClosestLocationToWorldPlaneResult FindInputKeyForNeighboringSegmentClosestToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, int32_t SegmentIndex, int32_t& OutClosestSegmentIndex); // [0xbd3958c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.FindClosestLocationToWorldPlane
	// FClosestLocationToWorldPlaneResult FindClosestLocationToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbd39378] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.FindClosestLocationForSegmentToWorldPlane
	// FClosestLocationToWorldPlaneResult FindClosestLocationForSegmentToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, int32_t SegmentIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbd39108] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSplineMeshSegment
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class ADelMarTrackSplineMeshSegment : public ADelMarTrackSegmentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class USplineMeshComponent*)               SplineMesh                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(float)                                     SegmentLengthScaler                                         OFFSET(get<float>, {0x2C8, 4, 0, 0})
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackVariableSplineMeshSegment
/// Size: 0x0050 (0x0002D0 - 0x000320)
class ADelMarTrackVariableSplineMeshSegment : public ADelMarTrackSplineMeshSegment
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(TMap<int32_t, UStaticMesh*>)               VariableStaticMeshes                                        OFFSET(get<T>, {0x2D0, 80, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackAddedEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarTrackAddedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<ADelMarTrackBase*>)         Track                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackMaterialCollectionEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarTrackMaterialCollectionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UMaterialInstanceConstant*>)  MICs                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackOobTubeMeshSection
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarTrackOobTubeMeshSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USplineMeshComponent*)               TubeMesh                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PointIndex                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     StartDistanceAlongSpline                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     EndDistanceAlongSpline                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackOobTubePointMetaData
/// Size: 0x0028 (0x000000 - 0x000028)
class FDelMarTrackOobTubePointMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector2D)                                 LocationOffset                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 ScaleOffset                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      bShouldGenerateTube                                         OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bShouldMirrorAttachedTrackPoint                             OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bIgnoreAutoTransitionScaling                                OFFSET(get<bool>, {0x26, 1, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPaletteTransitionEntry_v2
/// Size: 0x0040 (0x000000 - 0x000040)
class FDelMarTrackPaletteTransitionEntry_v2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              TagA                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              TagB                                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(class UClass*)                             TRANSITION                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bUseReverse                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(class UClass*)                             Reverse                                                     OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bEnableOOBTubeTransitions                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(class UStaticMesh*)                        OOBTubeTransitionMesh                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bOverrideReverseOOBTubeMesh                                 OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(class UStaticMesh*)                        ReverseOOBTubeTransitionMesh                                OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPaletteTrackTypeEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FDelMarTrackPaletteTrackTypeEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              StyleTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<class UClass*>)                     SegmentActors                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(class UClass*)                             FrontEndcap                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bIsFrontEndcapReversable                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(class UClass*)                             BackEndcap                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UTexture*)                           WidgetImage                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPointDistanceRange
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarTrackPointDistanceRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     BeginDistanceAlongSpline                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EndDistanceAlongSpline                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPointIndexRange
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarTrackPointIndexRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   BeginPointIndex                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EndPointIndex                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackProp
/// Size: 0x0068 (0x000000 - 0x000068)
class FDelMarTrackProp : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            SkeletalMesh                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              StaticMesh                                                  OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   Blueprint                                                   OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(EDelMarTrackPropType)                      PropType                                                    OFFSET(get<T>, {0x60, 1, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPropSection
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FDelMarTrackPropSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FDelMarTrackPointIndexRange>)       RangesToApplyTo                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FDelMarTrackProp)                          PropToPlace                                                 OFFSET(getStruct<T>, {0x10, 104, 0, 0})
	DMember(int32_t)                                   NumPropsToPlace                                             OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(double)                                    DistanceBetweenProps                                        OFFSET(get<double>, {0x80, 8, 0, 0})
	SMember(FName)                                     CustomizationPlacementBase                                  OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	DMember(double)                                    PlacementBeginPadding                                       OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(double)                                    PlacementEndPadding                                         OFFSET(get<double>, {0x98, 8, 0, 0})
	DMember(double)                                    PlacementDistanceOffset                                     OFFSET(get<double>, {0xA0, 8, 0, 0})
	SMember(FVector)                                   PlacementScale                                              OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FRotator)                                  PlacementRotationOffset                                     OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	CMember(EDelMarTrackSide)                          SupportedTrackSide                                          OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(EDelMarTrackPropPlacementPosition)         PlacementPosition                                           OFFSET(get<T>, {0xD9, 1, 0, 0})
	CMember(EDelMarTrackPropPlacementSpread)           PlacementSpread                                             OFFSET(get<T>, {0xDA, 1, 0, 0})
	SMember(FString)                                   RangesToApplyToEditorString                                 OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackSegmentSpawnInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarTrackSegmentSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackSegmentCollectionProxyData
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarTrackSegmentCollectionProxyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/DelMarTrackRuntime.DelMarSegmentActorCollection
/// Size: 0x0028 (0x000000 - 0x000028)
class FDelMarSegmentActorCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<class ADelMarTrackSegmentBase*>)    Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class ADelMarTrackBase*)                   Track                                                       OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<class UActorComponent*>)            PropComponents                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackTagConverterData
/// Size: 0x000C (0x000000 - 0x00000C)
class FDelMarTrackTagConverterData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              v1Tag                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bCheckCustomizations                                        OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bNeedRightRail                                              OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bNeedLeftRail                                               OFFSET(get<bool>, {0x6, 1, 0, 0})
	SMember(FGameplayTag)                              v2Tag                                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackTransformData
/// Size: 0x0070 (0x000000 - 0x000070)
class FDelMarTrackTransformData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<ADelMarTrackBase*>)         Track                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                TrackTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPaletteTransitionEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FDelMarTrackPaletteTransitionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              TypeA                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              TypeB                                                       OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AtoB                                                        OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BtoA                                                        OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackCapEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FDelMarTrackCapEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   StartCap                                                    OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   EndCap                                                      OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPaletteEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FDelMarTrackPaletteEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              TrackTypeTag                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TrackSegmentClass                                           OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FString>)                           MeshCustomizations                                          OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.TrackPosition
/// Size: 0x0020 (0x000000 - 0x000020)
class FTrackPosition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class ADelMarTrackBase*)                   Track                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     DistanceAlongSpline                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RawDistanceAlongSpline                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DistanceToVehicleSquared                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LastKnownGoodDistance                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   SegmentIndex                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarSplineSegmentInfo
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FDelMarSplineSegmentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Struct /Script/DelMarTrackRuntime.DelMarSplinePointMetaData
/// Size: 0x0080 (0x000000 - 0x000080)
class FDelMarSplinePointMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              TrackTypeTag                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SegmentClass                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TMap<FString, bool>)                       EnabledMeshCustomizations                                   OFFSET(get<T>, {0x28, 80, 0, 0})
	DMember(bool)                                      bUseStableRoll                                              OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(bool)                                      bUseFrontEndcap                                             OFFSET(get<bool>, {0x79, 1, 0, 0})
	DMember(bool)                                      bUseBackEndcap                                              OFFSET(get<bool>, {0x7A, 1, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.ClosestLocationToWorldPlaneResult
/// Size: 0x0020 (0x000000 - 0x000020)
class FClosestLocationToWorldPlaneResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Key                                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     DistanceToPlane                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/DelMarTrackRuntime.DelMarRotationalMinimalFrame
/// Size: 0x0068 (0x000000 - 0x000068)
class FDelMarRotationalMinimalFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     InputKey                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Tangent                                                     OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   RotationAxis                                                OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x50, 24, 0, 0})
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackOobTubeTransitionType
/// Size: 0x07
enum EDelMarTrackOobTubeTransitionType : uint8_t
{
	EDelMarTrackOobTubeTransitionType__Default                                       = 0,
	EDelMarTrackOobTubeTransitionType__IntoTunnel                                    = 1,
	EDelMarTrackOobTubeTransitionType__OutOfTunnel                                   = 2,
	EDelMarTrackOobTubeTransitionType__IntoPipe                                      = 3,
	EDelMarTrackOobTubeTransitionType__OutOfPipe                                     = 4,
	EDelMarTrackOobTubeTransitionType__NoMeshNeeded                                  = 5,
	EDelMarTrackOobTubeTransitionType__EDelMarTrackOobTubeTransitionType_MAX         = 6
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackPropType
/// Size: 0x05
enum EDelMarTrackPropType : uint8_t
{
	EDelMarTrackPropType__None                                                       = 0,
	EDelMarTrackPropType__SkeletalMesh                                               = 1,
	EDelMarTrackPropType__StaticMesh                                                 = 2,
	EDelMarTrackPropType__Blueprint                                                  = 3,
	EDelMarTrackPropType__EDelMarTrackPropType_MAX                                   = 4
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackPropPlacementPosition
/// Size: 0x03
enum EDelMarTrackPropPlacementPosition : uint8_t
{
	EDelMarTrackPropPlacementPosition__FromBeginning                                 = 0,
	EDelMarTrackPropPlacementPosition__FromEnding                                    = 1,
	EDelMarTrackPropPlacementPosition__EDelMarTrackPropPlacementPosition_MAX         = 2
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackPropPlacementSpread
/// Size: 0x04
enum EDelMarTrackPropPlacementSpread : uint8_t
{
	EDelMarTrackPropPlacementSpread__UseDistanceBetween                              = 0,
	EDelMarTrackPropPlacementSpread__UseNumberOfProps                                = 1,
	EDelMarTrackPropPlacementSpread__UseBothDistanceAndNumber                        = 2,
	EDelMarTrackPropPlacementSpread__EDelMarTrackPropPlacementSpread_MAX             = 3
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackRoadPropType
/// Size: 0x03
enum EDelMarTrackRoadPropType : uint8_t
{
	EDelMarTrackRoadPropType__StartLine                                              = 0,
	EDelMarTrackRoadPropType__FinishLine                                             = 1,
	EDelMarTrackRoadPropType__EDelMarTrackRoadPropType_MAX                           = 2
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackSide
/// Size: 0x05
enum EDelMarTrackSide : uint8_t
{
	EDelMarTrackSide__Neither                                                        = 0,
	EDelMarTrackSide__Left                                                           = 1,
	EDelMarTrackSide__Right                                                          = 2,
	EDelMarTrackSide__Both                                                           = 3,
	EDelMarTrackSide__EDelMarTrackSide_MAX                                           = 4
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackSnapComponentMode
/// Size: 0x03
enum EDelMarTrackSnapComponentMode : uint8_t
{
	EDelMarTrackSnapComponentMode__SetTransform                                      = 0,
	EDelMarTrackSnapComponentMode__SnapToComponent                                   = 1,
	EDelMarTrackSnapComponentMode__EDelMarTrackSnapComponentMode_MAX                 = 2
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackSplinePointSnapMode
/// Size: 0x04
enum EDelMarTrackSplinePointSnapMode : uint8_t
{
	EDelMarTrackSplinePointSnapMode__StartingPoint                                   = 0,
	EDelMarTrackSplinePointSnapMode__EndingPoint                                     = 1,
	EDelMarTrackSplinePointSnapMode__CustomPoint                                     = 2,
	EDelMarTrackSplinePointSnapMode__EDelMarTrackSplinePointSnapMode_MAX             = 3
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackType
/// Size: 0x04
enum EDelMarTrackType : uint8_t
{
	EDelMarTrackType__Primary                                                        = 0,
	EDelMarTrackType__Secondary                                                      = 1,
	EDelMarTrackType__Cosmetic                                                       = 2,
	EDelMarTrackType__EDelMarTrackType_MAX                                           = 3
};

