
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	// void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial); // [0xc1b90fc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	// void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0xc1b86d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
	// void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0xc1b7d28] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	// void GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0xc1b7404] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
	// void CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, float GridSpacing); // [0xc1b5bb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	// void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t>& Triangles);                     // [0xc1b59dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
	// void CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, float GridSpacing); // [0xc1b56cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	// void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // [0xc1b5594] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	// void ConvertQuadToTriangles(TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);     // [0xc1b518c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
	// void CalculateTangentsForMesh(TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector2D>& UVs, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents); // [0xc1b4288] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x0080 (0x0005B0 - 0x000630)
class UProceduralMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	DMember(bool)                                      bUseComplexAsSimpleCollision                                OFFSET(get<bool>, {0x5B0, 1, 0, 0})
	DMember(bool)                                      bUseAsyncCooking                                            OFFSET(get<bool>, {0x5B1, 1, 0, 0})
	CMember(class UBodySetup*)                         ProcMeshBodySetup                                           OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(TArray<FProcMeshSection>)                  ProcMeshSections                                            OFFSET(get<T>, {0x5C0, 16, 0, 0})
	CMember(TArray<FKConvexElem>)                      CollisionConvexElems                                        OFFSET(get<T>, {0x5D0, 16, 0, 0})
	SMember(FBoxSphereBounds)                          LocalBounds                                                 OFFSET(getStruct<T>, {0x5E0, 56, 0, 0})
	CMember(TArray<class UBodySetup*>)                 AsyncBodySetupQueue                                         OFFSET(get<T>, {0x618, 16, 0, 0})


	/// Functions
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	// void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bSRGBConversion); // [0xc1b9eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	// void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0xc1b9638] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	// void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);                                                   // [0xc1b9038] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	// bool IsMeshSectionVisible(int32_t SectionIndex);                                                                         // [0xc1b8f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	// int32_t GetNumSections();                                                                                                // [0x3b24eb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	// void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion); // [0xc1b680c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	// void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0xc1b5e60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	// void ClearMeshSection(int32_t SectionIndex);                                                                             // [0xc1b510c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	// void ClearCollisionConvexMeshes();                                                                                       // [0xc1b50f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	// void ClearAllMeshSections();                                                                                             // [0xc1b5074] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	// void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);                                                                // [0xc1b41ac] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0020 (0x000000 - 0x000020)
class FProcMeshTangent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   TangentX                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bFlipTangentY                                               OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x0098 (0x000000 - 0x000098)
class FProcMeshVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FProcMeshTangent)                          Tangent                                                     OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	SMember(FVector2D)                                 UV0                                                         OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FVector2D)                                 UV1                                                         OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FVector2D)                                 UV2                                                         OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FVector2D)                                 UV3                                                         OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0060 (0x000000 - 0x000060)
class FProcMeshSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FProcMeshVertex>)                   ProcVertexBuffer                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<uint32_t>)                          ProcIndexBuffer                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FBox)                                      SectionLocalBox                                             OFFSET(getStruct<T>, {0x20, 56, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bSectionVisible                                             OFFSET(get<bool>, {0x59, 1, 0, 0})
};

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
/// Size: 0x04
enum EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap                                                   = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap                                  = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap                                    = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX                             = 3
};

