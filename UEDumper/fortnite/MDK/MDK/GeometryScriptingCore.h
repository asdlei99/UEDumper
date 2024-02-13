
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GeometryScriptingCore.GeometryScriptDebug
/// Size: 0x0010 (0x000028 - 0x000038)
class UGeometryScriptDebug : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGeometryScriptDebugMessage>)       Messages                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.TransformSimpleCollisionShapes
	// FGeometryScriptSimpleCollision TransformSimpleCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FTransform Transform, FGeometryScriptTransformCollisionOptions& TransformOptions, bool& bSuccess, class UGeometryScriptDebug* Debug); // [0xb1f719c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.StaticMeshHasCustomizedCollision
	// bool StaticMeshHasCustomizedCollision(class UStaticMesh* StaticMeshAsset);                                               // [0x865c5c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SimplifyConvexHulls
	// void SimplifyConvexHulls(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptConvexHullSimplificationOptions& SimplifyOptions, bool& bHasSimplified, class UGeometryScriptDebug* Debug); // [0xb1f6bb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh
	// class UDynamicMesh* SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, FGeometryScriptCollisionFromMeshOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, class UGeometryScriptDebug* Debug); // [0xb1f57dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
	// void SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, class UGeometryScriptDebug* Debug); // [0xb1f54c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetSimpleCollisionOfStaticMesh
	// void SetSimpleCollisionOfStaticMesh(FGeometryScriptSimpleCollision& SimpleCollision, class UStaticMesh* StaticMesh, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, class UGeometryScriptDebug* Debug); // [0xb1f5030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetSimpleCollisionOfDynamicMeshComponent
	// void SetSimpleCollisionOfDynamicMeshComponent(FGeometryScriptSimpleCollision& SimpleCollision, class UDynamicMeshComponent* DynamicMeshComponent, FGeometryScriptSetSimpleCollisionOptions Options, class UGeometryScriptDebug* Debug); // [0xb1f4c88] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
	// class UDynamicMesh* SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, FGeometryScriptCollisionFromMeshOptions Options, class UGeometryScriptDebug* Debug); // [0xb1f41b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
	// void ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug); // [0xb1f2ffc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.MergeSimpleCollisionShapes
	// FGeometryScriptSimpleCollision MergeSimpleCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptMergeSimpleCollisionOptions& MergeOptions, bool& bHasMerged, class UGeometryScriptDebug* Debug); // [0xb1f2874] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.GetSimpleCollisionShapeCount
	// int32_t GetSimpleCollisionShapeCount(FGeometryScriptSimpleCollision& SimpleCollision);                                   // [0xb1ef8d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.GetSimpleCollisionFromStaticMesh
	// FGeometryScriptSimpleCollision GetSimpleCollisionFromStaticMesh(class UStaticMesh* StaticMesh, class UGeometryScriptDebug* Debug); // [0xb1ef6b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.GetSimpleCollisionFromComponent
	// FGeometryScriptSimpleCollision GetSimpleCollisionFromComponent(class UPrimitiveComponent* Component, class UGeometryScriptDebug* Debug); // [0xb1ef540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.Conv_SphereArrayToGeometryScriptSphereCovering
	// FGeometryScriptSphereCovering Conv_SphereArrayToGeometryScriptSphereCovering(TArray<FSphere>& Spheres);                  // [0xb1e7170] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.Conv_GeometryScriptSphereCoveringToSphereArray
	// TArray<FSphere> Conv_GeometryScriptSphereCoveringToSphereArray(FGeometryScriptSphereCovering& SphereCovering);           // [0xb1e7030] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ComputeNegativeSpace
	// FGeometryScriptSphereCovering ComputeNegativeSpace(FGeometryScriptDynamicMeshBVH& MeshBVH, FComputeNegativeSpaceOptions& NegativeSpaceOptions, class UGeometryScriptDebug* Debug); // [0xb1e6b28] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.CombineSimpleCollision
	// void CombineSimpleCollision(FGeometryScriptSimpleCollision& CollisionToUpdate, FGeometryScriptSimpleCollision& AppendCollision); // [0xb1e5c68] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ApproximateConvexHullsWithSimplerCollisionShapes
	// void ApproximateConvexHullsWithSimplerCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptConvexHullApproximationOptions& ApproximateOptions, bool& bHasApproximated, class UGeometryScriptDebug* Debug); // [0xb1e3680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull
	// class UDynamicMesh* ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, FTransform ProjectionFrame, FGeometryScriptSweptHullOptions Options, class UGeometryScriptDebug* Debug); // [0xb1e65f8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
	// class UDynamicMesh* ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, FGeometryScriptMeshSelection Selection, FGeometryScriptConvexHullOptions Options, class UGeometryScriptDebug* Debug); // [0xb1e6168] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
	// class UDynamicMesh* ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, FGeometryScriptConvexDecompositionOptions Options, class UGeometryScriptDebug* Debug); // [0xb1e5de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem
	// void SetVectorListItem(FGeometryScriptVectorList& VectorList, int32_t Index, FVector NewValue, bool& bIsValidIndex);     // [0xb1f5bc4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
	// void SetUVListItem(FGeometryScriptUVList& UVList, int32_t Index, FVector2D NewUV, bool& bIsValidIndex);                  // [0xb1f3e0c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
	// void SetScalarListItem(FGeometryScriptScalarList& ScalarList, int32_t Index, double NewValue, bool& bIsValidIndex);      // [0xb1f48d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
	// void SetIndexListItem(FGeometryScriptIndexList& IndexList, int32_t Index, int32_t NewValue, bool& bIsValidIndex);        // [0xb1f4528] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
	// void SetColorListItem(FGeometryScriptColorList& ColorList, int32_t Index, FLinearColor NewColor, bool& bIsValidIndex);   // [0xb1f3e0c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
	// int32_t GetVectorListLength(FGeometryScriptVectorList VectorList);                                                       // [0xb1edf84] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
	// int32_t GetVectorListLastIndex(FGeometryScriptVectorList VectorList);                                                    // [0xb1eddb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
	// FVector GetVectorListItem(FGeometryScriptVectorList VectorList, int32_t Index, bool& bIsValidIndex);                     // [0xb1f02dc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
	// int32_t GetUVListLength(FGeometryScriptUVList UVList);                                                                   // [0xb1edf84] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
	// int32_t GetUVListLastIndex(FGeometryScriptUVList UVList);                                                                // [0xb1eddb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
	// FVector2D GetUVListItem(FGeometryScriptUVList UVList, int32_t Index, bool& bIsValidIndex);                               // [0xb1f0034] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
	// int32_t GetTriangleListLength(FGeometryScriptTriangleList TriangleList);                                                 // [0xb1efe64] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
	// int32_t GetTriangleListLastTriangle(FGeometryScriptTriangleList TriangleList);                                           // [0xb1efc7c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
	// FIntVector GetTriangleListItem(FGeometryScriptTriangleList TriangleList, int32_t Triangle, bool& bIsValidTriangle);      // [0xb1ef9c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
	// int32_t GetScalarListLength(FGeometryScriptScalarList ScalarList);                                                       // [0xb1edf84] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
	// int32_t GetScalarListLastIndex(FGeometryScriptScalarList ScalarList);                                                    // [0xb1eddb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
	// double GetScalarListItem(FGeometryScriptScalarList ScalarList, int32_t Index, bool& bIsValidIndex);                      // [0xb1eee68] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
	// int32_t GetIndexListLength(FGeometryScriptIndexList IndexList);                                                          // [0xb1ee5c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
	// int32_t GetIndexListLastIndex(FGeometryScriptIndexList IndexList);                                                       // [0xb1ee3e8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
	// int32_t GetIndexListItem(FGeometryScriptIndexList IndexList, int32_t Index, bool& bIsValidIndex);                        // [0xb1ee0d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
	// int32_t GetColorListLength(FGeometryScriptColorList ColorList);                                                          // [0xb1edf84] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
	// int32_t GetColorListLastIndex(FGeometryScriptColorList ColorList);                                                       // [0xb1eddb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
	// FLinearColor GetColorListItem(FGeometryScriptColorList ColorList, int32_t Index, bool& bIsValidIndex);                   // [0xb1edb08] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
	// void ExtractColorListChannels(FGeometryScriptColorList ColorList, FGeometryScriptVectorList& VectorList, int32_t XChannelIndex, int32_t YChannelIndex, int32_t ZChannelIndex); // [0xb1ebed8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
	// void ExtractColorListChannel(FGeometryScriptColorList ColorList, FGeometryScriptScalarList& ScalarList, int32_t ChannelIndex); // [0xb1ebad8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
	// void DuplicateVectorList(FGeometryScriptVectorList VectorList, FGeometryScriptVectorList& DuplicateList);                // [0xb1eb86c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
	// void DuplicateUVList(FGeometryScriptUVList UVList, FGeometryScriptUVList& DuplicateList);                                // [0xb1eb600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
	// void DuplicateScalarList(FGeometryScriptScalarList ScalarList, FGeometryScriptScalarList& DuplicateList);                // [0xb1eb394] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
	// void DuplicateIndexList(FGeometryScriptIndexList IndexList, FGeometryScriptIndexList& DuplicateList);                    // [0xb1eb110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
	// void DuplicateColorList(FGeometryScriptColorList ColorList, FGeometryScriptColorList& DuplicateList);                    // [0xb1eaea4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
	// void ConvertVectorListToArray(FGeometryScriptVectorList VectorList, TArray<FVector>& VectorArray);                       // [0xb1e8840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
	// void ConvertUVListToArray(FGeometryScriptUVList UVList, TArray<FVector2D>& UVArray);                                     // [0xb1e8618] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
	// void ConvertTriangleListToArray(FGeometryScriptTriangleList TriangleList, TArray<FIntVector>& TriangleArray);            // [0xb1e83f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
	// void ConvertScalarListToArray(FGeometryScriptScalarList ScalarList, TArray<double>& ScalarArray);                        // [0xb1e81c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
	// void ConvertIndexListToArray(FGeometryScriptIndexList IndexList, TArray<int32_t>& IndexArray);                           // [0xb1e7f98] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
	// void ConvertColorListToArray(FGeometryScriptColorList ColorList, TArray<FLinearColor>& ColorArray);                      // [0xb1e7d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
	// void ConvertArrayToVectorList(TArray<FVector>& VectorArray, FGeometryScriptVectorList& VectorList);                      // [0xb1e7b2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
	// void ConvertArrayToUVList(TArray<FVector2D>& UVArray, FGeometryScriptUVList& UVList);                                    // [0xb1e79b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
	// void ConvertArrayToTriangleList(TArray<FIntVector>& TriangleArray, FGeometryScriptTriangleList& TriangleList);           // [0xb1e7834] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
	// void ConvertArrayToScalarList(TArray<double>& VectorArray, FGeometryScriptScalarList& ScalarList);                       // [0xb1e76b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
	// void ConvertArrayToIndexList(TArray<int32_t>& IndexArray, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType IndexType); // [0xb1e744c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
	// void ConvertArrayToColorList(TArray<FLinearColor>& ColorArray, FGeometryScriptColorList& ColorList);                     // [0xb1e72d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
	// void ClearVectorList(FGeometryScriptVectorList& VectorList, FVector ClearValue);                                         // [0xb1e5a4c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
	// void ClearUVList(FGeometryScriptUVList& UVList, FVector2D ClearUV);                                                      // [0xb1e5838] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
	// void ClearScalarList(FGeometryScriptScalarList& ScalarList, double ClearValue);                                          // [0xb1e5634] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
	// void ClearIndexList(FGeometryScriptIndexList& IndexList, int32_t ClearValue);                                            // [0xb1e5430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
	// void ClearColorList(FGeometryScriptColorList& ColorList, FLinearColor ClearColor);                                       // [0xb1e521c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh
	// void GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, TArray<UMaterialInterface*>& MaterialList, TArray<int32_t>& MaterialIndex, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0xb1ef188] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
	// class UDynamicMesh* CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0xb1e9958] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
	// class UDynamicMesh* CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0xb1e94a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
	// class UDynamicMesh* CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0xb1e912c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
	// class UDynamicMesh* CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0xb1e8cd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor
	// FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor();                                                                // [0xb1f238c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
	// FGeometryScriptBakeTypeOptions MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32_t SourceUVLayer);              // [0xb1f2238] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
	// FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal();                                                              // [0xb1f2180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
	// FGeometryScriptBakeTypeOptions MakeBakeTypePosition();                                                                   // [0xb1f20c8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
	// FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal();                                                               // [0xb1f2010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
	// FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(TArray<UTexture2D*>& MaterialIDSourceTextures, int32_t SourceUVLayer); // [0xb1f1e48] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
	// FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID();                                                                 // [0xb1f1d90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
	// FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal();                                                                 // [0xb1f1cd8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
	// FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode CurvatureType, EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, EGeometryScriptBakeCurvatureClampMode Clamping); // [0xb1f1a14] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
	// FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32_t OcclusionRays, float MaxDistance, float SpreadAngle);      // [0xb1f1848] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
	// FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32_t OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle); // [0xb1f15f8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.ConvertBakeResolutionToInt
	// int32_t ConvertBakeResolutionToInt(EGeometryScriptBakeResolution BakeResolution);                                        // [0xb1e7ca8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
	// class UDynamicMesh* BakeVertex(class UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, class UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, FGeometryScriptBakeOutputType BakeTypes, FGeometryScriptBakeVertexOptions BakeOptions, class UGeometryScriptDebug* Debug); // [0xb1e4b58] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
	// FGeometryScriptRenderCaptureTextures BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, FTransform TargetLocalToWorld, FGeometryScriptBakeTargetMeshOptions TargetOptions, TArray<AActor*> SourceActors, FGeometryScriptBakeRenderCaptureOptions BakeOptions, class UGeometryScriptDebug* Debug); // [0xb1e40b8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
	// TArray<UTexture2D*> BakeTexture(class UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, class UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, TArray<FGeometryScriptBakeTypeOptions>& BakeTypes, FGeometryScriptBakeTextureOptions BakeOptions, class UGeometryScriptDebug* Debug); // [0xb1e3964] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition
	// class UDynamicMesh* SetVertexPosition(class UDynamicMesh* TargetMesh, int32_t VertexID, FVector NewPosition, bool& bIsValidVertex, bool bDeferChangeNotifications); // [0xb1f68e4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
	// class UDynamicMesh* SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList PositionList, class UGeometryScriptDebug* Debug); // [0xb1f31f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
	// class UDynamicMesh* DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool bDeferChangeNotifications);               // [0xb1ead38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
	// class UDynamicMesh* DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList VertexList, int32_t& NumDeleted, bool bDeferChangeNotifications); // [0xb1ea81c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
	// class UDynamicMesh* DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, int32_t VertexID, bool& bWasVertexDeleted, bool bDeferChangeNotifications); // [0xb1ea5e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
	// class UDynamicMesh* DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleList, int32_t& NumDeleted, bool bDeferChangeNotifications); // [0xb1ea26c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
	// class UDynamicMesh* DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bWasTriangleDeleted, bool bDeferChangeNotifications); // [0xb1ea034] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
	// class UDynamicMesh* DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32_t& NumDeleted, bool bDeferChangeNotifications); // [0xb1e9dc4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
	// class UDynamicMesh* AppendMeshTransformed(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, TArray<FTransform>& AppendTransforms, FTransform ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, class UGeometryScriptDebug* Debug); // [0xb1e1f64] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
	// class UDynamicMesh* AppendMeshRepeated(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, FTransform AppendTransform, int32_t RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, class UGeometryScriptDebug* Debug); // [0xb1e1a78] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
	// class UDynamicMesh* AppendMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, FTransform AppendTransform, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, class UGeometryScriptDebug* Debug); // [0xb1e1688] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
	// class UDynamicMesh* AppendBuffersToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptSimpleMeshBuffers& Buffers, FGeometryScriptIndexList& NewTriangleIndicesList, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb1e119c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
	// class UDynamicMesh* AddVerticesToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList NewPositionsList, FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications); // [0xb1e0cdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
	// class UDynamicMesh* AddVertexToMesh(class UDynamicMesh* TargetMesh, FVector NewPosition, int32_t& NewVertexIndex, bool bDeferChangeNotifications); // [0xb1e0a94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
	// class UDynamicMesh* AddTriangleToMesh(class UDynamicMesh* TargetMesh, FIntVector NewTriangle, int32_t& NewTriangleIndex, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb1dfed0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
	// class UDynamicMesh* AddTrianglesToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptTriangleList NewTrianglesList, FGeometryScriptIndexList& NewIndicesList, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb1e0308] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.TransferBoneWeightsFromMesh
	// class UDynamicMesh* TransferBoneWeightsFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* TargetMesh, FGeometryScriptTransferBoneWeightsOptions Options, class UGeometryScriptDebug* Debug); // [0xb1f6e98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights
	// class UDynamicMesh* SetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bIsValidVertexID, FGeometryScriptBoneWeightProfile Profile); // [0xb1f5f74] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
	// class UDynamicMesh* SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, TArray<FGeometryScriptBoneWeight>& BoneWeights, FGeometryScriptBoneWeightProfile Profile); // [0xb1f35e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
	// class UDynamicMesh* MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool& bHasBoneWeights, FGeometryScriptBoneWeightProfile Profile); // [0xb1f2e14] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
	// class UDynamicMesh* MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool& bProfileExisted, bool bReplaceExistingProfile, FGeometryScriptBoneWeightProfile Profile); // [0xb1f2bbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
	// class UDynamicMesh* GetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile); // [0xb1f059c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetRootBoneName
	// class UDynamicMesh* GetRootBoneName(class UDynamicMesh* TargetMesh, FName& BoneName, class UGeometryScriptDebug* Debug); // [0xb1eec84] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
	// class UDynamicMesh* GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool& bHasBoneWeights, int32_t& MaxBoneIndex, FGeometryScriptBoneWeightProfile Profile); // [0xb1eea5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
	// class UDynamicMesh* GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, int32_t VertexID, FGeometryScriptBoneWeight& BoneWeight, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile); // [0xb1ee718] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneInfo
	// class UDynamicMesh* GetBoneInfo(class UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, FGeometryScriptBoneInfo& BoneInfo, class UGeometryScriptDebug* Debug); // [0xb1ed7fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneIndex
	// class UDynamicMesh* GetBoneIndex(class UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, int32_t& BoneIndex, class UGeometryScriptDebug* Debug); // [0xb1ed540] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneChildren
	// class UDynamicMesh* GetBoneChildren(class UDynamicMesh* TargetMesh, FName BoneName, bool bRecursive, bool& bIsValidBoneName, TArray<FGeometryScriptBoneInfo>& ChildrenInfo, class UGeometryScriptDebug* Debug); // [0xb1ecbc4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetAllBonesInfo
	// class UDynamicMesh* GetAllBonesInfo(class UDynamicMesh* TargetMesh, TArray<FGeometryScriptBoneInfo>& BonesInfo, class UGeometryScriptDebug* Debug); // [0xb1ec3a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.DiscardBonesFromMesh
	// class UDynamicMesh* DiscardBonesFromMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);             // [0xb1eab9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.CopyBonesFromMesh
	// class UDynamicMesh* CopyBonesFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug); // [0xb1e8a68] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
	// class UDynamicMesh* ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, class USkeleton* Skeleton, FGeometryScriptSmoothBoneWeightsOptions Options, FGeometryScriptBoneWeightProfile Profile, class UGeometryScriptDebug* Debug); // [0xb1e6d68] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion
	// class UDynamicMesh* ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelfUnionOptions Options, class UGeometryScriptDebug* Debug); // [0xb1e34a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
	// class UDynamicMesh* ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneSliceOptions Options, class UGeometryScriptDebug* Debug); // [0xb1e319c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
	// class UDynamicMesh* ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneCutOptions Options, class UGeometryScriptDebug* Debug); // [0xb1e2eb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
	// class UDynamicMesh* ApplyMeshMirror(class UDynamicMesh* TargetMesh, FTransform MirrorFrame, FGeometryScriptMeshMirrorOptions Options, class UGeometryScriptDebug* Debug); // [0xb1e2bbc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
	// class UDynamicMesh* ApplyMeshBoolean(class UDynamicMesh* TargetMesh, FTransform TargetTransform, class UDynamicMesh* ToolMesh, FTransform ToolTransform, EGeometryScriptBooleanOperation Operation, FGeometryScriptMeshBooleanOptions Options, class UGeometryScriptDebug* Debug); // [0xb1e26ac] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes
	// class UDynamicMesh* MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, FGeometryScriptMeasureMeshDistanceOptions Options, double& MaxDistance, double& MinDistance, double& AverageDistance, double& RootMeanSqrDeviation, class UGeometryScriptDebug* Debug); // [0xb1f2444] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
	// class UDynamicMesh* IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, FGeometryScriptIsSameMeshOptions Options, bool& bIsSameMesh, class UGeometryScriptDebug* Debug); // [0xb1f1358] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
	// class UDynamicMesh* IsIntersectingMesh(class UDynamicMesh* TargetMesh, FTransform TargetTransform, class UDynamicMesh* OtherMesh, FTransform OtherTransform, bool& bIsIntersecting, class UGeometryScriptDebug* Debug); // [0xb1f0f0c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups
	// class UDynamicMesh* SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32_t>& ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug); // [0xb2549d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
	// class UDynamicMesh* SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32_t>& ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug); // [0xb25404c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
	// class UDynamicMesh* SplitMeshByComponents(class UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug); // [0xb25372c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
	// class UDynamicMesh* GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, FGeometryScriptIndexList TriangleList, class UDynamicMesh*& StoreToSubmeshOut, class UGeometryScriptDebug* Debug); // [0xb244968] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
	// class UDynamicMesh* CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, class UGeometryScriptDebug* Debug); // [0xb238e38] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
	// class UDynamicMesh* CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, FGeometryScriptMeshSelection Selection, class UDynamicMesh*& StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug); // [0xb2388bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh
	// class UDynamicMesh* ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptTwistWarpOptions Options, FTransform TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug); // [0xb230efc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
	// class UDynamicMesh* ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptPerlinNoiseOptions Options, class UGeometryScriptDebug* Debug); // [0xb22fbe4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
	// class UDynamicMesh* ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, FTransform WarpOrientation, EGeometryScriptMathWarpType WarpType, FGeometryScriptMathWarpOptions Options, class UGeometryScriptDebug* Debug); // [0xb22d6ec] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
	// class UDynamicMesh* ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIterativeMeshSmoothingOptions Options, class UGeometryScriptDebug* Debug); // [0xb22d38c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
	// class UDynamicMesh* ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptFlareWarpOptions Options, FTransform FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug); // [0xb22cf0c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
	// class UDynamicMesh* ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, class UTexture2D* Texture, FGeometryScriptMeshSelection Selection, FGeometryScriptDisplaceFromTextureOptions Options, int32_t UVLayer, class UGeometryScriptDebug* Debug); // [0xb22c910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
	// class UDynamicMesh* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug); // [0xb22c500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
	// class UDynamicMesh* ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptBendWarpOptions Options, FTransform BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug); // [0xb22c100] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshGeodesicFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.GetShortestVertexPath
	// class UDynamicMesh* GetShortestVertexPath(class UDynamicMesh* TargetMesh, int32_t StartVertexID, int32_t EndVertexID, FGeometryScriptIndexList& VertexIDList, bool& bFoundErrors, class UGeometryScriptDebug* Debug); // [0xb244354] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.GetShortestSurfacePath
	// class UDynamicMesh* GetShortestSurfacePath(class UDynamicMesh* TargetMesh, int32_t StartTriangleID, FVector StartBaryCoords, int32_t EndTriangleID, FVector EndBaryCoords, FGeometryScriptPolyPath& ShortestPath, bool& bFoundErrors, class UGeometryScriptDebug* Debug); // [0xb243e00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.CreateSurfacePath
	// class UDynamicMesh* CreateSurfacePath(class UDynamicMesh* TargetMesh, FVector Direction, int32_t StartTriangleID, FVector StartBaryCoords, float MaxPathLength, FGeometryScriptPolyPath& SurfacePath, bool& bFoundErrors, class UGeometryScriptDebug* Debug); // [0xb23a330] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID
	// class UDynamicMesh* SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32_t TriangleID, int32_t MaterialID, bool& bIsValidTriangle, bool bDeferChangeNotifications); // [0xb2531a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
	// class UDynamicMesh* SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, int32_t MaterialID, bool& bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb252dc8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
	// class UDynamicMesh* SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb24ee48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
	// class UDynamicMesh* SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb24eae8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
	// class UDynamicMesh* SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb24e5d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
	// class UDynamicMesh* RemapMaterialIDs(class UDynamicMesh* TargetMesh, int32_t FromMaterialID, int32_t ToMaterialID, class UGeometryScriptDebug* Debug); // [0xb2497b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
	// class UDynamicMesh* GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32_t MaterialID, FGeometryScriptIndexList& TriangleIDList, class UGeometryScriptDebug* Debug); // [0xb246524] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
	// int32_t GetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle);               // [0xb24510c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
	// int32_t GetMaxMaterialID(class UDynamicMesh* TargetMesh, bool& bHasMaterialIDs);                                         // [0xb24017c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
	// class UDynamicMesh* GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, FGeometryScriptIndexList& MaterialIDList, class UGeometryScriptDebug* Debug); // [0xb23fdf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
	// class UDynamicMesh* GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList& MaterialIDList, bool& bHasMaterialIDs); // [0xb23dbc8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
	// class UDynamicMesh* EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                // [0xb23b584] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
	// class UDynamicMesh* DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32_t MaterialID, int32_t& NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb23aa00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
	// class UDynamicMesh* CompactMaterialIDs(class UDynamicMesh* TargetMesh, TArray<UMaterialInterface*> SourceMaterialList, TArray<UMaterialInterface*>& CompactedMaterialList, class UGeometryScriptDebug* Debug); // [0xb232ebc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
	// class UDynamicMesh* ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32_t ClearValue, class UGeometryScriptDebug* Debug); // [0xb2326b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell
	// class UDynamicMesh* ApplyMeshShell(class UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetOptions Options, class UGeometryScriptDebug* Debug); // [0xb22f4d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
	// class UDynamicMesh* ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, FGeometryScriptMeshBevelOptions Options, class UGeometryScriptDebug* Debug); // [0xb22f270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
	// class UDynamicMesh* ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetFacesOptions Options, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0xb22efd8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
	// class UDynamicMesh* ApplyMeshOffset(class UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetOptions Options, class UGeometryScriptDebug* Debug); // [0xb22ede8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
	// class UDynamicMesh* ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshLinearExtrudeOptions Options, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0xb22e8f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
	// class UDynamicMesh* ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshInsetOutsetFacesOptions Options, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0xb22e600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
	// class UDynamicMesh* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, FGeometryScriptMeshExtrudeOptions Options, class UGeometryScriptDebug* Debug); // [0xb22e400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
	// class UDynamicMesh* ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewTriangles, FGeometryScriptMeshEditPolygroupOptions GroupOptions, class UGeometryScriptDebug* Debug); // [0xb22e05c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
	// class UDynamicMesh* ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug); // [0xb22dd68] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
	// class UDynamicMesh* ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, EGeometryScriptMeshBevelSelectionMode BevelMode, FGeometryScriptMeshBevelSelectionOptions BevelOptions, class UGeometryScriptDebug* Debug); // [0xb22da6c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal
	// class UDynamicMesh* UpdateVertexNormal(class UDynamicMesh* TargetMesh, int32_t VertexID, bool bUpdateNormal, FVector NewNormal, bool bUpdateTangents, FVector NewTangentX, FVector NewTangentY, bool& bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications); // [0xb256820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
	// class UDynamicMesh* SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);              // [0xb25281c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
	// class UDynamicMesh* SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                // [0xb252680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
	// class UDynamicMesh* SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, int32_t TriangleID, FGeometryScriptTriangle Normals, bool& bIsValidTriangle, bool bDeferChangeNotifications); // [0xb250928] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
	// class UDynamicMesh* SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList TangentXList, FGeometryScriptVectorList TangentYList, class UGeometryScriptDebug* Debug); // [0xb24ff38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
	// class UDynamicMesh* SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList VertexNormalList, class UGeometryScriptDebug* Debug); // [0xb24fb48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormalsForMeshSelection
	// class UDynamicMesh* RecomputeNormalsForMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb249448] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
	// class UDynamicMesh* RecomputeNormals(class UDynamicMesh* TargetMesh, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb2491a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
	// class UDynamicMesh* GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList& TangentXList, FGeometryScriptVectorList& TangentYList, bool& bIsValidTangentSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues); // [0xb241008] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
	// class UDynamicMesh* GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList& NormalList, bool& bIsValidNormalSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues); // [0xb240bb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
	// class UDynamicMesh* GetMeshHasTangents(class UDynamicMesh* TargetMesh, bool& bHasTangents, class UGeometryScriptDebug* Debug); // [0xb2404d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
	// class UDynamicMesh* FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                      // [0xb23d130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
	// class UDynamicMesh* DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                  // [0xb23b034] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
	// class UDynamicMesh* ComputeTangents(class UDynamicMesh* TargetMesh, FGeometryScriptTangentsOptions Options, class UGeometryScriptDebug* Debug); // [0xb235f48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
	// class UDynamicMesh* ComputeSplitNormals(class UDynamicMesh* TargetMesh, FGeometryScriptSplitNormalsOptions SplitOptions, FGeometryScriptCalculateNormalsOptions CalculateOptions, class UGeometryScriptDebug* Debug); // [0xb235cf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
	// class UDynamicMesh* AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                // [0xb231dd4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection
	// class UDynamicMesh* SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptMeshSelection Selection, int32_t& SetPolygroupIDOut, int32_t SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications); // [0xb2529b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
	// class UDynamicMesh* SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32_t NumLayers, class UGeometryScriptDebug* Debug); // [0xb2521f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
	// class UDynamicMesh* GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, FGeometryScriptIndexList& TriangleIDsOut); // [0xb246818] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
	// int32_t GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t TriangleID, bool& bIsValidTriangle); // [0xb245970] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
	// class UDynamicMesh* GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut); // [0xb243bf4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
	// class UDynamicMesh* GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut); // [0xb23de0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
	// class UDynamicMesh* EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                 // [0xb23b758] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
	// class UDynamicMesh* DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, int32_t& NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0xb23acd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
	// class UDynamicMesh* CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer FromGroupLayer, FGeometryScriptGroupLayer ToGroupLayer, class UGeometryScriptDebug* Debug); // [0xb239b58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
	// class UDynamicMesh* ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t UVLayer, class UGeometryScriptDebug* Debug); // [0xb2385f4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
	// class UDynamicMesh* ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, class UGeometryScriptDebug* Debug); // [0xb236b58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
	// class UDynamicMesh* ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32_t MaxSearchRounds, class UGeometryScriptDebug* Debug); // [0xb2346b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
	// class UDynamicMesh* ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, float CreaseAngle, int32_t MinGroupSize, class UGeometryScriptDebug* Debug); // [0xb234400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
	// class UDynamicMesh* ClearPolygroups(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t ClearValue, class UGeometryScriptDebug* Debug); // [0xb232910] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D
	// class UDynamicMesh* AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& VoronoiSites, FGeometryScriptVoronoiOptions VoronoiOptions, class UGeometryScriptDebug* Debug); // [0xb22bbe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
	// class UDynamicMesh* AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug); // [0xb22b704] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
	// class UDynamicMesh* AppendTorus(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptRevolveOptions RevolveOptions, float MajorRadius, float MinorRadius, int32_t MajorSteps, int32_t MinorSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0xb22b0e4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
	// class UDynamicMesh* AppendSweepPolyline(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolylineVertices, TArray<FTransform>& SweepPath, TArray<float>& PolylineTexParamU, TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug); // [0xb22a770] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
	// class UDynamicMesh* AppendSweepPolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, TArray<FTransform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug); // [0xb229e3c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
	// class UDynamicMesh* AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32_t Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug); // [0xb22968c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
	// class UDynamicMesh* AppendSphereLatLong(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t StepsPhi, int32_t StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0xb22919c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereCovering
	// class UDynamicMesh* AppendSphereCovering(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptSphereCovering& SphereCovering, int32_t StepsX, int32_t StepsY, int32_t StepsZ, class UGeometryScriptDebug* Debug); // [0xb228aa8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
	// class UDynamicMesh* AppendSphereBox(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0xb228540] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
	// class UDynamicMesh* AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, TArray<FVector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug); // [0xb227d0c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
	// class UDynamicMesh* AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, float Height, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0xb227574] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleCollisionShapes
	// class UDynamicMesh* AppendSimpleCollisionShapes(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptSimpleCollisionTriangulationOptions TriangulationOptions, class UGeometryScriptDebug* Debug); // [0xb227034] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
	// class UDynamicMesh* AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, class UGeometryScriptDebug* Debug); // [0xb226464] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5
	// class UDynamicMesh* AppendRoundRectangle_Compatibility_5(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, class UGeometryScriptDebug* Debug); // [0xb226a4c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
	// class UDynamicMesh* AppendRevolvePolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32_t Steps, class UGeometryScriptDebug* Debug); // [0xb225d94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
	// class UDynamicMesh* AppendRevolvePath(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PathVertices, FGeometryScriptRevolveOptions RevolveOptions, int32_t Steps, bool bCapped, class UGeometryScriptDebug* Debug); // [0xb2256b4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
	// class UDynamicMesh* AppendRectangleXY(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, class UGeometryScriptDebug* Debug); // [0xb224ccc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5
	// class UDynamicMesh* AppendRectangle_Compatibility_5(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, class UGeometryScriptDebug* Debug); // [0xb2251c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendPolygonListTriangulation
	// class UDynamicMesh* AppendPolygonListTriangulation(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonsTriangulationOptions TriangulationOptions, bool& bTriangulationError, class UGeometryScriptDebug* Debug); // [0xb2247e8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
	// class UDynamicMesh* AppendLinearStairs(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float StepDepth, int32_t NumSteps, bool bFloating, class UGeometryScriptDebug* Debug); // [0xb22408c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
	// class UDynamicMesh* AppendDisc(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t AngleSteps, int32_t SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug); // [0xb223aa0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDelaunayTriangulation2D
	// class UDynamicMesh* AppendDelaunayTriangulation2D(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& VertexPositions, TArray<FIntPoint>& ConstrainedEdges, FGeometryScriptConstrainedDelaunayTriangulationOptions TriangulationOptions, TArray<int32_t>& PositionsToVertexIDs, bool& bHasDuplicateVertices, class UGeometryScriptDebug* Debug); // [0xb223434] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
	// class UDynamicMesh* AppendCylinder(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0xb222e3c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
	// class UDynamicMesh* AppendCurvedStairs(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32_t NumSteps, bool bFloating, class UGeometryScriptDebug* Debug); // [0xb22264c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
	// class UDynamicMesh* AppendCone(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float BaseRadius, float TopRadius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0xb221fe4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
	// class UDynamicMesh* AppendCapsule(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float LineLength, int32_t HemisphereSteps, int32_t CircleSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0xb221a78] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
	// class UDynamicMesh* AppendBox(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float DimensionZ, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0xb221420] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBoundingBox
	// class UDynamicMesh* AppendBoundingBox(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FBox Box, int32_t StepsX, int32_t StepsY, int32_t StepsZ, class UGeometryScriptDebug* Debug); // [0xb220d74] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID
	// bool IsValidVertexID(class UDynamicMesh* TargetMesh, int32_t VertexID);                                                  // [0xb248168] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
	// bool IsValidTriangleID(class UDynamicMesh* TargetMesh, int32_t TriangleID);                                              // [0xb247ff0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
	// FVector GetVertexPosition(class UDynamicMesh* TargetMesh, int32_t VertexID, bool& bIsValidVertex);                       // [0xb2471f8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
	// int32_t GetVertexCount(class UDynamicMesh* TargetMesh);                                                                  // [0xb247104] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexConnectedVertices
	// class UDynamicMesh* GetVertexConnectedVertices(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<int32_t>& Vertices); // [0xb246f34] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexConnectedTriangles
	// class UDynamicMesh* GetVertexConnectedTriangles(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<int32_t>& Triangles); // [0xb246d64] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
	// FBox2D GetUVSetBoundingBox(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, bool& bIsValidUVSet, bool& bUVSetIsEmpty); // [0xb246b0c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
	// class UDynamicMesh* GetTriangleVertexColors(class UDynamicMesh* TargetMesh, int32_t TriangleID, FLinearColor& Color1, FLinearColor& Color2, FLinearColor& Color3, bool& bTriHasValidVertexColors); // [0xb246278] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
	// void GetTriangleUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FVector2D& UV1, FVector2D& UV2, FVector2D& UV3, bool& bHaveValidUVs); // [0xb245f44] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
	// void GetTrianglePositions(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3); // [0xb245be0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
	// class UDynamicMesh* GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bTriHasValidElements, FGeometryScriptTriangle& Normals, FGeometryScriptTriangle& Tangents, FGeometryScriptTriangle& BiTangents); // [0xb2452b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
	// class UDynamicMesh* GetTriangleNormals(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector& Normal1, FVector& Normal2, FVector& Normal3, bool& bTriHasValidNormals); // [0xb245610] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
	// FIntVector GetTriangleIndices(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle);               // [0xb244f30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
	// FVector GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle);               // [0xb244d54] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
	// int32_t GetNumVertexIDs(class UDynamicMesh* TargetMesh);                                                                 // [0xb243928] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
	// int32_t GetNumUVSets(class UDynamicMesh* TargetMesh);                                                                    // [0xb243834] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
	// int32_t GetNumTriangleIDs(class UDynamicMesh* TargetMesh);                                                               // [0xb243740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
	// int32_t GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh, bool& bAmbiguousTopologyFound);                            // [0xb243604] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
	// int32_t GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh);                                                           // [0xb243510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
	// int32_t GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh);                                                   // [0xb24341c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
	// int32_t GetNumConnectedComponents(class UDynamicMesh* TargetMesh);                                                       // [0xb243328] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeAreaCenter
	// void GetMeshVolumeAreaCenter(class UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume, FVector& CenterOfMass);  // [0xb24315c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
	// void GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume);                               // [0xb24300c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
	// FString GetMeshInfoString(class UDynamicMesh* TargetMesh);                                                               // [0xb2406a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
	// bool GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh);                                                             // [0xb2403e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
	// FBox GetMeshBoundingBox(class UDynamicMesh* TargetMesh);                                                                 // [0xb2402a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
	// bool GetIsDenseMesh(class UDynamicMesh* TargetMesh);                                                                     // [0xb23fd00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
	// bool GetIsClosedMesh(class UDynamicMesh* TargetMesh);                                                                    // [0xb23fc10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
	// class UDynamicMesh* GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, FLinearColor DefaultColor, bool& bTriHasValidVertexColors, FLinearColor& InterpolatedColor); // [0xb23f8dc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
	// class UDynamicMesh* GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidUVs, FVector2D& InterpolatedUV); // [0xb23f5a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
	// class UDynamicMesh* GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bIsValidTriangle, FVector& InterpolatedPosition); // [0xb23f2ac] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
	// class UDynamicMesh* GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidElements, FVector& InterpolatedNormal, FVector& InterpolatedTangent, FVector& InterpolatedBiTangent); // [0xb23eeb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
	// class UDynamicMesh* GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidNormals, FVector& InterpolatedNormal); // [0xb23ec1c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
	// bool GetHasVertexIDGaps(class UDynamicMesh* TargetMesh);                                                                 // [0xb23eb24] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
	// bool GetHasVertexColors(class UDynamicMesh* TargetMesh);                                                                 // [0xb23ea2c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
	// bool GetHasTriangleNormals(class UDynamicMesh* TargetMesh);                                                              // [0xb23e934] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
	// bool GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh);                                                               // [0xb23e83c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
	// bool GetHasPolygroups(class UDynamicMesh* TargetMesh);                                                                   // [0xb23e744] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
	// bool GetHasMaterialIDs(class UDynamicMesh* TargetMesh);                                                                  // [0xb23e64c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
	// class UDynamicMesh* GetAllVertexPositions(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList& PositionList, bool bSkipGaps, bool& bHasVertexIDGaps); // [0xb23e2e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
	// class UDynamicMesh* GetAllVertexIDs(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList& VertexIDList, bool& bHasVertexIDGaps); // [0xb23e07c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
	// class UDynamicMesh* GetAllTriangleIndices(class UDynamicMesh* TargetMesh, FGeometryScriptTriangleList& TriangleList, bool bSkipGaps, bool& bHasTriangleIDGaps); // [0xb23d864] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
	// class UDynamicMesh* GetAllTriangleIDs(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList& TriangleIDList, bool& bHasTriangleIDGaps); // [0xb23d5f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllSplitUVsAtVertex
	// class UDynamicMesh* GetAllSplitUVsAtVertex(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t VertexID, TArray<int32_t>& ElementIDs, TArray<FVector2D>& ElementUVs, bool& bHaveValidUVs); // [0xb23d2cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
	// class UDynamicMesh* ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle, FVector Point, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3, FVector& BarycentricCoords); // [0xb236188] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh
	// class UDynamicMesh* ApplyUniformRemesh(class UDynamicMesh* TargetMesh, FGeometryScriptRemeshOptions RemeshOptions, FGeometryScriptUniformRemeshOptions UniformOptions, class UGeometryScriptDebug* Debug); // [0xb2312fc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges
	// class UDynamicMesh* WeldMeshEdges(class UDynamicMesh* TargetMesh, FGeometryScriptWeldEdgesOptions WeldOptions, class UGeometryScriptDebug* Debug); // [0xb256e78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
	// class UDynamicMesh* SplitMeshBowties(class UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug); // [0xb253468] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
	// class UDynamicMesh* ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, FGeometryScriptResolveTJunctionOptions ResolveOptions, class UGeometryScriptDebug* Debug); // [0xb24a3c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
	// class UDynamicMesh* RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, FGeometryScriptDegenerateTriangleOptions Options, class UGeometryScriptDebug* Debug); // [0xb24a158] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
	// class UDynamicMesh* RemoveSmallComponents(class UDynamicMesh* TargetMesh, FGeometryScriptRemoveSmallComponentOptions Options, class UGeometryScriptDebug* Debug); // [0xb249c88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
	// class UDynamicMesh* RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, FGeometryScriptRemoveHiddenTrianglesOptions Options, class UGeometryScriptDebug* Debug); // [0xb249a9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
	// class UDynamicMesh* FillAllMeshHoles(class UDynamicMesh* TargetMesh, FGeometryScriptFillHolesOptions FillOptions, int32_t& NumFilledHoles, int32_t& NumFailedHoleFills, class UGeometryScriptDebug* Debug); // [0xb23c054] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
	// class UDynamicMesh* CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                      // [0xb2331ec] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling
	// class UDynamicMesh* ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, FGeometryScriptScalarList VertexWeights, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug); // [0xb2365b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeRenderCapturePointSampling
	// void ComputeRenderCapturePointSampling(TArray<FTransform>& Samples, TArray<AActor*>& Actors, TArray<FGeometryScriptRenderCaptureCamera>& Cameras, class UGeometryScriptDebug* Debug); // [0xb23544c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeRenderCaptureCamerasForBox
	// void ComputeRenderCaptureCamerasForBox(TArray<FGeometryScriptRenderCaptureCamera>& Cameras, FBox Box, FGeometryScriptRenderCaptureCamerasForBoxOptions& Options, class UGeometryScriptDebug* Debug); // [0xb234b10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
	// class UDynamicMesh* ComputePointSampling(class UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, TArray<FTransform>& Samples, FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug); // [0xb234070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
	// class UDynamicMesh* ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug); // [0xb233bdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane
	// class UDynamicMesh* SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector PlaneOrigin, FVector PlaneNormal, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // [0xb24df44] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
	// class UDynamicMesh* SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector SphereOrigin, double SphereRadius, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // [0xb24cd7c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
	// class UDynamicMesh* SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, FGeometryScriptMeshSelection& Selection, FTransform SelectionMeshTransform, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32_t MinNumTrianglePoints); // [0xb24d3e8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
	// class UDynamicMesh* SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FBox Box, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // [0xb24c140] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
	// class UDynamicMesh* SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector Normal, double MaxAngleDeg, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // [0xb24ba9c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
	// class UDynamicMesh* InvertMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected); // [0xb2473d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
	// void GetMeshSelectionInfo(FGeometryScriptMeshSelection Selection, EGeometryScriptMeshSelectionType& SelectionType, int32_t& NumSelected); // [0xb242240] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
	// class UDynamicMesh* ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, EGeometryScriptTopologyConnectionType ConnectionType); // [0xb23bd90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
	// class UDynamicMesh* ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, int32_t Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours); // [0xb23b8f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
	// void DebugPrintMeshSelection(FGeometryScriptMeshSelection Selection, bool bDisable);                                     // [0xb23a888] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
	// class UDynamicMesh* CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType); // [0xb23a120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
	// class UDynamicMesh* ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType& ResultListType, EGeometryScriptIndexType ConvertToType); // [0xb237e90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
	// class UDynamicMesh* ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, TArray<int32_t>& IndexArray, EGeometryScriptMeshSelectionType& SelectionType); // [0xb237c3c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
	// class UDynamicMesh* ConvertMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection FromSelection, FGeometryScriptMeshSelection& ToSelection, EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion); // [0xb237898] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
	// class UDynamicMesh* ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, TSet<int32_t>& IndexSet, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // [0xb237590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
	// class UDynamicMesh* ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList IndexList, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // [0xb237000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
	// class UDynamicMesh* ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, TArray<int32_t>& IndexArray, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // [0xb236d98] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
	// void CombineMeshSelections(FGeometryScriptMeshSelection SelectionA, FGeometryScriptMeshSelection SelectionB, FGeometryScriptMeshSelection& ResultSelection, EGeometryScriptCombineSelectionMode CombineMode); // [0xb232bd8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox
	// class UDynamicMesh* GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FBox& SelectionBounds, bool& bIsEmpty, class UGeometryScriptDebug* Debug); // [0xb241ec8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
	// class UDynamicMesh* GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, TArray<FGeometryScriptIndexList>& IndexLoops, TArray<FGeometryScriptPolyPath>& PathLoops, int32_t& NumLoops, bool& bFoundErrors, class UGeometryScriptDebug* Debug); // [0xb241a9c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount
	// class UDynamicMesh* ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32_t vertexcount, FGeometryScriptSimplifyMeshOptions Options, class UGeometryScriptDebug* Debug); // [0xb230c24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
	// class UDynamicMesh* ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, int32_t TriangleCount, FGeometryScriptSimplifyMeshOptions Options, class UGeometryScriptDebug* Debug); // [0xb23094c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
	// class UDynamicMesh* ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, FGeometryScriptSimplifyMeshOptions Options, class UGeometryScriptDebug* Debug); // [0xb2306f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
	// class UDynamicMesh* ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, FGeometryScriptPolygroupSimplifyOptions Options, FGeometryScriptGroupLayer GroupLayer, class UGeometryScriptDebug* Debug); // [0xb2304bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
	// class UDynamicMesh* ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, FGeometryScriptPlanarSimplifyOptions Options, class UGeometryScriptDebug* Debug); // [0xb2302fc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.SelectMeshElementsInBoxWithBVH
	// class UDynamicMesh* SelectMeshElementsInBoxWithBVH(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FBox QueryBox, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType, int32_t MinNumTrianglePoints, class UGeometryScriptDebug* Debug); // [0xb24c6cc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH
	// void ResetBVH(FGeometryScriptDynamicMeshBVH& ResetBVH);                                                                  // [0xb24a334] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
	// class UDynamicMesh* RebuildBVHForMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug); // [0xb248b70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
	// class UDynamicMesh* IsPointInsideMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, bool& bIsInside, EGeometryScriptContainmentOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0xb2479ec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
	// class UDynamicMesh* IsBVHValidForMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& TestBVH, bool& bIsValid, class UGeometryScriptDebug* Debug); // [0xb247714] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
	// class UDynamicMesh* FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector RayOrigin, FVector RayDirection, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptRayHitResult& HitResult, EGeometryScriptSearchOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0xb23c88c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
	// class UDynamicMesh* FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptTrianglePoint& NearestResult, EGeometryScriptSearchOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0xb23c2ac] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
	// class UDynamicMesh* BuildBVHForMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& OutputBVH, class UGeometryScriptDebug* Debug); // [0xb23249c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation
	// class UDynamicMesh* ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32_t TessellationLevel, class UGeometryScriptDebug* Debug); // [0xb231574] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
	// class UDynamicMesh* ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptSelectiveTessellateOptions Options, int32_t TessellationLevel, ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug); // [0xb22fe94] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
	// class UDynamicMesh* ApplyPNTessellation(class UDynamicMesh* TargetMesh, FGeometryScriptPNTessellateOptions Options, int32_t TessellationLevel, class UGeometryScriptDebug* Debug); // [0xb22f920] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation
	// class UDynamicMesh* TranslatePivotToLocation(class UDynamicMesh* TargetMesh, FVector PivotLocation, class UGeometryScriptDebug* Debug); // [0xb256390] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
	// class UDynamicMesh* TranslateMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FVector Translation, class UGeometryScriptDebug* Debug); // [0xb255cf8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
	// class UDynamicMesh* TranslateMesh(class UDynamicMesh* TargetMesh, FVector Translation, class UGeometryScriptDebug* Debug); // [0xb255b2c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
	// class UDynamicMesh* TransformMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FTransform Transform, class UGeometryScriptDebug* Debug); // [0xb2556c4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
	// class UDynamicMesh* TransformMesh(class UDynamicMesh* TargetMesh, FTransform Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug); // [0xb2553d8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
	// class UDynamicMesh* ScaleMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FVector Scale, FVector ScaleOrigin, class UGeometryScriptDebug* Debug); // [0xb24b294] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
	// class UDynamicMesh* ScaleMesh(class UDynamicMesh* TargetMesh, FVector Scale, FVector ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug); // [0xb24af44] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
	// class UDynamicMesh* RotateMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FRotator Rotation, FVector RotationOrigin, class UGeometryScriptDebug* Debug); // [0xb24a848] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
	// class UDynamicMesh* RotateMesh(class UDynamicMesh* TargetMesh, FRotator Rotation, FVector RotationOrigin, class UGeometryScriptDebug* Debug); // [0xb24a584] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs
	// class UDynamicMesh* TranslateMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FVector2D Translation, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0xb255fec] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
	// class UDynamicMesh* SetNumUVSets(class UDynamicMesh* TargetMesh, int32_t NumUVSets, class UGeometryScriptDebug* Debug);  // [0xb252418] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
	// class UDynamicMesh* SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FTransform PlaneTransform, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0xb251e64] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
	// class UDynamicMesh* SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FTransform CylinderTransform, FGeometryScriptMeshSelection Selection, float SplitAngle, class UGeometryScriptDebug* Debug); // [0xb251a54] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
	// class UDynamicMesh* SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FTransform BoxTransform, FGeometryScriptMeshSelection Selection, int32_t MinIslandTriCount, class UGeometryScriptDebug* Debug); // [0xb251648] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVElementPosition
	// class UDynamicMesh* SetMeshUVElementPosition(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t ElementID, FVector2D NewUVPosition, bool& bIsValidElementID, bool bDeferChangeNotifications); // [0xb251304] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
	// class UDynamicMesh* SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FGeometryScriptUVTriangle UVs, bool& bIsValidTriangle, bool bDeferChangeNotifications); // [0xb250f94] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVElementIDs
	// class UDynamicMesh* SetMeshTriangleUVElementIDs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FIntVector TriangleUVElements, bool& bIsValidTriangle, bool bDeferChangeNotifications); // [0xb250c48] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
	// class UDynamicMesh* ScaleMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FVector2D Scale, FVector2D ScaleOrigin, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0xb24b624] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
	// class UDynamicMesh* RotateMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, float RotationAngle, FVector2D RotationOrigin, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0xb24abd8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
	// class UDynamicMesh* RepackMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptRepackUVsOptions RepackOptions, class UGeometryScriptDebug* Debug); // [0xb249e64] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
	// class UDynamicMesh* RecomputeMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptRecomputeUVsOptions Options, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0xb248e88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
	// class UDynamicMesh* GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptMeshSelection Selection, double& MeshArea, double& UVArea, FBox& MeshBounds, FBox2D& UVBounds, bool& bIsValidUVSet, bool& bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug); // [0xb242930] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVElementPosition
	// class UDynamicMesh* GetMeshUVElementPosition(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t ElementID, FVector2D& UVPosition, bool& bIsValidElementID); // [0xb2426bc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshTriangleUVElementIDs
	// class UDynamicMesh* GetMeshTriangleUVElementIDs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FIntVector& TriangleUVElements, bool& bHaveValidUVs); // [0xb2423d4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
	// class UDynamicMesh* GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptUVList& UVList, bool& bIsValidUVSet, bool& bHasVertexIDGaps, bool& bHasSplitUVs, class UGeometryScriptDebug* Debug); // [0xb241518] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
	// class UDynamicMesh* CopyUVSet(class UDynamicMesh* TargetMesh, int32_t FromUVSet, int32_t ToUVSet, class UGeometryScriptDebug* Debug); // [0xb239e24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
	// class UDynamicMesh* CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32_t UvSetIndex, class UDynamicMesh*& CopyToUVMesh, class UDynamicMesh*& CopyToUVMeshOut, bool& bInvalidTopology, bool& bIsValidUVSet, class UGeometryScriptDebug* Debug); // [0xb239700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
	// class UDynamicMesh* CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32_t ToUVSetIndex, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, bool& bFoundTopologyErrors, bool& bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug); // [0xb23907c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ComputeMeshLocalUVParam
	// class UDynamicMesh* ComputeMeshLocalUVParam(class UDynamicMesh* TargetMesh, FVector CenterPoint, int32_t CenterPointTriangleID, TArray<int32_t>& VertexIDs, TArray<FVector2D>& VertexUVs, double Radius, bool bUseInterpolatedNormal, FVector TangentYDirection, double UVRotationDeg, class UGeometryScriptDebug* Debug); // [0xb233388] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
	// class UDynamicMesh* AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptXAtlasOptions Options, class UGeometryScriptDebug* Debug); // [0xb231adc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
	// class UDynamicMesh* AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptPatchBuilderOptions Options, class UGeometryScriptDebug* Debug); // [0xb2317b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AddUVElementToMesh
	// class UDynamicMesh* AddUVElementToMesh(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FVector2D NewUVPosition, int32_t& NewUVElementID, bool& bIsValidUVSet, bool bDeferChangeNotifications); // [0xb220a58] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor
	// class UDynamicMesh* SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug); // [0xb250530] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
	// class UDynamicMesh* SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, FGeometryScriptColorList VertexColorList, class UGeometryScriptDebug* Debug); // [0xb24f758] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
	// class UDynamicMesh* SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, class UGeometryScriptDebug* Debug); // [0xb24f420] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
	// class UDynamicMesh* GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, FGeometryScriptColorList& ColorList, bool& bIsValidColorSet, bool& bHasVertexIDGaps, bool bBlendSplitVertexValues); // [0xb24077c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
	// class UDynamicMesh* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug); // [0xb238458] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
	// class UDynamicMesh* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug); // [0xb2382bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.BlurMeshVertexColors
	// class UDynamicMesh* BlurMeshVertexColors(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32_t NumIterations, double Strength, EGeometryScriptBlurColorMode BlurMode, FGeometryScriptBlurMeshVertexColorsOptions Options, class UGeometryScriptDebug* Debug); // [0xb231f70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify
	// class UDynamicMesh* ApplyMeshSolidify(class UDynamicMesh* TargetMesh, FGeometryScriptSolidifyOptions Options, class UGeometryScriptDebug* Debug); // [0xb22f6c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
	// class UDynamicMesh* ApplyMeshMorphology(class UDynamicMesh* TargetMesh, FGeometryScriptMorphologyOptions Options, class UGeometryScriptDebug* Debug); // [0xb22eb94] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_PointSetSamplingFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.UnflattenPoints
	// void UnflattenPoints(TArray<FVector2D>& PointsIn2D, TArray<FVector>& PointsIn3D, FGeometryScriptPointFlatteningOptions& Options, double Height); // [0xb256568] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.TransformsToPoints
	// void TransformsToPoints(TArray<FTransform>& Transforms, TArray<FVector>& Points);                                        // [0xb2559e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.OffsetTransforms
	// void OffsetTransforms(TArray<FTransform>& Transforms, double Offset, FVector Direction, EGeometryScriptCoordinateSpace Space); // [0xb2487e4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.MakeBoundingBoxFromPoints
	// FBox MakeBoundingBoxFromPoints(TArray<FVector>& Points, double ExpandBy);                                                // [0xb248604] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.KMeansClusterToIDs
	// void KMeansClusterToIDs(TArray<FVector>& Points, FGeometryScriptPointClusteringOptions& Options, TArray<int32_t>& PointClusterIndices); // [0xb248460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.KMeansClusterToArrays
	// void KMeansClusterToArrays(TArray<FVector>& Points, FGeometryScriptPointClusteringOptions& Options, TArray<FGeometryScriptIndexList>& ClusterIDToLists); // [0xb2482e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.GetPointsFromIndexList
	// void GetPointsFromIndexList(TArray<FVector>& AllPoints, FGeometryScriptIndexList& Indices, TArray<FVector>& SelectedPoints); // [0xb243a1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.FlattenPoints
	// void FlattenPoints(TArray<FVector>& PointsIn3D, TArray<FVector2D>& PointsIn2D, FGeometryScriptPointFlatteningOptions& Options); // [0xb23cf78] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.DownsamplePoints
	// void DownsamplePoints(TArray<FVector>& Points, FGeometryScriptPointPriorityOptions& Options, FGeometryScriptIndexList& DownsampledIndices, int32_t KeepNumPoints, class UGeometryScriptDebug* Debug); // [0xb23b1d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_SimplePolygonFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.SetPolygonVertex
	// void SetPolygonVertex(FGeometryScriptSimplePolygon& Polygon, int32_t VertexIndex, FVector2D Position, bool& bPolygonIsEmpty); // [0xb26fd88] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonVertexCount
	// int32_t GetPolygonVertexCount(FGeometryScriptSimplePolygon Polygon);                                                     // [0xb267b08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonVertex
	// FVector2D GetPolygonVertex(FGeometryScriptSimplePolygon Polygon, int32_t VertexIndex, bool& bPolygonIsEmpty);            // [0xb26752c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonTangent
	// FVector2D GetPolygonTangent(FGeometryScriptSimplePolygon Polygon, int32_t VertexIndex, bool& bPolygonIsEmpty);           // [0xb266e9c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonBounds
	// FBox2D GetPolygonBounds(FGeometryScriptSimplePolygon Polygon);                                                           // [0xb266534] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonArea
	// double GetPolygonArea(FGeometryScriptSimplePolygon Polygon);                                                             // [0xb265e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonArcLength
	// double GetPolygonArcLength(FGeometryScriptSimplePolygon Polygon);                                                        // [0xb265e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.ConvertSplineToPolygon
	// void ConvertSplineToPolygon(class USplineComponent* Spline, FGeometryScriptSimplePolygon& Polygon, FGeometryScriptSplineSamplingOptions SamplingOptions, EGeometryScriptAxis DropAxis); // [0xb260968] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_GeometryScriptSimplePolygonToArrayOfVector2D
	// TArray<FVector2D> Conv_GeometryScriptSimplePolygonToArrayOfVector2D(FGeometryScriptSimplePolygon Polygon);               // [0xb25fce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_GeometryScriptSimplePolygonToArray
	// TArray<FVector> Conv_GeometryScriptSimplePolygonToArray(FGeometryScriptSimplePolygon Polygon);                           // [0xb25fa94] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_ArrayToGeometryScriptSimplePolygon
	// FGeometryScriptSimplePolygon Conv_ArrayToGeometryScriptSimplePolygon(TArray<FVector>& PathVertices);                     // [0xb25f5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_ArrayOfVector2DToGeometryScriptSimplePolygon
	// FGeometryScriptSimplePolygon Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(TArray<FVector2D>& PathVertices);         // [0xb25f364] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.AddPolygonVertex
	// int32_t AddPolygonVertex(FGeometryScriptSimplePolygon& Polygon, FVector2D Position);                                     // [0xb25e658] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_PolygonListFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsUnion
	// FGeometryScriptGeneralPolygonList PolygonsUnion(FGeometryScriptGeneralPolygonList PolygonList, bool bCopyInputOnFailure); // [0xb26cf74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsOffsets
	// FGeometryScriptGeneralPolygonList PolygonsOffsets(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double FirstOffset, double SecondOffset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0xb26cb64] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsOffset
	// FGeometryScriptGeneralPolygonList PolygonsOffset(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0xb26c5f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsMorphologyOpen
	// FGeometryScriptGeneralPolygonList PolygonsMorphologyOpen(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0xb26c26c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsMorphologyClose
	// FGeometryScriptGeneralPolygonList PolygonsMorphologyClose(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0xb26bee4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsIntersection
	// FGeometryScriptGeneralPolygonList PolygonsIntersection(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToIntersect); // [0xb26bb28] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsExclusiveOr
	// FGeometryScriptGeneralPolygonList PolygonsExclusiveOr(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToExclusiveOr); // [0xb26b76c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsDifference
	// FGeometryScriptGeneralPolygonList PolygonsDifference(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToSubtract); // [0xb26b3a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetSimplePolygon
	// FGeometryScriptSimplePolygon GetSimplePolygon(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // [0xb26998c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertices
	// void GetPolygonVertices(FGeometryScriptGeneralPolygonList PolygonList, TArray<FVector2D>& OutVertices, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // [0xb267d38] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertexCount
	// int32_t GetPolygonVertexCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // [0xb2677e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertex
	// FVector2D GetPolygonVertex(FGeometryScriptGeneralPolygonList PolygonList, bool& bIsValidVertex, int32_t VertexIndex, int32_t PolygonIndex, int32_t HoleIndex); // [0xb267208] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonListBounds
	// FBox2D GetPolygonListBounds(FGeometryScriptGeneralPolygonList PolygonList);                                              // [0xb266bec] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonListArea
	// double GetPolygonListArea(FGeometryScriptGeneralPolygonList PolygonList);                                                // [0xb2669f4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonHoleCount
	// int32_t GetPolygonHoleCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex);     // [0xb266768] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonCount
	// int32_t GetPolygonCount(FGeometryScriptGeneralPolygonList PolygonList);                                                  // [0xb1efe64] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonBounds
	// FBox2D GetPolygonBounds(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex);         // [0xb266204] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonArea
	// double GetPolygonArea(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex);           // [0xb265fdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonsFromPathOffset
	// FGeometryScriptGeneralPolygonList CreatePolygonsFromPathOffset(TArray<FVector2D> Path, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0xb262af8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonsFromOpenPolyPathsOffset
	// FGeometryScriptGeneralPolygonList CreatePolygonsFromOpenPolyPathsOffset(TArray<FGeometryScriptPolyPath> PolyPaths, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0xb2627b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonListFromSinglePolygon
	// FGeometryScriptGeneralPolygonList CreatePolygonListFromSinglePolygon(FGeometryScriptSimplePolygon OuterPolygon, TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations); // [0xb2624e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonListFromSimplePolygons
	// FGeometryScriptGeneralPolygonList CreatePolygonListFromSimplePolygons(TArray<FGeometryScriptSimplePolygon>& OuterPolygons); // [0xb262438] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.AppendPolygonList
	// void AppendPolygonList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptGeneralPolygonList PolygonsToAppend); // [0xb25e88c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.AddPolygonToList
	// int32_t AddPolygonToList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptSimplePolygon OuterPolygon, TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations); // [0xb25e284] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms
	// bool SampleSplineToTransforms(class USplineComponent* Spline, TArray<FTransform>& Frames, TArray<double>& FrameTimes, FGeometryScriptSplineSamplingOptions SamplingOptions, FTransform RelativeTransform, bool bIncludeScale); // [0xb26d30c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
	// FVector GetPolyPathVertex(FGeometryScriptPolyPath PolyPath, int32_t Index, bool& bIsValidIndex);                         // [0xb265b5c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
	// FVector GetPolyPathTangent(FGeometryScriptPolyPath PolyPath, int32_t Index, bool& bIsValidIndex);                        // [0xb265838] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
	// int32_t GetPolyPathNumVertices(FGeometryScriptPolyPath PolyPath);                                                        // [0xb265664] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
	// int32_t GetPolyPathLastIndex(FGeometryScriptPolyPath PolyPath);                                                          // [0xb265478] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
	// double GetPolyPathArcLength(FGeometryScriptPolyPath PolyPath);                                                           // [0xb2651fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
	// int32_t GetNearestVertexIndex(FGeometryScriptPolyPath PolyPath, FVector Point);                                          // [0xb264ec8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
	// FGeometryScriptPolyPath FlattenTo2DOnAxis(FGeometryScriptPolyPath PolyPath, EGeometryScriptAxis DropAxis);               // [0xb263d3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
	// FGeometryScriptPolyPath CreateCirclePath3D(FTransform Transform, float Radius, int32_t NumPoints);                       // [0xb262194] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
	// FGeometryScriptPolyPath CreateCirclePath2D(FVector2D Center, float Radius, int32_t NumPoints);                           // [0xb261fbc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
	// FGeometryScriptPolyPath CreateArcPath3D(FTransform Transform, float Radius, int32_t NumPoints, float StartAngle, float EndAngle); // [0xb261c40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
	// FGeometryScriptPolyPath CreateArcPath2D(FVector2D Center, float Radius, int32_t NumPoints, float StartAngle, float EndAngle); // [0xb261964] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
	// void ConvertSplineToPolyPath(class USplineComponent* Spline, FGeometryScriptPolyPath& PolyPath, FGeometryScriptSplineSamplingOptions SamplingOptions); // [0xb2605d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
	// void ConvertPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath, TArray<FVector2D>& VertexArray);                 // [0xb260418] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
	// void ConvertPolyPathToArray(FGeometryScriptPolyPath PolyPath, TArray<FVector>& VertexArray);                             // [0xb260260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
	// void ConvertArrayToPolyPath(TArray<FVector>& VertexArray, FGeometryScriptPolyPath& PolyPath);                            // [0xb2600f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
	// void ConvertArrayOfVector2DToPolyPath(TArray<FVector2D>& VertexArray, FGeometryScriptPolyPath& PolyPath);                // [0xb25ff88] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
	// TArray<FVector2D> Conv_GeometryScriptPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath);                        // [0xb25f894] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
	// TArray<FVector> Conv_GeometryScriptPolyPathToArray(FGeometryScriptPolyPath PolyPath);                                    // [0xb25f694] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
	// FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(TArray<FVector>& PathVertices);                               // [0xb25f4ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
	// FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<FVector2D>& PathVertices);                   // [0xb25f230] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList
	// void SetComponentMaterialList(class UPrimitiveComponent* Component, TArray<UMaterialInterface*>& MaterialList, class UGeometryScriptDebug* Debug); // [0xb26fb74] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.DetermineMeshOcclusion
	// void DetermineMeshOcclusion(TArray<UDynamicMesh*>& SourceMeshes, TArray<FTransform>& SourceMeshTransforms, TArray<bool>& OutMeshIsHidden, TArray<UDynamicMesh*>& TransparentMeshes, TArray<FTransform>& TransparentMeshTransforms, TArray<bool>& OutTransparentMeshIsHidden, TArray<UDynamicMesh*>& OccludeMeshes, TArray<FTransform>& OccludeMeshTransforms, FGeometryScriptDetermineMeshOcclusionOptions& OcclusionOptions, class UGeometryScriptDebug* Debug); // [0xb262e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
	// class UDynamicMeshPool* CreateDynamicMeshPool();                                                                         // [0xb26240c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
	// class UDynamicMesh* CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromComponentOptions Options, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0xb261504] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
	// class UDynamicMesh* CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, bool bUseComplexCollision, int32_t SphereResolution, class UGeometryScriptDebug* Debug); // [0xb260f48] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis
	// FTransform MakeTransformFromZAxis(FVector Location, FVector ZAxis);                                                      // [0xb26b1d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
	// FTransform MakeTransformFromAxes(FVector Location, FVector ZAxis, FVector TangentAxis, bool bTangentIsX);                // [0xb26af04] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
	// FVector GetTransformAxisVector(FTransform Transform, EGeometryScriptAxis Axis);                                          // [0xb26a12c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
	// FRay GetTransformAxisRay(FTransform Transform, EGeometryScriptAxis Axis);                                                // [0xb269f2c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
	// FPlane GetTransformAxisPlane(FTransform Transform, EGeometryScriptAxis Axis);                                            // [0xb269d34] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints
	// FRay MakeRayFromPoints(FVector A, FVector B);                                                                            // [0xb26ad74] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
	// FRay MakeRayFromPointDirection(FVector Origin, FVector Direction, bool bDirectionIsNormalized);                          // [0xb26ab68] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
	// FRay GetTransformedRay(FRay Ray, FTransform Transform, bool bInvert);                                                    // [0xb26a568] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
	// void GetRayStartEnd(FRay Ray, double StartDistance, double EndDistance, FVector& StartPoint, FVector& EndPoint);         // [0xb269678] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
	// bool GetRaySphereIntersection(FRay Ray, FVector SphereCenter, double SphereRadius, double& Distance1, double& Distance2); // [0xb2693c4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
	// double GetRaySegmentClosestPoint(FRay Ray, FVector SegStartPoint, FVector SegEndPoint, double& RayParameter, FVector& RayPoint, FVector& SegPoint); // [0xb26902c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
	// double GetRayPointDistance(FRay Ray, FVector Point);                                                                     // [0xb268e7c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint
	// FVector GetRayPoint(FRay Ray, double Distance);                                                                          // [0xb268cd4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
	// bool GetRayPlaneIntersection(FRay Ray, FPlane Plane, double& HitDistance);                                               // [0xb268af0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
	// double GetRayParameter(FRay Ray, FVector Point);                                                                         // [0xb268948] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint
	// double GetRayLineClosestPoint(FRay Ray, FVector LineOrigin, FVector LineDirection, double& RayParameter, FVector& RayPoint, double& LineParameter, FVector& LinePoint); // [0xb268554] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
	// FVector GetRayClosestPoint(FRay Ray, FVector Point);                                                                     // [0xb268398] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection
	// bool GetRayBoxIntersection(FRay Ray, FBox Box, double& HitDistance);                                                     // [0xb268198] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox
	// bool TestPointInsideBox(FBox Box, FVector Point, bool bConsiderOnBoxAsInside);                                           // [0xb2704e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
	// bool TestBoxSphereIntersection(FBox Box, FVector SphereCenter, double SphereRadius);                                     // [0xb2702d4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
	// bool TestBoxBoxIntersection(FBox Box1, FBox Box2);                                                                       // [0xb27013c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
	// FBox MakeBoxFromCenterSize(FVector Center, FVector Dimensions);                                                          // [0xb26a9cc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
	// FBox MakeBoxFromCenterExtents(FVector Center, FVector Extents);                                                          // [0xb26a830] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
	// FBox GetTransformedBox(FBox Box, FTransform Transform);                                                                  // [0xb26a324] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
	// FBox GetExpandedBox(FBox Box, FVector ExpandBy);                                                                         // [0xb264d10] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
	// void GetBoxVolumeArea(FBox Box, double& Volume, double& SurfaceArea);                                                    // [0xb264b84] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
	// double GetBoxPointDistance(FBox Box, FVector Point);                                                                     // [0xb2649f8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter
	// FVector GetBoxFaceCenter(FBox Box, int32_t FaceIndex, FVector& FaceNormal);                                              // [0xb2646f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
	// FVector GetBoxCorner(FBox Box, int32_t CornerIndex);                                                                     // [0xb264504] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
	// void GetBoxCenterSize(FBox Box, FVector& Center, FVector& Dimensions);                                                   // [0xb2642c8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
	// double GetBoxBoxDistance(FBox Box1, FBox Box2);                                                                          // [0xb26411c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
	// FVector FindClosestPointOnBox(FBox Box, FVector Point, bool& bIsInside);                                                 // [0xb263b60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
	// FBox FindBoxBoxIntersection(FBox Box1, FBox Box2, bool& bIsIntersecting);                                                // [0xb2638f8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions
	// void SampleTextureRenderTarget2DAtUVPositions(FGeometryScriptUVList UVList, class UTextureRenderTarget2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug); // [0xb26dc90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
	// void SampleTexture2DAtUVPositions(FGeometryScriptUVList UVList, class UTexture2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug); // [0xb26d860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar
	// FGeometryScriptScalarList VectorToScalar(FGeometryScriptVectorList VectorList, double ConstantX, double ConstantY, double ConstantZ); // [0xb271bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
	// void VectorNormalizeInPlace(FGeometryScriptVectorList& VectorList, FVector SetOnFailure);                                // [0xb2719b4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
	// FGeometryScriptScalarList VectorLength(FGeometryScriptVectorList VectorList);                                            // [0xb2716fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
	// FGeometryScriptScalarList VectorDot(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB);       // [0xb2712dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
	// FGeometryScriptVectorList VectorCross(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB);     // [0xb270e98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
	// void VectorBlendInPlace(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB); // [0xb270aa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
	// FGeometryScriptVectorList VectorBlend(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB, double ConstantA, double ConstantB); // [0xb27070c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
	// void ScalarVectorMultiplyInPlace(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList& VectorList, double ScalarMultiplier); // [0xb26f864] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
	// FGeometryScriptVectorList ScalarVectorMultiply(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList VectorList, double ScalarMultiplier); // [0xb26f564] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
	// void ScalarMultiplyInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier); // [0xb26f254] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
	// FGeometryScriptScalarList ScalarMultiply(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantMultiplier); // [0xb26ef54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
	// void ScalarInvertInPlace(FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);  // [0xb26eb5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
	// FGeometryScriptScalarList ScalarInvert(FGeometryScriptScalarList ScalarList, double Numerator, double SetOnFailure, double Epsilon); // [0xb26e84c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
	// void ScalarBlendInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB); // [0xb26e454] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
	// FGeometryScriptScalarList ScalarBlend(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantA, double ConstantB); // [0xb26e0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
	// void ConstantVectorMultiplyInPlace(double Constant, FGeometryScriptVectorList& VectorList);                              // [0xb25f0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
	// FGeometryScriptVectorList ConstantVectorMultiply(double Constant, FGeometryScriptVectorList VectorList);                 // [0xb25eeb8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
	// void ConstantScalarMultiplyInPlace(double Constant, FGeometryScriptScalarList& ScalarList);                              // [0xb25ed38] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
	// FGeometryScriptScalarList ConstantScalarMultiply(double Constant, FGeometryScriptScalarList ScalarList);                 // [0xb25eb40] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshReadLOD
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptMeshReadLOD : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EGeometryScriptLODType)                    LODType                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   LODIndex                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshWriteLOD
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptMeshWriteLOD : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bWriteHiResSource                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   LODIndex                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimpleCollision
/// Size: 0x0078 (0x000000 - 0x000078)
class FGeometryScriptSimpleCollision : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FKAggregateGeom)                           AggGeom                                                     OFFSET(getStruct<T>, {0x0, 120, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSphereCovering
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptSphereCovering : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimpleCollisionTriangulationOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptSimpleCollisionTriangulationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   SphereStepsPerSide                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   CapsuleHemisphereSteps                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   CapsuleCircleSteps                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTriangle
/// Size: 0x0048 (0x000000 - 0x000048)
class FGeometryScriptTriangle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Vector0                                                     OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Vector1                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   vector2                                                     OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTrianglePoint
/// Size: 0x0038 (0x000000 - 0x000038)
class FGeometryScriptTrianglePoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   TriangleID                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   BaryCoords                                                  OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptUVTriangle
/// Size: 0x0030 (0x000000 - 0x000030)
class FGeometryScriptUVTriangle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector2D)                                 UV0                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 UV1                                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 UV2                                                         OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptColorFlags
/// Size: 0x0004 (0x000000 - 0x000004)
class FGeometryScriptColorFlags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bRed                                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bGreen                                                      OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bBlue                                                       OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bAlpha                                                      OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptGroupLayer
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptGroupLayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bDefaultLayer                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   ExtendedLayerIndex                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptIndexList
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryScriptIndexList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EGeometryScriptIndexType)                  IndexType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTriangleList
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptTriangleList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptScalarList
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptScalarList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptVectorList
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptVectorList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptUVList
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptUVList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptColorList
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptColorList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPolyPath
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryScriptPolyPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bClosedLoop                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimplePolygon
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptSimplePolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptGeneralPolygonList
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptGeneralPolygonList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDynamicMeshBVH
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryScriptDynamicMeshBVH : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRenderCaptureCamera
/// Size: 0x0048 (0x000000 - 0x000048)
class FGeometryScriptRenderCaptureCamera : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(double)                                    FieldOfViewDegrees                                          OFFSET(get<double>, {0x8, 8, 0, 0})
	SMember(FVector)                                   ViewPosition                                                OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   ViewDirection                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(double)                                    NearPlaneDist                                               OFFSET(get<double>, {0x40, 8, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRenderCaptureCamerasForBoxOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryScriptRenderCaptureCamerasForBoxOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(double)                                    FieldOfViewDegrees                                          OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(bool)                                      bViewFromBoxFaces                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bViewFromUpperCorners                                       OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bViewFromLowerCorners                                       OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bViewFromUpperEdges                                         OFFSET(get<bool>, {0x13, 1, 0, 0})
	DMember(bool)                                      bViewFromLowerEdges                                         OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bViewFromSideEdges                                          OFFSET(get<bool>, {0x15, 1, 0, 0})
	CMember(TArray<FVector>)                           ExtraViewFromPositions                                      OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDebugMessage
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryScriptDebugMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EGeometryScriptDebugMessageType)           MessageType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EGeometryScriptErrorType)                  ErrorType                                                   OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FText)                                     Message                                                     OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
/// Size: 0x0030 (0x000000 - 0x000030)
class FGeometryScriptCollisionFromMeshOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEmitTransaction                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EGeometryScriptCollisionGenerationMethod)  Method                                                      OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bAutoDetectSpheres                                          OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bAutoDetectBoxes                                            OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bAutoDetectCapsules                                         OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     MinThickness                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bSimplifyHulls                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   ConvexHullTargetFaceCount                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MaxConvexHullsPerMesh                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     ConvexDecompositionSearchFactor                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ConvexDecompositionErrorTolerance                           OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ConvexDecompositionMinPartThickness                         OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     SweptHullSimplifyTolerance                                  OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(EGeometryScriptSweptHullAxis)              SweptHullAxis                                               OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bRemoveFullyContainedShapes                                 OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   MaxShapeCount                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryScriptSetSimpleCollisionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bEmitTransaction                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSetStaticMeshCollisionOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryScriptSetStaticMeshCollisionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bMarkAsCustomized                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.ComputeNegativeSpaceOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FComputeNegativeSpaceOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ENegativeSpaceSampleMethod)                SampleMethod                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bRequireSearchSampleCoverage                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bOnlyConnectedToHull                                        OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(int32_t)                                   MaxVoxelsPerDim                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TargetNumSamples                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(double)                                    MinSampleSpacing                                            OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    NegativeSpaceTolerance                                      OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    MinRadius                                                   OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMergeSimpleCollisionOptions
/// Size: 0x0070 (0x000000 - 0x000070)
class FGeometryScriptMergeSimpleCollisionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   MaxShapeCount                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(double)                                    ErrorTolerance                                              OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    MinThicknessTolerance                                       OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      bConsiderAllPossibleMerges                                  OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FGeometryScriptSphereCovering)             PrecomputedNegativeSpace                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bComputeNegativeSpace                                       OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FComputeNegativeSpaceOptions)              ComputeNegativeSpaceOptions                                 OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	SMember(FGeometryScriptSimpleCollisionTriangulationOptions) ShapeToHullTriangulation                           OFFSET(getStruct<T>, {0x60, 12, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConvexHullSimplificationOptions
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptConvexHullSimplificationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EGeometryScriptConvexHullSimplifyMethod)   SimplificationMethod                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     SimplificationDistanceThreshold                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SimplificationAngleThreshold                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MinTargetFaceCount                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConvexHullApproximationOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptConvexHullApproximationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bFitSpheres                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bFitBoxes                                                   OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     DistanceThreshold                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     VolumeDiffThreshold_Fraction                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTransformCollisionOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FGeometryScriptTransformCollisionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bWarnOnInvalidTransforms                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bCenterTransformPivotPerShape                               OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConvexHullOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptConvexHullOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bPrefilterVertices                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   PrefilterGridResolution                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SimplifyToFaceCount                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSweptHullOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryScriptSweptHullOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bPrefilterVertices                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   PrefilterGridResolution                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     MinThickness                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bSimplify                                                   OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     MinEdgeLength                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SimplifyTolerance                                           OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConvexDecompositionOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryScriptConvexDecompositionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   NumHulls                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(double)                                    SearchFactor                                                OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    ErrorTolerance                                              OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    MinPartThickness                                            OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   SimplifyToFaceCount                                         OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshSelection
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptMeshSelection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
/// Size: 0x0003 (0x000000 - 0x000003)
class FGeometryScriptCopyMeshFromAssetOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bApplyBuildSettings                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bRequestTangents                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIgnoreRemoveDegenerates                                    OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptNaniteOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptNaniteOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     FallbackPercentTriangles                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FallbackRelativeError                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
/// Size: 0x0080 (0x000000 - 0x000080)
class FGeometryScriptCopyMeshToAssetOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bEnableRecomputeNormals                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnableRecomputeTangents                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bEnableRemoveDegenerates                                    OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bReplaceMaterials                                           OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         NewMaterials                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             NewMaterialSlotNames                                        OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bApplyNaniteSettings                                        OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FGeometryScriptNaniteOptions)              NaniteSettings                                              OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FMeshNaniteSettings)                       NewNaniteSettings                                           OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	DMember(bool)                                      bEmitTransaction                                            OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(bool)                                      bDeferMeshPostEditChange                                    OFFSET(get<bool>, {0x79, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeTypeOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryScriptBakeTypeOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EGeometryScriptBakeTypes)                  BakeType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeTextureOptions
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryScriptBakeTextureOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EGeometryScriptBakeResolution)             Resolution                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EGeometryScriptBakeBitDepth)               BitDepth                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EGeometryScriptBakeSamplesPerPixel)        SamplesPerPixel                                             OFFSET(get<T>, {0x2, 1, 0, 0})
	CMember(class UTexture2D*)                         SampleFilterMask                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EGeometryScriptBakeFilteringType)          FilteringType                                               OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     ProjectionDistance                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bProjectionInWorldSpace                                     OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeVertexOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptBakeVertexOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bSplitAtNormalSeams                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bSplitAtUVSeams                                             OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     ProjectionDistance                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bProjectionInWorldSpace                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeOutputType
