
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NNE

/// Class /Script/LearningAgents.LearningAgentsAction
/// Size: 0x0228 (0x000028 - 0x000250)
class ULearningAgentsAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgents.FloatAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UFloatAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:


	/// Functions
	// Function /Script/LearningAgents.FloatAction.SetFloatAction
	// void SetFloatAction(int32_t AgentId, float Value);                                                                       // [0xc02ade8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatAction.GetFloatAction
	// float GetFloatAction(int32_t AgentId);                                                                                   // [0xc026374] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatAction.AddFloatAction
	// class UFloatAction* AddFloatAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);              // [0xc024e60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.FloatArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UFloatArrayAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:


	/// Functions
	// Function /Script/LearningAgents.FloatArrayAction.SetFloatArrayAction
	// void SetFloatArrayAction(int32_t AgentId, TArray<float>& Values);                                                        // [0xc02aeac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayAction.GetFloatArrayAction
	// void GetFloatArrayAction(int32_t AgentId, TArray<float>& OutValues);                                                     // [0xc026404] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayAction.AddFloatArrayAction
	// class UFloatArrayAction* AddFloatArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc024f70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UVectorAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:


	/// Functions
	// Function /Script/LearningAgents.VectorAction.SetVectorAction
	// void SetVectorAction(int32_t AgentId, FVector Value);                                                                    // [0xc02b14c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorAction.GetVectorAction
	// FVector GetVectorAction(int32_t AgentId);                                                                                // [0xc027980] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorAction.AddVectorAction
	// class UVectorAction* AddVectorAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);            // [0xc025b40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UVectorArrayAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:


	/// Functions
	// Function /Script/LearningAgents.VectorArrayAction.SetVectorArrayAction
	// void SetVectorArrayAction(int32_t AgentId, TArray<FVector>& Vectors);                                                    // [0xc02b2cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayAction.GetVectorArrayAction
	// void GetVectorArrayAction(int32_t AgentId, TArray<FVector>& OutVectors);                                                 // [0xc027a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayAction.AddVectorArrayAction
	// class UVectorArrayAction* AddVectorArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc025c50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarVelocityAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UPlanarVelocityAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:


	/// Functions
	// Function /Script/LearningAgents.PlanarVelocityAction.SetPlanarVelocityAction
	// void SetPlanarVelocityAction(int32_t AgentId, FVector Velocity);                                                         // [0xc02afcc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityAction.GetPlanarVelocityAction
	// FVector GetPlanarVelocityAction(int32_t AgentId);                                                                        // [0xc026b18] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityAction.AddPlanarVelocityAction
	// class UPlanarVelocityAction* AddPlanarVelocityAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc025220] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationAction
/// Size: 0x0010 (0x000250 - 0x000260)
class URotationAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:


	/// Functions
	// Function /Script/LearningAgents.RotationAction.GetRotationActionAsRotationVector
	// FVector GetRotationActionAsRotationVector(int32_t AgentId);                                                              // [0xc027634] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.GetRotationActionAsQuat
	// FQuat GetRotationActionAsQuat(int32_t AgentId);                                                                          // [0xc027594] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.GetRotationAction
	// FRotator GetRotationAction(int32_t AgentId);                                                                             // [0xc0274f4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.AddRotationAction
	// class URotationAction* AddRotationAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);        // [0xc025780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class URotationArrayAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:


	/// Functions
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayActionAsRotationVectors
	// void GetRotationArrayActionAsRotationVectors(int32_t AgentId, TArray<FVector>& OutRotationVectors);                      // [0xc02789c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayActionAsQuats
	// void GetRotationArrayActionAsQuats(int32_t AgentId, TArray<FQuat>& OutRotations);                                        // [0xc0277b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayAction
	// void GetRotationArrayAction(int32_t AgentId, TArray<FRotator>& OutRotations);                                            // [0xc0276d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.AddRotationArrayAction
	// class URotationArrayAction* AddRotationArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t RotationNum, float Scale); // [0xc025890] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsManagerComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULearningAgentsManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bIsSetup                                                    OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(class ALearningAgentsManager*)             Manager                                                     OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<class ULearningAgentsHelper*>)      HelperObjects                                               OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.IsSetup
	// bool IsSetup();                                                                                                          // [0x80cfcb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);                  // [0xc0301a0] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgents
	// void GetAgents(TArray<int32_t>& AgentIds, class UClass* AgentClass, TArray<UObject*>& OutAgents);                        // [0xc02fdc0] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgentManager
	// class ALearningAgentsManager* GetAgentManager(class UClass* AgentManagerClass);                                          // [0xc02fb18] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                      // [0xc02f89c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsReset
	// void AgentsReset(TArray<int32_t>& AgentIds);                                                                             // [0xc02f5d4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsRemoved
	// void AgentsRemoved(TArray<int32_t>& AgentIds);                                                                           // [0x8ee6cb8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsAdded
	// void AgentsAdded(TArray<int32_t>& AgentIds);                                                                             // [0xc02f534] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/LearningAgents.LearningAgentsController
