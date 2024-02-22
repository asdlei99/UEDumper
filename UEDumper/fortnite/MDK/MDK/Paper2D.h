
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Paper2D.PaperCharacter
/// Size: 0x0010 (0x000660 - 0x000670)
class APaperCharacter : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(class UPaperFlipbookComponent*)            Sprite                                                      OFFSET(get<T>, {0x660, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperFlipbook
/// Size: 0x0028 (0x000028 - 0x000050)
class UPaperFlipbook : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     FramesPerSecond                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(TArray<FPaperFlipbookKeyFrame>)            Keyframes                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultMaterial                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TEnumAsByte<EFlipbookCollisionMode>)       CollisionSource                                             OFFSET(get<T>, {0x48, 1, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	// bool IsValidKeyFrameIndex(int32_t Index);                                                                                // [0x72fd884] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetTotalDuration
	// float GetTotalDuration();                                                                                                // [0x72fd80c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtTime
	// class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);                                                      // [0x72fcd18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtFrame
	// class UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex);                                                                // [0x72fcc8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumKeyFrames
	// int32_t GetNumKeyFrames();                                                                                               // [0x64045a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumFrames
	// int32_t GetNumFrames();                                                                                                  // [0x72fcc14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	// int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);                                                           // [0x72fc94c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Paper2D.PaperFlipbookActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperFlipbookActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UPaperFlipbookComponent*)            RenderComponent                                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperFlipbookComponent
/// Size: 0x0040 (0x000540 - 0x000580)
class UPaperFlipbookComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(class UPaperFlipbook*)                     SourceFlipbook                                              OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x540, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x548, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x54C, 1, 1, 0})
	DMember(bool)                                      bReversePlayback                                            OFFSET(get<bool>, {0x54C, 1, 1, 1})
	DMember(bool)                                      bPlaying                                                    OFFSET(get<bool>, {0x54C, 1, 1, 2})
	DMember(float)                                     AccumulatedTime                                             OFFSET(get<float>, {0x550, 4, 0, 0})
	DMember(int32_t)                                   CachedFrameIndex                                            OFFSET(get<int32_t>, {0x554, 4, 0, 0})
	SMember(FLinearColor)                              SpriteColor                                                 OFFSET(getStruct<T>, {0x558, 16, 0, 0})
	CMember(class UBodySetup*)                         CachedBodySetup                                             OFFSET(get<T>, {0x568, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedPlaying                                           OFFSET(getStruct<T>, {0x570, 16, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperFlipbookComponent.Stop
	// void Stop();                                                                                                             // [0x72ff118] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetSpriteColor
	// void SetSpriteColor(FLinearColor NewColor);                                                                              // [0x72fe8c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlayRate
	// void SetPlayRate(float NewRate);                                                                                         // [0x72fe6ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	// void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);                                            // [0x72fe7ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	// void SetPlaybackPosition(float NewPosition, bool bFireEvents);                                                           // [0x72fe72c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetNewTime
	// void SetNewTime(float NewTime);                                                                                          // [0x72fe62c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x72fe5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetFlipbook
	// bool SetFlipbook(class UPaperFlipbook* NewFlipbook);                                                                     // [0x72fe0b4] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.ReverseFromEnd
	// void ReverseFromEnd();                                                                                                   // [0x72fdfa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Reverse
	// void Reverse();                                                                                                          // [0x72fdf90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x72fddfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Play
	// void Play();                                                                                                             // [0x72fdde8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	// void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);                                                            // [0x72fdd3c] Final|Native|Protected 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsReversing
	// bool IsReversing();                                                                                                      // [0x72fd864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x72fd848] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x72fd82c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetSpriteColor
	// FLinearColor GetSpriteColor();                                                                                           // [0x72fcde0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlayRate
	// float GetPlayRate();                                                                                                     // [0x38e689c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	// int32_t GetPlaybackPositionInFrames();                                                                                   // [0x72fcc34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	// float GetPlaybackPosition();                                                                                             // [0x72fc774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	// int32_t GetFlipbookLengthInFrames();                                                                                     // [0x72fc754] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLength
	// float GetFlipbookLength();                                                                                               // [0x72fc734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	// float GetFlipbookFramerate();                                                                                            // [0x72fc714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbook
	// class UPaperFlipbook* GetFlipbook();                                                                                     // [0x30fcc28] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperGroupedSpriteActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperGroupedSpriteActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UPaperGroupedSpriteComponent*)       RenderComponent                                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperGroupedSpriteComponent
/// Size: 0x0030 (0x000540 - 0x000570)
class UPaperGroupedSpriteComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(TArray<class UMaterialInterface*>)         InstanceMaterials                                           OFFSET(get<T>, {0x538, 16, 0, 0})
	CMember(TArray<FSpriteInstanceData>)               PerInstanceSpriteData                                       OFFSET(get<T>, {0x548, 16, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	// bool UpdateInstanceTransform(int32_t InstanceIndex, FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // [0x72ff3b8] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	// bool UpdateInstanceColor(int32_t InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);              // [0x72ff130] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	// void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);                                                                 // [0x72fefc8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	// bool RemoveInstance(int32_t InstanceIndex);                                                                              // [0x72fde3c] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	// bool GetInstanceTransform(int32_t InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);                    // [0x72fc78c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	// int32_t GetInstanceCount();                                                                                              // [0x72fc774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.ClearInstances
	// void ClearInstances();                                                                                                   // [0x72fc538] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.AddInstance
	// int32_t AddInstance(FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);            // [0x72fbe8c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperRuntimeSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UPaperRuntimeSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnableSpriteAtlasGroups                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableTerrainSplineEditing                                 OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bResizeSpriteDataToMatchTextures                            OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Class /Script/Paper2D.PaperSprite
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UPaperSprite : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<class UTexture*>)                   AdditionalSourceTextures                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FVector2D)                                 BakedSourceUV                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FVector2D)                                 BakedSourceDimension                                        OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(class UTexture2D*)                         BakedSourceTexture                                          OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultMaterial                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UMaterialInterface*)                 AlternateMaterial                                           OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TArray<FPaperSpriteSocket>)                Sockets                                                     OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(float)                                     PixelsPerUnrealUnit                                         OFFSET(get<float>, {0x94, 4, 0, 0})
	CMember(class UBodySetup*)                         BodySetup                                                   OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(int32_t)                                   AlternateMaterialSplitIndex                                 OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(TArray<FVector4>)                          BakedRenderData                                             OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperSpriteActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperSpriteActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UPaperSpriteComponent*)              RenderComponent                                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperSpriteAtlas
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaperSpriteAtlas : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Paper2D.PaperSpriteBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
	// FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int32_t Width, int32_t Height);                              // [0x72fd914] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperSpriteComponent
/// Size: 0x0020 (0x000540 - 0x000560)
class UPaperSpriteComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(class UPaperSprite*)                       SourceSprite                                                OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialOverride                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	SMember(FLinearColor)                              SpriteColor                                                 OFFSET(getStruct<T>, {0x548, 16, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperSpriteComponent.SetSpriteColor
	// void SetSpriteColor(FLinearColor NewColor);                                                                              // [0x72fea04] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.SetSprite
	// bool SetSprite(class UPaperSprite* NewSprite);                                                                           // [0x72fe0b4] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.GetSprite
	// class UPaperSprite* GetSprite();                                                                                         // [0x30fcc28] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperTileLayer
/// Size: 0x0070 (0x000028 - 0x000098)
class UPaperTileLayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FText)                                     LayerName                                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(int32_t)                                   LayerWidth                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   LayerHeight                                                 OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bHiddenInGame                                               OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bLayerCollides                                              OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bOverrideCollisionThickness                                 OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bOverrideCollisionOffset                                    OFFSET(get<bool>, {0x48, 1, 1, 3})
	DMember(float)                                     CollisionThicknessOverride                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     CollisionOffsetOverride                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FLinearColor)                              LayerColor                                                  OFFSET(getStruct<T>, {0x54, 16, 0, 0})
	DMember(int32_t)                                   AllocatedWidth                                              OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   AllocatedHeight                                             OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	CMember(TArray<FPaperTileInfo>)                    AllocatedCells                                              OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(class UPaperTileSet*)                      TileSet                                                     OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(TArray<int32_t>)                           AllocatedGrid                                               OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMap
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UPaperTileMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(int32_t)                                   MapWidth                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MapHeight                                                   OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     PixelsPerUnrealUnit                                         OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     SeparationPerTileX                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SeparationPerTileY                                          OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SeparationPerLayer                                          OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(TWeakObjectPtr<UPaperTileSet*>)            SelectedTileSet                                             OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<class UPaperTileLayer*>)            TileLayers                                                  OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       OFFSET(get<T>, {0x84, 1, 0, 0})
	CMember(TEnumAsByte<ETileMapProjectionMode>)       ProjectionMode                                              OFFSET(get<T>, {0x85, 1, 0, 0})
	DMember(int32_t)                                   HexSideLength                                               OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(class UBodySetup*)                         BodySetup                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(int32_t)                                   LayerNameIndex                                              OFFSET(get<int32_t>, {0x98, 4, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMapActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperTileMapActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UPaperTileMapComponent*)             RenderComponent                                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMapComponent
/// Size: 0x0050 (0x000540 - 0x000590)
class UPaperTileMapComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	DMember(int32_t)                                   MapWidth                                                    OFFSET(get<int32_t>, {0x538, 4, 0, 0})
	DMember(int32_t)                                   MapHeight                                                   OFFSET(get<int32_t>, {0x53C, 4, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   OFFSET(get<int32_t>, {0x540, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  OFFSET(get<int32_t>, {0x544, 4, 0, 0})
	CMember(class UPaperTileSet*)                      DefaultLayerTileSet                                         OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(TArray<class UPaperTileLayer*>)            TileLayers                                                  OFFSET(get<T>, {0x558, 16, 0, 0})
	SMember(FLinearColor)                              TileMapColor                                                OFFSET(getStruct<T>, {0x568, 16, 0, 0})
	DMember(int32_t)                                   UseSingleLayerIndex                                         OFFSET(get<int32_t>, {0x578, 4, 0, 0})
	DMember(bool)                                      bUseSingleLayer                                             OFFSET(get<bool>, {0x57C, 1, 0, 0})
	CMember(class UPaperTileMap*)                      TileMap                                                     OFFSET(get<T>, {0x580, 8, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMapColor
	// void SetTileMapColor(FLinearColor NewColor);                                                                             // [0x72fee84] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMap
	// bool SetTileMap(class UPaperTileMap* NewTileMap);                                                                        // [0x72fe0b4] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTile
	// void SetTile(int32_t X, int32_t Y, int32_t Layer, FPaperTileInfo NewValue);                                              // [0x72fec8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerColor
	// void SetLayerColor(FLinearColor NewColor, int32_t Layer);                                                                // [0x72fe36c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerCollision
	// void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // [0x72fe148] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	// void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);                                              // [0x72fdfd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.ResizeMap
	// void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);                                                       // [0x72fded0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.RebuildCollision
	// void RebuildCollision();                                                                                                 // [0x72fde28] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.OwnsTileMap
	// bool OwnsTileMap();                                                                                                      // [0x72fddc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.MakeTileMapEditable
	// void MakeTileMapEditable();                                                                                              // [0x72fdcd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTilePolygon
	// void GetTilePolygon(int32_t TileX, int32_t TileY, TArray<FVector>& Points, int32_t LayerIndex, bool bWorldSpace);        // [0x72fd1fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileMapColor
	// FLinearColor GetTileMapColor();                                                                                          // [0x72fd1e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCornerPosition
	// FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0x72fd08c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCenterPosition
	// FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0x72fcf38] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTile
	// FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);                                                             // [0x72fcdfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetMapSize
	// void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers);                                              // [0x72fcac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetLayerColor
	// FLinearColor GetLayerColor(int32_t Layer);                                                                               // [0x72fca14] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.CreateNewTileMap
	// void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // [0x72fc550] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.AddNewLayer
	// class UPaperTileLayer* AddNewLayer();                                                                                    // [0x72fc1a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperTileSet
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPaperTileSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FIntPoint)                                 TileSize                                                    OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(class UTexture2D*)                         TileSheet                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<class UTexture*>)                   AdditionalSourceTextures                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FIntMargin)                                BorderMargin                                                OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FIntPoint)                                 PerTileSpacing                                              OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	SMember(FIntPoint)                                 DrawingOffset                                               OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	DMember(int32_t)                                   WidthInTiles                                                OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   HeightInTiles                                               OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   AllocatedWidth                                              OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   AllocatedHeight                                             OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	CMember(TArray<FPaperTileMetadata>)                PerTileData                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FPaperTileSetTerrain>)              Terrains                                                    OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   Margin                                                      OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   Spacing                                                     OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Class /Script/Paper2D.MaterialExpressionSpriteTextureSampler
/// Size: 0x0020 (0x000238 - 0x000258)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	DMember(bool)                                      bSampleAdditionalTextures                                   OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(int32_t)                                   AdditionalSlotIndex                                         OFFSET(get<int32_t>, {0x23C, 4, 0, 0})
	SMember(FText)                                     SlotDisplayName                                             OFFSET(getStruct<T>, {0x240, 24, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class APaperTerrainActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class USceneComponent*)                    DummyRoot                                                   OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UPaperTerrainSplineComponent*)       SplineComponent                                             OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UPaperTerrainComponent*)             RenderComponent                                             OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainComponent
/// Size: 0x0060 (0x000500 - 0x000560)
class UPaperTerrainComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(class UPaperTerrainMaterial*)              TerrainMaterial                                             OFFSET(get<T>, {0x500, 8, 0, 0})
	DMember(bool)                                      bClosedSpline                                               OFFSET(get<bool>, {0x508, 1, 0, 0})
	DMember(bool)                                      bFilledSpline                                               OFFSET(get<bool>, {0x509, 1, 0, 0})
	CMember(class UPaperTerrainSplineComponent*)       AssociatedSpline                                            OFFSET(get<T>, {0x510, 8, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x518, 4, 0, 0})
	DMember(float)                                     SegmentOverlapAmount                                        OFFSET(get<float>, {0x51C, 4, 0, 0})
	SMember(FLinearColor)                              TerrainColor                                                OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	DMember(int32_t)                                   ReparamStepsPerSegment                                      OFFSET(get<int32_t>, {0x530, 4, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       OFFSET(get<T>, {0x534, 1, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x538, 4, 0, 0})
	CMember(class UBodySetup*)                         CachedBodySetup                                             OFFSET(get<T>, {0x540, 8, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperTerrainComponent.SetTerrainColor
	// void SetTerrainColor(FLinearColor NewColor);                                                                             // [0x72feb48] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperTerrainMaterial
/// Size: 0x0018 (0x000030 - 0x000048)
class UPaperTerrainMaterial : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPaperTerrainMaterialRule>)         Rules                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UPaperSprite*)                       InteriorFill                                                OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainSplineComponent
/// Size: 0x0010 (0x000600 - 0x000610)
class UPaperTerrainSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
};

/// Class /Script/Paper2D.TileMapBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Paper2D.TileMapBlueprintLibrary.MakeTile
	// FPaperTileInfo MakeTile(int32_t TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);         // [0x72fdb34] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileUserData
	// FName GetTileUserData(FPaperTileInfo Tile);                                                                              // [0x72fd6a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileTransform
	// FTransform GetTileTransform(FPaperTileInfo Tile);                                                                        // [0x72fd50c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Paper2D.TileMapBlueprintLibrary.BreakTile
	// void BreakTile(FPaperTileInfo Tile, int32_t& TileIndex, class UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // [0x72fc20c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/Paper2D.IntMargin
/// Size: 0x0010 (0x000000 - 0x000010)
class FIntMargin : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Left                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Top                                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Right                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Bottom                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteDrawCallRecord
/// Size: 0x0140 (0x000000 - 0x000140)
class FSpriteDrawCallRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FVector)                                   Destination                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(class UTexture*)                           BaseTexture                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x50, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteGeometryShape
/// Size: 0x0040 (0x000000 - 0x000040)
class FSpriteGeometryShape : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ESpriteShapeType)                          ShapeType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FVector2D>)                         Vertices                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 BoxSize                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FVector2D)                                 BoxPosition                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bNegativeWinding                                            OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Struct /Script/Paper2D.SpriteGeometryCollection
/// Size: 0x0030 (0x000000 - 0x000030)
class FSpriteGeometryCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FSpriteGeometryShape>)              Shapes                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<ESpritePolygonMode>)           GeometryType                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   PixelsPerSubdivisionX                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   PixelsPerSubdivisionY                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bAvoidVertexMerging                                         OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     AlphaThreshold                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DetailAmount                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     SimplifyEpsilon                                             OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteAssetInitParameters
/// Size: 0x0040 (0x000000 - 0x000040)
class FSpriteAssetInitParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/Paper2D.PaperFlipbookKeyFrame
/// Size: 0x0010 (0x000000 - 0x000010)
class FPaperFlipbookKeyFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UPaperSprite*)                       Sprite                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   FrameRun                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteInstanceData
/// Size: 0x0090 (0x000000 - 0x000090)
class FSpriteInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMatrix)                                   Transform                                                   OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	CMember(class UPaperSprite*)                       SourceSprite                                                OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FColor)                                    VertexColor                                                 OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperSpriteSocket
/// Size: 0x0070 (0x000000 - 0x000070)
class FPaperSpriteSocket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x60, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperSpriteAtlasSlot
/// Size: 0x0038 (0x000000 - 0x000038)
class FPaperSpriteAtlasSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UPaperSprite*>)             SpriteRef                                                   OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   AtlasIndex                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTileInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPaperTileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UPaperTileSet*)                      TileSet                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PackedTileIndex                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTileMetadata
/// Size: 0x0040 (0x000000 - 0x000040)
class FPaperTileMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     UserDataName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FSpriteGeometryCollection)                 CollisionData                                               OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	DMember(char)                                      TerrainMembership                                           OFFSET(get<char>, {0x38, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTileSetTerrain
/// Size: 0x0018 (0x000000 - 0x000018)
class FPaperTileSetTerrain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   TerrainName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   CenterTileIndex                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTerrainMaterialRule
/// Size: 0x0038 (0x000000 - 0x000038)
class FPaperTerrainMaterialRule : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UPaperSprite*)                       StartCap                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UPaperSprite*>)               Body                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(class UPaperSprite*)                       EndCap                                                      OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(float)                                     MinimumAngle                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaximumAngle                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     CollisionOffset                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   DrawOrder                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Enum /Script/Paper2D.ESpriteCollisionMode
/// Size: 0x04
enum ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None                                                       = 0,
	ESpriteCollisionMode__Use2DPhysics                                               = 1,
	ESpriteCollisionMode__Use3DPhysics                                               = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX                                   = 3
};

