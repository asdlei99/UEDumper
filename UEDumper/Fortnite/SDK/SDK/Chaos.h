
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/Chaos.ChaosDeformableSimSpace
/// Size: 0x04
enum class ChaosDeformableSimSpace : uint8_t
{
	World                                                                            = 0,
	ComponentXf                                                                      = 1,
	bone                                                                             = 2,
	ChaosDeformableSimSpace_MAX                                                      = 3
};

/// Enum /Script/Chaos.ESetMaskConditionType
/// Size: 0x05
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always                                                                 = 0,
	Field_Set_IFF_NOT_Interior                                                       = 1,
	Field_Set_IFF_NOT_Exterior                                                       = 2,
	Field_MaskCondition_Max                                                          = 3,
	Field_MAX                                                                        = 4
};

/// Enum /Script/Chaos.EWaveFunctionType
/// Size: 0x05
enum class EWaveFunctionType : uint8_t
{
	Field_Wave_Cosine                                                                = 0,
	Field_Wave_Gaussian                                                              = 1,
	Field_Wave_Falloff                                                               = 2,
	Field_Wave_Decay                                                                 = 3,
	Field_Wave_Max                                                                   = 4
};

/// Enum /Script/Chaos.EFieldOperationType
/// Size: 0x05
enum class EFieldOperationType : uint8_t
{
	Field_Multiply                                                                   = 0,
	Field_Divide                                                                     = 1,
	Field_Add                                                                        = 2,
	Field_Substract                                                                  = 3,
	Field_Operation_Max                                                              = 4
};

/// Enum /Script/Chaos.EFieldCullingOperationType
/// Size: 0x04
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside                                                             = 0,
	Field_Culling_Outside                                                            = 1,
	Field_Culling_Operation_Max                                                      = 2,
	Field_Culling_MAX                                                                = 3
};

/// Enum /Script/Chaos.EFieldResolutionType
/// Size: 0x04
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal                                                         = 0,
	Field_Resolution_DisabledParents                                                 = 1,
	Field_Resolution_Maximum                                                         = 2,
	Field_Resolution_Max                                                             = 3
};

/// Enum /Script/Chaos.EFieldFilterType
/// Size: 0x07
enum class EFieldFilterType : uint8_t
{
	Field_Filter_Dynamic                                                             = 0,
	Field_Filter_Kinematic                                                           = 1,
	Field_Filter_Static                                                              = 2,
	Field_Filter_All                                                                 = 3,
	Field_Filter_Sleeping                                                            = 4,
	Field_Filter_Disabled                                                            = 5,
	Field_Filter_Max                                                                 = 6
};

/// Enum /Script/Chaos.EFieldObjectType
/// Size: 0x06
enum class EFieldObjectType : uint8_t
{
	Field_Object_Rigid                                                               = 0,
	Field_Object_Cloth                                                               = 1,
	Field_Object_Destruction                                                         = 2,
	Field_Object_Character                                                           = 3,
	Field_Object_All                                                                 = 4,
	Field_Object_Max                                                                 = 5
};

/// Enum /Script/Chaos.EFieldPositionType
/// Size: 0x03
enum class EFieldPositionType : uint8_t
{
	Field_Position_CenterOfMass                                                      = 0,
	Field_Position_PivotPoint                                                        = 1,
	Field_Position_Max                                                               = 2
};

/// Enum /Script/Chaos.EFieldFalloffType
/// Size: 0x06
enum class EFieldFalloffType : uint8_t
{
	Field_FallOff_None                                                               = 0,
	Field_Falloff_Linear                                                             = 1,
	Field_Falloff_Inverse                                                            = 2,
	Field_Falloff_Squared                                                            = 3,
	Field_Falloff_Logarithmic                                                        = 4,
	Field_Falloff_Max                                                                = 5
};

