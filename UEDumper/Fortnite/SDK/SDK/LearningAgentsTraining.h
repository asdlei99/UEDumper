
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LearningAgents

/// Enum /Script/LearningAgentsTraining.ELearningAgentsCompletion
/// Size: 0x03
enum class ELearningAgentsCompletion : uint8_t
{
	ELearningAgentsCompletion__Truncation                                            = 0,
	ELearningAgentsCompletion__Termination                                           = 1,
	ELearningAgentsCompletion__ELearningAgentsCompletion_MAX                         = 2
};

/// Enum /Script/LearningAgentsTraining.ELearningAgentsTrainerDevice
/// Size: 0x03
enum class ELearningAgentsTrainerDevice : uint8_t
{
	ELearningAgentsTrainerDevice__CPU                                                = 0,
	ELearningAgentsTrainerDevice__GPU                                                = 1,
	ELearningAgentsTrainerDevice__ELearningAgentsTrainerDevice_MAX                   = 2
};

/// Class /Script/LearningAgentsTraining.LearningAgentsCompletion
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsCompletion : public UObject
{ 
public:
	class ULearningAgentsTrainer*                      AgentTrainer;                                               // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x110];                                     // 0x0030   (0x0110)  MISSED
};

/// Class /Script/LearningAgentsTraining.ConditionalCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UConditionalCompletion : public ULearningAgentsCompletion
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.ConditionalCompletion.SetConditionalCompletion
	// void SetConditionalCompletion(int32_t AgentId, bool bIsCompleted);                                                    // [0xc3f6238] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.ConditionalCompletion.AddConditionalCompletion
	// class UConditionalCompletion* AddConditionalCompletion(class ULearningAgentsTrainer* InAgentTrainer, FName Name, ELearningAgentsCompletion InCompletionMode); // [0xc3f079c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.TimeElapsedCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeElapsedCompletion : public ULearningAgentsCompletion
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.TimeElapsedCompletion.SetTimeElapsedCompletion
	// void SetTimeElapsedCompletion(int32_t AgentId, float Time);                                                           // [0xc3f7554] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.TimeElapsedCompletion.AddTimeElapsedCompletion
	// class UTimeElapsedCompletion* AddTimeElapsedCompletion(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Threshold, ELearningAgentsCompletion InCompletionMode); // [0xc3f1f74] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.PlanarPositionDifferenceCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionDifferenceCompletion : public ULearningAgentsCompletion
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.PlanarPositionDifferenceCompletion.SetPlanarPositionDifferenceCompletion
	// void SetPlanarPositionDifferenceCompletion(int32_t AgentId, FVector Position0, FVector Position1);                    // [0xc3f67e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.PlanarPositionDifferenceCompletion.AddPlanarPositionDifferenceCompletion
	// class UPlanarPositionDifferenceCompletion* AddPlanarPositionDifferenceCompletion(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Threshold, ELearningAgentsCompletion InCompletionMode, FVector Axis0, FVector Axis1); // [0xc3f0fb8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.PlanarPositionSimilarityCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionSimilarityCompletion : public ULearningAgentsCompletion
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.PlanarPositionSimilarityCompletion.SetPlanarPositionSimilarityCompletion
	// void SetPlanarPositionSimilarityCompletion(int32_t AgentId, FVector Position0, FVector Position1);                    // [0xc3f6bb8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.PlanarPositionSimilarityCompletion.AddPlanarPositionSimilarityCompletion
	// class UPlanarPositionSimilarityCompletion* AddPlanarPositionSimilarityCompletion(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Threshold, ELearningAgentsCompletion InCompletionMode, FVector Axis0, FVector Axis1); // [0xc3f16e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsImitationTrainer
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class ULearningAgentsImitationTrainer : public UActorComponent
{ 
public:
	class ULearningAgentsPolicy*                       Policy;                                                     // 0x00A0   (0x0008)  
	bool                                               bIsTraining;                                                // 0x00A8   (0x0001)  
	bool                                               bHasTrainingFailed;                                         // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4E];                                      // 0x00AA   (0x004E)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.RunTraining
	// void RunTraining(class ULearningAgentsPolicy* InPolicy, class ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings, bool bReinitializePolicyNetwork); // [0xc3f4ad8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IterateTraining
	// void IterateTraining();                                                                                               // [0xc3f3bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IsTraining
	// bool IsTraining();                                                                                                    // [0xad6f994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                             // [0xad6f494] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.EndTraining
	// void EndTraining();                                                                                                   // [0xc3f393c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.BeginTraining
	// void BeginTraining(class ULearningAgentsPolicy* InPolicy, class ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings, bool bReinitializePolicyNetwork); // [0xc3f3168] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecorder
/// Size: 0x4538 (0x0000C0 - 0x0045F8)
class ULearningAgentsRecorder : public ULearningAgentsManagerComponent
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x00C0   (0x0008)  
	class ULearningAgentsRecording*                    Recording;                                                  // 0x00C8   (0x0008)  
	bool                                               bIsRecording;                                               // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4527];                                    // 0x00D1   (0x4527)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.UseRecordingAsset
	// void UseRecordingAsset(class ULearningAgentsRecording* RecordingAsset);                                               // [0xc3f7ac4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SetupRecorder
	// void SetupRecorder(class ULearningAgentsInteractor* InInteractor, FLearningAgentsRecorderPathSettings& RecorderPathSettings, class ULearningAgentsRecording* RecordingAsset); // [0xc3f7690] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SaveRecordingToFile
	// void SaveRecordingToFile(FFilePath& File);                                                                            // [0xc3f5418] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SaveRecordingToAsset
	// void SaveRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                            // [0xc3f5298] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.LoadRecordingFromFile
	// void LoadRecordingFromFile(FFilePath& File);                                                                          // [0xc3f3d44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.LoadRecordingFromAsset
	// void LoadRecordingFromAsset(class ULearningAgentsRecording* RecordingAsset);                                          // [0xc3f3bc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.IsRecording
	// bool IsRecording();                                                                                                   // [0x983d2d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.GetCurrentRecording
	// class ULearningAgentsRecording* GetCurrentRecording();                                                                // [0xc3f398c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.EndRecording
	// void EndRecording();                                                                                                  // [0xc3f3928] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.BeginRecording
	// void BeginRecording(bool bReinitializeRecording);                                                                     // [0xc3f30a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AppendRecordingToAsset
	// void AppendRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                          // [0xc3f2f24] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AppendRecordingFromFile
	// void AppendRecordingFromFile(FFilePath& File);                                                                        // [0xc3f21a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AddExperience
	// void AddExperience();                                                                                                 // [0xc3f0b24] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecord
/// Size: 0x0030 (0x000000 - 0x000030)
struct FLearningAgentsRecord
{ 
	int32_t                                            StepNum;                                                    // 0x0000   (0x0004)  
	int32_t                                            ObservationDimNum;                                          // 0x0004   (0x0004)  
	int32_t                                            ActionDimNum;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x000C   (0x0024)  MISSED
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecording
/// Size: 0x0010 (0x000030 - 0x000040)
class ULearningAgentsRecording : public UDataAsset
{ 
public:
	TArray<FLearningAgentsRecord>                      Records;                                                    // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.SaveRecordingToFile
	// void SaveRecordingToFile(FFilePath& File);                                                                            // [0xc3f5ad8] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.SaveRecordingToAsset
	// void SaveRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                            // [0xc3f5358] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromFile
	// void LoadRecordingFromFile(FFilePath& File);                                                                          // [0xc3f4404] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromAsset
	// void LoadRecordingFromAsset(class ULearningAgentsRecording* RecordingAsset);                                          // [0xc3f3c84] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingToAsset
	// void AppendRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                          // [0xc3f2fe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingFromFile
	// void AppendRecordingFromFile(FFilePath& File);                                                                        // [0xc3f2864] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsReward
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsReward : public UObject
{ 
public:
	class ULearningAgentsTrainer*                      AgentTrainer;                                               // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x110];                                     // 0x0030   (0x0110)  MISSED
};

/// Class /Script/LearningAgentsTraining.FloatReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatReward : public ULearningAgentsReward
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.FloatReward.SetFloatReward
	// void SetFloatReward(int32_t AgentId, float Reward);                                                                   // [0xc3f64b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.FloatReward.AddFloatReward
	// class UFloatReward* AddFloatReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Weight);           // [0xc3f0b38] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.ConditionalReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UConditionalReward : public ULearningAgentsReward
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.ConditionalReward.SetConditionalReward
	// void SetConditionalReward(int32_t AgentId, bool bCondition);                                                          // [0xc3f6378] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.ConditionalReward.AddConditionalReward
	// class UConditionalReward* AddConditionalReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Value); // [0xc3f0964] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.ScalarVelocityReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityReward : public ULearningAgentsReward
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.ScalarVelocityReward.SetScalarVelocityReward
	// void SetScalarVelocityReward(int32_t AgentId, float Velocity);                                                        // [0xc3f7418] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.ScalarVelocityReward.AddScalarVelocityReward
	// class UScalarVelocityReward* AddScalarVelocityReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Weight, float Scale); // [0xc3f1d28] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LocalDirectionalVelocityReward
/// Size: 0x0010 (0x000140 - 0x000150)
class ULocalDirectionalVelocityReward : public ULearningAgentsReward
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.LocalDirectionalVelocityReward.SetLocalDirectionalVelocityReward
	// void SetLocalDirectionalVelocityReward(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                 // [0xc3f65f4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LocalDirectionalVelocityReward.AddLocalDirectionalVelocityReward
	// class ULocalDirectionalVelocityReward* AddLocalDirectionalVelocityReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Weight, float Scale, FVector Axis); // [0xc3f0cf8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.PlanarPositionDifferencePenalty
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionDifferencePenalty : public ULearningAgentsReward
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.PlanarPositionDifferencePenalty.SetPlanarPositionDifferencePenalty
	// void SetPlanarPositionDifferencePenalty(int32_t AgentId, FVector Position0, FVector Position1);                       // [0xc3f69cc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.PlanarPositionDifferencePenalty.AddPlanarPositionDifferencePenalty
	// class UPlanarPositionDifferencePenalty* AddPlanarPositionDifferencePenalty(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Weight, float Scale, float Threshold, FVector Axis0, FVector Axis1); // [0xc3f130c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.PositionArraySimilarityReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionArraySimilarityReward : public ULearningAgentsReward
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.PositionArraySimilarityReward.SetPositionArraySimilarityReward
	// void SetPositionArraySimilarityReward(int32_t AgentId, TArray<FVector>& Positions0, TArray<FVector>& Positions1, FVector RelativePosition0, FVector RelativePosition1, FRotator RelativeRotation0, FRotator RelativeRotation1); // [0xc3f6da4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.PositionArraySimilarityReward.AddPositionArraySimilarityReward
	// class UPositionArraySimilarityReward* AddPositionArraySimilarityReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, int32_t PositionNum, float Scale, float Weight); // [0xc3f1a34] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsTrainer
/// Size: 0x05C0 (0x0000C0 - 0x000680)
class ULearningAgentsTrainer : public ULearningAgentsManagerComponent
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x00C0   (0x0008)  
	class ULearningAgentsPolicy*                       Policy;                                                     // 0x00C8   (0x0008)  
	class ULearningAgentsCritic*                       Critic;                                                     // 0x00D0   (0x0008)  
	bool                                               bIsTraining;                                                // 0x00D8   (0x0001)  
	bool                                               bHasTrainingFailed;                                         // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	TArray<class ULearningAgentsReward*>               RewardObjects;                                              // 0x00E0   (0x0010)  
	TArray<class ULearningAgentsCompletion*>           CompletionObjects;                                          // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x580];                                     // 0x0100   (0x0580)  MISSED


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupTrainer
	// void SetupTrainer(class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class ULearningAgentsCritic* InCritic, FLearningAgentsTrainerSettings& TrainerSettings); // [0xc3f78a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupRewards
	// void SetupRewards();                                                                                                  // [0xa013338] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupCompletions
	// void SetupCompletions();                                                                                              // [0x205e768] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetRewards
	// void SetRewards(TArray<int32_t>& AgentIds);                                                                           // [0xc3f7378] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetCompletions
	// void SetCompletions(TArray<int32_t>& AgentIds);                                                                       // [0xc3f6198] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.RunTraining
	// void RunTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, bool bReinitializePolicyNetwork, bool bReinitializeCriticNetwork, bool bResetAgentsOnBegin); // [0xc3f4e38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ResetEpisodes
	// void ResetEpisodes(TArray<int32_t>& AgentIds);                                                                        // [0xc33755c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ProcessExperience
	// void ProcessExperience();                                                                                             // [0xc3f4ac4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.IsTraining
	// bool IsTraining();                                                                                                    // [0x84381f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.IsCompleted
	// bool IsCompleted(int32_t AgentId, ELearningAgentsCompletion& OutCompletion);                                          // [0xc3f3a98] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                             // [0xc3f3a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetReward
	// float GetReward(int32_t AgentId);                                                                                     // [0xc3f39b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EvaluateRewards
	// void EvaluateRewards();                                                                                               // [0xc3f3978] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EvaluateCompletions
	// void EvaluateCompletions();                                                                                           // [0xc3f3964] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EndTraining
	// void EndTraining();                                                                                                   // [0xc3f3950] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.BeginTraining
	// void BeginTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, bool bReinitializePolicyNetwork, bool bReinitializeCriticNetwork, bool bResetAgentsOnBegin); // [0xc3f34c8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerSettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FLearningAgentsImitationTrainerSettings
{ 
	float                                              TrainerCommunicationTimeout;                                // 0x0000   (0x0004)  
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerTrainingSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FLearningAgentsImitationTrainerTrainingSettings
{ 
	int32_t                                            NumberOfIterations;                                         // 0x0000   (0x0004)  
	float                                              LearningRate;                                               // 0x0004   (0x0004)  
	float                                              LearningRateDecay;                                          // 0x0008   (0x0004)  
	float                                              WeightDecay;                                                // 0x000C   (0x0004)  
	uint32_t                                           BatchSize;                                                  // 0x0010   (0x0004)  
	int32_t                                            RandomSeed;                                                 // 0x0014   (0x0004)  
	ELearningAgentsTrainerDevice                       Device;                                                     // 0x0018   (0x0001)  
	bool                                               bUseTensorboard;                                            // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecorderPathSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLearningAgentsRecorderPathSettings
{ 
	FDirectoryPath                                     IntermediateRelativePath;                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14563) /* FString */              __um(RecordingsSubdirectory);                               // 0x0010   (0x0010)  
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FLearningAgentsTrainerSettings
{ 
	ELearningAgentsCompletion                          MaxStepsCompletion;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MaxStepNum;                                                 // 0x0004   (0x0004)  
	int32_t                                            MaximumRecordedEpisodesPerIteration;                        // 0x0008   (0x0004)  
	int32_t                                            MaximumRecordedStepsPerIteration;                           // 0x000C   (0x0004)  
	float                                              TrainerCommunicationTimeout;                                // 0x0010   (0x0004)  
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerGameSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLearningAgentsTrainerGameSettings
{ 
	bool                                               bUseFixedTimeStep;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FixedTimeStepFrequency;                                     // 0x0004   (0x0004)  
	bool                                               bSetMaxPhysicsStepToFixedTimeStep;                          // 0x0008   (0x0001)  
	bool                                               bDisableVSync;                                              // 0x0009   (0x0001)  
	bool                                               bUseUnlitViewportRendering;                                 // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerTrainingSettings
/// Size: 0x0058 (0x000000 - 0x000058)
struct FLearningAgentsTrainerTrainingSettings
{ 
	int32_t                                            NumberOfIterations;                                         // 0x0000   (0x0004)  
	float                                              LearningRatePolicy;                                         // 0x0004   (0x0004)  
	float                                              LearningRateCritic;                                         // 0x0008   (0x0004)  
	float                                              LearningRateDecay;                                          // 0x000C   (0x0004)  
	float                                              WeightDecay;                                                // 0x0010   (0x0004)  
	float                                              InitialActionScale;                                         // 0x0014   (0x0004)  
	int32_t                                            PolicyBatchSize;                                            // 0x0018   (0x0004)  
	int32_t                                            CriticBatchSize;                                            // 0x001C   (0x0004)  
	int32_t                                            PolicyWindowSize;                                           // 0x0020   (0x0004)  
	float                                              EpsilonClip;                                                // 0x0024   (0x0004)  
	float                                              ReturnRegularizationWeight;                                 // 0x0028   (0x0004)  
	float                                              ActionRegularizationWeight;                                 // 0x002C   (0x0004)  
	float                                              ActionEntropyWeight;                                        // 0x0030   (0x0004)  
	float                                              GaeLambda;                                                  // 0x0034   (0x0004)  
	bool                                               bAdvantageNormalization;                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              MinimumAdvantage;                                           // 0x003C   (0x0004)  
	float                                              MaximumAdvantage;                                           // 0x0040   (0x0004)  
	int32_t                                            NumberOfStepsToTrimAtStartOfEpisode;                        // 0x0044   (0x0004)  
	int32_t                                            NumberOfStepsToTrimAtEndOfEpisode;                          // 0x0048   (0x0004)  
	int32_t                                            RandomSeed;                                                 // 0x004C   (0x0004)  
	float                                              DiscountFactor;                                             // 0x0050   (0x0004)  
	ELearningAgentsTrainerDevice                       Device;                                                     // 0x0054   (0x0001)  
	bool                                               bUseTensorboard;                                            // 0x0055   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0056   (0x0002)  MISSED
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerPathSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FLearningAgentsTrainerPathSettings
{ 
	FDirectoryPath                                     EditorEngineRelativePath;                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14564) /* FString */              __um(NonEditorEngineRelativePath);                          // 0x0010   (0x0010)  
	FDirectoryPath                                     IntermediateRelativePath;                                   // 0x0020   (0x0010)  
};