/// Size: 0x0080 (0x000000 - 0x000080)
class FGeometryScriptBakeOutputType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EGeometryScriptBakeOutputMode)             OutputMode                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FGeometryScriptBakeTypeOptions)            RGBA                                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FGeometryScriptBakeTypeOptions)            R                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FGeometryScriptBakeTypeOptions)            G                                                           OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FGeometryScriptBakeTypeOptions)            B                                                           OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FGeometryScriptBakeTypeOptions)            A                                                           OFFSET(getStruct<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeTargetMeshOptions
/// Size: 0x0004 (0x000000 - 0x000004)
class FGeometryScriptBakeTargetMeshOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   TargetUVLayer                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeSourceMeshOptions
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptBakeSourceMeshOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UTexture2D*)                         SourceNormalMap                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SourceNormalUVLayer                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EGeometryScriptBakeNormalSpace)            SourceNormalSpace                                           OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeRenderCaptureOptions
/// Size: 0x0040 (0x000000 - 0x000040)
class FGeometryScriptBakeRenderCaptureOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FGeometryScriptRenderCaptureCamera>) Cameras                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EGeometryScriptBakeResolution)             RenderCaptureResolution                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(double)                                    FieldOfViewDegrees                                          OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    NearPlaneDist                                               OFFSET(get<double>, {0x20, 8, 0, 0})
	CMember(EGeometryScriptBakeResolution)             Resolution                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EGeometryScriptBakeSamplesPerPixel)        SamplesPerPixel                                             OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(bool)                                      bRenderCaptureAntiAliasing                                  OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(float)                                     CleanupTolerance                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bBaseColorMap                                               OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bNormalMap                                                  OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bPackedMRSMap                                               OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bMetallicMap                                                OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(bool)                                      bRoughnessMap                                               OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bSpecularMap                                                OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(bool)                                      bEmissiveMap                                                OFFSET(get<bool>, {0x36, 1, 0, 0})
	DMember(bool)                                      bOpacityMap                                                 OFFSET(get<bool>, {0x37, 1, 0, 0})
	DMember(bool)                                      bSubsurfaceColorMap                                         OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRenderCaptureTextures
/// Size: 0x0090 (0x000000 - 0x000090)
class FGeometryScriptRenderCaptureTextures : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UTexture2D*)                         BaseColorMap                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bHasBaseColorMap                                            OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(class UTexture2D*)                         NormalMap                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bHasNormalMap                                               OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(class UTexture2D*)                         PackedMRSMap                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bHasPackedMRSMap                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(class UTexture2D*)                         MetallicMap                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bHasMetallicMap                                             OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(class UTexture2D*)                         RoughnessMap                                                OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bHasRoughnessMap                                            OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(class UTexture2D*)                         SpecularMap                                                 OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      bHasSpecularMap                                             OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(class UTexture2D*)                         EmissiveMap                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bHasEmissiveMap                                             OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(class UTexture2D*)                         OpacityMap                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bHasOpacityMap                                              OFFSET(get<bool>, {0x78, 1, 0, 0})
	CMember(class UTexture2D*)                         SubsurfaceColorMap                                          OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bHasSubsurfaceColorMap                                      OFFSET(get<bool>, {0x88, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FGeometryScriptSimpleMeshBuffers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FVector>)                           Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           Normals                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FVector2D>)                         UV0                                                         OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FVector2D>)                         UV1                                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FVector2D>)                         UV2                                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FVector2D>)                         UV3                                                         OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FVector2D>)                         UV4                                                         OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FVector2D>)                         UV5                                                         OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FVector2D>)                         UV6                                                         OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FVector2D>)                         UV7                                                         OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      VertexColors                                                OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FIntVector>)                        Triangles                                                   OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<int32_t>)                           TriGroupIDs                                                 OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptAppendMeshOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryScriptAppendMeshOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EGeometryScriptCombineAttributesMode)      CombineMode                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBoneWeight
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptBoneWeight : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   BoneIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBoneWeightProfile
/// Size: 0x0004 (0x000000 - 0x000004)
class FGeometryScriptBoneWeightProfile : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     ProfileName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSmoothBoneWeightsOptions
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptSmoothBoneWeightsOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EGeometryScriptSmoothBoneWeightsType)      DistanceWeighingType                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxInfluences                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   VoxelResolution                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTransferBoneWeightsOptions
/// Size: 0x0030 (0x000000 - 0x000030)
class FGeometryScriptTransferBoneWeightsOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ETransferBoneWeightsMethod)                TransferMethod                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EOutputTargetMeshBones)                    OutputTargetMeshBones                                       OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FGeometryScriptBoneWeightProfile)          SourceProfile                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGeometryScriptBoneWeightProfile)          TargetProfile                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(double)                                    RadiusPercentage                                            OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    NormalThreshold                                             OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(bool)                                      LayeredMeshSupport                                          OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(int32_t)                                   NumSmoothingIterations                                      OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     SmoothingStrength                                           OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FName)                                     InpaintMask                                                 OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBoneInfo
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FGeometryScriptBoneInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshBooleanOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptMeshBooleanOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bFillHoles                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bSimplifyOutput                                             OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     SimplifyPlanarTolerance                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptMeshSelfUnionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bFillHoles                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bTrimFlaps                                                  OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bSimplifyOutput                                             OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(float)                                     SimplifyPlanarTolerance                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     WindingThreshold                                            OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptMeshPlaneCutOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bFillHoles                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bFillSpans                                                  OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bFlipCutSide                                                OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(float)                                     UVWorldDimension                                            OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptMeshPlaneSliceOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bFillHoles                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bFillSpans                                                  OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     GapWidth                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     UVWorldDimension                                            OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshMirrorOptions
/// Size: 0x0003 (0x000000 - 0x000003)
class FGeometryScriptMeshMirrorOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bApplyPlaneCut                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bFlipCutSide                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bWeldAlongPlane                                             OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptIsSameMeshOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptIsSameMeshOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bCheckConnectivity                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bCheckEdgeIDs                                               OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bCheckNormals                                               OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bCheckColors                                                OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bCheckUVs                                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bCheckGroups                                                OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bCheckAttributes                                            OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(float)                                     Epsilon                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryScriptMeasureMeshDistanceOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bSymmetric                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBendWarpOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptBendWarpOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bSymmetricExtents                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     LowerExtent                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bBidirectional                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTwistWarpOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptTwistWarpOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bSymmetricExtents                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     LowerExtent                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bBidirectional                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptFlareWarpOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptFlareWarpOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bSymmetricExtents                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     LowerExtent                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EGeometryScriptFlareType)                  FlareType                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryScriptPerlinNoiseLayerOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   FrequencyShift                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMathWarpOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptMathWarpOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FrequencyShift                                              OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
/// Size: 0x0030 (0x000000 - 0x000030)
class FGeometryScriptPerlinNoiseOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGeometryScriptPerlinNoiseLayerOptions)    BaseLayer                                                   OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	DMember(bool)                                      bApplyAlongNormal                                           OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(EGeometryScriptEmptySelectionBehavior)     EmptyBehavior                                               OFFSET(get<T>, {0x29, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptIterativeMeshSmoothingOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   NumIterations                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EGeometryScriptEmptySelectionBehavior)     EmptyBehavior                                               OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
/// Size: 0x0038 (0x000000 - 0x000038)
class FGeometryScriptDisplaceFromTextureOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 UVScale                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 UVOffset                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     Center                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   ImageChannel                                                OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(EGeometryScriptEmptySelectionBehavior)     EmptyBehavior                                               OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshEditPolygroupOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptMeshEditPolygroupOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EGeometryScriptMeshEditPolygroupMode)      GroupMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   ConstantGroup                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshOffsetOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryScriptMeshOffsetOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     OffsetDistance                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bFixedBoundary                                              OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   SolveSteps                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     SmoothAlpha                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bReprojectDuringSmoothing                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     BoundaryAlpha                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryScriptMeshExtrudeOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     ExtrudeDistance                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   ExtrudeDirection                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     UVScale                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bSolidsToShells                                             OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshLinearExtrudeOptions
/// Size: 0x0038 (0x000000 - 0x000038)
class FGeometryScriptMeshLinearExtrudeOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EGeometryScriptLinearExtrudeDirection)     DirectionMode                                               OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EGeometryScriptPolyOperationArea)          AreaMode                                                    OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FGeometryScriptMeshEditPolygroupOptions)   GroupOptions                                                OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	DMember(float)                                     UVScale                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bSolidsToShells                                             OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshOffsetFacesOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryScriptMeshOffsetFacesOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EGeometryScriptOffsetFacesType)            OffsetType                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EGeometryScriptPolyOperationArea)          AreaMode                                                    OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FGeometryScriptMeshEditPolygroupOptions)   GroupOptions                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(float)                                     UVScale                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bSolidsToShells                                             OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshInsetOutsetFacesOptions
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryScriptMeshInsetOutsetFacesOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bReproject                                                  OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bBoundaryOnly                                               OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(float)                                     Softness                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AreaScale                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EGeometryScriptPolyOperationArea)          AreaMode                                                    OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FGeometryScriptMeshEditPolygroupOptions)   GroupOptions                                                OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	DMember(float)                                     UVScale                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshBevelOptions
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FGeometryScriptMeshBevelOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     BevelDistance                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bInferMaterialID                                            OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   SetMaterialID                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bApplyFilterBox                                             OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FBox)                                      FilterBox                                                   OFFSET(getStruct<T>, {0x10, 56, 0, 0})
	SMember(FTransform)                                FilterBoxTransform                                          OFFSET(getStruct<T>, {0x50, 96, 0, 0})
	DMember(bool)                                      bFullyContained                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshBevelSelectionOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptMeshBevelSelectionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     BevelDistance                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bInferMaterialID                                            OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   SetMaterialID                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FGeometryScriptCalculateNormalsOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bAngleWeighted                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAreaWeighted                                               OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSplitNormalsOptions
