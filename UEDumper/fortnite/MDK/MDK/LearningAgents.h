
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
	// void SetFloatAction(int32_t AgentId, float Value);                                                                       // [0xc37d37c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatAction.GetFloatAction
	// float GetFloatAction(int32_t AgentId);                                                                                   // [0xc377c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatAction.AddFloatAction
	// class UFloatAction* AddFloatAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);              // [0xc375eb4] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetFloatArrayAction(int32_t AgentId, TArray<float>& Values);                                                        // [0xc37d4b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayAction.GetFloatArrayAction
	// void GetFloatArrayAction(int32_t AgentId, TArray<float>& OutValues);                                                     // [0xc377d40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayAction.AddFloatArrayAction
	// class UFloatArrayAction* AddFloatArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc376084] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetVectorAction(int32_t AgentId, FVector Value);                                                                    // [0xc37d780] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorAction.GetVectorAction
	// FVector GetVectorAction(int32_t AgentId);                                                                                // [0xc379e10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorAction.AddVectorAction
	// class UVectorAction* AddVectorAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);            // [0xc377104] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetVectorArrayAction(int32_t AgentId, TArray<FVector>& Vectors);                                                    // [0xc37d8dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayAction.GetVectorArrayAction
	// void GetVectorArrayAction(int32_t AgentId, TArray<FVector>& OutVectors);                                                 // [0xc379ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayAction.AddVectorArrayAction
	// class UVectorArrayAction* AddVectorArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc3772d4] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetPlanarVelocityAction(int32_t AgentId, FVector Velocity);                                                         // [0xc37d624] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityAction.GetPlanarVelocityAction
	// FVector GetPlanarVelocityAction(int32_t AgentId);                                                                        // [0xc3784c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityAction.AddPlanarVelocityAction
	// class UPlanarVelocityAction* AddPlanarVelocityAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc3764b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
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
	// FVector GetRotationActionAsRotationVector(int32_t AgentId);                                                              // [0xc3793b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.GetRotationActionAsQuat
	// FQuat GetRotationActionAsQuat(int32_t AgentId);                                                                          // [0xc3792d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.GetRotationAction
	// FRotator GetRotationAction(int32_t AgentId);                                                                             // [0xc3791f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.AddRotationAction
	// class URotationAction* AddRotationAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);        // [0xc376b08] Final|Native|Static|Public|BlueprintCallable 
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
	// void GetRotationArrayActionAsRotationVectors(int32_t AgentId, TArray<FVector>& OutRotationVectors);                      // [0xc379ce4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayActionAsQuats
	// void GetRotationArrayActionAsQuats(int32_t AgentId, TArray<FQuat>& OutRotations);                                        // [0xc379bb8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayAction
	// void GetRotationArrayAction(int32_t AgentId, TArray<FRotator>& OutRotations);                                            // [0xc379490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.AddRotationArrayAction
	// class URotationArrayAction* AddRotationArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t RotationNum, float Scale); // [0xc376cd8] Final|Native|Static|Public|BlueprintCallable 
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
	// bool IsSetup();                                                                                                          // [0x80d8748] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);                  // [0xc3843ac] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgents
	// void GetAgents(TArray<int32_t>& AgentIds, class UClass* AgentClass, TArray<UObject*>& OutAgents);                        // [0xc383f94] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgentManager
	// class ALearningAgentsManager* GetAgentManager(class UClass* AgentManagerClass);                                          // [0xc383c98] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                      // [0xc383950] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsReset
	// void AgentsReset(TArray<int32_t>& AgentIds);                                                                             // [0xc3835c0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsRemoved
	// void AgentsRemoved(TArray<int32_t>& AgentIds);                                                                           // [0xc383520] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsAdded
	// void AgentsAdded(TArray<int32_t>& AgentIds);                                                                             // [0xc383480] Native|Event|Public|HasOutParms|BlueprintEvent 
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
	// void SetupController(class ULearningAgentsInteractor* InInteractor);                                                     // [0xc37da08] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.SetActions
	// void SetActions(TArray<int32_t>& AgentIds);                                                                              // [0xc37d124] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsController.RunController
	// void RunController();                                                                                                    // [0xc37c990] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.GetInteractor
	// class ULearningAgentsInteractor* GetInteractor(class UClass* InteractorClass);                                           // [0xc377eac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsController.EncodeActions
	// void EncodeActions();                                                                                                    // [0xc377544] Final|Native|Public|BlueprintCallable 
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
	// void UseCriticFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                         // [0xc37dd64] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SetupCritic
	// void SetupCritic(class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, FLearningAgentsCriticSettings& CriticSettings, class ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xc37dac8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToSnapshot
	// void SaveCriticToSnapshot(FFilePath& File);                                                                              // [0xc37ca64] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToAsset
	// void SaveCriticToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                          // [0xc37c9a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromSnapshot
	// void LoadCriticFromSnapshot(FFilePath& File);                                                                            // [0xc37a73c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromAsset
	// void LoadCriticFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                        // [0xc37a67c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.GetEstimatedDiscountedReturn
	// float GetEstimatedDiscountedReturn(int32_t AgentId);                                                                     // [0xc377ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.EvaluateCritic
	// void EvaluateCritic();                                                                                                   // [0xc377558] Final|Native|Public|BlueprintCallable 
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
	// float GetVelocityAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, FVector Velocity, float FiniteDifferenceDelta, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc37a01c] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetProportionAlongSplineAsAngle
	// float GetProportionAlongSplineAsAngle(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline); // [0xc379034] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetProportionAlongSpline
	// float GetProportionAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline);     // [0xc378e78] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetPositionsAlongSpline
	// void GetPositionsAlongSpline(TArray<FVector>& OutPositions, int32_t AgentId, class USplineComponent* SplineComponent, int32_t PositionNum, float StartDistanceAlongSpline, float StopDistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc3787f4] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetPositionAtDistanceAlongSpline
	// FVector GetPositionAtDistanceAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc3785a0] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetNearestPositionOnSpline
	// FVector GetNearestPositionOnSpline(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc378258] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetDistanceAlongSplineAtPosition
	// float GetDistanceAlongSplineAtPosition(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc377958] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetDirectionAtDistanceAlongSpline
	// FVector GetDirectionAtDistanceAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc377704] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.AddSplineComponentHelper
	// class USplineComponentHelper* AddSplineComponentHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xc376f44] Final|Native|Static|Public|BlueprintCallable 
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
	// FTransform ProjectTransformOntoGroundPlane(int32_t AgentId, FTransform Transform, FVector LocalForwardVector);           // [0xc37b154] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.ProjectionHelper.ProjectPositionRotationOntoGroundPlane
	// void ProjectPositionRotationOntoGroundPlane(FVector& OutPosition, FRotator& OutRotation, int32_t AgentId, FVector InPosition, FRotator InRotation, FVector LocalForwardVector); // [0xc37adfc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.ProjectionHelper.AddProjectionHelper
	// class UProjectionHelper* AddProjectionHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name);     // [0xc376788] Final|Native|Static|Public|BlueprintCallable 
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
	// void GetMeshBonePositions(TArray<FVector>& OutBonePositions, int32_t AgentId, class UMeshComponent* MeshComponent, TArray<FName>& BoneNames); // [0xc377f88] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.MeshComponentHelper.AddMeshComponentHelper
	// class UMeshComponentHelper* AddMeshComponentHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xc3762f0] Final|Native|Static|Public|BlueprintCallable 
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
	// void RayCastRadial(TArray<float>& OutDistances, int32_t AgentId, FVector Position, FRotator Rotation, int32_t RayNum, float MinAngle, float MaxAngle, float MaxRayDist, FVector LocalForward, TEnumAsByte<ECollisionChannel> CollisionChannel); // [0xc37becc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.RayCastHelper.RayCastGridHeights
	// void RayCastGridHeights(TArray<float>& OutHeights, int32_t AgentId, FVector Position, FRotator Rotation, int32_t RowNum, int32_t ColNum, float RowWidth, float ColWidth, float MaxHeight, float MinHeight, TEnumAsByte<ECollisionChannel> CollisionChannel); // [0xc37b40c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.RayCastHelper.AddRayCastHelper
	// class URayCastHelper* AddRayCastHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name);           // [0xc376948] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetComponent(int32_t AgentId, class UPrimitiveComponent* Component, FName OtherComponentTag);                       // [0xc37d1c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.ResetCollisionOccurred
	// void ResetCollisionOccurred(int32_t AgentId);                                                                            // [0xc37c8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.HandleOnHit
	// void HandleOnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xc37a378] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/LearningAgents.CollisionMonitorHelper.GetCollisionOccurred
	// bool GetCollisionOccurred(int32_t AgentId);                                                                              // [0xc377638] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.CollisionMonitorHelper.GetAndResetCollisionOccurred
	// bool GetAndResetCollisionOccurred(int32_t AgentId);                                                                      // [0xc37756c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.AddCollisionMonitorHelper
	// class UCollisionMonitorHelper* AddCollisionMonitorHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xc375cdc] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetupObservations();                                                                                                // [0xba4af70] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupInteractor
	// void SetupInteractor();                                                                                                  // [0xc38b0a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupActions
	// void SetupActions();                                                                                                     // [0x88c61bc] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetObservations
	// void SetObservations(TArray<int32_t>& AgentIds);                                                                         // [0xc13baa8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationVector
	// void GetObservationVector(int32_t AgentId, TArray<float>& OutObservationVector);                                         // [0xc3845c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionVector
	// void GetActionVector(int32_t AgentId, TArray<float>& OutActionVector);                                                   // [0xc383688] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActions
	// void GetActions(TArray<int32_t>& AgentIds);                                                                              // [0xc37d124] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.EncodeObservations
	// void EncodeObservations();                                                                                               // [0xc383674] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.DecodeActions
	// void DecodeActions();                                                                                                    // [0xc383660] Final|Native|Public|BlueprintCallable 
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
	// void ResetAllAgents();                                                                                                   // [0xc38531c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgents
	// void ResetAgents(TArray<int32_t>& AgentIds);                                                                             // [0xc385280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgent
	// void ResetAgent(int32_t AgentId);                                                                                        // [0xc3851c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAllAgents
	// void RemoveAllAgents();                                                                                                  // [0xc3851ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgents
	// void RemoveAgents(TArray<int32_t>& AgentIds);                                                                            // [0xc385110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgent
	// void RemoveAgent(int32_t AgentId);                                                                                       // [0xc385050] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgentObject
	// bool HasAgentObject(class UObject* Agent);                                                                               // [0xc384800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgent
	// bool HasAgent(int32_t AgentId);                                                                                          // [0xc384734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetMaxAgentNum
	// int32_t GetMaxAgentNum();                                                                                                // [0x625ff74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);                  // [0xc384190] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgents
	// void GetAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& AgentIds, class UClass* AgentClass);                        // [0xc383d74] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentNum
	// int32_t GetAgentNum();                                                                                                   // [0x8496cec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentIds
	// void GetAgentIds(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                              // [0xc383b84] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentId
	// int32_t GetAgentId(class UObject* Agent);                                                                                // [0xc383ab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                      // [0xc3837f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.AddManagerAsTickPrerequisiteOfAgents
	// void AddManagerAsTickPrerequisiteOfAgents(TArray<AActor*>& InAgents);                                                    // [0xc37faa4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgentsAsTickPrerequisiteOfManager
	// void AddAgentsAsTickPrerequisiteOfManager(TArray<AActor*>& InAgents);                                                    // [0xc37e404] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgents
	// void AddAgents(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                                // [0xc37e2f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgent
	// int32_t AddAgent(class UObject* Agent);                                                                                  // [0xc37e220] Final|Native|Public|BlueprintCallable 
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
	// void SaveNetworkToSnapshot(FFilePath& File);                                                                             // [0xc385424] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToAsset
	// void SaveNetworkToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                         // [0xc385364] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.ResetNetwork
	// void ResetNetwork();                                                                                                     // [0xc385330] Final|Native|Public  
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromSnapshot
	// void LoadNetworkFromSnapshot(FFilePath& File);                                                                           // [0xc384990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromAsset
	// void LoadNetworkFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                       // [0xc3848d0] Final|Native|Public|BlueprintCallable 
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
	// void SetFloatObservation(int32_t AgentId, float Observation);                                                            // [0xc386b08] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatObservation.AddFloatObservation
	// class UFloatObservation* AddFloatObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);    // [0xc37f8d4] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetFloatArrayObservation(int32_t AgentId, TArray<float>& Observation);                                              // [0xc38699c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayObservation.AddFloatArrayObservation
	// class UFloatArrayObservation* AddFloatArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc37f668] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetVectorObservation(int32_t AgentId, FVector Observation);                                                         // [0xc38ab28] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorObservation.AddVectorObservation
	// class UVectorObservation* AddVectorObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);  // [0xc382e74] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetVectorArrayObservation(int32_t AgentId, TArray<FVector>& Observation);                                           // [0xc38a9fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayObservation.AddVectorArrayObservation
	// class UVectorArrayObservation* AddVectorArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc382c04] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetEnumObservation(int32_t AgentId, char Value);                                                                    // [0xc386860] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.EnumObservation.AddEnumObservation
	// class UEnumObservation* AddEnumObservation(class ULearningAgentsInteractor* InInteractor, class UEnum* EnumType, FName Name); // [0xc37f460] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetEnumArrayObservation(int32_t AgentId, TArray<char>& Values);                                                     // [0xc386734] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.EnumArrayObservation.AddEnumArrayObservation
	// class UEnumArrayObservation* AddEnumArrayObservation(class ULearningAgentsInteractor* InInteractor, class UEnum* EnumType, FName Name, int32_t EnumNum); // [0xc37f1b8] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetTimeObservation(int32_t AgentId, float Time, float RelativeTime);                                                // [0xc38a844] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.TimeObservation.AddTimeObservation
	// class UTimeObservation* AddTimeObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);      // [0xc382a34] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetTimeArrayObservation(int32_t AgentId, TArray<float>& Times, float RelativeTime);                                 // [0xc38a5ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.TimeArrayObservation.AddTimeArrayObservation
	// class UTimeArrayObservation* AddTimeArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t TimeNum, float Scale); // [0xc3827c8] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetAngleObservation(int32_t AgentId, float Angle, float RelativeAngle);                                             // [0xc385d3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.AngleObservation.AddAngleObservation
	// class UAngleObservation* AddAngleObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);    // [0xc37e770] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetAngleArrayObservation(int32_t AgentId, TArray<float>& Angles, float RelativeAngle);                              // [0xc385ae4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.AngleArrayObservation.AddAngleArrayObservation
	// class UAngleArrayObservation* AddAngleArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngleNum, float Scale); // [0xc37e504] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetRotationObservationFromQuat(int32_t AgentId, FQuat Rotation, FQuat RelativeRotation);                            // [0xc388cb4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationObservation.SetRotationObservation
	// void SetRotationObservation(int32_t AgentId, FRotator Rotation, FRotator RelativeRotation);                              // [0xc388a70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationObservation.AddRotationObservation
	// class URotationObservation* AddRotationObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc381944] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetRotationArrayObservationFromQuats(int32_t AgentId, TArray<FQuat>& Rotations, FQuat RelativeRotation);            // [0xc388840] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayObservation.SetRotationArrayObservation
	// void SetRotationArrayObservation(int32_t AgentId, TArray<FRotator>& Rotations, FRotator RelativeRotation);               // [0xc387ff4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayObservation.AddRotationArrayObservation
	// class URotationArrayObservation* AddRotationArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t RotationNum, float Scale); // [0xc3816d8] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetDirectionObservation(int32_t AgentId, FVector Direction, FRotator RelativeRotation);                             // [0xc386548] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.DirectionObservation.AddDirectionObservation
	// class UDirectionObservation* AddDirectionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc37efe8] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetDirectionArrayObservation(int32_t AgentId, TArray<FVector>& Directions, FRotator RelativeRotation);              // [0xc386314] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.DirectionArrayObservation.AddDirectionArrayObservation
	// class UDirectionArrayObservation* AddDirectionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t DirectionNum, float Scale); // [0xc37ed7c] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetPlanarDirectionObservation(int32_t AgentId, FVector Direction, FRotator RelativeRotation);                       // [0xc386e78] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarDirectionObservation.AddPlanarDirectionObservation
	// class UPlanarDirectionObservation* AddPlanarDirectionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc380074] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
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
	// void SetPlanarDirectionArrayObservation(int32_t AgentId, TArray<FVector>& Directions, FRotator RelativeRotation);        // [0xc386c44] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarDirectionArrayObservation.AddPlanarDirectionArrayObservation
	// class UPlanarDirectionArrayObservation* AddPlanarDirectionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t DirectionNum, float Scale, FVector Axis0, FVector Axis1); // [0xc37fba4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
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
	// void SetPositionObservation(int32_t AgentId, FVector Position, FVector RelativePosition, FRotator RelativeRotation);     // [0xc387d7c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PositionObservation.AddPositionObservation
	// class UPositionObservation* AddPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc381508] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetPositionArrayObservation(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FRotator RelativeRotation); // [0xc387a3c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PositionArrayObservation.AddPositionArrayObservation
	// class UPositionArrayObservation* AddPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale); // [0xc38129c] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetScalarPositionObservationWithAxis(int32_t AgentId, FVector Position, FVector RelativePosition, FVector Axis);    // [0xc389cac] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionObservation.SetScalarPositionObservation
	// void SetScalarPositionObservation(int32_t AgentId, float Position, float RelativePosition);                              // [0xc389af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionObservation.AddScalarPositionObservation
	// class UScalarPositionObservation* AddScalarPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc3821bc] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetScalarPositionArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FVector Axis); // [0xc3897b4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.SetScalarPositionArrayObservation
	// void SetScalarPositionArrayObservation(int32_t AgentId, TArray<float>& Positions, float RelativePosition);               // [0xc38955c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.AddScalarPositionArrayObservation
	// class UScalarPositionArrayObservation* AddScalarPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale); // [0xc381f50] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetPlanarPositionObservation(int32_t AgentId, FVector Position, FVector RelativePosition, FRotator RelativeRotation); // [0xc3873a4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarPositionObservation.AddPlanarPositionObservation
	// class UPlanarPositionObservation* AddPlanarPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc38081c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
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
	// void SetPlanarPositionArrayObservation(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FRotator RelativeRotation); // [0xc387064] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarPositionArrayObservation.AddPlanarPositionArrayObservation
	// class UPlanarPositionArrayObservation* AddPlanarPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale, FVector Axis0, FVector Axis1); // [0xc38034c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
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
	// void SetVelocityObservation(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                               // [0xc38aeb8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VelocityObservation.AddVelocityObservation
	// class UVelocityObservation* AddVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc3832b0] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetVelocityArrayObservation(int32_t AgentId, TArray<FVector>& Velocities, FRotator RelativeRotation);               // [0xc38ac84] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VelocityArrayObservation.AddVelocityArrayObservation
	// class UVelocityArrayObservation* AddVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale); // [0xc383044] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetScalarVelocityObservationWithAxis(int32_t AgentId, FVector Velocity, FVector Axis);                              // [0xc38a408] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityObservation.SetScalarVelocityObservation
	// void SetScalarVelocityObservation(int32_t AgentId, float Velocity);                                                      // [0xc38a2cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityObservation.AddScalarVelocityObservation
	// class UScalarVelocityObservation* AddScalarVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc3825f8] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetScalarVelocityArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& Velocities, FVector Axis);              // [0xc38a098] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.SetScalarVelocityArrayObservation
	// void SetScalarVelocityArrayObservation(int32_t AgentId, TArray<float>& Velocities);                                      // [0xc389f2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.AddScalarVelocityArrayObservation
	// class UScalarVelocityArrayObservation* AddScalarVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale); // [0xc38238c] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetPlanarVelocityObservation(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                         // [0xc387850] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityObservation.AddPlanarVelocityObservation
	// class UPlanarVelocityObservation* AddPlanarVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc380fc4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
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
	// void SetPlanarVelocityArrayObservation(int32_t AgentId, TArray<FVector>& Velocities, FRotator RelativeRotation);         // [0xc38761c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityArrayObservation.AddPlanarVelocityArrayObservation
	// class UPlanarVelocityArrayObservation* AddPlanarVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale, FVector Axis0, FVector Axis1); // [0xc380af4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
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
	// void SetAngularVelocityObservation(int32_t AgentId, FVector AngularVelocity, FRotator RelativeRotation);                 // [0xc386128] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.AngularVelocityObservation.AddAngularVelocityObservation
	// class UAngularVelocityObservation* AddAngularVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc37ebac] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetAngularVelocityArrayObservation(int32_t AgentId, TArray<FVector>& AngularVelocities, FRotator RelativeRotation); // [0xc385ef4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.AngularVelocityArrayObservation.AddAngularVelocityArrayObservation
	// class UAngularVelocityArrayObservation* AddAngularVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngularVelocityNum, float Scale); // [0xc37e940] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetScalarAngularVelocityObservationWithAxis(int32_t AgentId, FVector AngularVelocity, FVector Axis);                // [0xc389378] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.SetScalarAngularVelocityObservation
	// void SetScalarAngularVelocityObservation(int32_t AgentId, float AngularVelocity);                                        // [0xc38923c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.AddScalarAngularVelocityObservation
	// class UScalarAngularVelocityObservation* AddScalarAngularVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc381d80] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetScalarAngularVelocityArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& AngularVelocities, FVector Axis); // [0xc389008] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.SetScalarAngularVelocityArrayObservation
	// void SetScalarAngularVelocityArrayObservation(int32_t AgentId, TArray<float>& AngularVelocities);                        // [0xc388e9c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.AddScalarAngularVelocityArrayObservation
	// class UScalarAngularVelocityArrayObservation* AddScalarAngularVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngularVelocityNum, float Scale); // [0xc381b14] Final|Native|Static|Public|BlueprintCallable 
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
	// void UsePolicyFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                         // [0xc4059fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetupPolicy
	// void SetupPolicy(class ULearningAgentsInteractor* InInteractor, FLearningAgentsPolicySettings& PolicySettings, class ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xc4057cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetMemoryState
	// void SetMemoryState(int32_t AgentId, TArray<float>& InMemoryState);                                                      // [0xc405660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetActionNoiseScale
	// void SetActionNoiseScale(float ActionNoiseScale);                                                                        // [0xc40559c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToSnapshot
	// void SavePolicyToSnapshot(FFilePath& File);                                                                              // [0xc404edc] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToAsset
	// void SavePolicyToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                          // [0xc404e1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.RunInference
	// void RunInference();                                                                                                     // [0xc404e08] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromSnapshot
	// void LoadPolicyFromSnapshot(FFilePath& File);                                                                            // [0xc404748] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromAsset
	// void LoadPolicyFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                        // [0xc404688] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetMemoryState
	// void GetMemoryState(TArray<float>& OutMemoryState, int32_t AgentId);                                                     // [0xc4044a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetActionNoiseScale
	// float GetActionNoiseScale();                                                                                             // [0xc40447c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.EvaluatePolicy
	// void EvaluatePolicy();                                                                                                   // [0xc404468] Final|Native|Public|BlueprintCallable 
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

