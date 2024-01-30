
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NNE

/// Enum /Script/LearningAgents.ELearningAgentsActivationFunction
/// Size: 0x04
enum class ELearningAgentsActivationFunction : uint8_t
{
	ELearningAgentsActivationFunction__ReLU                                          = 0,
	ELearningAgentsActivationFunction__ELU                                           = 1,
	ELearningAgentsActivationFunction__TanH                                          = 2,
	ELearningAgentsActivationFunction__ELearningAgentsActivationFunction_MAX         = 3
};

/// Class /Script/LearningAgents.LearningAgentsAction
/// Size: 0x0228 (0x000028 - 0x000250)
class ULearningAgentsAction : public UObject
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x220];                                     // 0x0030   (0x0220)  MISSED
};

/// Class /Script/LearningAgents.FloatAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UFloatAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.FloatAction.SetFloatAction
	// void SetFloatAction(int32_t AgentId, float Value);                                                                    // [0xbfe1610] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatAction.GetFloatAction
	// float GetFloatAction(int32_t AgentId);                                                                                // [0xbfdcb9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatAction.AddFloatAction
	// class UFloatAction* AddFloatAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);           // [0xbfdb688] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.FloatArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UFloatArrayAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.FloatArrayAction.SetFloatArrayAction
	// void SetFloatArrayAction(int32_t AgentId, TArray<float>& Values);                                                     // [0xbfe16d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayAction.GetFloatArrayAction
	// void GetFloatArrayAction(int32_t AgentId, TArray<float>& OutValues);                                                  // [0xbfdcc2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayAction.AddFloatArrayAction
	// class UFloatArrayAction* AddFloatArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xbfdb798] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UVectorAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VectorAction.SetVectorAction
	// void SetVectorAction(int32_t AgentId, FVector Value);                                                                 // [0xbfe1974] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorAction.GetVectorAction
	// FVector GetVectorAction(int32_t AgentId);                                                                             // [0xbfde1a8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorAction.AddVectorAction
	// class UVectorAction* AddVectorAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);         // [0xbfdc368] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UVectorArrayAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VectorArrayAction.SetVectorArrayAction
	// void SetVectorArrayAction(int32_t AgentId, TArray<FVector>& Vectors);                                                 // [0xbfe1af4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayAction.GetVectorArrayAction
	// void GetVectorArrayAction(int32_t AgentId, TArray<FVector>& OutVectors);                                              // [0xbfde248] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayAction.AddVectorArrayAction
	// class UVectorArrayAction* AddVectorArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xbfdc478] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarVelocityAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UPlanarVelocityAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarVelocityAction.SetPlanarVelocityAction
	// void SetPlanarVelocityAction(int32_t AgentId, FVector Velocity);                                                      // [0xbfe17f4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityAction.GetPlanarVelocityAction
	// FVector GetPlanarVelocityAction(int32_t AgentId);                                                                     // [0xbfdd340] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityAction.AddPlanarVelocityAction
	// class UPlanarVelocityAction* AddPlanarVelocityAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xbfdba48] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationAction
/// Size: 0x0010 (0x000250 - 0x000260)
class URotationAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.RotationAction.GetRotationActionAsRotationVector
	// FVector GetRotationActionAsRotationVector(int32_t AgentId);                                                           // [0xbfdde5c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.GetRotationActionAsQuat
	// FQuat GetRotationActionAsQuat(int32_t AgentId);                                                                       // [0xbfdddbc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.GetRotationAction
	// FRotator GetRotationAction(int32_t AgentId);                                                                          // [0xbfddd1c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.AddRotationAction
	// class URotationAction* AddRotationAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);     // [0xbfdbfa8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class URotationArrayAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayActionAsRotationVectors
	// void GetRotationArrayActionAsRotationVectors(int32_t AgentId, TArray<FVector>& OutRotationVectors);                   // [0xbfde0c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayActionAsQuats
	// void GetRotationArrayActionAsQuats(int32_t AgentId, TArray<FQuat>& OutRotations);                                     // [0xbfddfe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayAction
	// void GetRotationArrayAction(int32_t AgentId, TArray<FRotator>& OutRotations);                                         // [0xbfddefc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.AddRotationArrayAction
	// class URotationArrayAction* AddRotationArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t RotationNum, float Scale); // [0xbfdc0b8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsManagerComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULearningAgentsManagerComponent : public UActorComponent
{ 
public:
	bool                                               bIsSetup;                                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	class ALearningAgentsManager*                      Manager;                                                    // 0x00A8   (0x0008)  
	TArray<class ULearningAgentsHelper*>               HelperObjects;                                              // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.IsSetup
	// bool IsSetup();                                                                                                       // [0x8109240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);               // [0xbfe69c8] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgents
	// void GetAgents(TArray<int32_t>& AgentIds, class UClass* AgentClass, TArray<UObject*>& OutAgents);                     // [0xbfe65e8] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgentManager
	// class ALearningAgentsManager* GetAgentManager(class UClass* AgentManagerClass);                                       // [0xbfe6340] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                   // [0xbfe60c4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsReset
	// void AgentsReset(TArray<int32_t>& AgentIds);                                                                          // [0xbfe5dfc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsRemoved
	// void AgentsRemoved(TArray<int32_t>& AgentIds);                                                                        // [0x8f056fc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsAdded
	// void AgentsAdded(TArray<int32_t>& AgentIds);                                                                          // [0xbfe5d5c] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/LearningAgents.LearningAgentsController
/// Size: 0x0050 (0x0000C0 - 0x000110)
class ULearningAgentsController : public ULearningAgentsManagerComponent
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x00C8   (0x0048)  MISSED


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsController.SetupController
	// void SetupController(class ULearningAgentsInteractor* InInteractor);                                                  // [0xbfe1bd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.SetActions
	// void SetActions(TArray<int32_t>& AgentIds);                                                                           // [0xbfe1478] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsController.RunController
	// void RunController();                                                                                                 // [0xbfe0d24] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.GetInteractor
	// class ULearningAgentsInteractor* GetInteractor(class UClass* InteractorClass);                                        // [0xbfdcd4c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsController.EncodeActions
	// void EncodeActions();                                                                                                 // [0xbfdc5e4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsCritic
/// Size: 0x0160 (0x0000C0 - 0x000220)
class ULearningAgentsCritic : public ULearningAgentsManagerComponent
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x00C0   (0x0008)  
	class ULearningAgentsPolicy*                       Policy;                                                     // 0x00C8   (0x0008)  
	class ULearningAgentsNeuralNetwork*                Network;                                                    // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x148];                                     // 0x00D8   (0x0148)  MISSED


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsCritic.UseCriticFromAsset
	// void UseCriticFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                      // [0xbfe1e5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SetupCritic
	// void SetupCritic(class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, FLearningAgentsCriticSettings& CriticSettings, class ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xbfe1c58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToSnapshot
	// void SaveCriticToSnapshot(FFilePath& File);                                                                           // [0xbfe0db8] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToAsset
	// void SaveCriticToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                       // [0xbfe0d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromSnapshot
	// void LoadCriticFromSnapshot(FFilePath& File);                                                                         // [0xbfdead8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromAsset
	// void LoadCriticFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                     // [0xbfdea58] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.GetEstimatedDiscountedReturn
	// float GetEstimatedDiscountedReturn(int32_t AgentId);                                                                  // [0xbfdcb0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.EvaluateCritic
	// void EvaluateCritic();                                                                                                // [0xbfdc5f8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsHelper
/// Size: 0x0008 (0x000028 - 0x000030)
class ULearningAgentsHelper : public UObject
{ 
public:
	class ULearningAgentsManagerComponent*             ManagerComponent;                                           // 0x0028   (0x0008)  
};

/// Class /Script/LearningAgents.SplineComponentHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class USplineComponentHelper : public ULearningAgentsHelper
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.SplineComponentHelper.GetVelocityAlongSpline
	// float GetVelocityAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, FVector Velocity, float FiniteDifferenceDelta, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbfde32c] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetProportionAlongSplineAsAngle
	// float GetProportionAlongSplineAsAngle(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline); // [0xbfddc20] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetProportionAlongSpline
	// float GetProportionAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline);  // [0xbfddb24] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetPositionsAlongSpline
	// void GetPositionsAlongSpline(TArray<FVector>& OutPositions, int32_t AgentId, class USplineComponent* SplineComponent, int32_t PositionNum, float StartDistanceAlongSpline, float StopDistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbfdd538] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetPositionAtDistanceAlongSpline
	// FVector GetPositionAtDistanceAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbfdd3e0] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetNearestPositionOnSpline
	// FVector GetNearestPositionOnSpline(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbfdd090] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetDistanceAlongSplineAtPosition
	// float GetDistanceAlongSplineAtPosition(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbfdc87c] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetDirectionAtDistanceAlongSpline
	// FVector GetDirectionAtDistanceAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xbfdc724] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.AddSplineComponentHelper
	// class USplineComponentHelper* AddSplineComponentHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xbfdc220] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ProjectionHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UProjectionHelper : public ULearningAgentsHelper
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.ProjectionHelper.ProjectTransformOntoGroundPlane
	// FTransform ProjectTransformOntoGroundPlane(int32_t AgentId, FTransform Transform, FVector LocalForwardVector);        // [0xbfdf630] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.ProjectionHelper.ProjectPositionRotationOntoGroundPlane
	// void ProjectPositionRotationOntoGroundPlane(FVector& OutPosition, FRotator& OutRotation, int32_t AgentId, FVector InPosition, FRotator InRotation, FVector LocalForwardVector); // [0xbfdf198] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.ProjectionHelper.AddProjectionHelper
	// class UProjectionHelper* AddProjectionHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name);  // [0xbfdbd18] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.MeshComponentHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshComponentHelper : public ULearningAgentsHelper
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.MeshComponentHelper.GetMeshBonePositions
	// void GetMeshBonePositions(TArray<FVector>& OutBonePositions, int32_t AgentId, class UMeshComponent* MeshComponent, TArray<FName>& BoneNames); // [0xbfdcde8] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.MeshComponentHelper.AddMeshComponentHelper
	// class UMeshComponentHelper* AddMeshComponentHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xbfdb900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RayCastHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class URayCastHelper : public ULearningAgentsHelper
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.RayCastHelper.RayCastRadial
	// void RayCastRadial(TArray<float>& OutDistances, int32_t AgentId, FVector Position, FRotator Rotation, int32_t RayNum, float MinAngle, float MaxAngle, float MaxRayDist, FVector LocalForward, TEnumAsByte<ECollisionChannel> CollisionChannel); // [0xbfe0360] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.RayCastHelper.RayCastGridHeights
	// void RayCastGridHeights(TArray<float>& OutHeights, int32_t AgentId, FVector Position, FRotator Rotation, int32_t RowNum, int32_t ColNum, float RowWidth, float ColWidth, float MaxHeight, float MinHeight, TEnumAsByte<ECollisionChannel> CollisionChannel); // [0xbfdf974] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.RayCastHelper.AddRayCastHelper
	// class URayCastHelper* AddRayCastHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name);        // [0xbfdbe60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.CollisionMonitorHelper
/// Size: 0x01D0 (0x000030 - 0x000200)
class UCollisionMonitorHelper : public ULearningAgentsHelper
{ 
public:
	unsigned char                                      UnknownData00_1[0x1D0];                                     // 0x0030   (0x01D0)  MISSED


	/// Functions
	// Function /Script/LearningAgents.CollisionMonitorHelper.SetComponent
	// void SetComponent(int32_t AgentId, class UPrimitiveComponent* Component, FName OtherComponentTag);                    // [0xbfe1518] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.ResetCollisionOccurred
	// void ResetCollisionOccurred(int32_t AgentId);                                                                         // [0xbfe0ca4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.HandleOnHit
	// void HandleOnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xbfde798] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/LearningAgents.CollisionMonitorHelper.GetCollisionOccurred
	// bool GetCollisionOccurred(int32_t AgentId);                                                                           // [0xbfdc698] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.CollisionMonitorHelper.GetAndResetCollisionOccurred
	// bool GetAndResetCollisionOccurred(int32_t AgentId);                                                                   // [0xbfdc60c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.AddCollisionMonitorHelper
	// class UCollisionMonitorHelper* AddCollisionMonitorHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xbfdb528] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsInteractor
/// Size: 0x0538 (0x0000C0 - 0x0005F8)
class ULearningAgentsInteractor : public ULearningAgentsManagerComponent
{ 
public:
	TArray<class ULearningAgentsObservation*>          ObservationObjects;                                         // 0x00C0   (0x0010)  
	TArray<class ULearningAgentsAction*>               ActionObjects;                                              // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x518];                                     // 0x00E0   (0x0518)  MISSED


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupObservations
	// void SetupObservations();                                                                                             // [0xb792568] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupInteractor
	// void SetupInteractor();                                                                                               // [0xbfecb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupActions
	// void SetupActions();                                                                                                  // [0x88dc8a8] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetObservations
	// void SetObservations(TArray<int32_t>& AgentIds);                                                                      // [0xbdb46cc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationVector
	// void GetObservationVector(int32_t AgentId, TArray<float>& OutObservationVector);                                      // [0xbfe6bd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionVector
	// void GetActionVector(int32_t AgentId, TArray<float>& OutActionVector);                                                // [0xbfe5ec4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActions
	// void GetActions(TArray<int32_t>& AgentIds);                                                                           // [0xbfe1478] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.EncodeObservations
	// void EncodeObservations();                                                                                            // [0xbfe5eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.DecodeActions
	// void DecodeActions();                                                                                                 // [0xbfe5e9c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsManager
/// Size: 0x0088 (0x000290 - 0x000318)
class ALearningAgentsManager : public AActor
{ 
public:
	int32_t                                            MaxAgentNum;                                                // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	TArray<class UObject*>                             Agents;                                                     // 0x0298   (0x0010)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x02A8   (0x0070)  MISSED


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAllAgents
	// void ResetAllAgents();                                                                                                // [0xbfe7794] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgents
	// void ResetAgents(TArray<int32_t>& AgentIds);                                                                          // [0xbfe76f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgent
	// void ResetAgent(int32_t AgentId);                                                                                     // [0xbfe7678] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAllAgents
	// void RemoveAllAgents();                                                                                               // [0xbfe7664] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgents
	// void RemoveAgents(TArray<int32_t>& AgentIds);                                                                         // [0xbfe75c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgent
	// void RemoveAgent(int32_t AgentId);                                                                                    // [0xbfe7548] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgentObject
	// bool HasAgentObject(class UObject* Agent);                                                                            // [0xbfe6d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgent
	// bool HasAgent(int32_t AgentId);                                                                                       // [0xbfe6cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetMaxAgentNum
	// int32_t GetMaxAgentNum();                                                                                             // [0x64f856c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);               // [0xbfe67c0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgents
	// void GetAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& AgentIds, class UClass* AgentClass);                     // [0xbfe63dc] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentNum
	// int32_t GetAgentNum();                                                                                                // [0x60acb58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentIds
	// void GetAgentIds(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                           // [0xbfe622c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentId
	// int32_t GetAgentId(class UObject* Agent);                                                                             // [0xbfe619c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                   // [0xbfe5fe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.AddManagerAsTickPrerequisiteOfAgents
	// void AddManagerAsTickPrerequisiteOfAgents(TArray<AActor*>& InAgents);                                                 // [0xbfe3248] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgentsAsTickPrerequisiteOfManager
	// void AddAgentsAsTickPrerequisiteOfManager(TArray<AActor*>& InAgents);                                                 // [0xbfe247c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgents
	// void AddAgents(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                             // [0xbfe2368] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgent
	// int32_t AddAgent(class UObject* Agent);                                                                               // [0xbfe22d8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsNeuralNetwork
/// Size: 0x0008 (0x000030 - 0x000038)
class ULearningAgentsNeuralNetwork : public UDataAsset
{ 
public:
	class ULearningAgentsNeuralNetworkData*            NeuralNetworkData;                                          // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToSnapshot
	// void SaveNetworkToSnapshot(FFilePath& File);                                                                          // [0xbfe785c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToAsset
	// void SaveNetworkToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                      // [0xbfe77dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.ResetNetwork
	// void ResetNetwork();                                                                                                  // [0xbfe77a8] Final|Native|Public  
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromSnapshot
	// void LoadNetworkFromSnapshot(FFilePath& File);                                                                        // [0xbfe6e88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromAsset
	// void LoadNetworkFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                    // [0xbfe6e08] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsNeuralNetworkData
/// Size: 0x0030 (0x000028 - 0x000058)
class ULearningAgentsNeuralNetworkData : public UObject
{ 
public:
	int32_t                                            InputNum;                                                   // 0x0028   (0x0004)  
	int32_t                                            OutputNum;                                                  // 0x002C   (0x0004)  
	TArray<char>                                       FileData;                                                   // 0x0030   (0x0010)  
	class UNNEModelData*                               ModelData;                                                  // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/LearningAgents.LearningAgentsObservation
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsObservation : public UObject
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x110];                                     // 0x0030   (0x0110)  MISSED
};

/// Class /Script/LearningAgents.FloatObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.FloatObservation.SetFloatObservation
	// void SetFloatObservation(int32_t AgentId, float Observation);                                                         // [0xbfe8d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatObservation.AddFloatObservation
	// class UFloatObservation* AddFloatObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe3138] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.FloatArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.FloatArrayObservation.SetFloatArrayObservation
	// void SetFloatArrayObservation(int32_t AgentId, TArray<float>& Observation);                                           // [0xbfe8c64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayObservation.AddFloatArrayObservation
	// class UFloatArrayObservation* AddFloatArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xbfe2fd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVectorObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VectorObservation.SetVectorObservation
	// void SetVectorObservation(int32_t AgentId, FVector Observation);                                                      // [0xbfec54c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorObservation.AddVectorObservation
	// class UVectorObservation* AddVectorObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe59d4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVectorArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VectorArrayObservation.SetVectorArrayObservation
	// void SetVectorArrayObservation(int32_t AgentId, TArray<FVector>& Observation);                                        // [0xbfec468] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayObservation.AddVectorArrayObservation
	// class UVectorArrayObservation* AddVectorArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xbfe5868] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.EnumObservation
/// Size: 0x0018 (0x000140 - 0x000158)
class UEnumObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0140   (0x0018)  MISSED


	/// Functions
	// Function /Script/LearningAgents.EnumObservation.SetEnumObservation
	// void SetEnumObservation(int32_t AgentId, char Value);                                                                 // [0xbfe8ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.EnumObservation.AddEnumObservation
	// class UEnumObservation* AddEnumObservation(class ULearningAgentsInteractor* InInteractor, class UEnum* EnumType, FName Name); // [0xbfe2e88] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.EnumArrayObservation
/// Size: 0x0018 (0x000140 - 0x000158)
class UEnumArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0140   (0x0018)  MISSED


	/// Functions
	// Function /Script/LearningAgents.EnumArrayObservation.SetEnumArrayObservation
	// void SetEnumArrayObservation(int32_t AgentId, TArray<char>& Values);                                                  // [0xbfe8abc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.EnumArrayObservation.AddEnumArrayObservation
	// class UEnumArrayObservation* AddEnumArrayObservation(class ULearningAgentsInteractor* InInteractor, class UEnum* EnumType, FName Name, int32_t EnumNum); // [0xbfe2ce4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.TimeObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.TimeObservation.SetTimeObservation
	// void SetTimeObservation(int32_t AgentId, float Time, float RelativeTime);                                             // [0xbfec370] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.TimeObservation.AddTimeObservation
	// class UTimeObservation* AddTimeObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);   // [0xbfe5758] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.TimeArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.TimeArrayObservation.SetTimeArrayObservation
	// void SetTimeArrayObservation(int32_t AgentId, TArray<float>& Times, float RelativeTime);                              // [0xbfec170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.TimeArrayObservation.AddTimeArrayObservation
	// class UTimeArrayObservation* AddTimeArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t TimeNum, float Scale); // [0xbfe55f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngleObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngleObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.AngleObservation.SetAngleObservation
	// void SetAngleObservation(int32_t AgentId, float Angle, float RelativeAngle);                                          // [0xbfe811c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.AngleObservation.AddAngleObservation
	// class UAngleObservation* AddAngleObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe26e4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngleArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngleArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.AngleArrayObservation.SetAngleArrayObservation
	// void SetAngleArrayObservation(int32_t AgentId, TArray<float>& Angles, float RelativeAngle);                           // [0xbfe7f1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.AngleArrayObservation.AddAngleArrayObservation
	// class UAngleArrayObservation* AddAngleArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngleNum, float Scale); // [0xbfe257c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class URotationObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.RotationObservation.SetRotationObservationFromQuat
	// void SetRotationObservationFromQuat(int32_t AgentId, FQuat Rotation, FQuat RelativeRotation);                         // [0xbfea988] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationObservation.SetRotationObservation
	// void SetRotationObservation(int32_t AgentId, FRotator Rotation, FRotator RelativeRotation);                           // [0xbfea718] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationObservation.AddRotationObservation
	// class URotationObservation* AddRotationObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe4d78] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class URotationArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.RotationArrayObservation.SetRotationArrayObservationFromQuats
	// void SetRotationArrayObservationFromQuats(int32_t AgentId, TArray<FQuat>& Rotations, FQuat RelativeRotation);         // [0xbfea534] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayObservation.SetRotationArrayObservation
	// void SetRotationArrayObservation(int32_t AgentId, TArray<FRotator>& Rotations, FRotator RelativeRotation);            // [0xbfea350] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayObservation.AddRotationArrayObservation
	// class URotationArrayObservation* AddRotationArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t RotationNum, float Scale); // [0xbfe4c10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.DirectionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UDirectionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.DirectionObservation.SetDirectionObservation
	// void SetDirectionObservation(int32_t AgentId, FVector Direction, FRotator RelativeRotation);                          // [0xbfe884c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.DirectionObservation.AddDirectionObservation
	// class UDirectionObservation* AddDirectionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe2bd4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.DirectionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UDirectionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.DirectionArrayObservation.SetDirectionArrayObservation
	// void SetDirectionArrayObservation(int32_t AgentId, TArray<FVector>& Directions, FRotator RelativeRotation);           // [0xbfe8668] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.DirectionArrayObservation.AddDirectionArrayObservation
	// class UDirectionArrayObservation* AddDirectionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t DirectionNum, float Scale); // [0xbfe2a6c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarDirectionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarDirectionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarDirectionObservation.SetPlanarDirectionObservation
	// void SetPlanarDirectionObservation(int32_t AgentId, FVector Direction, FRotator RelativeRotation);                    // [0xbfe902c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarDirectionObservation.AddPlanarDirectionObservation
	// class UPlanarDirectionObservation* AddPlanarDirectionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xbfe37e8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarDirectionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarDirectionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarDirectionArrayObservation.SetPlanarDirectionArrayObservation
	// void SetPlanarDirectionArrayObservation(int32_t AgentId, TArray<FVector>& Directions, FRotator RelativeRotation);     // [0xbfe8e48] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarDirectionArrayObservation.AddPlanarDirectionArrayObservation
	// class UPlanarDirectionArrayObservation* AddPlanarDirectionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t DirectionNum, float Scale, FVector Axis0, FVector Axis1); // [0xbfe3348] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PositionObservation.SetPositionObservation
	// void SetPositionObservation(int32_t AgentId, FVector Position, FVector RelativePosition, FRotator RelativeRotation);  // [0xbfe9ff8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PositionObservation.AddPositionObservation
	// class UPositionObservation* AddPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe4b00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PositionArrayObservation.SetPositionArrayObservation
	// void SetPositionArrayObservation(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FRotator RelativeRotation); // [0xbfe9d20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PositionArrayObservation.AddPositionArrayObservation
	// class UPositionArrayObservation* AddPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale); // [0xbfe4998] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarPositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarPositionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarPositionObservation.SetScalarPositionObservationWithAxis
	// void SetScalarPositionObservationWithAxis(int32_t AgentId, FVector Position, FVector RelativePosition, FVector Axis); // [0xbfeb7f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionObservation.SetScalarPositionObservation
	// void SetScalarPositionObservation(int32_t AgentId, float Position, float RelativePosition);                           // [0xbfeb6f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionObservation.AddScalarPositionObservation
	// class UScalarPositionObservation* AddScalarPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe5268] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarPositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarPositionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.SetScalarPositionArrayObservationWithAxis
	// void SetScalarPositionArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FVector Axis); // [0xbfeb420] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.SetScalarPositionArrayObservation
	// void SetScalarPositionArrayObservation(int32_t AgentId, TArray<float>& Positions, float RelativePosition);            // [0xbfeb220] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.AddScalarPositionArrayObservation
	// class UScalarPositionArrayObservation* AddScalarPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale); // [0xbfe5100] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarPositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarPositionObservation.SetPlanarPositionObservation
	// void SetPlanarPositionObservation(int32_t AgentId, FVector Position, FVector RelativePosition, FRotator RelativeRotation); // [0xbfe9574] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarPositionObservation.AddPlanarPositionObservation
	// class UPlanarPositionObservation* AddPlanarPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xbfe3f58] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarPositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarPositionArrayObservation.SetPlanarPositionArrayObservation
	// void SetPlanarPositionArrayObservation(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FRotator RelativeRotation); // [0xbfe929c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarPositionArrayObservation.AddPlanarPositionArrayObservation
	// class UPlanarPositionArrayObservation* AddPlanarPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale, FVector Axis0, FVector Axis1); // [0xbfe3ab8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.VelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VelocityObservation.SetVelocityObservation
	// void SetVelocityObservation(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                            // [0xbfec8b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VelocityObservation.AddVelocityObservation
	// class UVelocityObservation* AddVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe5c4c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VelocityArrayObservation.SetVelocityArrayObservation
	// void SetVelocityArrayObservation(int32_t AgentId, TArray<FVector>& Velocities, FRotator RelativeRotation);            // [0xbfec6cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VelocityArrayObservation.AddVelocityArrayObservation
	// class UVelocityArrayObservation* AddVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale); // [0xbfe5ae4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarVelocityObservation.SetScalarVelocityObservationWithAxis
	// void SetScalarVelocityObservationWithAxis(int32_t AgentId, FVector Velocity, FVector Axis);                           // [0xbfebf0c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityObservation.SetScalarVelocityObservation
	// void SetScalarVelocityObservation(int32_t AgentId, float Velocity);                                                   // [0xbfebe48] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityObservation.AddScalarVelocityObservation
	// class UScalarVelocityObservation* AddScalarVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe54e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.SetScalarVelocityArrayObservationWithAxis
	// void SetScalarVelocityArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& Velocities, FVector Axis);           // [0xbfebc64] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.SetScalarVelocityArrayObservation
	// void SetScalarVelocityArrayObservation(int32_t AgentId, TArray<float>& Velocities);                                   // [0xbfebb44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.AddScalarVelocityArrayObservation
	// class UScalarVelocityArrayObservation* AddScalarVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale); // [0xbfe5378] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarVelocityObservation.SetPlanarVelocityObservation
	// void SetPlanarVelocityObservation(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                      // [0xbfe9ab0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityObservation.AddPlanarVelocityObservation
	// class UPlanarVelocityObservation* AddPlanarVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xbfe46c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarVelocityArrayObservation.SetPlanarVelocityArrayObservation
	// void SetPlanarVelocityArrayObservation(int32_t AgentId, TArray<FVector>& Velocities, FRotator RelativeRotation);      // [0xbfe98cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityArrayObservation.AddPlanarVelocityArrayObservation
	// class UPlanarVelocityArrayObservation* AddPlanarVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale, FVector Axis0, FVector Axis1); // [0xbfe4228] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngularVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngularVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.AngularVelocityObservation.SetAngularVelocityObservation
	// void SetAngularVelocityObservation(int32_t AgentId, FVector AngularVelocity, FRotator RelativeRotation);              // [0xbfe83f8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.AngularVelocityObservation.AddAngularVelocityObservation
	// class UAngularVelocityObservation* AddAngularVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe295c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngularVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngularVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.AngularVelocityArrayObservation.SetAngularVelocityArrayObservation
	// void SetAngularVelocityArrayObservation(int32_t AgentId, TArray<FVector>& AngularVelocities, FRotator RelativeRotation); // [0xbfe8214] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.AngularVelocityArrayObservation.AddAngularVelocityArrayObservation
	// class UAngularVelocityArrayObservation* AddAngularVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngularVelocityNum, float Scale); // [0xbfe27f4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarAngularVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarAngularVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.SetScalarAngularVelocityObservationWithAxis
	// void SetScalarAngularVelocityObservationWithAxis(int32_t AgentId, FVector AngularVelocity, FVector Axis);             // [0xbfeafbc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.SetScalarAngularVelocityObservation
	// void SetScalarAngularVelocityObservation(int32_t AgentId, float AngularVelocity);                                     // [0xbfeaef8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.AddScalarAngularVelocityObservation
	// class UScalarAngularVelocityObservation* AddScalarAngularVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xbfe4ff0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarAngularVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarAngularVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.SetScalarAngularVelocityArrayObservationWithAxis
	// void SetScalarAngularVelocityArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& AngularVelocities, FVector Axis); // [0xbfead14] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.SetScalarAngularVelocityArrayObservation
	// void SetScalarAngularVelocityArrayObservation(int32_t AgentId, TArray<float>& AngularVelocities);                     // [0xbfeabf4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.AddScalarAngularVelocityArrayObservation
	// class UScalarAngularVelocityArrayObservation* AddScalarAngularVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngularVelocityNum, float Scale); // [0xbfe4e88] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsPolicy
/// Size: 0x0160 (0x0000C0 - 0x000220)
class ULearningAgentsPolicy : public ULearningAgentsManagerComponent
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x00C0   (0x0008)  
	class ULearningAgentsNeuralNetwork*                Network;                                                    // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x150];                                     // 0x00D0   (0x0150)  MISSED


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsPolicy.UsePolicyFromAsset
	// void UsePolicyFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                      // [0xc067414] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetupPolicy
	// void SetupPolicy(class ULearningAgentsInteractor* InInteractor, FLearningAgentsPolicySettings& PolicySettings, class ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xc06722c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetMemoryState
	// void SetMemoryState(int32_t AgentId, TArray<float>& InMemoryState);                                                   // [0xc06710c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetActionNoiseScale
	// void SetActionNoiseScale(float ActionNoiseScale);                                                                     // [0xc06708c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToSnapshot
	// void SavePolicyToSnapshot(FFilePath& File);                                                                           // [0xc0669cc] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToAsset
	// void SavePolicyToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                       // [0xc06694c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.RunInference
	// void RunInference();                                                                                                  // [0xc066938] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromSnapshot
	// void LoadPolicyFromSnapshot(FFilePath& File);                                                                         // [0xc066278] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromAsset
	// void LoadPolicyFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                     // [0xc0661f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetMemoryState
	// void GetMemoryState(TArray<float>& OutMemoryState, int32_t AgentId);                                                  // [0xc06602c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetActionNoiseScale
	// float GetActionNoiseScale();                                                                                          // [0xc066004] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.EvaluatePolicy
	// void EvaluatePolicy();                                                                                                // [0xc065ff0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LearningAgents.LearningAgentsCriticSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLearningAgentsCriticSettings
{ 
	int32_t                                            LayerNum;                                                   // 0x0000   (0x0004)  
	int32_t                                            HiddenLayerSize;                                            // 0x0004   (0x0004)  
	ELearningAgentsActivationFunction                  ActivationFunction;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/LearningAgents.LearningAgentsPolicySettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLearningAgentsPolicySettings
{ 
	int32_t                                            ActionNoiseSeed;                                            // 0x0000   (0x0004)  
	float                                              ActionNoiseMin;                                             // 0x0004   (0x0004)  
	float                                              ActionNoiseMax;                                             // 0x0008   (0x0004)  
	float                                              ActionNoiseScale;                                           // 0x000C   (0x0004)  
	int32_t                                            LayerNum;                                                   // 0x0010   (0x0004)  
	int32_t                                            HiddenLayerSize;                                            // 0x0014   (0x0004)  
	int32_t                                            MemoryStateSize;                                            // 0x0018   (0x0004)  
	ELearningAgentsActivationFunction                  ActivationFunction;                                         // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

