
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
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x220];                                     // 0x0030   (0x0220)  MISSED
};

/// Class /Script/LearningAgents.FloatAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UFloatAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.FloatAction.SetFloatAction
	// void SetFloatAction(int32_t AgentId, float Value);                                                                    // [0xc3377b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatAction.GetFloatAction
	// float GetFloatAction(int32_t AgentId);                                                                                // [0xc3320a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatAction.AddFloatAction
	// class UFloatAction* AddFloatAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);           // [0xc3302ec] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.FloatArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UFloatArrayAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.FloatArrayAction.SetFloatArrayAction
	// void SetFloatArrayAction(int32_t AgentId, TArray<float>& Values);                                                     // [0xc3378f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayAction.GetFloatArrayAction
	// void GetFloatArrayAction(int32_t AgentId, TArray<float>& OutValues);                                                  // [0xc332178] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayAction.AddFloatArrayAction
	// class UFloatArrayAction* AddFloatArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc3304bc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UVectorAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VectorAction.SetVectorAction
	// void SetVectorAction(int32_t AgentId, FVector Value);                                                                 // [0xc337bb8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorAction.GetVectorAction
	// FVector GetVectorAction(int32_t AgentId);                                                                             // [0xc334248] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorAction.AddVectorAction
	// class UVectorAction* AddVectorAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);         // [0xc33153c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UVectorArrayAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VectorArrayAction.SetVectorArrayAction
	// void SetVectorArrayAction(int32_t AgentId, TArray<FVector>& Vectors);                                                 // [0xc337d14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayAction.GetVectorArrayAction
	// void GetVectorArrayAction(int32_t AgentId, TArray<FVector>& OutVectors);                                              // [0xc334328] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayAction.AddVectorArrayAction
	// class UVectorArrayAction* AddVectorArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc33170c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarVelocityAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UPlanarVelocityAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarVelocityAction.SetPlanarVelocityAction
	// void SetPlanarVelocityAction(int32_t AgentId, FVector Velocity);                                                      // [0xc337a5c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityAction.GetPlanarVelocityAction
	// FVector GetPlanarVelocityAction(int32_t AgentId);                                                                     // [0xc3328f8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityAction.AddPlanarVelocityAction
	// class UPlanarVelocityAction* AddPlanarVelocityAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc3308e8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationAction
/// Size: 0x0010 (0x000250 - 0x000260)
class URotationAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.RotationAction.GetRotationActionAsRotationVector
	// FVector GetRotationActionAsRotationVector(int32_t AgentId);                                                           // [0xc3337e8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.GetRotationActionAsQuat
	// FQuat GetRotationActionAsQuat(int32_t AgentId);                                                                       // [0xc333708] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.GetRotationAction
	// FRotator GetRotationAction(int32_t AgentId);                                                                          // [0xc333628] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationAction.AddRotationAction
	// class URotationAction* AddRotationAction(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);     // [0xc330f40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class URotationArrayAction : public ULearningAgentsAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayActionAsRotationVectors
	// void GetRotationArrayActionAsRotationVectors(int32_t AgentId, TArray<FVector>& OutRotationVectors);                   // [0xc33411c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayActionAsQuats
	// void GetRotationArrayActionAsQuats(int32_t AgentId, TArray<FQuat>& OutRotations);                                     // [0xc333ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.GetRotationArrayAction
	// void GetRotationArrayAction(int32_t AgentId, TArray<FRotator>& OutRotations);                                         // [0xc3338c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayAction.AddRotationArrayAction
	// class URotationArrayAction* AddRotationArrayAction(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t RotationNum, float Scale); // [0xc331110] Final|Native|Static|Public|BlueprintCallable 
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
	// bool IsSetup();                                                                                                       // [0x80a279c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);               // [0xc33e7e4] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgents
	// void GetAgents(TArray<int32_t>& AgentIds, class UClass* AgentClass, TArray<UObject*>& OutAgents);                     // [0xc33e3cc] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgentManager
	// class ALearningAgentsManager* GetAgentManager(class UClass* AgentManagerClass);                                       // [0xc33e0d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                   // [0xc33dd88] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsReset
	// void AgentsReset(TArray<int32_t>& AgentIds);                                                                          // [0xc33d9f8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsRemoved
	// void AgentsRemoved(TArray<int32_t>& AgentIds);                                                                        // [0xc33d958] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsAdded
	// void AgentsAdded(TArray<int32_t>& AgentIds);                                                                          // [0xc33d8b8] Native|Event|Public|HasOutParms|BlueprintEvent 
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
	// void SetupController(class ULearningAgentsInteractor* InInteractor);                                                  // [0xc337e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.SetActions
	// void SetActions(TArray<int32_t>& AgentIds);                                                                           // [0xc33755c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsController.RunController
	// void RunController();                                                                                                 // [0xc336dc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.GetInteractor
	// class ULearningAgentsInteractor* GetInteractor(class UClass* InteractorClass);                                        // [0xc3322e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsController.EncodeActions
	// void EncodeActions();                                                                                                 // [0xc33197c] Final|Native|Public|BlueprintCallable 
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
	// void UseCriticFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                      // [0xc33819c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SetupCritic
	// void SetupCritic(class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, FLearningAgentsCriticSettings& CriticSettings, class ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xc337f00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToSnapshot
	// void SaveCriticToSnapshot(FFilePath& File);                                                                           // [0xc336e9c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToAsset
	// void SaveCriticToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                       // [0xc336ddc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromSnapshot
	// void LoadCriticFromSnapshot(FFilePath& File);                                                                         // [0xc334b74] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromAsset
	// void LoadCriticFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                     // [0xc334ab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.GetEstimatedDiscountedReturn
	// float GetEstimatedDiscountedReturn(int32_t AgentId);                                                                  // [0xc331fd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.EvaluateCritic
	// void EvaluateCritic();                                                                                                // [0xc331990] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsHelper
/// Size: 0x0008 (0x000028 - 0x000030)
class ULearningAgentsHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class ULearningAgentsManagerComponent*             ManagerComponent;                                           // 0x0028   (0x0008)  
};

/// Class /Script/LearningAgents.SplineComponentHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class USplineComponentHelper : public ULearningAgentsHelper
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.SplineComponentHelper.GetVelocityAlongSpline
	// float GetVelocityAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, FVector Velocity, float FiniteDifferenceDelta, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc334454] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetProportionAlongSplineAsAngle
	// float GetProportionAlongSplineAsAngle(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline); // [0xc33346c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetProportionAlongSpline
	// float GetProportionAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline);  // [0xc3332b0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetPositionsAlongSpline
	// void GetPositionsAlongSpline(TArray<FVector>& OutPositions, int32_t AgentId, class USplineComponent* SplineComponent, int32_t PositionNum, float StartDistanceAlongSpline, float StopDistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc332c2c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetPositionAtDistanceAlongSpline
	// FVector GetPositionAtDistanceAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc3329d8] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetNearestPositionOnSpline
	// FVector GetNearestPositionOnSpline(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc332690] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetDistanceAlongSplineAtPosition
	// float GetDistanceAlongSplineAtPosition(int32_t AgentId, class USplineComponent* SplineComponent, FVector Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc331d90] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.GetDirectionAtDistanceAlongSpline
	// FVector GetDirectionAtDistanceAlongSpline(int32_t AgentId, class USplineComponent* SplineComponent, float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xc331b3c] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.SplineComponentHelper.AddSplineComponentHelper
	// class USplineComponentHelper* AddSplineComponentHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xc33137c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ProjectionHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UProjectionHelper : public ULearningAgentsHelper
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.ProjectionHelper.ProjectTransformOntoGroundPlane
	// FTransform ProjectTransformOntoGroundPlane(int32_t AgentId, FTransform Transform, FVector LocalForwardVector);        // [0xc33558c] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.ProjectionHelper.ProjectPositionRotationOntoGroundPlane
	// void ProjectPositionRotationOntoGroundPlane(FVector& OutPosition, FRotator& OutRotation, int32_t AgentId, FVector InPosition, FRotator InRotation, FVector LocalForwardVector); // [0xc335234] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.ProjectionHelper.AddProjectionHelper
	// class UProjectionHelper* AddProjectionHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name);  // [0xc330bc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.MeshComponentHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshComponentHelper : public ULearningAgentsHelper
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.MeshComponentHelper.GetMeshBonePositions
	// void GetMeshBonePositions(TArray<FVector>& OutBonePositions, int32_t AgentId, class UMeshComponent* MeshComponent, TArray<FName>& BoneNames); // [0xc3323c0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.MeshComponentHelper.AddMeshComponentHelper
	// class UMeshComponentHelper* AddMeshComponentHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xc330728] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RayCastHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class URayCastHelper : public ULearningAgentsHelper
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.RayCastHelper.RayCastRadial
	// void RayCastRadial(TArray<float>& OutDistances, int32_t AgentId, FVector Position, FRotator Rotation, int32_t RayNum, float MinAngle, float MaxAngle, float MaxRayDist, FVector LocalForward, TEnumAsByte<ECollisionChannel> CollisionChannel); // [0xc336304] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.RayCastHelper.RayCastGridHeights
	// void RayCastGridHeights(TArray<float>& OutHeights, int32_t AgentId, FVector Position, FRotator Rotation, int32_t RowNum, int32_t ColNum, float RowWidth, float ColWidth, float MaxHeight, float MinHeight, TEnumAsByte<ECollisionChannel> CollisionChannel); // [0xc335844] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/LearningAgents.RayCastHelper.AddRayCastHelper
	// class URayCastHelper* AddRayCastHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name);        // [0xc330d80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.CollisionMonitorHelper