/// Enum /Script/Chaos.EFieldPhysicsType
/// Size: 0x21
enum class EFieldPhysicsType : uint8_t
{
	Field_None                                                                       = 0,
	Field_DynamicState                                                               = 1,
	Field_LinearForce                                                                = 2,
	Field_ExternalClusterStrain                                                      = 3,
	Field_Kill                                                                       = 4,
	Field_LinearVelocity                                                             = 5,
	Field_AngularVelociy                                                             = 6,
	Field_AngularTorque                                                              = 7,
	Field_InternalClusterStrain                                                      = 8,
	Field_DisableThreshold                                                           = 9,
	Field_SleepingThreshold                                                          = 10,
	Field_PositionStatic                                                             = 11,
	Field_PositionAnimated                                                           = 12,
	Field_PositionTarget                                                             = 13,
	Field_DynamicConstraint                                                          = 14,
	Field_CollisionGroup                                                             = 15,
	Field_ActivateDisabled                                                           = 16,
	Field_InitialLinearVelocity                                                      = 17,
	Field_InitialAngularVelocity                                                     = 18,
	Field_LinearImpulse                                                              = 19,
	Field_PhysicsType_Max                                                            = 20
};

/// Enum /Script/Chaos.EFieldVectorType
/// Size: 0x10
enum class EFieldVectorType : uint8_t
{
	Vector_LinearForce                                                               = 0,
	Vector_LinearVelocity                                                            = 1,
	Vector_AngularVelocity                                                           = 2,
	Vector_AngularTorque                                                             = 3,
	Vector_PositionTarget                                                            = 4,
	Vector_InitialLinearVelocity                                                     = 5,
	Vector_InitialAngularVelocity                                                    = 6,
	Vector_LinearImpulse                                                             = 7,
	Vector_TargetMax                                                                 = 8,
	Vector_MAX                                                                       = 9
};

/// Enum /Script/Chaos.EFieldScalarType
/// Size: 0x08
enum class EFieldScalarType : uint8_t
{
	Scalar_ExternalClusterStrain                                                     = 0,
	Scalar_Kill                                                                      = 1,
	Scalar_DisableThreshold                                                          = 2,
	Scalar_SleepingThreshold                                                         = 3,
	Scalar_InternalClusterStrain                                                     = 4,
	Scalar_DynamicConstraint                                                         = 5,
	Scalar_TargetMax                                                                 = 6,
	Scalar_MAX                                                                       = 7
};

/// Enum /Script/Chaos.EFieldIntegerType
/// Size: 0x07
enum class EFieldIntegerType : uint8_t
{
	Integer_DynamicState                                                             = 0,
	Integer_ActivateDisabled                                                         = 1,
	Integer_CollisionGroup                                                           = 2,
	Integer_PositionAnimated                                                         = 3,
	Integer_PositionStatic                                                           = 4,
	Integer_TargetMax                                                                = 5,
	Integer_MAX                                                                      = 6
};

/// Enum /Script/Chaos.EFieldOutputType
/// Size: 0x04
enum class EFieldOutputType : uint8_t
{
	Field_Output_Vector                                                              = 0,
	Field_Output_Scalar                                                              = 1,
	Field_Output_Integer                                                             = 2,
	Field_Output_Max                                                                 = 3
};

/// Enum /Script/Chaos.EFieldPhysicsDefaultFields
/// Size: 0x06
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask                                                              = 0,
	Field_RadialFalloff                                                              = 1,
	Field_UniformVector                                                              = 2,
	Field_RadialVector                                                               = 3,
	Field_RadialVectorFalloff                                                        = 4,
	Field_EFieldPhysicsDefaultFields_Max                                             = 5
};

/// Enum /Script/Chaos.EConvexOverlapRemoval
/// Size: 0x05
enum class EConvexOverlapRemoval : uint8_t
{
	EConvexOverlapRemoval__None                                                      = 0,
	EConvexOverlapRemoval__All                                                       = 1,
	EConvexOverlapRemoval__OnlyClusters                                              = 2,
	EConvexOverlapRemoval__OnlyClustersVsClusters                                    = 3,
	EConvexOverlapRemoval__EConvexOverlapRemoval_MAX                                 = 4
};