/// Size: 0x0050 (0x0000C0 - 0x000110)
class ULearningAgentsController : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsController.SetupController
	// void SetupController(class ULearningAgentsInteractor* InInteractor);                                                     // [0xc02b3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.SetActions
	// void SetActions(TArray<int32_t>& AgentIds);                                                                              // [0xc02ac50] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsController.RunController
	// void RunController();                                                                                                    // [0xc02a4fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.GetInteractor
	// class ULearningAgentsInteractor* GetInteractor(class UClass* InteractorClass);                                           // [0xc026524] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsController.EncodeActions
	// void EncodeActions();                                                                                                    // [0xc025dbc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsCritic
/// Size: 0x0160 (0x0000C0 - 0x000220)
class ULearningAgentsCritic : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class ULearningAgentsPolicy*)              Policy                                                      OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class ULearningAgentsNeuralNetwork*)       Network                                                     OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsCritic.UseCriticFromAsset
	// void UseCriticFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                         // [0xc02b634] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SetupCritic
	// void SetupCritic(class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, FLearningAgentsCriticSettings& CriticSettings, class ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xc02b430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToSnapshot
	// void SaveCriticToSnapshot(FFilePath& File);                                                                              // [0xc02a590] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToAsset
	// void SaveCriticToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                          // [0xc02a510] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromSnapshot
	// void LoadCriticFromSnapshot(FFilePath& File);                                                                            // [0xc0282b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromAsset
	// void LoadCriticFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                        // [0xc028230] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.GetEstimatedDiscountedReturn
	// float GetEstimatedDiscountedReturn(int32_t AgentId);                                                                     // [0xc0262e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.EvaluateCritic
	// void EvaluateCritic();                                                                                                   // [0xc025dd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsHelper
/// Size: 0x0008 (0x000028 - 0x000030)
class ULearningAgentsHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class ULearningAgentsManagerComponent*)    ManagerComponent                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgents.SplineComponentHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class USplineComponentHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/LearningAgents.SplineComponentHelper.GetVelocityAlongSpline
	// float GetVelocityAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, FVector Velocity, float FiniteDifferenceDelta, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc027b04] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetProportionAlongSplineAsAngle
	// float GetProportionAlongSplineAsAngle(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline); // [0xc0273f8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetProportionAlongSpline
	// float GetProportionAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline);     // [0xc0272fc] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetPositionsAlongSpline
	// void GetPositionsAlongSpline(TArray<FVector>& OutPositions, int32_t AgentId, class USplineComponent* SplineComponent, int32_t PositionNum, float StartDistanceAlongSpline, float StopDistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc026d10] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetPositionAtDistanceAlongSpline
	// FVector GetPositionAtDistanceAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc026bb8] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetNearestPositionOnSpline
	// FVector GetNearestPositionOnSpline(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc026868] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetDistanceAlongSplineAtPosition
	// float GetDistanceAlongSplineAtPosition(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc026054] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetDirectionAtDistanceAlongSpline
	// FVector GetDirectionAtDistanceAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc025efc] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.AddSplineComponentHelper
	// class USplineComponentHelper* AddSplineComponentHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xc0259f8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ProjectionHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UProjectionHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/LearningAgents.ProjectionHelper.ProjectTransformOntoGroundPlane
	// FTransform ProjectTransformOntoGroundPlane(int32_t AgentId, FTransform Transform, FVector LocalForwardVector);           // [0xc028e08] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.ProjectionHelper.ProjectPositionRotationOntoGroundPlane
	// void ProjectPositionRotationOntoGroundPlane(FVector& OutPosition, FRotator& OutRotation, int32_t AgentId, FVector InPosition, FRotator InRotation, FVector LocalForwardVector); // [0xc028970] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.ProjectionHelper.AddProjectionHelper
	// class UProjectionHelper* AddProjectionHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name);     // [0xc0254f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.MeshComponentHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshComponentHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/LearningAgents.MeshComponentHelper.GetMeshBonePositions
	// void GetMeshBonePositions(TArray<FVector>& OutBonePositions, int32_t AgentId, class UMeshComponent* MeshComponent, TArray<FName>& BoneNames); // [0xc0265c0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.MeshComponentHelper.AddMeshComponentHelper
	// class UMeshComponentHelper* AddMeshComponentHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xc0250d8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RayCastHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class URayCastHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/LearningAgents.RayCastHelper.RayCastRadial
	// void RayCastRadial(TArray<float>& OutDistances, int32_t AgentId, FVector Position, FRotator Rotation, int32_t RayNum, float MinAngle, float MaxAngle, float MaxRayDist, FVector LocalForward, TEnumAsByte<ECollisionChannel> CollisionChannel); // [0xc029b38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.RayCastHelper.RayCastGridHeights
	// void RayCastGridHeights(TArray<float>& OutHeights, int32_t AgentId, FVector Position, FRotator Rotation, int32_t RowNum, int32_t ColNum, float RowWidth, float ColWidth, float MaxHeight, float MinHeight, TEnumAsByte<ECollisionChannel> CollisionChannel); // [0xc02914c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.RayCastHelper.AddRayCastHelper
	// class URayCastHelper* AddRayCastHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name);           // [0xc025638] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.CollisionMonitorHelper
/// Size: 0x01D0 (0x000030 - 0x000200)
class UCollisionMonitorHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:


	/// Functions
	// Function /Script/LearningAgents.CollisionMonitorHelper.SetComponent
	// void SetComponent(int32_t AgentId, class UPrimitiveComponent* Component, FName OtherComponentTag);                       // [0xc02acf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.ResetCollisionOccurred
	// void ResetCollisionOccurred(int32_t AgentId);                                                                            // [0xc02a47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.HandleOnHit
	// void HandleOnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xc027f70] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/LearningAgents.CollisionMonitorHelper.GetCollisionOccurred
	// bool GetCollisionOccurred(int32_t AgentId);                                                                              // [0xc025e70] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.CollisionMonitorHelper.GetAndResetCollisionOccurred
	// bool GetAndResetCollisionOccurred(int32_t AgentId);                                                                      // [0xc025de4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.AddCollisionMonitorHelper
	// class UCollisionMonitorHelper* AddCollisionMonitorHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xc024d00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsInteractor
/// Size: 0x0538 (0x0000C0 - 0x0005F8)
class ULearningAgentsInteractor : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
	CMember(TArray<class ULearningAgentsObservation*>) ObservationObjects                                          OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<class ULearningAgentsAction*>)      ActionObjects                                               OFFSET(get<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupObservations
	// void SetupObservations();                                                                                                // [0xb7c3b48] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupInteractor
	// void SetupInteractor();                                                                                                  // [0xc0362f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupActions
	// void SetupActions();                                                                                                     // [0x88b62b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetObservations
	// void SetObservations(TArray<int32_t>& AgentIds);                                                                         // [0xbdfc8b4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationVector
	// void GetObservationVector(int32_t AgentId, TArray<float>& OutObservationVector);                                         // [0xc0303a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionVector
	// void GetActionVector(int32_t AgentId, TArray<float>& OutActionVector);                                                   // [0xc02f69c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActions
	// void GetActions(TArray<int32_t>& AgentIds);                                                                              // [0xc02ac50] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.EncodeObservations
	// void EncodeObservations();                                                                                               // [0xc02f688] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.DecodeActions
	// void DecodeActions();                                                                                                    // [0xc02f674] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsManager
/// Size: 0x0088 (0x000290 - 0x000318)
class ALearningAgentsManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	DMember(int32_t)                                   MaxAgentNum                                                 OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	CMember(TArray<class UObject*>)                    Agents                                                      OFFSET(get<T>, {0x298, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAllAgents
	// void ResetAllAgents();                                                                                                   // [0xc030f6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgents
	// void ResetAgents(TArray<int32_t>& AgentIds);                                                                             // [0xc030ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgent
	// void ResetAgent(int32_t AgentId);                                                                                        // [0xc030e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAllAgents
	// void RemoveAllAgents();                                                                                                  // [0xc030e3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgents
	// void RemoveAgents(TArray<int32_t>& AgentIds);                                                                            // [0xc030da0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgent
	// void RemoveAgent(int32_t AgentId);                                                                                       // [0xc030d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgentObject
	// bool HasAgentObject(class UObject* Agent);                                                                               // [0xc030554] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgent
	// bool HasAgent(int32_t AgentId);                                                                                          // [0xc0304c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetMaxAgentNum
	// int32_t GetMaxAgentNum();                                                                                                // [0x64af2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);                  // [0xc02ff98] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgents
	// void GetAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& AgentIds, class UClass* AgentClass);                        // [0xc02fbb4] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentNum
	// int32_t GetAgentNum();                                                                                                   // [0x60618bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentIds
	// void GetAgentIds(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                              // [0xc02fa04] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentId
	// int32_t GetAgentId(class UObject* Agent);                                                                                // [0xc02f974] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                      // [0xc02f7bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.AddManagerAsTickPrerequisiteOfAgents
	// void AddManagerAsTickPrerequisiteOfAgents(TArray<AActor*>& InAgents);                                                    // [0xc02ca20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgentsAsTickPrerequisiteOfManager
	// void AddAgentsAsTickPrerequisiteOfManager(TArray<AActor*>& InAgents);                                                    // [0xc02bc54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgents
	// void AddAgents(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                                // [0xc02bb40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgent
	// int32_t AddAgent(class UObject* Agent);                                                                                  // [0xc02bab0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsNeuralNetwork
/// Size: 0x0008 (0x000030 - 0x000038)
class ULearningAgentsNeuralNetwork : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class ULearningAgentsNeuralNetworkData*)   NeuralNetworkData                                           OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToSnapshot
	// void SaveNetworkToSnapshot(FFilePath& File);                                                                             // [0xc031034] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToAsset
	// void SaveNetworkToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                         // [0xc030fb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.ResetNetwork
	// void ResetNetwork();                                                                                                     // [0xc030f80] Final|Native|Public  
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromSnapshot
	// void LoadNetworkFromSnapshot(FFilePath& File);                                                                           // [0xc030660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromAsset
	// void LoadNetworkFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                       // [0xc0305e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsNeuralNetworkData
/// Size: 0x0030 (0x000028 - 0x000058)
class ULearningAgentsNeuralNetworkData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   InputNum                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   OutputNum                                                   OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<char>)                              FileData                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UNNEModelData*)                      ModelData                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/LearningAgents.LearningAgentsObservation
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsObservation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgents.FloatObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.FloatObservation.SetFloatObservation
	// void SetFloatObservation(int32_t AgentId, float Observation);                                                            // [0xc03255c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatObservation.AddFloatObservation
	// class UFloatObservation* AddFloatObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);    // [0xc02c910] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.FloatArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.FloatArrayObservation.SetFloatArrayObservation
	// void SetFloatArrayObservation(int32_t AgentId, TArray<float>& Observation);                                              // [0xc03243c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayObservation.AddFloatArrayObservation
	// class UFloatArrayObservation* AddFloatArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc02c7a8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVectorObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.VectorObservation.SetVectorObservation
	// void SetVectorObservation(int32_t AgentId, FVector Observation);                                                         // [0xc035d24] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorObservation.AddVectorObservation
	// class UVectorObservation* AddVectorObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);  // [0xc02f1ac] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVectorArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.VectorArrayObservation.SetVectorArrayObservation
	// void SetVectorArrayObservation(int32_t AgentId, TArray<FVector>& Observation);                                           // [0xc035c40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayObservation.AddVectorArrayObservation
	// class UVectorArrayObservation* AddVectorArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc02f040] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.EnumObservation