/// Size: 0x01D0 (0x000030 - 0x000200)
class UCollisionMonitorHelper : public ULearningAgentsHelper
{ 
public:
	unsigned char                                      UnknownData00_1[0x1D0];                                     // 0x0030   (0x01D0)  MISSED


	/// Functions
	// Function /Script/LearningAgents.CollisionMonitorHelper.SetComponent
	// void SetComponent(int32_t AgentId, class UPrimitiveComponent* Component, FName OtherComponentTag);                    // [0xc3375fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.ResetCollisionOccurred
	// void ResetCollisionOccurred(int32_t AgentId);                                                                         // [0xc336d08] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.HandleOnHit
	// void HandleOnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xc3347b0] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/LearningAgents.CollisionMonitorHelper.GetCollisionOccurred
	// bool GetCollisionOccurred(int32_t AgentId);                                                                           // [0xc331a70] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LearningAgents.CollisionMonitorHelper.GetAndResetCollisionOccurred
	// bool GetAndResetCollisionOccurred(int32_t AgentId);                                                                   // [0xc3319a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.CollisionMonitorHelper.AddCollisionMonitorHelper
	// class UCollisionMonitorHelper* AddCollisionMonitorHelper(class ULearningAgentsManagerComponent* InManagerComponent, FName Name); // [0xc330114] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetupObservations();                                                                                             // [0xba06528] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupInteractor
	// void SetupInteractor();                                                                                               // [0xc3454dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupActions
	// void SetupActions();                                                                                                  // [0x888df9c] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetObservations
	// void SetObservations(TArray<int32_t>& AgentIds);                                                                      // [0xc0f5fe0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationVector
	// void GetObservationVector(int32_t AgentId, TArray<float>& OutObservationVector);                                      // [0xc33ea00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionVector
	// void GetActionVector(int32_t AgentId, TArray<float>& OutActionVector);                                                // [0xc33dac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActions
	// void GetActions(TArray<int32_t>& AgentIds);                                                                           // [0xc33755c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.EncodeObservations
	// void EncodeObservations();                                                                                            // [0xc33daac] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.DecodeActions
	// void DecodeActions();                                                                                                 // [0xc33da98] Final|Native|Public|BlueprintCallable 
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
	// void ResetAllAgents();                                                                                                // [0xc33f754] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgents
	// void ResetAgents(TArray<int32_t>& AgentIds);                                                                          // [0xc33f6b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgent
	// void ResetAgent(int32_t AgentId);                                                                                     // [0xc33f5f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAllAgents
	// void RemoveAllAgents();                                                                                               // [0xc33f5e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgents
	// void RemoveAgents(TArray<int32_t>& AgentIds);                                                                         // [0xc33f548] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgent
	// void RemoveAgent(int32_t AgentId);                                                                                    // [0xc33f488] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgentObject
	// bool HasAgentObject(class UObject* Agent);                                                                            // [0xc33ec38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgent
	// bool HasAgent(int32_t AgentId);                                                                                       // [0xc33eb6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetMaxAgentNum
	// int32_t GetMaxAgentNum();                                                                                             // [0x622a950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);               // [0xc33e5c8] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgents
	// void GetAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& AgentIds, class UClass* AgentClass);                     // [0xc33e1ac] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentNum
	// int32_t GetAgentNum();                                                                                                // [0x845fc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentIds
	// void GetAgentIds(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                           // [0xc33dfbc] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentId
	// int32_t GetAgentId(class UObject* Agent);                                                                             // [0xc33deec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                   // [0xc33dc2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.AddManagerAsTickPrerequisiteOfAgents
	// void AddManagerAsTickPrerequisiteOfAgents(TArray<AActor*>& InAgents);                                                 // [0xc339edc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgentsAsTickPrerequisiteOfManager
	// void AddAgentsAsTickPrerequisiteOfManager(TArray<AActor*>& InAgents);                                                 // [0xc33883c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgents
	// void AddAgents(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                             // [0xc338728] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgent
	// int32_t AddAgent(class UObject* Agent);                                                                               // [0xc338658] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsNeuralNetwork
/// Size: 0x0008 (0x000030 - 0x000038)
class ULearningAgentsNeuralNetwork : public UDataAsset
{ 
public:
	class ULearningAgentsNeuralNetworkData*            NeuralNetworkData;                                          // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToSnapshot
	// void SaveNetworkToSnapshot(FFilePath& File);                                                                          // [0xc33f85c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToAsset
	// void SaveNetworkToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                      // [0xc33f79c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.ResetNetwork
	// void ResetNetwork();                                                                                                  // [0xc33f768] Final|Native|Public  
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromSnapshot
	// void LoadNetworkFromSnapshot(FFilePath& File);                                                                        // [0xc33edc8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromAsset
	// void LoadNetworkFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                    // [0xc33ed08] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsNeuralNetworkData
/// Size: 0x0030 (0x000028 - 0x000058)
class ULearningAgentsNeuralNetworkData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            InputNum;                                                   // 0x0028   (0x0004)  
	int32_t                                            OutputNum;                                                  // 0x002C   (0x0004)  
	TArray<char>                                       FileData;                                                   // 0x0030   (0x0010)  
	class UNNEModelData*                               ModelData;                                                  // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/LearningAgents.LearningAgentsObservation
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsObservation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x110];                                     // 0x0030   (0x0110)  MISSED
};