/// Size: 0x0014 (0x000000 - 0x000014)
class FGeometryScriptSplitNormalsOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bSplitByOpeningAngle                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     OpeningAngleDeg                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSplitByFaceGroup                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FGeometryScriptGroupLayer)                 GroupLayer                                                  OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTangentsOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptTangentsOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EGeometryScriptTangentTypes)               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   UVLayer                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPrimitiveOptions
/// Size: 0x0003 (0x000000 - 0x000003)
class FGeometryScriptPrimitiveOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	CMember(EGeometryScriptPrimitivePolygroupMode)     PolygroupMode                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bFlipOrientation                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(EGeometryScriptPrimitiveUVMode)            UVMode                                                      OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRevolveOptions
/// Size: 0x0014 (0x000000 - 0x000014)
class FGeometryScriptRevolveOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     RevolveDegrees                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DegreeOffset                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bReverseDirection                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bHardNormals                                                OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(float)                                     HardNormalAngle                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bProfileAtMidpoint                                          OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bFillPartialRevolveEndcaps                                  OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptVoronoiOptions
/// Size: 0x0058 (0x000000 - 0x000058)
class FGeometryScriptVoronoiOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     BoundsExpand                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	CMember(TArray<int32_t>)                           CreateCells                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bIncludeBoundary                                            OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConstrainedDelaunayTriangulationOptions
/// Size: 0x0003 (0x000000 - 0x000003)
class FGeometryScriptConstrainedDelaunayTriangulationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	CMember(EGeometryScriptPolygonFillMode)            ConstrainedEdgesFillMode                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bValidateEdgesInResult                                      OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bRemoveDuplicateVertices                                    OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPolygonsTriangulationOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryScriptPolygonsTriangulationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bStillAppendOnTriangulationError                            OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRemeshOptions
/// Size: 0x001C (0x000000 - 0x00001C)
class FGeometryScriptRemeshOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bDiscardAttributes                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bReprojectToInputMesh                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(EGeometryScriptRemeshSmoothingType)        SmoothingType                                               OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(float)                                     SmoothingRate                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EGeometryScriptRemeshEdgeConstraintType)   MeshBoundaryConstraint                                      OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EGeometryScriptRemeshEdgeConstraintType)   GroupBoundaryConstraint                                     OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(EGeometryScriptRemeshEdgeConstraintType)   MaterialBoundaryConstraint                                  OFFSET(get<T>, {0xA, 1, 0, 0})
	DMember(bool)                                      bAllowFlips                                                 OFFSET(get<bool>, {0xB, 1, 0, 0})
	DMember(bool)                                      bAllowSplits                                                OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bAllowCollapses                                             OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      bPreventNormalFlips                                         OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(bool)                                      bPreventTinyTriangles                                       OFFSET(get<bool>, {0xF, 1, 0, 0})
	DMember(bool)                                      bUseFullRemeshPasses                                        OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   RemeshIterations                                            OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bAutoCompact                                                OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptUniformRemeshOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptUniformRemeshOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EGeometryScriptUniformRemeshTargetType)    TargetType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   TargetTriangleCount                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     TargetEdgeLength                                            OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptWeldEdgesOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptWeldEdgesOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bOnlyUniquePairs                                            OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptResolveTJunctionOptions
/// Size: 0x0004 (0x000000 - 0x000004)
class FGeometryScriptResolveTJunctionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptFillHolesOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FGeometryScriptFillHolesOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EGeometryScriptFillHolesMethod)            FillMethod                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bDeleteIsolatedTriangles                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptRemoveSmallComponentOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MinVolume                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MinArea                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MinTriangleCount                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
/// Size: 0x001C (0x000000 - 0x00001C)
class FGeometryScriptRemoveHiddenTrianglesOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(EGeometryScriptRemoveHiddenTrianglesMethod) Method                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   SamplesPerTriangle                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ShrinkSelection                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     WindingIsoValue                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   RaysPerSample                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     NormalOffset                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bCompactResult                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDegenerateTriangleOptions
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryScriptDegenerateTriangleOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EGeometryScriptRepairMeshMode)             Mode                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(double)                                    MinTriangleArea                                             OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    MinEdgeLength                                               OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      bCompactOnCompletion                                        OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshPointSamplingOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryScriptMeshPointSamplingOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     SamplingRadius                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxNumSamples                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(double)                                    SubSampleDensity                                            OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptNonUniformPointSamplingOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryScriptNonUniformPointSamplingOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     MaxSamplingRadius                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EGeometryScriptSamplingDistributionMode)   SizeDistribution                                            OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(double)                                    SizeDistributionPower                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	CMember(EGeometryScriptSamplingWeightMode)         WeightMode                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bInvertWeights                                              OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptPlanarSimplifyOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     AngleThreshold                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAutoCompact                                                OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptPolygroupSimplifyOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     AngleThreshold                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAutoCompact                                                OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
/// Size: 0x0007 (0x000000 - 0x000007)
class FGeometryScriptSimplifyMeshOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 7;