/// Enum /Script/Chaos.EGenerateConvexMethod
/// Size: 0x04
enum class EGenerateConvexMethod : uint8_t
{
	EGenerateConvexMethod__ExternalCollision                                         = 0,
	EGenerateConvexMethod__ComputedFromGeometry                                      = 1,
	EGenerateConvexMethod__IntersectExternalWithComputed                             = 2,
	EGenerateConvexMethod__EGenerateConvexMethod_MAX                                 = 3
};

/// Enum /Script/Chaos.EAllowConvexMergeMethod
/// Size: 0x03
enum class EAllowConvexMergeMethod : uint8_t
{
	EAllowConvexMergeMethod__ByProximity                                             = 0,
	EAllowConvexMergeMethod__Any                                                     = 1,
	EAllowConvexMergeMethod__EAllowConvexMergeMethod_MAX                             = 2
};

/// Enum /Script/Chaos.EProximityMethod
/// Size: 0x03
enum class EProximityMethod : uint8_t
{
	EProximityMethod__Precise                                                        = 0,
	EProximityMethod__ConvexHull                                                     = 1,
	EProximityMethod__EProximityMethod_MAX                                           = 2
};

/// Enum /Script/Chaos.EProximityContactMethod
/// Size: 0x04
enum class EProximityContactMethod : uint8_t
{
	EProximityContactMethod__MinOverlapInProjectionToMajorAxes                       = 0,
	EProximityContactMethod__ConvexHullSharpContact                                  = 1,
	EProximityContactMethod__ConvexHullAreaContact                                   = 2,
	EProximityContactMethod__EProximityContactMethod_MAX                             = 3
};

/// Enum /Script/Chaos.EConnectionContactMethod
/// Size: 0x03
enum class EConnectionContactMethod : uint8_t
{
	EConnectionContactMethod__None                                                   = 0,
	EConnectionContactMethod__ConvexHullContactArea                                  = 1,
	EConnectionContactMethod__EConnectionContactMethod_MAX                           = 2
};

/// Enum /Script/Chaos.ECollisionTypeEnum
/// Size: 0x03
enum class ECollisionTypeEnum : uint8_t
{
	ECollisionTypeEnum__Chaos_Volumetric                                             = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric                                     = 1,
	ECollisionTypeEnum__Chaos_Max                                                    = 2
};

/// Enum /Script/Chaos.EImplicitTypeEnum
/// Size: 0x07
enum class EImplicitTypeEnum : uint8_t
{
	EImplicitTypeEnum__Chaos_Implicit_Box                                            = 0,
	EImplicitTypeEnum__Chaos_Implicit_Sphere                                         = 1,
	EImplicitTypeEnum__Chaos_Implicit_Capsule                                        = 2,
	EImplicitTypeEnum__Chaos_Implicit_LevelSet                                       = 3,
	EImplicitTypeEnum__Chaos_Implicit_None                                           = 4,
	EImplicitTypeEnum__Chaos_Implicit_Convex                                         = 5,
	EImplicitTypeEnum__Chaos_Max                                                     = 6
};

/// Enum /Script/Chaos.EObjectStateTypeEnum
/// Size: 0x07
enum class EObjectStateTypeEnum : uint8_t
{
	EObjectStateTypeEnum__Chaos_NONE                                                 = 0,
	EObjectStateTypeEnum__Chaos_Object_Sleeping                                      = 1,
	EObjectStateTypeEnum__Chaos_Object_Kinematic                                     = 2,
	EObjectStateTypeEnum__Chaos_Object_Static                                        = 3,
	EObjectStateTypeEnum__Chaos_Object_Dynamic                                       = 4,
	EObjectStateTypeEnum__Chaos_Object_UserDefined                                   = 100,
	EObjectStateTypeEnum__Chaos_Max                                                  = 101
};