/// Class /Script/LearningAgents.FloatObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.FloatObservation.SetFloatObservation
	// void SetFloatObservation(int32_t AgentId, float Observation);                                                         // [0xc340f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.FloatObservation.AddFloatObservation
	// class UFloatObservation* AddFloatObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc339d0c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.FloatArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.FloatArrayObservation.SetFloatArrayObservation
	// void SetFloatArrayObservation(int32_t AgentId, TArray<float>& Observation);                                           // [0xc340dd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.FloatArrayObservation.AddFloatArrayObservation
	// class UFloatArrayObservation* AddFloatArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc339aa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVectorObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VectorObservation.SetVectorObservation
	// void SetVectorObservation(int32_t AgentId, FVector Observation);                                                      // [0xc344f60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VectorObservation.AddVectorObservation
	// class UVectorObservation* AddVectorObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc33d2ac] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VectorArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVectorArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VectorArrayObservation.SetVectorArrayObservation
	// void SetVectorArrayObservation(int32_t AgentId, TArray<FVector>& Observation);                                        // [0xc344e34] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.VectorArrayObservation.AddVectorArrayObservation
	// class UVectorArrayObservation* AddVectorArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t Num, float Scale); // [0xc33d03c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.EnumObservation
/// Size: 0x0018 (0x000140 - 0x000158)
class UEnumObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0140   (0x0018)  MISSED


	/// Functions
	// Function /Script/LearningAgents.EnumObservation.SetEnumObservation
	// void SetEnumObservation(int32_t AgentId, char Value);                                                                 // [0xc340c98] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.EnumObservation.AddEnumObservation
	// class UEnumObservation* AddEnumObservation(class ULearningAgentsInteractor* InInteractor, class UEnum* EnumType, FName Name); // [0xc339898] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.EnumArrayObservation
