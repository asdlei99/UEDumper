
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SequencerScripting.MovieSceneScriptingKey
/// Size: 0x0018 (0x000028 - 0x000040)
class UMovieSceneScriptingKey : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
	// void SetValue(FMovieSceneObjectBindingID& InNewValue);                                                                   // [0xa90a588] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa90a2f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	// FMovieSceneObjectBindingID GetValue();                                                                                   // [0xa909490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa909400] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingChannel
/// Size: 0x0008 (0x000028 - 0x000030)
class UMovieSceneScriptingChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ChannelName                                                 OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel
/// Size: 0x0028 (0x000030 - 0x000058)
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
	// void SetDefault(FMovieSceneObjectBindingID InDefaultValue);                                                              // [0xa909aa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f42860] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa9097e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa9096b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa909190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	// FMovieSceneObjectBindingID GetDefault();                                                                                 // [0xa90904c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
	// class UMovieSceneScriptingActorReferenceKey* AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa907608] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetValue
	// void SetValue(bool InNewValue);                                                                                          // [0xa90a6ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa90a2f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	// bool GetValue();                                                                                                         // [0xa9094d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa909400] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolChannel
/// Size: 0x0028 (0x000030 - 0x000058)
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
	// void SetDefault(bool InDefaultValue);                                                                                    // [0xa909c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f42860] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa909838] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa909704] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0xa909220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa909190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	// bool GetDefault();                                                                                                       // [0xa909084] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	// TArray<bool> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                         // [0xa908af4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0xa908a5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
	// class UMovieSceneScriptingBoolKey* AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa907a20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetValue
	// void SetValue(char InNewValue);                                                                                          // [0xa90a780] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa90a2f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetValue
	// char GetValue();                                                                                                         // [0xa909564] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa909400] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteChannel
/// Size: 0x0028 (0x000030 - 0x000058)
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
	// void SetDefault(char InDefaultValue);                                                                                    // [0xa909cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f42860] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa9098b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa909744] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa909190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	// char GetDefault();                                                                                                       // [0xa9090cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.AddKey
	// class UMovieSceneScriptingByteKey* AddKey(FFrameNumber& InTime, char NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0xa907d98] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
	// void SetValue(double InNewValue);                                                                                        // [0xa90a850] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa90a2f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0xa90a21c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0xa90a140] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
	// void SetLeaveTangentWeight(float InNewValue);                                                                            // [0xa909fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
	// void SetLeaveTangent(float InNewValue);                                                                                  // [0xa909f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0xa909e44] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
	// void SetArriveTangentWeight(float InNewValue);                                                                           // [0xa909a24] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
	// void SetArriveTangent(float InNewValue);                                                                                 // [0xa9099a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
	// double GetValue();                                                                                                       // [0xa90960c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa909400] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0xa9093ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0xa909358] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
	// float GetLeaveTangentWeight();                                                                                           // [0xa9091f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
	// float GetLeaveTangent();                                                                                                 // [0xa9091d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0xa90913c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
	// float GetArriveTangentWeight();                                                                                          // [0xa909024] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
	// float GetArriveTangent();                                                                                                // [0xa908ffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleChannel
/// Size: 0x0028 (0x000030 - 0x000058)
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0xa90a0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0xa90a020] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
	// void SetDefault(double InDefaultValue);                                                                                  // [0xa909dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f42860] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa909928] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa909784] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0xa909314] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0xa9092d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0xa909278] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa909190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
	// double GetDefault();                                                                                                     // [0xa909114] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
	// TArray<double> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                       // [0xa908d78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0xa908aa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
	// class UMovieSceneScriptingDoubleKey* AddKey(FFrameNumber& InTime, double NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0xa908224] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetValue
	// void SetValue(FMovieSceneEvent& InNewValue);                                                                             // [0xa90a8d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa90a2f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetValue
	// FMovieSceneEvent GetValue();                                                                                             // [0xa909660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa909400] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventChannel
/// Size: 0x0028 (0x000030 - 0x000058)
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f42860] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa909190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.AddKey
	// class UMovieSceneScriptingEventKey* AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa9086a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatKey
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetValue
	// void SetValue(float InNewValue);                                                                                         // [0xa919c9c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa919a24] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0xa9199a0] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0xa91991c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	// void SetLeaveTangentWeight(float InNewValue);                                                                            // [0xa917af0] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	// void SetLeaveTangent(float InNewValue);                                                                                  // [0xa917a6c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0xa9179e8] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	// void SetArriveTangentWeight(float InNewValue);                                                                           // [0xa916910] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	// void SetArriveTangent(float InNewValue);                                                                                 // [0xa91688c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	// float GetValue();                                                                                                        // [0x61b09f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa909400] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0x63da4fc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0x6232444] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	// float GetLeaveTangentWeight();                                                                                           // [0x90304d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	// float GetLeaveTangent();                                                                                                 // [0xa914320] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0x610da68] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	// float GetArriveTangentWeight();                                                                                          // [0x64045ec] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
	// float GetArriveTangent();                                                                                                // [0xa9132a4] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActualFloatKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatChannel
/// Size: 0x0040 (0x000030 - 0x000070)
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0xa918798] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0xa9186fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	// void SetDefault(float InDefaultValue);                                                                                   // [0xa916a58] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f42860] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa91663c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa915d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0xa9149e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0xa91498c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0xa914540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa909190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	// float GetDefault();                                                                                                      // [0xa913d38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	// TArray<float> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                        // [0xa91277c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0xa9126f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
	// class UMovieSceneScriptingFloatKey* AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0xa910f98] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
	// void SetValue(int32_t InNewValue);                                                                                       // [0xa919d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa90a2f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	// int32_t GetValue();                                                                                                      // [0xa915bf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa909400] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerChannel
/// Size: 0x0028 (0x000030 - 0x000058)
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
	// void SetDefault(int32_t InDefaultValue);                                                                                 // [0xa916ad8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f42860] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa916650] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa915e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa909190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	// int32_t GetDefault();                                                                                                    // [0xa913d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
	// class UMovieSceneScriptingIntegerKey* AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa91140c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
	// void SetValue(class UObject* InNewValue);                                                                                // [0xa919df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa90a2f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	// class UObject* GetValue();                                                                                               // [0xa915c9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa909400] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel
/// Size: 0x0028 (0x000030 - 0x000058)
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
	// void SetDefault(class UObject* InDefaultValue);                                                                          // [0xa916ba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f42860] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa9097e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa915e6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa909190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	// class UObject* GetDefault();                                                                                             // [0xa913dc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
	// class UMovieSceneScriptingObjectPathKey* AddKey(FFrameNumber InTime, class UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa911788] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringKey
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetValue
	// void SetValue(FString InNewValue);                                                                                       // [0xa919e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa90a2f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetValue
	// FString GetValue();                                                                                                      // [0xa915cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa909400] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringChannel
/// Size: 0x0028 (0x000030 - 0x000058)
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
	// void SetDefault(FString InDefaultValue);                                                                                 // [0xa916c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f42860] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa909928] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa915e98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa909190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	// FString GetDefault();                                                                                                    // [0xa913de8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.AddKey
	// class UMovieSceneScriptingStringKey* AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa911b7c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneBindingExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetSpawnableBindingID
	// void SetSpawnableBindingID(FMovieSceneBindingProxy& InBinding, FMovieSceneObjectBindingID& SpawnableBindingID);          // [0xa919494] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetSortingOrder
	// void SetSortingOrder(FMovieSceneBindingProxy& InBinding, int32_t SortingOrder);                                          // [0xa919310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetParent
	// void SetParent(FMovieSceneBindingProxy& InBinding, FMovieSceneBindingProxy& InParentBinding);                            // [0xa9185e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetName
	// void SetName(FMovieSceneBindingProxy& InBinding, FString InName);                                                        // [0xa917d34] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	// void SetDisplayName(FMovieSceneBindingProxy& InBinding, FText& InDisplayName);                                           // [0xa917348] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	// void RemoveTrack(FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);                             // [0xa9166c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.Remove
	// void Remove(FMovieSceneBindingProxy& InBinding);                                                                         // [0xa9161fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	// void MoveBindingContents(FMovieSceneBindingProxy& SourceBindingId, FMovieSceneBindingProxy& DestinationBindingId);       // [0xa916110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.IsValid
	// bool IsValid(FMovieSceneBindingProxy& InBinding);                                                                        // [0xa916040] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(FMovieSceneBindingProxy& InBinding);                                                 // [0xa91547c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetSortingOrder
	// int32_t GetSortingOrder(FMovieSceneBindingProxy& InBinding);                                                             // [0xa9151a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	// class UClass* GetPossessedObjectClass(FMovieSceneBindingProxy& InBinding);                                               // [0xa9148f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetParent
	// FMovieSceneBindingProxy GetParent(FMovieSceneBindingProxy& InBinding);                                                   // [0xa914714] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	// class UObject* GetObjectTemplate(FMovieSceneBindingProxy& InBinding);                                                    // [0xa914654] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetName
	// FString GetName(FMovieSceneBindingProxy& InBinding);                                                                     // [0xa91448c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetId
	// FGuid GetId(FMovieSceneBindingProxy& InBinding);                                                                         // [0xa914290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	// FText GetDisplayName(FMovieSceneBindingProxy& InBinding);                                                                // [0xa913e28] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	// TArray<FMovieSceneBindingProxy> GetChildPossessables(FMovieSceneBindingProxy& InBinding);                                // [0xa913bf8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);                 // [0xa912bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);            // [0xa912a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.AddTrack
	// class UMovieSceneTrack* AddTrack(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);                           // [0xa912534] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneEventTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
	// class UClass* GetBoundObjectPropertyClass(FMovieSceneEvent& EventKey);                                                   // [0xa913668] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	// class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);                      // [0xa910ee4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
	// class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);                    // [0xa910e30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneFolderExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderName
	// bool SetFolderName(class UMovieSceneFolder* Folder, FName InFolderName);                                                 // [0xa91790c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	// bool SetFolderColor(class UMovieSceneFolder* Folder, FColor InFolderColor);                                              // [0xa91777c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildTrack
	// bool RemoveChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                                 // [0xa9163b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	// bool RemoveChildObjectBinding(class UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);                 // [0xa916478] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	// bool RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                           // [0xa9163b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	// bool RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);                  // [0xa9162b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	// FName GetFolderName(class UMovieSceneFolder* Folder);                                                                    // [0xa9141fc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	// FColor GetFolderColor(class UMovieSceneFolder* Folder);                                                                  // [0xa914174] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildTracks
	// TArray<UMovieSceneTrack*> GetChildTracks(class UMovieSceneFolder* Folder);                                               // [0xa913ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	// TArray<FMovieSceneBindingProxy> GetChildObjectBindings(class UMovieSceneFolder* Folder);                                 // [0xa913a50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	// TArray<UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder* Folder);                                         // [0xa9139b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	// TArray<UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder* Folder);                                             // [0xa9138b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildTrack
	// bool AddChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                                    // [0xa910b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	// bool AddChildObjectBinding(class UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);                    // [0xa910c44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	// bool AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                              // [0xa910b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
	// bool AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);                        // [0xa910a1c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneMaterialTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialInfo
	// void SetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo);              // [0xa917c48] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex
	// void SetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track, int32_t MaterialIndex);                            // [0xa917b74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialInfo
	// FComponentMaterialInfo GetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track);                                  // [0xa9143dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex
	// int32_t GetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track);                                                // [0xa91434c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialInfo
	// void SetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo);              // [0xa917c48] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
	// void SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track, int32_t MaterialIndex);                            // [0xa917b74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialInfo
	// FComponentMaterialInfo GetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track);                                  // [0xa9143dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
	// int32_t GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track);                                                // [0xa91434c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieScenePropertyTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
	// void SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, FName& InPropertyName, FString InPropertyPath);       // [0xa918834] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	// void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);                   // [0xa9184fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
	// void SetByteTrackEnum(class UMovieSceneByteTrack* Track, class UEnum* InEnum);                                           // [0xa916994] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	// FName GetUniqueTrackName(class UMovieScenePropertyTrack* Track);                                                         // [0xa915b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	// FString GetPropertyPath(class UMovieScenePropertyTrack* Track);                                                          // [0xa914adc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	// FName GetPropertyName(class UMovieScenePropertyTrack* Track);                                                            // [0xa914a44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	// class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);                                       // [0xa9145bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
	// class UEnum* GetByteTrackEnum(class UMovieSceneByteTrack* Track);                                                        // [0xa913728] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SequencerScripting.MovieSceneSectionExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
	// void SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);                                           // [0xa919804] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	// void SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                           // [0xa9196fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	// void SetStartFrame(class UMovieSceneSection* Section, int32_t StartFrame);                                               // [0xa9195dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	// void SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);                                 // [0xa919160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRange
	// void SetRange(class UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame);                                  // [0xa918fb4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	// void SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);                                               // [0xa917664] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	// void SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                             // [0xa91755c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	// void SetEndFrame(class UMovieSceneSection* Section, int32_t EndFrame);                                                   // [0xa91743c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	// bool HasStartFrame(class UMovieSceneSection* Section);                                                                   // [0xa915fa4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	// bool HasEndFrame(class UMovieSceneSection* Section);                                                                     // [0xa915f08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	// float GetStartFrameSeconds(class UMovieSceneSection* Section);                                                           // [0xa915330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	// int32_t GetStartFrame(class UMovieSceneSection* Section);                                                                // [0xa915230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	// int32_t GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32_t InFrame, class UMovieSceneSequence* ParentSequence); // [0xa9147fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	// float GetEndFrameSeconds(class UMovieSceneSection* Section);                                                             // [0xa914028] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	// int32_t GetEndFrame(class UMovieSceneSection* Section);                                                                  // [0xa913f28] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
	// TArray<UMovieSceneScriptingChannel*> GetChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);    // [0xa9137c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
	// float GetAutoSizeStartFrameSeconds(class UMovieSceneSection* Section);                                                   // [0xa9135e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
	// int32_t GetAutoSizeStartFrame(class UMovieSceneSection* Section);                                                        // [0xa913568] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
	// bool GetAutoSizeHasStartFrame(class UMovieSceneSection* Section);                                                        // [0xa91349c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
	// bool GetAutoSizeHasEndFrame(class UMovieSceneSection* Section);                                                          // [0xa9133d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
	// float GetAutoSizeEndFrameSeconds(class UMovieSceneSection* Section);                                                     // [0xa913350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
	// int32_t GetAutoSizeEndFrame(class UMovieSceneSection* Section);                                                          // [0xa9132d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
	// TArray<UMovieSceneScriptingChannel*> GetAllChannels(class UMovieSceneSection* Section);                                  // [0xa912da0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneSequenceExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
	// void SortMarkedFrames(class UMovieSceneSequence* Sequence);                                                              // [0xa9238a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	// void SetWorkRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);                                // [0xa9237e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	// void SetWorkRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);                                    // [0xa923728] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	// void SetViewRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);                                // [0xa923668] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	// void SetViewRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);                                    // [0xa9235a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	// void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                          // [0xa9232bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	// void SetTickResolution(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                                  // [0xa923118] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	// void SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);                                                 // [0xa922bb4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	// void SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);                                      // [0xa922a84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	// void SetPlaybackStart(class UMovieSceneSequence* Sequence, int32_t StartFrame);                                          // [0xa922960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackRangeLocked
	// void SetPlaybackRangeLocked(class UMovieSceneSequence* Sequence, bool bInLocked);                                        // [0xa9228ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	// void SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);                                          // [0xa92277c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	// void SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32_t EndFrame);                                              // [0xa922658] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFramesLocked
	// void SetMarkedFramesLocked(class UMovieSceneSequence* Sequence, bool bInLocked);                                         // [0xa9224e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	// void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber);               // [0xa9222fc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	// void SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);               // [0xa92221c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	// void SetDisplayRate(class UMovieSceneSequence* Sequence, FFrameRate DisplayRate);                                        // [0xa921d38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	// void SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);                            // [0xa921a94] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	// FMovieSceneBindingProxy ResolveBindingID(class UMovieSceneSequence* RootSequence, FMovieSceneObjectBindingID InObjectBindingID); // [0xa921840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveTrack
	// bool RemoveTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);                                    // [0xa92156c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
	// void RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence, class UMovieSceneFolder* Folder);                 // [0xa921630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	// bool RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);                              // [0xa92156c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	// FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float duration);         // [0xa92132c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	// FSequencerScriptingRange MakeRange(class UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t duration);           // [0xa9211cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	// TArray<UObject*> LocateBoundObjects(class UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding, class UObject* Context); // [0xa920fdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	// bool IsReadOnly(class UMovieSceneSequence* Sequence);                                                                    // [0xa920f58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsPlaybackRangeLocked
	// bool IsPlaybackRangeLocked(class UMovieSceneSequence* Sequence);                                                         // [0xa920ed4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	// double GetWorkRangeStart(class UMovieSceneSequence* InSequence);                                                         // [0xa920d18] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	// double GetWorkRangeEnd(class UMovieSceneSequence* InSequence);                                                           // [0xa920c8c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	// double GetViewRangeStart(class UMovieSceneSequence* InSequence);                                                         // [0xa920c00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	// double GetViewRangeEnd(class UMovieSceneSequence* InSequence);                                                           // [0xa920b74] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(class UMovieSceneSequence* Sequence);                                                // [0xa920adc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	// FFrameRate GetTickResolution(class UMovieSceneSequence* Sequence);                                                       // [0xa92095c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	// TArray<FMovieSceneBindingProxy> GetSpawnables(class UMovieSceneSequence* Sequence);                                      // [0xa92068c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	// TArray<UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);                                // [0xa920384] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	// TArray<FMovieSceneBindingProxy> GetPossessables(class UMovieSceneSequence* Sequence);                                    // [0xa920210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	// FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* RootSequence, class UMovieSceneSequence* DestinationSequence, FMovieSceneBindingProxy& InBinding); // [0xa9200f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	// float GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);                                                      // [0xa91ffa8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	// int32_t GetPlaybackStart(class UMovieSceneSequence* Sequence);                                                           // [0xa91feb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	// FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence* Sequence);                                          // [0xa91fdc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	// float GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);                                                        // [0xa91fc7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	// int32_t GetPlaybackEnd(class UMovieSceneSequence* Sequence);                                                             // [0xa91fb84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	// class UMovieScene* GetMovieScene(class UMovieSceneSequence* Sequence);                                                   // [0xa91fa74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	// TArray<UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* Sequence);                                          // [0xa91f9dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	// TArray<FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence* Sequence);                                     // [0xa91f254] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	// EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InSequence);                                      // [0xa91f1bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	// FFrameRate GetDisplayRate(class UMovieSceneSequence* Sequence);                                                          // [0xa91efe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	// EUpdateClockSource GetClockSource(class UMovieSceneSequence* InSequence);                                                // [0xa91ee04] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	// TArray<FMovieSceneBindingProxy> GetBindings(class UMovieSceneSequence* Sequence);                                        // [0xa91ecb8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	// FMovieSceneObjectBindingID GetBindingID(class UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding);        // [0xa91ebc8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);                // [0xa91ead4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);           // [0xa91e9e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	// int32_t FindNextMarkedFrame(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward);             // [0xa91e74c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	// TArray<UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);          // [0xa91e648] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	// TArray<UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);     // [0xa91e544] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	// int32_t FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, FString InLabel);                                    // [0xa91de4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	// int32_t FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber);                   // [0xa91dca4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	// FMovieSceneBindingProxy FindBindingByName(class UMovieSceneSequence* Sequence, FString Name);                            // [0xa91d4fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	// FMovieSceneBindingProxy FindBindingById(class UMovieSceneSequence* Sequence, FGuid BindingID);                           // [0xa91d314] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	// void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);                                                            // [0xa91d284] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	// void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32_t DeleteIndex);                                        // [0xa91d1b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AreMarkedFramesLocked
	// bool AreMarkedFramesLocked(class UMovieSceneSequence* Sequence);                                                         // [0xa91d12c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddTrack
	// class UMovieSceneTrack* AddTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);                          // [0xa91cf8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	// FMovieSceneBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);     // [0xa91ce54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	// FMovieSceneBindingProxy AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn);          // [0xa91cd1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	// class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence* Sequence, FString NewFolderName);            // [0xa91c560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	// FMovieSceneBindingProxy AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);             // [0xa91c450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	// class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);                    // [0xa91c2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
	// int32_t AddMarkedFrame(class UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame);                      // [0xa91bb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
	// void SetTrackRowDisplayName(class UMovieSceneTrack* Track, FText& InName, int32_t RowIndex);                             // [0xa923454] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	// void SetSortingOrder(class UMovieSceneTrack* Track, int32_t SortingOrder);                                               // [0xa922d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	// void SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                  // [0xa922c68] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	// void SetDisplayName(class UMovieSceneTrack* Track, FText& InName);                                                       // [0xa921c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	// void SetColorTint(class UMovieSceneTrack* Track, FColor& ColorTint);                                                     // [0xa921b70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	// void RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                    // [0xa9216e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
	// FText GetTrackRowDisplayName(class UMovieSceneTrack* Track, int32_t RowIndex);                                           // [0xa9209e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	// int32_t GetSortingOrder(class UMovieSceneTrack* Track);                                                                  // [0xa9205fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	// class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* Track);                                                // [0xa920434] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSections
	// TArray<UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);                                                  // [0xa9204d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	// FText GetDisplayName(class UMovieSceneTrack* Track);                                                                     // [0xa91ef2c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	// FColor GetColorTint(class UMovieSceneTrack* Track);                                                                      // [0xa91eea4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.AddSection
	// class UMovieSceneSection* AddSection(class UMovieSceneTrack* Track);                                                     // [0xa91cc58] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
	// void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed);                            // [0xa922594] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
	// int32_t GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track);                                                    // [0xa91faf4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
	// void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed);                           // [0xa922594] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
	// int32_t GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track);                                                   // [0xa91faf4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.SequencerScriptingRangeExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
	// void SetStartSeconds(FSequencerScriptingRange& Range, float Start);                                                      // [0xa922f80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	// void SetStartFrame(FSequencerScriptingRange& Range, int32_t Start);                                                      // [0xa922de4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	// void SetEndSeconds(FSequencerScriptingRange& Range, float End);                                                          // [0xa92206c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	// void SetEndFrame(FSequencerScriptingRange& Range, int32_t End);                                                          // [0xa921ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	// void RemoveStart(FSequencerScriptingRange& Range);                                                                       // [0xa9217b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	// void RemoveEnd(FSequencerScriptingRange& Range);                                                                         // [0xa9214dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	// bool HasStart(FSequencerScriptingRange& Range);                                                                          // [0xa920e3c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	// bool HasEnd(FSequencerScriptingRange& Range);                                                                            // [0xa920da4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	// float GetStartSeconds(FSequencerScriptingRange& Range);                                                                  // [0xa92089c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	// int32_t GetStartFrame(FSequencerScriptingRange& Range);                                                                  // [0xa920808] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	// float GetEndSeconds(FSequencerScriptingRange& Range);                                                                    // [0xa91f0fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
	// int32_t GetEndFrame(FSequencerScriptingRange& Range);                                                                    // [0xa91f068] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SequencerScripting.SequencerScriptingRange
/// Size: 0x0014 (0x000000 - 0x000014)
class FSequencerScriptingRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bHasStart                                                   OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bHasEnd                                                     OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(int32_t)                                   InclusiveStart                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ExclusiveEnd                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FFrameRate)                                InternalRate                                                OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Enum /Script/SequencerScripting.ESequenceTimeUnit
/// Size: 0x03
enum ESequenceTimeUnit : uint8_t
{
	ESequenceTimeUnit__DisplayRate                                                   = 0,
	ESequenceTimeUnit__TickResolution                                                = 1,
	ESequenceTimeUnit__ESequenceTimeUnit_MAX                                         = 2
};