/// Enum /Script/Chaos.EGeometryCollectionPhysicsTypeEnum
/// Size: 0x14
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularVelocity                        = 0,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DynamicState                           = 1,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearVelocity                         = 2,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialAngularVelocity                 = 3,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialLinearVelocity                  = 4,
	EGeometryCollectionPhysicsTypeEnum__Chaos_CollisionGroup                         = 5,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearForce                            = 6,
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularTorque                          = 7,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DisableThreshold                       = 8,
	EGeometryCollectionPhysicsTypeEnum__Chaos_SleepingThreshold                      = 9,
	EGeometryCollectionPhysicsTypeEnum__Chaos_ExternalClusterStrain                  = 10,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InternalClusterStrain                  = 11,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearImpulse                          = 12,
	EGeometryCollectionPhysicsTypeEnum__Chaos_Max                                    = 13
};

/// Enum /Script/Chaos.EInitialVelocityTypeEnum
/// Size: 0x03
enum class EInitialVelocityTypeEnum : uint8_t
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined                    = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None                            = 1,
	EInitialVelocityTypeEnum__Chaos_Max                                              = 2
};

/// Enum /Script/Chaos.EEmissionPatternTypeEnum
/// Size: 0x03
enum class EEmissionPatternTypeEnum : uint8_t
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame                     = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand                       = 1,
	EEmissionPatternTypeEnum__Chaos_Max                                              = 2
};

/// Enum /Script/Chaos.EDamageModelTypeEnum
/// Size: 0x03
enum class EDamageModelTypeEnum : uint8_t
{
	EDamageModelTypeEnum__Chaos_Damage_Model_UserDefined_Damage_Threshold            = 0,
	EDamageModelTypeEnum__Chaos_Damage_Model_Material_Strength_And_Connectivity_DamageThreshold = 1,
	EDamageModelTypeEnum__Chaos_Max                                                  = 2
};

/// Enum /Script/Chaos.EChaosSolverTickMode
/// Size: 0x05
enum class EChaosSolverTickMode : uint8_t
{
	EChaosSolverTickMode__Fixed                                                      = 0,
	EChaosSolverTickMode__Variable                                                   = 1,
	EChaosSolverTickMode__VariableCapped                                             = 2,
	EChaosSolverTickMode__VariableCappedWithTarget                                   = 3,
	EChaosSolverTickMode__EChaosSolverTickMode_MAX                                   = 4
};

/// Enum /Script/Chaos.EChaosThreadingMode
/// Size: 0x06
enum class EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread                                             = 0,
	EChaosThreadingMode__TaskGraph                                                   = 1,
	EChaosThreadingMode__SingleThread                                                = 2,
	EChaosThreadingMode__Num                                                         = 3,
	EChaosThreadingMode__Invalid                                                     = 4,
	EChaosThreadingMode__EChaosThreadingMode_MAX                                     = 5
};

/// Enum /Script/Chaos.EChaosBufferMode
/// Size: 0x05
enum class EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double                                                         = 0,
	EChaosBufferMode__Triple                                                         = 1,
	EChaosBufferMode__Num                                                            = 2,
	EChaosBufferMode__Invalid                                                        = 3,
	EChaosBufferMode__EChaosBufferMode_MAX                                           = 4
};

/// Enum /Script/Chaos.EClusterUnionMethod
/// Size: 0x07
enum class EClusterUnionMethod : uint8_t
{
	EClusterUnionMethod__PointImplicit                                               = 0,
	EClusterUnionMethod__DelaunayTriangulation                                       = 1,
	EClusterUnionMethod__MinimalSpanningSubsetDelaunayTriangulation                  = 2,
	EClusterUnionMethod__PointImplicitAugmentedWithMinimalDelaunay                   = 3,
	EClusterUnionMethod__BoundsOverlapFilteredDelaunayTriangulation                  = 4,
	EClusterUnionMethod__None                                                        = 5,
	EClusterUnionMethod__EClusterUnionMethod_MAX                                     = 6
};

/// Enum /Script/Chaos.EGeometryCollectionCacheType
/// Size: 0x05
enum class EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None                                               = 0,
	EGeometryCollectionCacheType__Record                                             = 1,
	EGeometryCollectionCacheType__Play                                               = 2,
	EGeometryCollectionCacheType__RecordAndPlay                                      = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX                   = 4
};

