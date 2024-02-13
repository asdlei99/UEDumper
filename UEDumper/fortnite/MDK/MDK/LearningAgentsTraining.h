
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LearningAgents

/// Class /Script/LearningAgentsTraining.LearningAgentsCompletion
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsCompletion : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class ULearningAgentsTrainer*)             AgentTrainer                                                OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgentsTraining.ConditionalCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UConditionalCompletion : public ULearningAgentsCompletion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.ConditionalCompletion.SetConditionalCompletion
	// void SetConditionalCompletion(int32_t AgentId, bool bIsCompleted);                                                       // [0xc43be28] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.ConditionalCompletion.AddConditionalCompletion
	// class UConditionalCompletion* AddConditionalCompletion(class ULearningAgentsTrainer* InAgentTrainer, FName Name, ELearningAgentsCompletion InCompletionMode); // [0xc43638c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.TimeElapsedCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeElapsedCompletion : public ULearningAgentsCompletion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.TimeElapsedCompletion.SetTimeElapsedCompletion
	// void SetTimeElapsedCompletion(int32_t AgentId, float Time);                                                              // [0xc43d144] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.TimeElapsedCompletion.AddTimeElapsedCompletion
	// class UTimeElapsedCompletion* AddTimeElapsedCompletion(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Threshold, ELearningAgentsCompletion InCompletionMode); // [0xc437b64] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.PlanarPositionDifferenceCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionDifferenceCompletion : public ULearningAgentsCompletion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.PlanarPositionDifferenceCompletion.SetPlanarPositionDifferenceCompletion
	// void SetPlanarPositionDifferenceCompletion(int32_t AgentId, FVector Position0, FVector Position1);                       // [0xc43c3d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.PlanarPositionDifferenceCompletion.AddPlanarPositionDifferenceCompletion
	// class UPlanarPositionDifferenceCompletion* AddPlanarPositionDifferenceCompletion(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Threshold, ELearningAgentsCompletion InCompletionMode, FVector Axis0, FVector Axis1); // [0xc436ba8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.PlanarPositionSimilarityCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionSimilarityCompletion : public ULearningAgentsCompletion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.PlanarPositionSimilarityCompletion.SetPlanarPositionSimilarityCompletion
	// void SetPlanarPositionSimilarityCompletion(int32_t AgentId, FVector Position0, FVector Position1);                       // [0xc43c7a8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.PlanarPositionSimilarityCompletion.AddPlanarPositionSimilarityCompletion
	// class UPlanarPositionSimilarityCompletion* AddPlanarPositionSimilarityCompletion(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Threshold, ELearningAgentsCompletion InCompletionMode, FVector Axis0, FVector Axis1); // [0xc4372d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsImitationTrainer
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class ULearningAgentsImitationTrainer : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class ULearningAgentsPolicy*)              Policy                                                      OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bIsTraining                                                 OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bHasTrainingFailed                                          OFFSET(get<bool>, {0xA9, 1, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.RunTraining
	// void RunTraining(class ULearningAgentsPolicy* InPolicy, class ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings, bool bReinitializePolicyNetwork); // [0xc43a6c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IterateTraining
	// void IterateTraining();                                                                                                  // [0xc4397a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IsTraining
	// bool IsTraining();                                                                                                       // [0xadb080c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                                // [0xadb030c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.EndTraining
	// void EndTraining();                                                                                                      // [0xc43952c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.BeginTraining
	// void BeginTraining(class ULearningAgentsPolicy* InPolicy, class ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings, bool bReinitializePolicyNetwork); // [0xc438d58] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecorder
/// Size: 0x4538 (0x0000C0 - 0x0045F8)
class ULearningAgentsRecorder : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 17912;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class ULearningAgentsRecording*)           Recording                                                   OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bIsRecording                                                OFFSET(get<bool>, {0xD0, 1, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.UseRecordingAsset
	// void UseRecordingAsset(class ULearningAgentsRecording* RecordingAsset);                                                  // [0xc43d6b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SetupRecorder
	// void SetupRecorder(class ULearningAgentsInteractor* InInteractor, FLearningAgentsRecorderPathSettings& RecorderPathSettings, class ULearningAgentsRecording* RecordingAsset); // [0xc43d280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SaveRecordingToFile
	// void SaveRecordingToFile(FFilePath& File);                                                                               // [0xc43b008] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SaveRecordingToAsset
	// void SaveRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                               // [0xc43ae88] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.LoadRecordingFromFile
	// void LoadRecordingFromFile(FFilePath& File);                                                                             // [0xc439934] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.LoadRecordingFromAsset
	// void LoadRecordingFromAsset(class ULearningAgentsRecording* RecordingAsset);                                             // [0xc4397b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.IsRecording
	// bool IsRecording();                                                                                                      // [0x98778fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.GetCurrentRecording
	// class ULearningAgentsRecording* GetCurrentRecording();                                                                   // [0xc43957c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.EndRecording
	// void EndRecording();                                                                                                     // [0xc439518] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.BeginRecording
	// void BeginRecording(bool bReinitializeRecording);                                                                        // [0xc438c94] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AppendRecordingToAsset
	// void AppendRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                             // [0xc438b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AppendRecordingFromFile
	// void AppendRecordingFromFile(FFilePath& File);                                                                           // [0xc437d94] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AddExperience
	// void AddExperience();                                                                                                    // [0xc436714] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecording
/// Size: 0x0010 (0x000030 - 0x000040)
class ULearningAgentsRecording : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FLearningAgentsRecord>)             Records                                                     OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.SaveRecordingToFile
	// void SaveRecordingToFile(FFilePath& File);                                                                               // [0xc43b6c8] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.SaveRecordingToAsset
	// void SaveRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                               // [0xc43af48] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromFile
	// void LoadRecordingFromFile(FFilePath& File);                                                                             // [0xc439ff4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromAsset
	// void LoadRecordingFromAsset(class ULearningAgentsRecording* RecordingAsset);                                             // [0xc439874] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingToAsset
	// void AppendRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                             // [0xc438bd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingFromFile
	// void AppendRecordingFromFile(FFilePath& File);                                                                           // [0xc438454] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsReward
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsReward : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class ULearningAgentsTrainer*)             AgentTrainer                                                OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgentsTraining.FloatReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.FloatReward.SetFloatReward
	// void SetFloatReward(int32_t AgentId, float Reward);                                                                      // [0xc43c0a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.FloatReward.AddFloatReward
	// class UFloatReward* AddFloatReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Weight);              // [0xc436728] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.ConditionalReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UConditionalReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.ConditionalReward.SetConditionalReward
	// void SetConditionalReward(int32_t AgentId, bool bCondition);                                                             // [0xc43bf68] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.ConditionalReward.AddConditionalReward
	// class UConditionalReward* AddConditionalReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Value);   // [0xc436554] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.ScalarVelocityReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.ScalarVelocityReward.SetScalarVelocityReward
	// void SetScalarVelocityReward(int32_t AgentId, float Velocity);                                                           // [0xc43d008] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.ScalarVelocityReward.AddScalarVelocityReward
	// class UScalarVelocityReward* AddScalarVelocityReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Weight, float Scale); // [0xc437918] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LocalDirectionalVelocityReward
/// Size: 0x0010 (0x000140 - 0x000150)
class ULocalDirectionalVelocityReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.LocalDirectionalVelocityReward.SetLocalDirectionalVelocityReward
	// void SetLocalDirectionalVelocityReward(int32_t AgentId, FVector Velocity, FRotator RelativeRotation);                    // [0xc43c1e4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LocalDirectionalVelocityReward.AddLocalDirectionalVelocityReward
	// class ULocalDirectionalVelocityReward* AddLocalDirectionalVelocityReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Weight, float Scale, FVector Axis); // [0xc4368e8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.PlanarPositionDifferencePenalty
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionDifferencePenalty : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.PlanarPositionDifferencePenalty.SetPlanarPositionDifferencePenalty
	// void SetPlanarPositionDifferencePenalty(int32_t AgentId, FVector Position0, FVector Position1);                          // [0xc43c5bc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.PlanarPositionDifferencePenalty.AddPlanarPositionDifferencePenalty
	// class UPlanarPositionDifferencePenalty* AddPlanarPositionDifferencePenalty(class ULearningAgentsTrainer* InAgentTrainer, FName Name, float Weight, float Scale, float Threshold, FVector Axis0, FVector Axis1); // [0xc436efc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.PositionArraySimilarityReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionArraySimilarityReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.PositionArraySimilarityReward.SetPositionArraySimilarityReward
	// void SetPositionArraySimilarityReward(int32_t AgentId, TArray<FVector>& Positions0, TArray<FVector>& Positions1, FVector RelativePosition0, FVector RelativePosition1, FRotator RelativeRotation0, FRotator RelativeRotation1); // [0xc43c994] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.PositionArraySimilarityReward.AddPositionArraySimilarityReward
	// class UPositionArraySimilarityReward* AddPositionArraySimilarityReward(class ULearningAgentsTrainer* InAgentTrainer, FName Name, int32_t PositionNum, float Scale, float Weight); // [0xc437624] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsTrainer
/// Size: 0x05C0 (0x0000C0 - 0x000680)
class ULearningAgentsTrainer : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class ULearningAgentsPolicy*)              Policy                                                      OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class ULearningAgentsCritic*)              Critic                                                      OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bIsTraining                                                 OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bHasTrainingFailed                                          OFFSET(get<bool>, {0xD9, 1, 0, 0})
	CMember(TArray<class ULearningAgentsReward*>)      RewardObjects                                               OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<class ULearningAgentsCompletion*>)  CompletionObjects                                           OFFSET(get<T>, {0xF0, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupTrainer
	// void SetupTrainer(class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class ULearningAgentsCritic* InCritic, FLearningAgentsTrainerSettings& TrainerSettings); // [0xc43d490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupRewards
	// void SetupRewards();                                                                                                     // [0xa04f0e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupCompletions
	// void SetupCompletions();                                                                                                 // [0x1fbb424] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetRewards
	// void SetRewards(TArray<int32_t>& AgentIds);                                                                              // [0xc43cf68] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetCompletions
	// void SetCompletions(TArray<int32_t>& AgentIds);                                                                          // [0xc43bd88] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.RunTraining
	// void RunTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, bool bReinitializePolicyNetwork, bool bReinitializeCriticNetwork, bool bResetAgentsOnBegin); // [0xc43aa28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ResetEpisodes
	// void ResetEpisodes(TArray<int32_t>& AgentIds);                                                                           // [0xc37d124] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ProcessExperience
	// void ProcessExperience();                                                                                                // [0xc43a6b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.IsTraining
	// bool IsTraining();                                                                                                       // [0x846f3c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.IsCompleted
	// bool IsCompleted(int32_t AgentId, ELearningAgentsCompletion& OutCompletion);                                             // [0xc439688] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                                // [0xc439670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetReward
	// float GetReward(int32_t AgentId);                                                                                        // [0xc4395a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EvaluateRewards
	// void EvaluateRewards();                                                                                                  // [0xc439568] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EvaluateCompletions
	// void EvaluateCompletions();                                                                                              // [0xc439554] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EndTraining
	// void EndTraining();                                                                                                      // [0xc439540] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.BeginTraining
	// void BeginTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, bool bReinitializePolicyNetwork, bool bReinitializeCriticNetwork, bool bResetAgentsOnBegin); // [0xc4390b8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FLearningAgentsImitationTrainerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     TrainerCommunicationTimeout                                 OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerTrainingSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FLearningAgentsImitationTrainerTrainingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   NumberOfIterations                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LearningRate                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LearningRateDecay                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WeightDecay                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  BatchSize                                                   OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(ELearningAgentsTrainerDevice)              Device                                                      OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bUseTensorboard                                             OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecorderPathSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FLearningAgentsRecorderPathSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDirectoryPath)                            IntermediateRelativePath                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RecordingsSubdirectory                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecord
/// Size: 0x0030 (0x000000 - 0x000030)
class FLearningAgentsRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   StepNum                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ObservationDimNum                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActionDimNum                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FLearningAgentsTrainerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(ELearningAgentsCompletion)                 MaxStepsCompletion                                          OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   MaxStepNum                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaximumRecordedEpisodesPerIteration                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaximumRecordedStepsPerIteration                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     TrainerCommunicationTimeout                                 OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerGameSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLearningAgentsTrainerGameSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bUseFixedTimeStep                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     FixedTimeStepFrequency                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSetMaxPhysicsStepToFixedTimeStep                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bDisableVSync                                               OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bUseUnlitViewportRendering                                  OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerTrainingSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FLearningAgentsTrainerTrainingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   NumberOfIterations                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LearningRatePolicy                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LearningRateCritic                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LearningRateDecay                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WeightDecay                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     InitialActionScale                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   PolicyBatchSize                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   CriticBatchSize                                             OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   PolicyWindowSize                                            OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     EpsilonClip                                                 OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     ReturnRegularizationWeight                                  OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     ActionRegularizationWeight                                  OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     ActionEntropyWeight                                         OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     GaeLambda                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bAdvantageNormalization                                     OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     MinimumAdvantage                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaximumAdvantage                                            OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   NumberOfStepsToTrimAtStartOfEpisode                         OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   NumberOfStepsToTrimAtEndOfEpisode                           OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(float)                                     DiscountFactor                                              OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(ELearningAgentsTrainerDevice)              Device                                                      OFFSET(get<T>, {0x54, 1, 0, 0})
	DMember(bool)                                      bUseTensorboard                                             OFFSET(get<bool>, {0x55, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerPathSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FLearningAgentsTrainerPathSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FDirectoryPath)                            EditorEngineRelativePath                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   NonEditorEngineRelativePath                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FDirectoryPath)                            IntermediateRelativePath                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Enum /Script/LearningAgentsTraining.ELearningAgentsCompletion
/// Size: 0x03
enum ELearningAgentsCompletion : uint8_t
{
	ELearningAgentsCompletion__Truncation                                            = 0,
	ELearningAgentsCompletion__Termination                                           = 1,
	ELearningAgentsCompletion__ELearningAgentsCompletion_MAX                         = 2
};

/// Enum /Script/LearningAgentsTraining.ELearningAgentsTrainerDevice
/// Size: 0x03
enum ELearningAgentsTrainerDevice : uint8_t
{
	ELearningAgentsTrainerDevice__CPU                                                = 0,
	ELearningAgentsTrainerDevice__GPU                                                = 1,
	ELearningAgentsTrainerDevice__ELearningAgentsTrainerDevice_MAX                   = 2
};

