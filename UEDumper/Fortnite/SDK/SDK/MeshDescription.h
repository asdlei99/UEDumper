
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x05
enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None                                                        = 0,
	EComputeNTBsOptions__Normals                                                     = 1,
	EComputeNTBsOptions__Tangents                                                    = 2,
	EComputeNTBsOptions__WeightedNTBs                                                = 4,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX                                     = 5
};

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x02C8 (0x000028 - 0x0002F0)
class UMeshDescriptionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x2C8];                                     // 0x0028   (0x02C8)  MISSED


	/// Functions
	// Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition
	// void SetVertexPosition(FVertexID VertexID, FVector& Position);                                                        // [0x5af047c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
	// void SetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& VertexInstanceIDs);                   // [0x5aefcdc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	// void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);                                    // [0x5aefad0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	// void ReversePolygonFacing(FPolygonID PolygonID);                                                                      // [0x5aef9a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices
	// void ReserveNewVertices(int32_t NumberOfNewVertices);                                                                 // [0x5aef920] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	// void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);                                                   // [0x5aef708] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	// void ReserveNewTriangles(int32_t NumberOfNewTriangles);                                                               // [0x5aef8a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	// void ReserveNewPolygons(int32_t NumberOfNewPolygons);                                                                 // [0x5aef820] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	// void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);                                                       // [0x5aef788] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges
	// void ReserveNewEdges(int32_t NumberOfNewEdges);                                                                       // [0x5aef708] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid
	// bool IsVertexValid(FVertexID VertexID);                                                                               // [0x5aef5c4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	// bool IsVertexOrphaned(FVertexID VertexID);                                                                            // [0x5aef488] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	// bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID);                                                       // [0x5aef340] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid
	// bool IsTriangleValid(FTriangleID TriangleID);                                                                         // [0x5aef1f8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	// bool IsTrianglePartOfNgon(FTriangleID TriangleID);                                                                    // [0x5aef0bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid
	// bool IsPolygonValid(FPolygonID PolygonID);                                                                            // [0x5aeef74] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	// bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID);                                                             // [0x5aeee2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty
	// bool IsEmpty();                                                                                                       // [0x5aeee04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid
	// bool IsEdgeValid(FEdgeID EdgeID);                                                                                     // [0x5aeecbc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	// bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID);                                                   // [0x5aeeaa0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal
	// bool IsEdgeInternal(FEdgeID EdgeID);                                                                                  // [0x5aee964] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	// void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                   // [0x5aee1c4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition
	// FVector GetVertexPosition(FVertexID VertexID);                                                                        // [0x5aee074] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	// FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1);                                                  // [0x5aede60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	// FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                // [0x5aedd28] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	// FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1);          // [0x5aedb14] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	// FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID);                     // [0x5aed900] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	// FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID);                        // [0x5aed6ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
	// int32_t GetVertexInstanceCount();                                                                                     // [0x5aed6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	// void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs); // [0x5aecf20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0x5aec780] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexCount
	// int32_t GetVertexCount();                                                                                             // [0x5aec754] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	// void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs);                   // [0x5aebfb4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                      // [0x5aeb814] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs);                                        // [0x5aeb074] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                          // [0x5aea8d4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices
	// void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs);                                    // [0x5aea134] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	// void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);             // [0x5ae9994] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	// FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index);                                   // [0x5ae9784] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	// FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID);                                                      // [0x5ae964c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	// FPolygonID GetTrianglePolygon(FTriangleID TriangleID);                                                                // [0x5ae9514] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges
	// void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs);                                           // [0x5ae8d74] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleCount
	// int32_t GetTriangleCount();                                                                                           // [0x5ae8d48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	// void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs);                       // [0x5ae85a8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices
	// void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs);                                       // [0x5ae7e08] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	// void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                // [0x5ae7668] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	// void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs);                                  // [0x5ae6ec8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	// FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID);                                                         // [0x5ae6d90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                     // [0x5ae65f0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	// void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                      // [0x5ae5e50] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	// void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs);                      // [0x5ae56b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
	// int32_t GetPolygonGroupCount();                                                                                       // [0x5ae5684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonCount
	// int32_t GetPolygonCount();                                                                                            // [0x5ae5658] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs);                             // [0x5ae4eb8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	// int32_t GetNumVertexVertexInstances(FVertexID VertexID);                                                              // [0x5ae4d7c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	// int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID);                                   // [0x5ae4c40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	// int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID);                                    // [0x5ae4b04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	// int32_t GetNumVertexConnectedTriangles(FVertexID VertexID);                                                           // [0x5ae49c8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	// int32_t GetNumVertexConnectedPolygons(FVertexID VertexID);                                                            // [0x5ae488c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	// int32_t GetNumVertexConnectedEdges(FVertexID VertexID);                                                               // [0x5ae4750] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	// int32_t GetNumPolygonVertices(FPolygonID PolygonID);                                                                  // [0x5ae4614] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	// int32_t GetNumPolygonTriangles(FPolygonID PolygonID);                                                                 // [0x5ae44d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	// int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID);                                                             // [0x5ae439c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	// int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID);                                                   // [0x5ae4260] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	// int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID);                                                                 // [0x5ae4124] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	// int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID);                                                                  // [0x5ae3fe8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices
	// void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs);                                                // [0x5ae3848] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex
	// FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber);                                                        // [0x5ae3638] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeCount
	// int32_t GetEdgeCount();                                                                                               // [0x5ae360c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	// void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs);                         // [0x5ae2e6c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                            // [0x5ae26cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.Empty
	// void Empty();                                                                                                         // [0x5ae26b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	// void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);                   // [0x5ae1f14] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex
	// void DeleteVertex(FVertexID VertexID);                                                                                // [0x5ae1de4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle
	// void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr); // [0x5ae157c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	// void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);                                                              // [0x5ae144c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon
	// void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups); // [0x5ae0be4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge
	// void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);                                                 // [0x5ae0444] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID
	// void CreateVertexWithID(FVertexID VertexID);                                                                          // [0x5ae0314] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	// void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);                              // [0x5ae0108] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance
	// FVertexInstanceID CreateVertexInstance(FVertexID VertexID);                                                           // [0x5adffd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex
	// FVertexID CreateVertex();                                                                                             // [0x5adffa0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	// void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x5adf6b8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle
	// FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x5adeeb0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	// void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x5ade5c8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	// void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);                                                        // [0x5ade498] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	// FPolygonGroupID CreatePolygonGroup();                                                                                 // [0x5ade468] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon
	// FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x5addc60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	// void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);                                      // [0x5add984] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge
	// FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);                                                         // [0x5add770] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	// void ComputePolygonTriangulation(FPolygonID PolygonID);                                                               // [0x5add640] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MeshDescription.MeshDescriptionBaseBulkData
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescriptionBaseBulkData : public UObject
{ 
public:
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FElementID
{ 
	int32_t                                            IDValue;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FVertexID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FVertexInstanceID : FElementID
{ 
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FEdgeID : FElementID
{ 
};

/// Struct /Script/MeshDescription.UVID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FUVID : FElementID
{ 
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FTriangleID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FPolygonGroupID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FPolygonID : FElementID
{ 
};

/// Struct /Script/MeshDescription.BoneID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FBoneID : FElementID
{ 
};