/// Size: 0x0018 (0x000140 - 0x000158)
class UEnumArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0140   (0x0018)  MISSED


	/// Functions
	// Function /Script/LearningAgents.EnumArrayObservation.SetEnumArrayObservation
	// void SetEnumArrayObservation(int32_t AgentId, TArray<char>& Values);                                                  // [0xc340b6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.EnumArrayObservation.AddEnumArrayObservation
	// class UEnumArrayObservation* AddEnumArrayObservation(class ULearningAgentsInteractor* InInteractor, class UEnum* EnumType, FName Name, int32_t EnumNum); // [0xc3395f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.TimeObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.TimeObservation.SetTimeObservation
	// void SetTimeObservation(int32_t AgentId, float Time, float RelativeTime);                                             // [0xc344c7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.TimeObservation.AddTimeObservation
	// class UTimeObservation* AddTimeObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale);   // [0xc33ce6c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.TimeArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.TimeArrayObservation.SetTimeArrayObservation
	// void SetTimeArrayObservation(int32_t AgentId, TArray<float>& Times, float RelativeTime);                              // [0xc344a24] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.TimeArrayObservation.AddTimeArrayObservation
	// class UTimeArrayObservation* AddTimeArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t TimeNum, float Scale); // [0xc33cc00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngleObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngleObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.AngleObservation.SetAngleObservation
	// void SetAngleObservation(int32_t AgentId, float Angle, float RelativeAngle);                                          // [0xc340174] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.AngleObservation.AddAngleObservation
	// class UAngleObservation* AddAngleObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc338ba8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngleArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngleArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.AngleArrayObservation.SetAngleArrayObservation
	// void SetAngleArrayObservation(int32_t AgentId, TArray<float>& Angles, float RelativeAngle);                           // [0xc33ff1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.AngleArrayObservation.AddAngleArrayObservation
	// class UAngleArrayObservation* AddAngleArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngleNum, float Scale); // [0xc33893c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class URotationObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.RotationObservation.SetRotationObservationFromQuat
	// void SetRotationObservationFromQuat(int32_t AgentId, FQuat Rotation, FQuat RelativeRotation);                         // [0xc3430ec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationObservation.SetRotationObservation
	// void SetRotationObservation(int32_t AgentId, FRotator Rotation, FRotator RelativeRotation);                           // [0xc342ea8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationObservation.AddRotationObservation
	// class URotationObservation* AddRotationObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc33bd7c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.RotationArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class URotationArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.RotationArrayObservation.SetRotationArrayObservationFromQuats
	// void SetRotationArrayObservationFromQuats(int32_t AgentId, TArray<FQuat>& Rotations, FQuat RelativeRotation);         // [0xc342c78] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayObservation.SetRotationArrayObservation
	// void SetRotationArrayObservation(int32_t AgentId, TArray<FRotator>& Rotations, FRotator RelativeRotation);            // [0xc34242c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.RotationArrayObservation.AddRotationArrayObservation
	// class URotationArrayObservation* AddRotationArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t RotationNum, float Scale); // [0xc33bb10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.DirectionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UDirectionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.DirectionObservation.SetDirectionObservation
	// void SetDirectionObservation(int32_t AgentId, FVector Direction, FRotator RelativeRotation);                          // [0xc340980] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.DirectionObservation.AddDirectionObservation
	// class UDirectionObservation* AddDirectionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc339420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.DirectionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UDirectionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.DirectionArrayObservation.SetDirectionArrayObservation
	// void SetDirectionArrayObservation(int32_t AgentId, TArray<FVector>& Directions, FRotator RelativeRotation);           // [0xc34074c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.DirectionArrayObservation.AddDirectionArrayObservation
	// class UDirectionArrayObservation* AddDirectionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t DirectionNum, float Scale); // [0xc3391b4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarDirectionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarDirectionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarDirectionObservation.SetPlanarDirectionObservation
	// void SetPlanarDirectionObservation(int32_t AgentId, FVector Direction, FRotator RelativeRotation);                    // [0xc3412b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarDirectionObservation.AddPlanarDirectionObservation
	// class UPlanarDirectionObservation* AddPlanarDirectionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc33a4ac] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarDirectionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarDirectionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarDirectionArrayObservation.SetPlanarDirectionArrayObservation
	// void SetPlanarDirectionArrayObservation(int32_t AgentId, TArray<FVector>& Directions, FRotator RelativeRotation);     // [0xc34107c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarDirectionArrayObservation.AddPlanarDirectionArrayObservation
	// class UPlanarDirectionArrayObservation* AddPlanarDirectionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t DirectionNum, float Scale, FVector Axis0, FVector Axis1); // [0xc339fdc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PositionObservation.SetPositionObservation
	// void SetPositionObservation(int32_t AgentId, FVector Position, FVector RelativePosition, FRotator RelativeRotation);  // [0xc3421b4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PositionObservation.AddPositionObservation
	// class UPositionObservation* AddPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc33b940] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PositionArrayObservation.SetPositionArrayObservation
	// void SetPositionArrayObservation(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FRotator RelativeRotation); // [0xc341e74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PositionArrayObservation.AddPositionArrayObservation
	// class UPositionArrayObservation* AddPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale); // [0xc33b6d4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarPositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarPositionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarPositionObservation.SetScalarPositionObservationWithAxis
	// void SetScalarPositionObservationWithAxis(int32_t AgentId, FVector Position, FVector RelativePosition, FVector Axis); // [0xc3440e4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionObservation.SetScalarPositionObservation
	// void SetScalarPositionObservation(int32_t AgentId, float Position, float RelativePosition);                           // [0xc343f2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionObservation.AddScalarPositionObservation
	// class UScalarPositionObservation* AddScalarPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc33c5f4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarPositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarPositionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.SetScalarPositionArrayObservationWithAxis
	// void SetScalarPositionArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FVector Axis); // [0xc343bec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.SetScalarPositionArrayObservation
	// void SetScalarPositionArrayObservation(int32_t AgentId, TArray<float>& Positions, float RelativePosition);            // [0xc343994] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarPositionArrayObservation.AddScalarPositionArrayObservation
	// class UScalarPositionArrayObservation* AddScalarPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale); // [0xc33c388] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarPositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarPositionObservation.SetPlanarPositionObservation
	// void SetPlanarPositionObservation(int32_t AgentId, FVector Position, FVector RelativePosition, FRotator RelativeRotation); // [0xc3417dc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarPositionObservation.AddPlanarPositionObservation
	// class UPlanarPositionObservation* AddPlanarPositionObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc33ac54] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarPositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarPositionArrayObservation.SetPlanarPositionArrayObservation
	// void SetPlanarPositionArrayObservation(int32_t AgentId, TArray<FVector>& Positions, FVector RelativePosition, FRotator RelativeRotation); // [0xc34149c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarPositionArrayObservation.AddPlanarPositionArrayObservation
	// class UPlanarPositionArrayObservation* AddPlanarPositionArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t PositionNum, float Scale, FVector Axis0, FVector Axis1); // [0xc33a784] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.VelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VelocityObservation.SetVelocityObservation
	// void SetVelocityObservation(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                            // [0xc3452f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VelocityObservation.AddVelocityObservation
	// class UVelocityObservation* AddVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc33d6e8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.VelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.VelocityArrayObservation.SetVelocityArrayObservation
	// void SetVelocityArrayObservation(int32_t AgentId, TArray<FVector>& Velocities, FRotator RelativeRotation);            // [0xc3450bc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.VelocityArrayObservation.AddVelocityArrayObservation
	// class UVelocityArrayObservation* AddVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale); // [0xc33d47c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarVelocityObservation.SetScalarVelocityObservationWithAxis
	// void SetScalarVelocityObservationWithAxis(int32_t AgentId, FVector Velocity, FVector Axis);                           // [0xc344840] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityObservation.SetScalarVelocityObservation
	// void SetScalarVelocityObservation(int32_t AgentId, float Velocity);                                                   // [0xc344704] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityObservation.AddScalarVelocityObservation
	// class UScalarVelocityObservation* AddScalarVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc33ca30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.SetScalarVelocityArrayObservationWithAxis
	// void SetScalarVelocityArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& Velocities, FVector Axis);           // [0xc3444d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.SetScalarVelocityArrayObservation
	// void SetScalarVelocityArrayObservation(int32_t AgentId, TArray<float>& Velocities);                                   // [0xc344364] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarVelocityArrayObservation.AddScalarVelocityArrayObservation
	// class UScalarVelocityArrayObservation* AddScalarVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale); // [0xc33c7c4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarVelocityObservation.SetPlanarVelocityObservation
	// void SetPlanarVelocityObservation(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                      // [0xc341c88] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityObservation.AddPlanarVelocityObservation
	// class UPlanarVelocityObservation* AddPlanarVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale, FVector Axis0, FVector Axis1); // [0xc33b3fc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.PlanarVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.PlanarVelocityArrayObservation.SetPlanarVelocityArrayObservation
	// void SetPlanarVelocityArrayObservation(int32_t AgentId, TArray<FVector>& Velocities, FRotator RelativeRotation);      // [0xc341a54] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.PlanarVelocityArrayObservation.AddPlanarVelocityArrayObservation
	// class UPlanarVelocityArrayObservation* AddPlanarVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t VelocityNum, float Scale, FVector Axis0, FVector Axis1); // [0xc33af2c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngularVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngularVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.AngularVelocityObservation.SetAngularVelocityObservation
	// void SetAngularVelocityObservation(int32_t AgentId, FVector AngularVelocity, FRotator RelativeRotation);              // [0xc340560] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.AngularVelocityObservation.AddAngularVelocityObservation
	// class UAngularVelocityObservation* AddAngularVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc338fe4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.AngularVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngularVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.AngularVelocityArrayObservation.SetAngularVelocityArrayObservation
	// void SetAngularVelocityArrayObservation(int32_t AgentId, TArray<FVector>& AngularVelocities, FRotator RelativeRotation); // [0xc34032c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.AngularVelocityArrayObservation.AddAngularVelocityArrayObservation
	// class UAngularVelocityArrayObservation* AddAngularVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngularVelocityNum, float Scale); // [0xc338d78] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarAngularVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarAngularVelocityObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.SetScalarAngularVelocityObservationWithAxis
	// void SetScalarAngularVelocityObservationWithAxis(int32_t AgentId, FVector AngularVelocity, FVector Axis);             // [0xc3437b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.SetScalarAngularVelocityObservation
	// void SetScalarAngularVelocityObservation(int32_t AgentId, float AngularVelocity);                                     // [0xc343674] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityObservation.AddScalarAngularVelocityObservation
	// class UScalarAngularVelocityObservation* AddScalarAngularVelocityObservation(class ULearningAgentsInteractor* InInteractor, FName Name, float Scale); // [0xc33c1b8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.ScalarAngularVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarAngularVelocityArrayObservation : public ULearningAgentsObservation
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.SetScalarAngularVelocityArrayObservationWithAxis
	// void SetScalarAngularVelocityArrayObservationWithAxis(int32_t AgentId, TArray<FVector>& AngularVelocities, FVector Axis); // [0xc343440] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.SetScalarAngularVelocityArrayObservation
	// void SetScalarAngularVelocityArrayObservation(int32_t AgentId, TArray<float>& AngularVelocities);                     // [0xc3432d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.ScalarAngularVelocityArrayObservation.AddScalarAngularVelocityArrayObservation
	// class UScalarAngularVelocityArrayObservation* AddScalarAngularVelocityArrayObservation(class ULearningAgentsInteractor* InInteractor, FName Name, int32_t AngularVelocityNum, float Scale); // [0xc33bf4c] Final|Native|Static|Public|BlueprintCallable 
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
	// void UsePolicyFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                      // [0xc3bfe24] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetupPolicy
	// void SetupPolicy(class ULearningAgentsInteractor* InInteractor, FLearningAgentsPolicySettings& PolicySettings, class ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xc3bfbf4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetMemoryState
	// void SetMemoryState(int32_t AgentId, TArray<float>& InMemoryState);                                                   // [0xc3bfa88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetActionNoiseScale
	// void SetActionNoiseScale(float ActionNoiseScale);                                                                     // [0xc3bf9c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToSnapshot
	// void SavePolicyToSnapshot(FFilePath& File);                                                                           // [0xc3bf304] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToAsset
	// void SavePolicyToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                       // [0xc3bf244] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.RunInference
	// void RunInference();                                                                                                  // [0xc3bf230] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromSnapshot
	// void LoadPolicyFromSnapshot(FFilePath& File);                                                                         // [0xc3beb70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromAsset
	// void LoadPolicyFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                     // [0xc3beab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetMemoryState
	// void GetMemoryState(TArray<float>& OutMemoryState, int32_t AgentId);                                                  // [0xc3be8cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetActionNoiseScale
	// float GetActionNoiseScale();                                                                                          // [0xc3be8a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.EvaluatePolicy
	// void EvaluatePolicy();                                                                                                // [0xc3be890] Final|Native|Public|BlueprintCallable 
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