/// Enum /Script/Paper2D.ESpriteShapeType
/// Size: 0x04
enum ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box                                                            = 0,
	ESpriteShapeType__Circle                                                         = 1,
	ESpriteShapeType__Polygon                                                        = 2,
	ESpriteShapeType__ESpriteShapeType_MAX                                           = 3
};

/// Enum /Script/Paper2D.ESpritePolygonMode
/// Size: 0x06
enum ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox                                            = 0,
	ESpritePolygonMode__TightBoundingBox                                             = 1,
	ESpritePolygonMode__ShrinkWrapped                                                = 2,
	ESpritePolygonMode__FullyCustom                                                  = 3,
	ESpritePolygonMode__Diced                                                        = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX                                       = 5
};

/// Enum /Script/Paper2D.ESpritePivotMode
/// Size: 0x11
enum ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left                                                       = 0,
	ESpritePivotMode__Top_Center                                                     = 1,
	ESpritePivotMode__Top_Right                                                      = 2,
	ESpritePivotMode__Center_Left                                                    = 3,
	ESpritePivotMode__Center_Center                                                  = 4,
	ESpritePivotMode__Center_Right                                                   = 5,
	ESpritePivotMode__Bottom_Left                                                    = 6,
	ESpritePivotMode__Bottom_Center                                                  = 7,
	ESpritePivotMode__Bottom_Right                                                   = 8,
	ESpritePivotMode__Custom                                                         = 9,
	ESpritePivotMode__ESpritePivotMode_MAX                                           = 10
};

/// Enum /Script/Paper2D.EFlipbookCollisionMode
/// Size: 0x04
enum EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision                                              = 0,
	EFlipbookCollisionMode__FirstFrameCollision                                      = 1,
	EFlipbookCollisionMode__EachFrameCollision                                       = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX                               = 3
};

/// Enum /Script/Paper2D.EPaperSpriteAtlasPadding
/// Size: 0x03
enum EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder                                           = 0,
	EPaperSpriteAtlasPadding__PadWithZero                                            = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX                           = 2
};

/// Enum /Script/Paper2D.ETileMapProjectionMode
/// Size: 0x05
enum ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal                                               = 0,
	ETileMapProjectionMode__IsometricDiamond                                         = 1,
	ETileMapProjectionMode__IsometricStaggered                                       = 2,
	ETileMapProjectionMode__HexagonalStaggered                                       = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX                               = 4
};