public:
	CMember(EGeometryScriptRemoveMeshSimplificationType) Method                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAllowSeamCollapse                                          OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bAllowSeamSmoothing                                         OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bAllowSeamSplits                                            OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bPreserveVertexPositions                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bRetainQuadricMemory                                        OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bAutoCompact                                                OFFSET(get<bool>, {0x6, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSpatialQueryOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptSpatialQueryOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAllowUnsafeModifiedQueries                                 OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     WindingIsoThreshold                                         OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRayHitResult
/// Size: 0x0040 (0x000000 - 0x000040)
class FGeometryScriptRayHitResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     RayParameter                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   HitTriangleID                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FVector)                                   HitPosition                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   HitBaryCoords                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPNTessellateOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryScriptPNTessellateOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bRecomputeNormals                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSelectiveTessellateOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FGeometryScriptSelectiveTessellateOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bEnableMultithreading                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EGeometryScriptEmptySelectionBehavior)     EmptyBehavior                                               OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRepackUVsOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptRepackUVsOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   TargetImageWidth                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bOptimizeIslandRotation                                     OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptExpMapUVOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryScriptExpMapUVOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NormalSmoothingRounds                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     NormalSmoothingAlpha                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSpectralConformalUVOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryScriptSpectralConformalUVOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bPreserveIrregularity                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
/// Size: 0x001C (0x000000 - 0x00001C)
class FGeometryScriptRecomputeUVsOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(EGeometryScriptUVFlattenMethod)            Method                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EGeometryScriptUVIslandSource)             IslandSource                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FGeometryScriptExpMapUVOptions)            ExpMapOptions                                               OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FGeometryScriptSpectralConformalUVOptions) SpectralConformalOptions                                    OFFSET(getStruct<T>, {0xC, 1, 0, 0})
	SMember(FGeometryScriptGroupLayer)                 GroupLayer                                                  OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bAutoAlignIslandsWithAxes                                   OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPatchBuilderOptions
/// Size: 0x0034 (0x000000 - 0x000034)
class FGeometryScriptPatchBuilderOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(int32_t)                                   InitialPatchCount                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinPatchSize                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     PatchCurvatureAlignmentWeight                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PatchMergingMetricThresh                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PatchMergingAngleThresh                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FGeometryScriptExpMapUVOptions)            ExpMapOptions                                               OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	DMember(bool)                                      bRespectInputGroups                                         OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FGeometryScriptGroupLayer)                 GroupLayer                                                  OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bAutoPack                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FGeometryScriptRepackUVsOptions)           PackingOptions                                              OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptXAtlasOptions
/// Size: 0x0004 (0x000000 - 0x000004)
class FGeometryScriptXAtlasOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBlurMeshVertexColorsOptions
/// Size: 0x0004 (0x000000 - 0x000004)
class FGeometryScriptBlurMeshVertexColorsOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      Red                                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      Green                                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      Blue                                                        OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      Alpha                                                       OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScript3DGridParameters
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScript3DGridParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EGeometryScriptGridSizingMethod)           SizeMethod                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     GridCellSize                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   GridResolution                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSolidifyOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryScriptSolidifyOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGeometryScript3DGridParameters)           GridParameters                                              OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     WindingThreshold                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bSolidAtBoundaries                                          OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     ExtendBounds                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   SurfaceSearchSteps                                          OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bThickenShells                                              OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(double)                                    ShellThickness                                              OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMorphologyOptions
/// Size: 0x0024 (0x000000 - 0x000024)
class FGeometryScriptMorphologyOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FGeometryScript3DGridParameters)           SDFGridParameters                                           OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(bool)                                      bUseSeparateMeshGrid                                        OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FGeometryScript3DGridParameters)           MeshGridParameters                                          OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(EGeometryScriptMorphologicalOpType)        Operation                                                   OFFSET(get<T>, {0x1C, 1, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPointClusteringOptions
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryScriptPointClusteringOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FVector>)                           InitialClusterCenters                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   TargetNumClusters                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(EGeometryScriptInitKMeansMethod)           InitializeMethod                                            OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPointPriorityOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryScriptPointPriorityOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<float>)                             OptionalPriorityWeights                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bUniformSpacing                                             OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPointFlatteningOptions
/// Size: 0x0070 (0x000000 - 0x000070)
class FGeometryScriptPointFlatteningOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Frame                                                       OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	CMember(EGeometryScriptAxis)                       DropAxis                                                    OFFSET(get<T>, {0x60, 1, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPolygonOffsetOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryScriptPolygonOffsetOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGeometryScriptPolyOffsetJoinType)         JoinType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(double)                                    MiterLimit                                                  OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(bool)                                      bOffsetBothSides                                            OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(double)                                    StepsPerRadianScale                                         OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    MaximumStepsPerRadian                                       OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptOpenPathOffsetOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryScriptOpenPathOffsetOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGeometryScriptPolyOffsetJoinType)         JoinType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(double)                                    MiterLimit                                                  OFFSET(get<double>, {0x8, 8, 0, 0})
	CMember(EGeometryScriptPathOffsetEndType)          EndType                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(double)                                    StepsPerRadianScale                                         OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    MaximumStepsPerRadian                                       OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSplineSamplingOptions
/// Size: 0x0014 (0x000000 - 0x000014)
class FGeometryScriptSplineSamplingOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumSamples                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     ErrorTolerance                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EGeometryScriptSampleSpacing)              SampleSpacing                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TEnumAsByte<ESplineCoordinateSpace>)       CoordinateSpace                                             OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(EGeometryScriptEvaluateSplineRange)        RangeMethod                                                 OFFSET(get<T>, {0xA, 1, 0, 0})
	DMember(float)                                     RangeStart                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     RangeEnd                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryScriptCopyMeshFromComponentOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bWantNormals                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bWantTangents                                               OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FGeometryScriptMeshReadLOD)                RequestedLOD                                                OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDetermineMeshOcclusionOptions
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryScriptDetermineMeshOcclusionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    SamplingDensity                                             OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(bool)                                      bDoubleSided                                                OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   NumSearchDirections                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSampleTextureOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryScriptSampleTextureOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGeometryScriptPixelSamplingMethod)        SamplingMethod                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bWrap                                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FVector2D)                                 UVScale                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 UVOffset                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptOutcomePins
/// Size: 0x03
enum EGeometryScriptOutcomePins : uint8_t
{
	EGeometryScriptOutcomePins__Failure                                              = 0,
	EGeometryScriptOutcomePins__Success                                              = 1,
	EGeometryScriptOutcomePins__EGeometryScriptOutcomePins_MAX                       = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSearchOutcomePins
/// Size: 0x03
enum EGeometryScriptSearchOutcomePins : uint8_t
{
	EGeometryScriptSearchOutcomePins__Found                                          = 0,
	EGeometryScriptSearchOutcomePins__NotFound                                       = 1,
	EGeometryScriptSearchOutcomePins__EGeometryScriptSearchOutcomePins_MAX           = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptContainmentOutcomePins
/// Size: 0x03
enum EGeometryScriptContainmentOutcomePins : uint8_t
{
	EGeometryScriptContainmentOutcomePins__Inside                                    = 0,
	EGeometryScriptContainmentOutcomePins__Outside                                   = 1,
	EGeometryScriptContainmentOutcomePins__EGeometryScriptContainmentOutcomePins_MAX = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptLODType
/// Size: 0x05
enum EGeometryScriptLODType : uint8_t
{
	EGeometryScriptLODType__MaxAvailable                                             = 0,
	EGeometryScriptLODType__HiResSourceModel                                         = 1,
	EGeometryScriptLODType__SourceModel                                              = 2,
	EGeometryScriptLODType__RenderData                                               = 3,
	EGeometryScriptLODType__EGeometryScriptLODType_MAX                               = 4
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptAxis
/// Size: 0x04
enum EGeometryScriptAxis : uint8_t
{
	EGeometryScriptAxis__X                                                           = 0,
	EGeometryScriptAxis__Y                                                           = 1,
	EGeometryScriptAxis__Z                                                           = 2,
	EGeometryScriptAxis__EGeometryScriptAxis_MAX                                     = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptCoordinateSpace
/// Size: 0x03
enum EGeometryScriptCoordinateSpace : uint8_t
{
	EGeometryScriptCoordinateSpace__Local                                            = 0,
	EGeometryScriptCoordinateSpace__World                                            = 1,
	EGeometryScriptCoordinateSpace__EGeometryScriptCoordinateSpace_MAX               = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptIndexType
/// Size: 0x06
enum EGeometryScriptIndexType : uint8_t
{
	EGeometryScriptIndexType__Any                                                    = 0,
	EGeometryScriptIndexType__Triangle                                               = 1,
	EGeometryScriptIndexType__Vertex                                                 = 2,
	EGeometryScriptIndexType__MaterialID                                             = 3,
	EGeometryScriptIndexType__PolygroupID                                            = 4,
	EGeometryScriptIndexType__EGeometryScriptIndexType_MAX                           = 5
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptDebugMessageType
/// Size: 0x03
enum EGeometryScriptDebugMessageType : uint8_t
{
	EGeometryScriptDebugMessageType__ErrorMessage                                    = 0,
	EGeometryScriptDebugMessageType__WarningMessage                                  = 1,
	EGeometryScriptDebugMessageType__EGeometryScriptDebugMessageType_MAX             = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptErrorType
/// Size: 0x05
enum EGeometryScriptErrorType : uint8_t
{
	EGeometryScriptErrorType__NoError                                                = 0,
	EGeometryScriptErrorType__UnknownError                                           = 1,
	EGeometryScriptErrorType__InvalidInputs                                          = 2,
	EGeometryScriptErrorType__OperationFailed                                        = 3,
	EGeometryScriptErrorType__EGeometryScriptErrorType_MAX                           = 4
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptCollisionGenerationMethod
/// Size: 0x08
enum EGeometryScriptCollisionGenerationMethod : uint8_t
{
	EGeometryScriptCollisionGenerationMethod__AlignedBoxes                           = 0,
	EGeometryScriptCollisionGenerationMethod__OrientedBoxes                          = 1,
	EGeometryScriptCollisionGenerationMethod__MinimalSpheres                         = 2,
	EGeometryScriptCollisionGenerationMethod__Capsules                               = 3,
	EGeometryScriptCollisionGenerationMethod__ConvexHulls                            = 4,
	EGeometryScriptCollisionGenerationMethod__SweptHulls                             = 5,
	EGeometryScriptCollisionGenerationMethod__MinVolumeShapes                        = 6,
	EGeometryScriptCollisionGenerationMethod__EGeometryScriptCollisionGenerationMethod_MAX = 7
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSweptHullAxis
/// Size: 0x06
enum EGeometryScriptSweptHullAxis : uint8_t
{
	EGeometryScriptSweptHullAxis__X                                                  = 0,
	EGeometryScriptSweptHullAxis__Y                                                  = 1,
	EGeometryScriptSweptHullAxis__Z                                                  = 2,
	EGeometryScriptSweptHullAxis__SmallestBoxDimension                               = 3,
	EGeometryScriptSweptHullAxis__SmallestVolume                                     = 4,
	EGeometryScriptSweptHullAxis__EGeometryScriptSweptHullAxis_MAX                   = 5
};

/// Enum /Script/GeometryScriptingCore.ENegativeSpaceSampleMethod
/// Size: 0x03
enum ENegativeSpaceSampleMethod : uint8_t
{
	ENegativeSpaceSampleMethod__Uniform                                              = 0,
	ENegativeSpaceSampleMethod__VoxelSearch                                          = 1,
	ENegativeSpaceSampleMethod__ENegativeSpaceSampleMethod_MAX                       = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptConvexHullSimplifyMethod
/// Size: 0x03
enum EGeometryScriptConvexHullSimplifyMethod : uint8_t
{
	EGeometryScriptConvexHullSimplifyMethod__MeshQSlim                               = 0,
	EGeometryScriptConvexHullSimplifyMethod__AngleTolerance                          = 1,
	EGeometryScriptConvexHullSimplifyMethod__EGeometryScriptConvexHullSimplifyMethod_MAX = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshSelectionType
/// Size: 0x04
enum EGeometryScriptMeshSelectionType : uint8_t
{
	EGeometryScriptMeshSelectionType__Vertices                                       = 0,
	EGeometryScriptMeshSelectionType__Triangles                                      = 1,
	EGeometryScriptMeshSelectionType__Polygroups                                     = 2,
	EGeometryScriptMeshSelectionType__EGeometryScriptMeshSelectionType_MAX           = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshSelectionConversionType
/// Size: 0x05
enum EGeometryScriptMeshSelectionConversionType : uint8_t
{
	EGeometryScriptMeshSelectionConversionType__NoConversion                         = 0,
	EGeometryScriptMeshSelectionConversionType__ToVertices                           = 1,
	EGeometryScriptMeshSelectionConversionType__ToTriangles                          = 2,
	EGeometryScriptMeshSelectionConversionType__ToPolygroups                         = 3,
	EGeometryScriptMeshSelectionConversionType__EGeometryScriptMeshSelectionConversionType_MAX = 4
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptCombineSelectionMode
/// Size: 0x04
enum EGeometryScriptCombineSelectionMode : uint8_t
{
	EGeometryScriptCombineSelectionMode__Add                                         = 0,
	EGeometryScriptCombineSelectionMode__Subtract                                    = 1,
	EGeometryScriptCombineSelectionMode__Intersection                                = 2,
	EGeometryScriptCombineSelectionMode__EGeometryScriptCombineSelectionMode_MAX     = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptEmptySelectionBehavior
/// Size: 0x03
enum EGeometryScriptEmptySelectionBehavior : uint8_t
{
	EGeometryScriptEmptySelectionBehavior__FullMeshSelection                         = 0,
	EGeometryScriptEmptySelectionBehavior__EmptySelection                            = 1,
	EGeometryScriptEmptySelectionBehavior__EGeometryScriptEmptySelectionBehavior_MAX = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeResolution
/// Size: 0x11
enum EGeometryScriptBakeResolution : uint8_t
{
	EGeometryScriptBakeResolution__Resolution16                                      = 0,
	EGeometryScriptBakeResolution__Resolution32                                      = 1,
	EGeometryScriptBakeResolution__Resolution64                                      = 2,
	EGeometryScriptBakeResolution__Resolution128                                     = 3,
	EGeometryScriptBakeResolution__Resolution256                                     = 4,
	EGeometryScriptBakeResolution__Resolution512                                     = 5,
	EGeometryScriptBakeResolution__Resolution1024                                    = 6,
	EGeometryScriptBakeResolution__Resolution2048                                    = 7,
	EGeometryScriptBakeResolution__Resolution4096                                    = 8,
	EGeometryScriptBakeResolution__Resolution8192                                    = 9,
	EGeometryScriptBakeResolution__EGeometryScriptBakeResolution_MAX                 = 10
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeBitDepth
/// Size: 0x03
enum EGeometryScriptBakeBitDepth : uint8_t
{
	EGeometryScriptBakeBitDepth__ChannelBits8                                        = 0,
	EGeometryScriptBakeBitDepth__ChannelBits16                                       = 1,
	EGeometryScriptBakeBitDepth__EGeometryScriptBakeBitDepth_MAX                     = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeSamplesPerPixel
/// Size: 0x06
enum EGeometryScriptBakeSamplesPerPixel : uint8_t
{
	EGeometryScriptBakeSamplesPerPixel__Sample1                                      = 0,
	EGeometryScriptBakeSamplesPerPixel__Sample4                                      = 1,
	EGeometryScriptBakeSamplesPerPixel__Sample16                                     = 2,
	EGeometryScriptBakeSamplesPerPixel__Sample64                                     = 3,
	EGeometryScriptBakeSamplesPerPixel__Samples256                                   = 4,
	EGeometryScriptBakeSamplesPerPixel__EGeometryScriptBakeSamplesPerPixel_MAX       = 5
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeFilteringType
/// Size: 0x03
enum EGeometryScriptBakeFilteringType : uint8_t
{
	EGeometryScriptBakeFilteringType__BSpline                                        = 0,
	EGeometryScriptBakeFilteringType__Box                                            = 1,
	EGeometryScriptBakeFilteringType__EGeometryScriptBakeFilteringType_MAX           = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeTypes
/// Size: 0x12
enum EGeometryScriptBakeTypes : uint8_t
{
	EGeometryScriptBakeTypes__TangentSpaceNormal                                     = 0,
	EGeometryScriptBakeTypes__ObjectSpaceNormal                                      = 1,
	EGeometryScriptBakeTypes__FaceNormal                                             = 2,
	EGeometryScriptBakeTypes__BentNormal                                             = 3,
	EGeometryScriptBakeTypes__Position                                               = 4,
	EGeometryScriptBakeTypes__Curvature                                              = 5,
	EGeometryScriptBakeTypes__AmbientOcclusion                                       = 6,
	EGeometryScriptBakeTypes__Texture                                                = 7,
	EGeometryScriptBakeTypes__MultiTexture                                           = 8,
	EGeometryScriptBakeTypes__VertexColor                                            = 9,
	EGeometryScriptBakeTypes__MaterialID                                             = 10,
	EGeometryScriptBakeTypes__EGeometryScriptBakeTypes_MAX                           = 11
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeOutputMode
/// Size: 0x03
enum EGeometryScriptBakeOutputMode : uint8_t
{
	EGeometryScriptBakeOutputMode__RGBA                                              = 0,
	EGeometryScriptBakeOutputMode__PerChannel                                        = 1,
	EGeometryScriptBakeOutputMode__EGeometryScriptBakeOutputMode_MAX                 = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeNormalSpace
/// Size: 0x03
enum EGeometryScriptBakeNormalSpace : uint8_t
{
	EGeometryScriptBakeNormalSpace__Tangent                                          = 0,
	EGeometryScriptBakeNormalSpace__Object                                           = 1,
	EGeometryScriptBakeNormalSpace__EGeometryScriptBakeNormalSpace_MAX               = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeCurvatureTypeMode
/// Size: 0x04
enum EGeometryScriptBakeCurvatureTypeMode : uint8_t
{
	EGeometryScriptBakeCurvatureTypeMode__Mean                                       = 0,
	EGeometryScriptBakeCurvatureTypeMode__Max                                        = 1,
	EGeometryScriptBakeCurvatureTypeMode__Min                                        = 2,
	EGeometryScriptBakeCurvatureTypeMode__Gaussian                                   = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeCurvatureColorMode
/// Size: 0x04
enum EGeometryScriptBakeCurvatureColorMode : uint8_t
{
	EGeometryScriptBakeCurvatureColorMode__Grayscale                                 = 0,
	EGeometryScriptBakeCurvatureColorMode__RedBlue                                   = 1,
	EGeometryScriptBakeCurvatureColorMode__RedGreenBlue                              = 2,
	EGeometryScriptBakeCurvatureColorMode__EGeometryScriptBakeCurvatureColorMode_MAX = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeCurvatureClampMode
/// Size: 0x04
enum EGeometryScriptBakeCurvatureClampMode : uint8_t
{
	EGeometryScriptBakeCurvatureClampMode__None                                      = 0,
	EGeometryScriptBakeCurvatureClampMode__OnlyPositive                              = 1,
	EGeometryScriptBakeCurvatureClampMode__OnlyNegative                              = 2,
	EGeometryScriptBakeCurvatureClampMode__EGeometryScriptBakeCurvatureClampMode_MAX = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptCombineAttributesMode
/// Size: 0x04
enum EGeometryScriptCombineAttributesMode : uint8_t
{
	EGeometryScriptCombineAttributesMode__EnableAllMatching                          = 0,
	EGeometryScriptCombineAttributesMode__UseTarget                                  = 1,
	EGeometryScriptCombineAttributesMode__UseSource                                  = 2,
	EGeometryScriptCombineAttributesMode__EGeometryScriptCombineAttributesMode_MAX   = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSmoothBoneWeightsType
/// Size: 0x03
enum EGeometryScriptSmoothBoneWeightsType : uint8_t
{
	EGeometryScriptSmoothBoneWeightsType__DirectDistance                             = 0,
	EGeometryScriptSmoothBoneWeightsType__GeodesicVoxel                              = 1,
	EGeometryScriptSmoothBoneWeightsType__EGeometryScriptSmoothBoneWeightsType_MAX   = 2
};

/// Enum /Script/GeometryScriptingCore.ETransferBoneWeightsMethod
/// Size: 0x03
enum ETransferBoneWeightsMethod : uint8_t
{
	ETransferBoneWeightsMethod__ClosestPointOnSurface                                = 0,
	ETransferBoneWeightsMethod__InpaintWeights                                       = 1,
	ETransferBoneWeightsMethod__ETransferBoneWeightsMethod_MAX                       = 2
};

/// Enum /Script/GeometryScriptingCore.EOutputTargetMeshBones
/// Size: 0x03
enum EOutputTargetMeshBones : uint8_t
{
	EOutputTargetMeshBones__SourceBones                                              = 0,
	EOutputTargetMeshBones__TargetBones                                              = 1,
	EOutputTargetMeshBones__EOutputTargetMeshBones_MAX                               = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBooleanOperation
/// Size: 0x04
enum EGeometryScriptBooleanOperation : uint8_t
{
	EGeometryScriptBooleanOperation__Union                                           = 0,
	EGeometryScriptBooleanOperation__Intersection                                    = 1,
	EGeometryScriptBooleanOperation__Subtract                                        = 2,
	EGeometryScriptBooleanOperation__EGeometryScriptBooleanOperation_MAX             = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptFlareType
/// Size: 0x04
enum EGeometryScriptFlareType : uint8_t
{
	EGeometryScriptFlareType__SinMode                                                = 0,
	EGeometryScriptFlareType__SinSquaredMode                                         = 1,
	EGeometryScriptFlareType__TriangleMode                                           = 2,
	EGeometryScriptFlareType__EGeometryScriptFlareType_MAX                           = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMathWarpType
/// Size: 0x04
enum EGeometryScriptMathWarpType : uint8_t
{
	EGeometryScriptMathWarpType__SinWave1D                                           = 0,
	EGeometryScriptMathWarpType__SinWave2D                                           = 1,
	EGeometryScriptMathWarpType__SinWave3D                                           = 2,
	EGeometryScriptMathWarpType__EGeometryScriptMathWarpType_MAX                     = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshEditPolygroupMode
/// Size: 0x04
enum EGeometryScriptMeshEditPolygroupMode : uint8_t
{
	EGeometryScriptMeshEditPolygroupMode__PreserveExisting                           = 0,
	EGeometryScriptMeshEditPolygroupMode__AutoGenerateNew                            = 1,
	EGeometryScriptMeshEditPolygroupMode__SetConstant                                = 2,
	EGeometryScriptMeshEditPolygroupMode__EGeometryScriptMeshEditPolygroupMode_MAX   = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPolyOperationArea
/// Size: 0x04
enum EGeometryScriptPolyOperationArea : uint8_t
{
	EGeometryScriptPolyOperationArea__EntireSelection                                = 0,
	EGeometryScriptPolyOperationArea__PerPolygroup                                   = 1,
	EGeometryScriptPolyOperationArea__PerTriangle                                    = 2,
	EGeometryScriptPolyOperationArea__EGeometryScriptPolyOperationArea_MAX           = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptLinearExtrudeDirection
/// Size: 0x03
enum EGeometryScriptLinearExtrudeDirection : uint8_t
{
	EGeometryScriptLinearExtrudeDirection__FixedDirection                            = 0,
	EGeometryScriptLinearExtrudeDirection__AverageFaceNormal                         = 1,
	EGeometryScriptLinearExtrudeDirection__EGeometryScriptLinearExtrudeDirection_MAX = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptOffsetFacesType
/// Size: 0x04
enum EGeometryScriptOffsetFacesType : uint8_t
{
	EGeometryScriptOffsetFacesType__VertexNormal                                     = 0,
	EGeometryScriptOffsetFacesType__FaceNormal                                       = 1,
	EGeometryScriptOffsetFacesType__ParallelFaceOffset                               = 2,
	EGeometryScriptOffsetFacesType__EGeometryScriptOffsetFacesType_MAX               = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshBevelSelectionMode
/// Size: 0x04
enum EGeometryScriptMeshBevelSelectionMode : uint8_t
{
	EGeometryScriptMeshBevelSelectionMode__TriangleArea                              = 0,
	EGeometryScriptMeshBevelSelectionMode__AllPolygroupEdges                         = 1,
	EGeometryScriptMeshBevelSelectionMode__SharedPolygroupEdges                      = 2,
	EGeometryScriptMeshBevelSelectionMode__EGeometryScriptMeshBevelSelectionMode_MAX = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptTangentTypes
/// Size: 0x03
enum EGeometryScriptTangentTypes : uint8_t
{
	EGeometryScriptTangentTypes__FastMikkT                                           = 0,
	EGeometryScriptTangentTypes__PerTriangle                                         = 1,
	EGeometryScriptTangentTypes__EGeometryScriptTangentTypes_MAX                     = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPrimitivePolygroupMode
/// Size: 0x04
enum EGeometryScriptPrimitivePolygroupMode : uint8_t
{
	EGeometryScriptPrimitivePolygroupMode__SingleGroup                               = 0,
	EGeometryScriptPrimitivePolygroupMode__PerFace                                   = 1,
	EGeometryScriptPrimitivePolygroupMode__PerQuad                                   = 2,
	EGeometryScriptPrimitivePolygroupMode__EGeometryScriptPrimitivePolygroupMode_MAX = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPrimitiveOriginMode
/// Size: 0x03
enum EGeometryScriptPrimitiveOriginMode : uint8_t
{
	EGeometryScriptPrimitiveOriginMode__Center                                       = 0,
	EGeometryScriptPrimitiveOriginMode__Base                                         = 1,
	EGeometryScriptPrimitiveOriginMode__EGeometryScriptPrimitiveOriginMode_MAX       = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPrimitiveUVMode
/// Size: 0x03
enum EGeometryScriptPrimitiveUVMode : uint8_t
{
	EGeometryScriptPrimitiveUVMode__Uniform                                          = 0,
	EGeometryScriptPrimitiveUVMode__ScaleToFill                                      = 1,
	EGeometryScriptPrimitiveUVMode__EGeometryScriptPrimitiveUVMode_MAX               = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPolygonFillMode
/// Size: 0x07
enum EGeometryScriptPolygonFillMode : uint8_t
{
	EGeometryScriptPolygonFillMode__All                                              = 0,
	EGeometryScriptPolygonFillMode__Solid                                            = 1,
	EGeometryScriptPolygonFillMode__PositiveWinding                                  = 2,
	EGeometryScriptPolygonFillMode__NonZeroWinding                                   = 3,
	EGeometryScriptPolygonFillMode__NegativeWinding                                  = 4,
	EGeometryScriptPolygonFillMode__OddWinding                                       = 5,
	EGeometryScriptPolygonFillMode__EGeometryScriptPolygonFillMode_MAX               = 6
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptUniformRemeshTargetType
/// Size: 0x03
enum EGeometryScriptUniformRemeshTargetType : uint8_t
{
	EGeometryScriptUniformRemeshTargetType__TriangleCount                            = 0,
	EGeometryScriptUniformRemeshTargetType__TargetEdgeLength                         = 1,
	EGeometryScriptUniformRemeshTargetType__EGeometryScriptUniformRemeshTargetType_MAX = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRemeshEdgeConstraintType
/// Size: 0x05
enum EGeometryScriptRemeshEdgeConstraintType : uint8_t
{
	EGeometryScriptRemeshEdgeConstraintType__Fixed                                   = 0,
	EGeometryScriptRemeshEdgeConstraintType__Refine                                  = 1,
	EGeometryScriptRemeshEdgeConstraintType__Free                                    = 2,
	EGeometryScriptRemeshEdgeConstraintType__Ignore                                  = 3,
	EGeometryScriptRemeshEdgeConstraintType__EGeometryScriptRemeshEdgeConstraintType_MAX = 4
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRemeshSmoothingType
/// Size: 0x04
enum EGeometryScriptRemeshSmoothingType : uint8_t
{
	EGeometryScriptRemeshSmoothingType__Uniform                                      = 0,
	EGeometryScriptRemeshSmoothingType__UVPreserving                                 = 1,
	EGeometryScriptRemeshSmoothingType__Mixed                                        = 2,
	EGeometryScriptRemeshSmoothingType__EGeometryScriptRemeshSmoothingType_MAX       = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptFillHolesMethod
/// Size: 0x06
enum EGeometryScriptFillHolesMethod : uint8_t
{
	EGeometryScriptFillHolesMethod__Automatic                                        = 0,
	EGeometryScriptFillHolesMethod__MinimalFill                                      = 1,
	EGeometryScriptFillHolesMethod__PolygonTriangulation                             = 2,
	EGeometryScriptFillHolesMethod__TriangleFan                                      = 3,
	EGeometryScriptFillHolesMethod__PlanarProjection                                 = 4,
	EGeometryScriptFillHolesMethod__EGeometryScriptFillHolesMethod_MAX               = 5
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRemoveHiddenTrianglesMethod
/// Size: 0x03
enum EGeometryScriptRemoveHiddenTrianglesMethod : uint8_t
{
	EGeometryScriptRemoveHiddenTrianglesMethod__FastWindingNumber                    = 0,
	EGeometryScriptRemoveHiddenTrianglesMethod__RaycastOcclusionTest                 = 1,
	EGeometryScriptRemoveHiddenTrianglesMethod__EGeometryScriptRemoveHiddenTrianglesMethod_MAX = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRepairMeshMode
/// Size: 0x04
enum EGeometryScriptRepairMeshMode : uint8_t
{
	EGeometryScriptRepairMeshMode__DeleteOnly                                        = 0,
	EGeometryScriptRepairMeshMode__RepairOrDelete                                    = 1,
	EGeometryScriptRepairMeshMode__RepairOrSkip                                      = 2,
	EGeometryScriptRepairMeshMode__EGeometryScriptRepairMeshMode_MAX                 = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSamplingWeightMode
/// Size: 0x04
enum EGeometryScriptSamplingWeightMode : uint8_t
{
	EGeometryScriptSamplingWeightMode__WeightToRadius                                = 0,
	EGeometryScriptSamplingWeightMode__FilledWeightToRadius                          = 1,
	EGeometryScriptSamplingWeightMode__WeightedRandom                                = 2,
	EGeometryScriptSamplingWeightMode__EGeometryScriptSamplingWeightMode_MAX         = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSamplingDistributionMode
/// Size: 0x04
enum EGeometryScriptSamplingDistributionMode : uint8_t
{
	EGeometryScriptSamplingDistributionMode__Uniform                                 = 0,
	EGeometryScriptSamplingDistributionMode__Smaller                                 = 1,
	EGeometryScriptSamplingDistributionMode__Larger                                  = 2,
	EGeometryScriptSamplingDistributionMode__EGeometryScriptSamplingDistributionMode_MAX = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptTopologyConnectionType
/// Size: 0x04
enum EGeometryScriptTopologyConnectionType : uint8_t
{
	EGeometryScriptTopologyConnectionType__Geometric                                 = 0,
	EGeometryScriptTopologyConnectionType__Polygroup                                 = 1,
	EGeometryScriptTopologyConnectionType__MaterialID                                = 2,
	EGeometryScriptTopologyConnectionType__EGeometryScriptTopologyConnectionType_MAX = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRemoveMeshSimplificationType
/// Size: 0x04
enum EGeometryScriptRemoveMeshSimplificationType : uint8_t
{
	EGeometryScriptRemoveMeshSimplificationType__StandardQEM                         = 0,
	EGeometryScriptRemoveMeshSimplificationType__VolumePreserving                    = 1,
	EGeometryScriptRemoveMeshSimplificationType__AttributeAware                      = 2,
	EGeometryScriptRemoveMeshSimplificationType__EGeometryScriptRemoveMeshSimplificationType_MAX = 3
};

/// Enum /Script/GeometryScriptingCore.ESelectiveTessellatePatternType
/// Size: 0x02
enum ESelectiveTessellatePatternType : uint8_t
{
	ESelectiveTessellatePatternType__ConcentricRings                                 = 0,
	ESelectiveTessellatePatternType__ESelectiveTessellatePatternType_MAX             = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptUVFlattenMethod
/// Size: 0x04
enum EGeometryScriptUVFlattenMethod : uint8_t
{
	EGeometryScriptUVFlattenMethod__ExpMap                                           = 0,
	EGeometryScriptUVFlattenMethod__Conformal                                        = 1,
	EGeometryScriptUVFlattenMethod__SpectralConformal                                = 2,
	EGeometryScriptUVFlattenMethod__EGeometryScriptUVFlattenMethod_MAX               = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptUVIslandSource
/// Size: 0x03
enum EGeometryScriptUVIslandSource : uint8_t
{
	EGeometryScriptUVIslandSource__PolyGroups                                        = 0,
	EGeometryScriptUVIslandSource__UVIslands                                         = 1,
	EGeometryScriptUVIslandSource__EGeometryScriptUVIslandSource_MAX                 = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBlurColorMode
/// Size: 0x04
enum EGeometryScriptBlurColorMode : uint8_t
{
	EGeometryScriptBlurColorMode__Uniform                                            = 0,
	EGeometryScriptBlurColorMode__EdgeLength                                         = 1,
	EGeometryScriptBlurColorMode__CotanWeights                                       = 2,
	EGeometryScriptBlurColorMode__EGeometryScriptBlurColorMode_MAX                   = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptGridSizingMethod
/// Size: 0x03
enum EGeometryScriptGridSizingMethod : uint8_t
{
	EGeometryScriptGridSizingMethod__GridCellSize                                    = 0,
	EGeometryScriptGridSizingMethod__GridResolution                                  = 1,
	EGeometryScriptGridSizingMethod__EGeometryScriptGridSizingMethod_MAX             = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMorphologicalOpType
/// Size: 0x05
enum EGeometryScriptMorphologicalOpType : uint8_t
{
	EGeometryScriptMorphologicalOpType__Dilate                                       = 0,
	EGeometryScriptMorphologicalOpType__Contract                                     = 1,
	EGeometryScriptMorphologicalOpType__Close                                        = 2,
	EGeometryScriptMorphologicalOpType__Open                                         = 3,
	EGeometryScriptMorphologicalOpType__EGeometryScriptMorphologicalOpType_MAX       = 4
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptInitKMeansMethod
/// Size: 0x03
enum EGeometryScriptInitKMeansMethod : uint8_t
{
	EGeometryScriptInitKMeansMethod__Random                                          = 0,
	EGeometryScriptInitKMeansMethod__UniformSpacing                                  = 1,
	EGeometryScriptInitKMeansMethod__EGeometryScriptInitKMeansMethod_MAX             = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPolyOffsetJoinType
/// Size: 0x04
enum EGeometryScriptPolyOffsetJoinType : uint8_t
{
	EGeometryScriptPolyOffsetJoinType__Square                                        = 0,
	EGeometryScriptPolyOffsetJoinType__Round                                         = 1,
	EGeometryScriptPolyOffsetJoinType__Miter                                         = 2,
	EGeometryScriptPolyOffsetJoinType__EGeometryScriptPolyOffsetJoinType_MAX         = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPathOffsetEndType
/// Size: 0x04
enum EGeometryScriptPathOffsetEndType : uint8_t
{
	EGeometryScriptPathOffsetEndType__Butt                                           = 0,
	EGeometryScriptPathOffsetEndType__Square                                         = 1,
	EGeometryScriptPathOffsetEndType__Round                                          = 2,
	EGeometryScriptPathOffsetEndType__EGeometryScriptPathOffsetEndType_MAX           = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSampleSpacing
/// Size: 0x04
enum EGeometryScriptSampleSpacing : uint8_t
{
	EGeometryScriptSampleSpacing__UniformDistance                                    = 0,
	EGeometryScriptSampleSpacing__UniformTime                                        = 1,
	EGeometryScriptSampleSpacing__ErrorTolerance                                     = 2,
	EGeometryScriptSampleSpacing__EGeometryScriptSampleSpacing_MAX                   = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptEvaluateSplineRange
/// Size: 0x05
enum EGeometryScriptEvaluateSplineRange : uint8_t
{
	EGeometryScriptEvaluateSplineRange__FullSpline                                   = 0,
	EGeometryScriptEvaluateSplineRange__DistanceRange                                = 1,
	EGeometryScriptEvaluateSplineRange__TimeRange_ConstantSpeed                      = 2,
	EGeometryScriptEvaluateSplineRange__TimeRange_VariableSpeed                      = 3,
	EGeometryScriptEvaluateSplineRange__EGeometryScriptEvaluateSplineRange_MAX       = 4
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPixelSamplingMethod
/// Size: 0x03
enum EGeometryScriptPixelSamplingMethod : uint8_t
{
	EGeometryScriptPixelSamplingMethod__Bilinear                                     = 0,
	EGeometryScriptPixelSamplingMethod__Nearest                                      = 1,
	EGeometryScriptPixelSamplingMethod__EGeometryScriptPixelSamplingMethod_MAX       = 2
};