/// Struct /Script/Chaos.ManagedArrayCollection
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FManagedArrayCollection
{ 
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/Chaos.FieldCollection
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
struct FFieldCollection : FManagedArrayCollection
{ 
};

/// Struct /Script/Chaos.ClosestPhysicsObjectResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FClosestPhysicsObjectResult
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/Chaos.SolverCollisionFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSolverCollisionFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Chaos.SolverBreakingFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSolverBreakingFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinVolume;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/Chaos.SolverTrailingFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSolverTrailingFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinVolume;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/Chaos.ChaosSolverConfiguration
/// Size: 0x006C (0x000000 - 0x00006C)
struct FChaosSolverConfiguration
{ 
	int32_t                                            PositionIterations;                                         // 0x0000   (0x0004)  
	int32_t                                            VelocityIterations;                                         // 0x0004   (0x0004)  
	int32_t                                            ProjectionIterations;                                       // 0x0008   (0x0004)  
	float                                              CollisionMarginFraction;                                    // 0x000C   (0x0004)  
	float                                              CollisionMarginMax;                                         // 0x0010   (0x0004)  
	float                                              CollisionCullDistance;                                      // 0x0014   (0x0004)  
	float                                              CollisionMaxPushOutVelocity;                                // 0x0018   (0x0004)  
	float                                              CollisionInitialOverlapDepenetrationVelocity;               // 0x001C   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x0020   (0x0004)  
	EClusterUnionMethod                                ClusterUnionConnectionType;                                 // 0x0024   (0x0001)  
	bool                                               bGenerateCollisionData;                                     // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0026   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x0028   (0x0010)  
	bool                                               bGenerateBreakData;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x003C   (0x0010)  
	bool                                               bGenerateTrailingData;                                      // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x0050   (0x0010)  
	int32_t                                            Iterations;                                                 // 0x0060   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x0064   (0x0004)  
	bool                                               bGenerateContactGraph;                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0069   (0x0003)  MISSED
};

/// Struct /Script/Chaos.SolverCollisionData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FSolverCollisionData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            AccumulatedImpulse;                                         // 0x0018   (0x0018)  
	FVector                                            Normal;                                                     // 0x0030   (0x0018)  
	FVector                                            Velocity1;                                                  // 0x0048   (0x0018)  
	FVector                                            Velocity2;                                                  // 0x0060   (0x0018)  
	FVector                                            AngularVelocity1;                                           // 0x0078   (0x0018)  
	FVector                                            AngularVelocity2;                                           // 0x0090   (0x0018)  
	float                                              Mass1;                                                      // 0x00A8   (0x0004)  
	float                                              Mass2;                                                      // 0x00AC   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x00B0   (0x0004)  
	int32_t                                            LevelsetIndex;                                              // 0x00B4   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x00B8   (0x0004)  
	int32_t                                            LevelsetIndexMesh;                                          // 0x00BC   (0x0004)  
};

/// Struct /Script/Chaos.SolverBreakingData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSolverBreakingData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0030   (0x0018)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x004C   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/Chaos.SolverTrailingData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSolverTrailingData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0030   (0x0018)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x004C   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/Chaos.RecordedFrame
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FRecordedFrame
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0000   (0x0010)  
	TArray<int32_t>                                    TransformIndices;                                           // 0x0010   (0x0010)  
	TArray<int32_t>                                    PreviousTransformIndices;                                   // 0x0020   (0x0010)  
	TArray<bool>                                       DisabledFlags;                                              // 0x0030   (0x0010)  
	TArray<FSolverCollisionData>                       Collisions;                                                 // 0x0040   (0x0010)  
	TArray<FSolverBreakingData>                        Breakings;                                                  // 0x0050   (0x0010)  
	SDK_UNDEFINED(80,35) /* TSet<FSolverTrailingData> */ __um(Trailings);                                          // 0x0060   (0x0050)  
	float                                              Timestamp;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/Chaos.RecordedTransformTrack
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRecordedTransformTrack
{ 
	TArray<FRecordedFrame>                             Records;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/Chaos.SolverRemovalFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSolverRemovalFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinVolume;                                                  // 0x0008   (0x0004)  
};