/// Size: 0x0018 (0x000140 - 0x000158)
class UEnumObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:


	/// Functions
	// Function /Script/LearningAgents.EnumObservation.SetEnumObservation
	// void SetEnumObservation(int32_t AgentId, char Value);                                                                    // [0xc032378] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.EnumObservation.AddEnumObservation
	// class UEnumObservation* AddEnumObservation(class ULearningAgentsInteractor* InInteractor, class UEnum* EnumType, FName Name); // [0xc02c660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.EnumArrayObservation
/// Size: 0x0018 (0x000140 - 0x000158)
class UEnumArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:


	/// Functions
	// Function /Script/LearningAgents.EnumArrayObservation.SetEnumArrayObservation
	// void SetEnumArrayObservation(int32_t AgentId, TArray<char>& Values);                                                     // [0xc032294] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.EnumArrayObservation.AddEnumArrayObservation
	// class UEnumArrayObservation* AddEnumArrayObservation(class ULearningAgentsInteractor* InInteractor, class UEnum* EnumType, FName Name, int32_t EnumNum); // [0xc02c4bc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.TimeObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.TimeObservation.SetTimeObservation
	// void SetTimeObservation(int32_t AgentId, float Time, float RelativeTime);                                                // [0xc035b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.TimeObservation.AddTimeObservation
	// class UTimeObservation* AddTimeObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);      // [0xc02ef30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.TimeArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.TimeArrayObservation.SetTimeArrayObservation
	// void SetTimeArrayObservation(int32_t AgentId, TArray<float>& Times, float RelativeTime);                                 // [0xc035948] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.TimeArrayObservation.AddTimeArrayObservation
	// class UTimeArrayObservation* AddTimeArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t TimeNum, float Scale); // [0xc02edc8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngleObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngleObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.AngleObservation.SetAngleObservation
	// void SetAngleObservation(int32_t AgentId, float Angle, float RelativeAngle);                                             // [0xc0318f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.AngleObservation.AddAngleObservation
	// class UAngleObservation* AddAngleObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);    // [0xc02bebc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngleArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngleArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.AngleArrayObservation.SetAngleArrayObservation
	// void SetAngleArrayObservation(int32_t AgentId, TArray<float>& Angles, float RelativeAngle);                              // [0xc0316f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.AngleArrayObservation.AddAngleArrayObservation
	// class UAngleArrayObservation* AddAngleArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngleNum, float Scale); // [0xc02bd54] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class URotationObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.RotationObservation.SetRotationObservationFromQuat
	// void SetRotationObservationFromQuat(int32_t AgentId, FQuat Rotation, FQuat RelativeRotation);                            // [0xc034160] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationObservation.SetRotationObservation
	// void SetRotationObservation(int32_t AgentId, FRotator Rotation, FRotator RelativeRotation);                              // [0xc033ef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationObservation.AddRotationObservation
	// class URotationObservation* AddRotationObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc02e550] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class URotationArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.RotationArrayObservation.SetRotationArrayObservationFromQuats
	// void SetRotationArrayObservationFromQuats(int32_t AgentId, TArray<FQuat>& Rotations, FQuat RelativeRotation);            // [0xc033d0c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayObservation.SetRotationArrayObservation
	// void SetRotationArrayObservation(int32_t AgentId, TArray<FRotator>& Rotations, FRotator RelativeRotation);               // [0xc033b28] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayObservation.AddRotationArrayObservation
	// class URotationArrayObservation* AddRotationArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t RotationNum, float Scale); // [0xc02e3e8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.DirectionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UDirectionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.DirectionObservation.SetDirectionObservation
	// void SetDirectionObservation(int32_t AgentId, FVector Direction, FRotator RelativeRotation);                             // [0xc032024] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.DirectionObservation.AddDirectionObservation
	// class UDirectionObservation* AddDirectionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc02c3ac] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.DirectionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UDirectionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.DirectionArrayObservation.SetDirectionArrayObservation
	// void SetDirectionArrayObservation(int32_t AgentId, TArray<FVector>& Directions, FRotator RelativeRotation);              // [0xc031e40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.DirectionArrayObservation.AddDirectionArrayObservation
	// class UDirectionArrayObservation* AddDirectionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t DirectionNum, float Scale); // [0xc02c244] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarDirectionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarDirectionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.PlanarDirectionObservation.SetPlanarDirectionObservation
	// void SetPlanarDirectionObservation(int32_t AgentId, FVector Direction, FRotator RelativeRotation);                       // [0xc032804] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarDirectionObservation.AddPlanarDirectionObservation
	// class UPlanarDirectionObservation* AddPlanarDirectionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc02cfc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarDirectionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarDirectionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.PlanarDirectionArrayObservation.SetPlanarDirectionArrayObservation
	// void SetPlanarDirectionArrayObservation(int32_t AgentId, TArray<FVector>& Directions, FRotator RelativeRotation);        // [0xc032620] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarDirectionArrayObservation.AddPlanarDirectionArrayObservation
	// class UPlanarDirectionArrayObservation* AddPlanarDirectionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t DirectionNum, float Scale, FVector Axis0, FVector Axis1); // [0xc02cb20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.PositionObservation.SetPositionObservation
	// void SetPositionObservation(int32_t AgentId, FVector Position, FVector RelativePosition, FRotator RelativeRotation);     // [0xc0337d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PositionObservation.AddPositionObservation
	// class UPositionObservation* AddPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc02e2d8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.PositionArrayObservation.SetPositionArrayObservation
	// void SetPositionArrayObservation(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FRotator RelativeRotation); // [0xc0334f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PositionArrayObservation.AddPositionArrayObservation
	// class UPositionArrayObservation* AddPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale); // [0xc02e170] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarPositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarPositionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.ScalarPositionObservation.SetScalarPositionObservationWithAxis
	// void SetScalarPositionObservationWithAxis(int32_t AgentId, FVector Position, FVector RelativePosition, FVector Axis);    // [0xc034fc8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionObservation.SetScalarPositionObservation
	// void SetScalarPositionObservation(int32_t AgentId, float Position, float RelativePosition);                              // [0xc034ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionObservation.AddScalarPositionObservation
	// class UScalarPositionObservation* AddScalarPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc02ea40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarPositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarPositionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.SetScalarPositionArrayObservationWithAxis
	// void SetScalarPositionArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FVector Axis); // [0xc034bf8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.SetScalarPositionArrayObservation
	// void SetScalarPositionArrayObservation(int32_t AgentId, TArray<float>& Positions, float RelativePosition);               // [0xc0349f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.AddScalarPositionArrayObservation
	// class UScalarPositionArrayObservation* AddScalarPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale); // [0xc02e8d8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarPositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.PlanarPositionObservation.SetPlanarPositionObservation
	// void SetPlanarPositionObservation(int32_t AgentId, FVector Position, FVector RelativePosition, FRotator RelativeRotation); // [0xc032d4c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarPositionObservation.AddPlanarPositionObservation
	// class UPlanarPositionObservation* AddPlanarPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc02d730] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarPositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.PlanarPositionArrayObservation.SetPlanarPositionArrayObservation
	// void SetPlanarPositionArrayObservation(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FRotator RelativeRotation); // [0xc032a74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarPositionArrayObservation.AddPlanarPositionArrayObservation
	// class UPlanarPositionArrayObservation* AddPlanarPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale, FVector Axis0, FVector Axis1); // [0xc02d290] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.VelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.VelocityObservation.SetVelocityObservation
	// void SetVelocityObservation(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                               // [0xc036088] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VelocityObservation.AddVelocityObservation
	// class UVelocityObservation* AddVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc02f424] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.VelocityArrayObservation.SetVelocityArrayObservation
	// void SetVelocityArrayObservation(int32_t AgentId, TArray<FVector>& Velocities, FRotator RelativeRotation);               // [0xc035ea4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VelocityArrayObservation.AddVelocityArrayObservation
	// class UVelocityArrayObservation* AddVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale); // [0xc02f2bc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.ScalarVelocityObservation.SetScalarVelocityObservationWithAxis
	// void SetScalarVelocityObservationWithAxis(int32_t AgentId, FVector Velocity, FVector Axis);                              // [0xc0356e4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityObservation.SetScalarVelocityObservation
	// void SetScalarVelocityObservation(int32_t AgentId, float Velocity);                                                      // [0xc035620] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityObservation.AddScalarVelocityObservation
	// class UScalarVelocityObservation* AddScalarVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc02ecb8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.SetScalarVelocityArrayObservationWithAxis
	// void SetScalarVelocityArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& Velocities, FVector Axis);              // [0xc03543c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.SetScalarVelocityArrayObservation
	// void SetScalarVelocityArrayObservation(int32_t AgentId, TArray<float>& Velocities);                                      // [0xc03531c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.AddScalarVelocityArrayObservation
	// class UScalarVelocityArrayObservation* AddScalarVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale); // [0xc02eb50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.PlanarVelocityObservation.SetPlanarVelocityObservation
	// void SetPlanarVelocityObservation(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                         // [0xc033288] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityObservation.AddPlanarVelocityObservation
	// class UPlanarVelocityObservation* AddPlanarVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc02dea0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.PlanarVelocityArrayObservation.SetPlanarVelocityArrayObservation
	// void SetPlanarVelocityArrayObservation(int32_t AgentId, TArray<FVector>& Velocities, FRotator RelativeRotation);         // [0xc0330a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityArrayObservation.AddPlanarVelocityArrayObservation
	// class UPlanarVelocityArrayObservation* AddPlanarVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale, FVector Axis0, FVector Axis1); // [0xc02da00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngularVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngularVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.AngularVelocityObservation.SetAngularVelocityObservation
	// void SetAngularVelocityObservation(int32_t AgentId, FVector AngularVelocity, FRotator RelativeRotation);                 // [0xc031bd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.AngularVelocityObservation.AddAngularVelocityObservation
	// class UAngularVelocityObservation* AddAngularVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc02c134] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngularVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngularVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.AngularVelocityArrayObservation.SetAngularVelocityArrayObservation
	// void SetAngularVelocityArrayObservation(int32_t AgentId, TArray<FVector>& AngularVelocities, FRotator RelativeRotation); // [0xc0319ec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.AngularVelocityArrayObservation.AddAngularVelocityArrayObservation
	// class UAngularVelocityArrayObservation* AddAngularVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngularVelocityNum, float Scale); // [0xc02bfcc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarAngularVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarAngularVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.SetScalarAngularVelocityObservationWithAxis
	// void SetScalarAngularVelocityObservationWithAxis(int32_t AgentId, FVector AngularVelocity, FVector Axis);                // [0xc034794] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.SetScalarAngularVelocityObservation
	// void SetScalarAngularVelocityObservation(int32_t AgentId, float AngularVelocity);                                        // [0xc0346d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.AddScalarAngularVelocityObservation
	// class UScalarAngularVelocityObservation* AddScalarAngularVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc02e7c8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarAngularVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarAngularVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.SetScalarAngularVelocityArrayObservationWithAxis
	// void SetScalarAngularVelocityArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& AngularVelocities, FVector Axis); // [0xc0344ec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.SetScalarAngularVelocityArrayObservation
	// void SetScalarAngularVelocityArrayObservation(int32_t AgentId, TArray<float>& AngularVelocities);                        // [0xc0343cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.AddScalarAngularVelocityArrayObservation
	// class UScalarAngularVelocityArrayObservation* AddScalarAngularVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngularVelocityNum, float Scale); // [0xc02e660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsPolicy
/// Size: 0x0160 (0x0000C0 - 0x000220)
class ULearningAgentsPolicy : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class ULearningAgentsNeuralNetwork*)       Network                                                     OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsPolicy.UsePolicyFromAsset
	// void UsePolicyFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                         // [0xc0b0bb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetupPolicy
	// void SetupPolicy(class ULearningAgentsInteractor* InInteractor, FLearningAgentsPolicySettings& PolicySettings, class ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xc0b09cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetMemoryState
	// void SetMemoryState(int32_t AgentId, TArray<float>& InMemoryState);                                                      // [0xc0b08ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetActionNoiseScale
	// void SetActionNoiseScale(float ActionNoiseScale);                                                                        // [0xc0b082c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToSnapshot
	// void SavePolicyToSnapshot(FFilePath& File);                                                                              // [0xc0b016c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToAsset
	// void SavePolicyToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                          // [0xc0b00ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.RunInference
	// void RunInference();                                                                                                     // [0xc0b00d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromSnapshot
	// void LoadPolicyFromSnapshot(FFilePath& File);                                                                            // [0xc0afa18] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromAsset
	// void LoadPolicyFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                        // [0xc0af998] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetMemoryState
	// void GetMemoryState(TArray<float>& OutMemoryState, int32_t AgentId);                                                     // [0xc0af7cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetActionNoiseScale
	// float GetActionNoiseScale();                                                                                             // [0xc0af7a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.EvaluatePolicy
	// void EvaluatePolicy();                                                                                                   // [0xc0af790] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LearningAgents.LearningAgentsCriticSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLearningAgentsCriticSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   LayerNum                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   HiddenLayerSize                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ELearningAgentsActivationFunction)         ActivationFunction                                          OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/LearningAgents.LearningAgentsPolicySettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FLearningAgentsPolicySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   ActionNoiseSeed                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     ActionNoiseMin                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ActionNoiseMax                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ActionNoiseScale                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   LayerNum                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   HiddenLayerSize                                             OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   MemoryStateSize                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(ELearningAgentsActivationFunction)         ActivationFunction                                          OFFSET(get<T>, {0x1C, 1, 0, 0})
};

/// Enum /Script/LearningAgents.ELearningAgentsActivationFunction
/// Size: 0x04
enum ELearningAgentsActivationFunction : uint8_t
{
	ELearningAgentsActivationFunction__ReLU                                          = 0,
	ELearningAgentsActivationFunction__ELU                                           = 1,
	ELearningAgentsActivationFunction__TanH                                          = 2,
	ELearningAgentsActivationFunction__ELearningAgentsActivationFunction_MAX         = 3
};

