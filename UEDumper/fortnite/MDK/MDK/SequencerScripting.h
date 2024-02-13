
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
	// void SetValue(FMovieSceneObjectBindingID& InNewValue);                                                                   // [0xa910cc8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa910a38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	// FMovieSceneObjectBindingID GetValue();                                                                                   // [0xa90f8c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa90f7f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetDefault(FMovieSceneObjectBindingID InDefaultValue);                                                              // [0xa90ff64] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa90fc18] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa90fae8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa90f588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	// FMovieSceneObjectBindingID GetDefault();                                                                                 // [0xa90f444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
	// class UMovieSceneScriptingActorReferenceKey* AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa90dd54] Final|Native|Public|HasDefaults|BlueprintCallable 
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
	// void SetValue(bool InNewValue);                                                                                          // [0xa910dec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa910a38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	// bool GetValue();                                                                                                         // [0xa90f90c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa90f7f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetDefault(bool InDefaultValue);                                                                                    // [0xa9100bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa90fc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa90fb3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0xa90f618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa90f588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	// bool GetDefault();                                                                                                       // [0xa90f47c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	// TArray<bool> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                         // [0xa90f07c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0xa90efe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
	// class UMovieSceneScriptingBoolKey* AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa90dfa8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
	// void SetValue(char InNewValue);                                                                                          // [0xa910f04] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa910a38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetValue
	// char GetValue();                                                                                                         // [0xa90f99c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa90f7f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetDefault(char InDefaultValue);                                                                                    // [0xa9101e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa90fce8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa90fb7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa90f588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	// char GetDefault();                                                                                                       // [0xa90f4c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.AddKey
	// class UMovieSceneScriptingByteKey* AddKey(FFrameNumber& InTime, char NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0xa90e320] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
	// void SetValue(double InNewValue);                                                                                        // [0xa911018] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa910a38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0xa91091c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0xa910800] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
	// void SetLeaveTangentWeight(float InNewValue);                                                                            // [0xa91059c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
	// void SetLeaveTangent(float InNewValue);                                                                                  // [0xa9104d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0xa9103bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
	// void SetArriveTangentWeight(float InNewValue);                                                                           // [0xa90fea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
	// void SetArriveTangent(float InNewValue);                                                                                 // [0xa90fddc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
	// double GetValue();                                                                                                       // [0xa90fa44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa90f7f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0xa90f7a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0xa90f750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
	// float GetLeaveTangentWeight();                                                                                           // [0xa90f5f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
	// float GetLeaveTangent();                                                                                                 // [0xa90f5c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0xa90f534] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
	// float GetArriveTangentWeight();                                                                                          // [0xa90f41c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
	// float GetArriveTangent();                                                                                                // [0xa90f3f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0xa910730] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0xa910660] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
	// void SetDefault(double InDefaultValue);                                                                                  // [0xa9102f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa90fd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa90fbbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0xa90f70c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0xa90f6c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0xa90f670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa90f588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
	// double GetDefault();                                                                                                     // [0xa90f50c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
	// TArray<double> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                       // [0xa90f238] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0xa90f030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
	// class UMovieSceneScriptingDoubleKey* AddKey(FFrameNumber& InTime, double NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0xa90e7ac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
	// void SetValue(FMovieSceneEvent& InNewValue);                                                                             // [0xa9110e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa910a38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetValue
	// FMovieSceneEvent GetValue();                                                                                             // [0xa90fa98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa90f7f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa90f588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.AddKey
	// class UMovieSceneScriptingEventKey* AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa90ec28] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
	// void SetValue(float InNewValue);                                                                                         // [0xa9216bc] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa921444] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0xa921380] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0xa9212bc] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	// void SetLeaveTangentWeight(float InNewValue);                                                                            // [0xa91ef14] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	// void SetLeaveTangent(float InNewValue);                                                                                  // [0xa91ee4c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0xa91ed88] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	// void SetArriveTangentWeight(float InNewValue);                                                                           // [0xa91d908] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	// void SetArriveTangent(float InNewValue);                                                                                 // [0x6203eac] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	// float GetValue();                                                                                                        // [0x614fd2c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa90f7f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0x637ae78] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0x61d6ca4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	// float GetLeaveTangentWeight();                                                                                           // [0x903b4dc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	// float GetLeaveTangent();                                                                                                 // [0xa91af80] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0x60aadb8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	// float GetArriveTangentWeight();                                                                                          // [0x63a4e38] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
	// float GetArriveTangent();                                                                                                // [0xa919ab0] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0xa91fd9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0xa91fcbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	// void SetDefault(float InDefaultValue);                                                                                   // [0xa91db20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa91d6b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa91cca8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0xa91b7cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0xa91b770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0xa91b220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa90f588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	// float GetDefault();                                                                                                      // [0xa91a894] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	// TArray<float> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                        // [0xa919038] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0xa918fac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
	// class UMovieSceneScriptingFloatKey* AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0xa917a14] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
	// void SetValue(int32_t InNewValue);                                                                                       // [0xa921784] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa910a38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	// int32_t GetValue();                                                                                                      // [0xa91cb20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa90f7f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetDefault(int32_t InDefaultValue);                                                                                 // [0xa91dbe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa91d6cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa91cd3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa90f588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	// int32_t GetDefault();                                                                                                    // [0xa91a8bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
	// class UMovieSceneScriptingIntegerKey* AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa917e88] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
	// void SetValue(class UObject* InNewValue);                                                                                // [0xa921898] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa910a38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	// class UObject* GetValue();                                                                                               // [0xa91cbc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa90f7f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetDefault(class UObject* InDefaultValue);                                                                          // [0xa91dcf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa90fc18] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa91cd98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa90f588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	// class UObject* GetDefault();                                                                                             // [0xa91a920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
	// class UMovieSceneScriptingObjectPathKey* AddKey(FFrameNumber InTime, class UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa918204] Final|Native|Public|HasDefaults|BlueprintCallable 
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
	// void SetValue(FString InNewValue);                                                                                       // [0xa921958] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0xa910a38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetValue
	// FString GetValue();                                                                                                      // [0xa91cc1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0xa90f7f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetDefault(FString InDefaultValue);                                                                                 // [0xa91ddd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0xa90fd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0xa91cdc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0xa90f588] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	// FString GetDefault();                                                                                                    // [0xa91a944] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.AddKey
	// class UMovieSceneScriptingStringKey* AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0xa918438] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
	// void SetSpawnableBindingID(FMovieSceneBindingProxy& InBinding, FMovieSceneObjectBindingID& SpawnableBindingID);          // [0xa920ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetSortingOrder
	// void SetSortingOrder(FMovieSceneBindingProxy& InBinding, int32_t SortingOrder);                                          // [0xa920b1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetParent
	// void SetParent(FMovieSceneBindingProxy& InBinding, FMovieSceneBindingProxy& InParentBinding);                            // [0xa91fba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetName
	// void SetName(FMovieSceneBindingProxy& InBinding, FString InName);                                                        // [0xa91f270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	// void SetDisplayName(FMovieSceneBindingProxy& InBinding, FText& InDisplayName);                                           // [0xa91e520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	// void RemoveTrack(FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);                             // [0xa91d744] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.Remove
	// void Remove(FMovieSceneBindingProxy& InBinding);                                                                         // [0xa91d1b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	// void MoveBindingContents(FMovieSceneBindingProxy& SourceBindingId, FMovieSceneBindingProxy& DestinationBindingId);       // [0xa91d0c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.IsValid
	// bool IsValid(FMovieSceneBindingProxy& InBinding);                                                                        // [0xa91cff4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(FMovieSceneBindingProxy& InBinding);                                                 // [0xa91c368] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetSortingOrder
	// int32_t GetSortingOrder(FMovieSceneBindingProxy& InBinding);                                                             // [0xa91c008] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	// class UClass* GetPossessedObjectClass(FMovieSceneBindingProxy& InBinding);                                               // [0xa91b6d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetParent
	// FMovieSceneBindingProxy GetParent(FMovieSceneBindingProxy& InBinding);                                                   // [0xa91b438] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	// class UObject* GetObjectTemplate(FMovieSceneBindingProxy& InBinding);                                                    // [0xa91b378] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetName
	// FString GetName(FMovieSceneBindingProxy& InBinding);                                                                     // [0xa91b16c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetId
	// FGuid GetId(FMovieSceneBindingProxy& InBinding);                                                                         // [0xa91aef0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	// FText GetDisplayName(FMovieSceneBindingProxy& InBinding);                                                                // [0xa91a984] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	// TArray<FMovieSceneBindingProxy> GetChildPossessables(FMovieSceneBindingProxy& InBinding);                                // [0xa91a714] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);                 // [0xa919398] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);            // [0xa9191c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.AddTrack
	// class UMovieSceneTrack* AddTrack(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);                           // [0xa918df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
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
	// class UClass* GetBoundObjectPropertyClass(FMovieSceneEvent& EventKey);                                                   // [0xa919ffc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	// class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);                      // [0xa917920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
	// class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);                    // [0xa91782c] Final|Native|Static|Public|BlueprintCallable 
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
	// bool SetFolderName(class UMovieSceneFolder* Folder, FName InFolderName);                                                 // [0xa91ec30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	// bool SetFolderColor(class UMovieSceneFolder* Folder, FColor InFolderColor);                                              // [0xa91eae8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildTrack
	// bool RemoveChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                                 // [0xa91d3e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	// bool RemoveChildObjectBinding(class UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);                 // [0xa91d528] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	// bool RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                           // [0xa91d3e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	// bool RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);                  // [0xa91d264] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	// FName GetFolderName(class UMovieSceneFolder* Folder);                                                                    // [0xa91ae1c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	// FColor GetFolderColor(class UMovieSceneFolder* Folder);                                                                  // [0xa91ad54] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildTracks
	// TArray<UMovieSceneTrack*> GetChildTracks(class UMovieSceneFolder* Folder);                                               // [0xa91a7bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	// TArray<FMovieSceneBindingProxy> GetChildObjectBindings(class UMovieSceneFolder* Folder);                                 // [0xa91a52c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	// TArray<UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder* Folder);                                         // [0xa91a450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	// TArray<UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder* Folder);                                             // [0xa91a308] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildTrack
	// bool AddChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                                    // [0xa9174e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	// bool AddChildObjectBinding(class UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);                    // [0xa917684] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	// bool AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                              // [0xa9174e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
	// bool AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);                        // [0xa91733c] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo);              // [0xa91f13c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex
	// void SetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track, int32_t MaterialIndex);                            // [0xa91efdc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialInfo
	// FComponentMaterialInfo GetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track);                                  // [0xa91b07c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex
	// int32_t GetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track);                                                // [0xa91afac] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo);              // [0xa91f13c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
	// void SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track, int32_t MaterialIndex);                            // [0xa91efdc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialInfo
	// FComponentMaterialInfo GetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track);                                  // [0xa91b07c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
	// int32_t GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track);                                                // [0xa91afac] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, FName& InPropertyName, FString InPropertyPath);       // [0xa91fe7c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	// void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);                   // [0xa91fa38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
	// void SetByteTrackEnum(class UMovieSceneByteTrack* Track, class UEnum* InEnum);                                           // [0xa91d9d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	// FName GetUniqueTrackName(class UMovieScenePropertyTrack* Track);                                                         // [0xa91ca5c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	// FString GetPropertyPath(class UMovieScenePropertyTrack* Track);                                                          // [0xa91b900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	// FName GetPropertyName(class UMovieScenePropertyTrack* Track);                                                            // [0xa91b828] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	// class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);                                       // [0xa91b29c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
	// class UEnum* GetByteTrackEnum(class UMovieSceneByteTrack* Track);                                                        // [0xa91a0bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
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
	// void SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);                                           // [0xa921118] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	// void SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                           // [0xa920f8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	// void SetStartFrame(class UMovieSceneSection* Section, int32_t StartFrame);                                               // [0xa920de8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	// void SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);                                 // [0xa9208a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRange
	// void SetRange(class UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame);                                  // [0xa920634] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	// void SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);                                               // [0xa91e944] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	// void SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                             // [0xa91e7b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	// void SetEndFrame(class UMovieSceneSection* Section, int32_t EndFrame);                                                   // [0xa91e614] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	// bool HasStartFrame(class UMovieSceneSection* Section);                                                                   // [0xa91cf14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	// bool HasEndFrame(class UMovieSceneSection* Section);                                                                     // [0xa91ce34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	// float GetStartFrameSeconds(class UMovieSceneSection* Section);                                                           // [0xa91c1d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	// int32_t GetStartFrame(class UMovieSceneSection* Section);                                                                // [0xa91c098] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	// int32_t GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32_t InFrame, class UMovieSceneSequence* ParentSequence); // [0xa91b520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	// float GetEndFrameSeconds(class UMovieSceneSection* Section);                                                             // [0xa91abc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	// int32_t GetEndFrame(class UMovieSceneSection* Section);                                                                  // [0xa91aa84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
	// TArray<UMovieSceneScriptingChannel*> GetChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);    // [0xa91a198] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
	// float GetAutoSizeStartFrameSeconds(class UMovieSceneSection* Section);                                                   // [0xa919f38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
	// int32_t GetAutoSizeStartFrame(class UMovieSceneSection* Section);                                                        // [0xa919e78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
	// bool GetAutoSizeHasStartFrame(class UMovieSceneSection* Section);                                                        // [0xa919d6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
	// bool GetAutoSizeHasEndFrame(class UMovieSceneSection* Section);                                                          // [0xa919c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
	// float GetAutoSizeEndFrameSeconds(class UMovieSceneSection* Section);                                                     // [0xa919b9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
	// int32_t GetAutoSizeEndFrame(class UMovieSceneSection* Section);                                                          // [0xa919adc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
	// TArray<UMovieSceneScriptingChannel*> GetAllChannels(class UMovieSceneSection* Section);                                  // [0xa919568] Final|Native|Static|Public|BlueprintCallable 
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
	// void SortMarkedFrames(class UMovieSceneSequence* Sequence);                                                              // [0xa92ceac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	// void SetWorkRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);                                // [0xa92cd60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	// void SetWorkRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);                                    // [0xa92cc14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	// void SetViewRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);                                // [0xa92cac8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	// void SetViewRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);                                    // [0xa92c97c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	// void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                          // [0xa92c68c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	// void SetTickResolution(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                                  // [0xa92c51c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	// void SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);                                                 // [0xa92be14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	// void SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);                                      // [0xa92bc64] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	// void SetPlaybackStart(class UMovieSceneSequence* Sequence, int32_t StartFrame);                                          // [0xa92babc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackRangeLocked
	// void SetPlaybackRangeLocked(class UMovieSceneSequence* Sequence, bool bInLocked);                                        // [0xa92b97c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	// void SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);                                          // [0xa92b7cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	// void SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32_t EndFrame);                                              // [0xa92b624] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFramesLocked
	// void SetMarkedFramesLocked(class UMovieSceneSequence* Sequence, bool bInLocked);                                         // [0xa92b398] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	// void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber);               // [0xa92b1a4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	// void SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);               // [0xa92b038] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	// void SetDisplayRate(class UMovieSceneSequence* Sequence, FFrameRate DisplayRate);                                        // [0xa92ab88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	// void SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);                            // [0xa92a7d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	// FMovieSceneBindingProxy ResolveBindingID(class UMovieSceneSequence* RootSequence, FMovieSceneObjectBindingID InObjectBindingID); // [0xa92a5bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveTrack
	// bool RemoveTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);                                    // [0xa92a154] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
	// void RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence, class UMovieSceneFolder* Folder);                 // [0xa92a294] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	// bool RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);                              // [0xa92a154] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	// FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float duration);         // [0xa929e54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	// FSequencerScriptingRange MakeRange(class UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t duration);           // [0xa929c40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	// TArray<UObject*> LocateBoundObjects(class UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding, class UObject* Context); // [0xa929a1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	// bool IsReadOnly(class UMovieSceneSequence* Sequence);                                                                    // [0xa929958] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsPlaybackRangeLocked
	// bool IsPlaybackRangeLocked(class UMovieSceneSequence* Sequence);                                                         // [0xa929894] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	// double GetWorkRangeStart(class UMovieSceneSequence* InSequence);                                                         // [0xa929694] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	// double GetWorkRangeEnd(class UMovieSceneSequence* InSequence);                                                           // [0xa9295c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	// double GetViewRangeStart(class UMovieSceneSequence* InSequence);                                                         // [0xa9294f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	// double GetViewRangeEnd(class UMovieSceneSequence* InSequence);                                                           // [0xa929424] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(class UMovieSceneSequence* Sequence);                                                // [0xa92934c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	// FFrameRate GetTickResolution(class UMovieSceneSequence* Sequence);                                                       // [0xa929110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	// TArray<FMovieSceneBindingProxy> GetSpawnables(class UMovieSceneSequence* Sequence);                                      // [0xa928e00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	// TArray<UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);                                // [0xa9289f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	// TArray<FMovieSceneBindingProxy> GetPossessables(class UMovieSceneSequence* Sequence);                                    // [0xa928840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	// FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* RootSequence, class UMovieSceneSequence* DestinationSequence, FMovieSceneBindingProxy& InBinding); // [0xa928698] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	// float GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);                                                      // [0xa92850c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	// int32_t GetPlaybackStart(class UMovieSceneSequence* Sequence);                                                           // [0xa9283d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	// FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence* Sequence);                                          // [0xa9282a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	// float GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);                                                        // [0xa928114] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	// int32_t GetPlaybackEnd(class UMovieSceneSequence* Sequence);                                                             // [0xa927fd8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	// class UMovieScene* GetMovieScene(class UMovieSceneSequence* Sequence);                                                   // [0xa927e48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	// TArray<UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* Sequence);                                          // [0xa927d6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	// TArray<FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence* Sequence);                                     // [0xa9275a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	// EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InSequence);                                      // [0xa9274c8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	// FFrameRate GetDisplayRate(class UMovieSceneSequence* Sequence);                                                          // [0xa9272ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	// EUpdateClockSource GetClockSource(class UMovieSceneSequence* InSequence);                                                // [0xa927008] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	// TArray<FMovieSceneBindingProxy> GetBindings(class UMovieSceneSequence* Sequence);                                        // [0xa926e78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	// FMovieSceneObjectBindingID GetBindingID(class UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding);        // [0xa926d4c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);                // [0xa926bdc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);           // [0xa926a6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	// int32_t FindNextMarkedFrame(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward);             // [0xa926888] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	// TArray<UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);          // [0xa926708] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	// TArray<UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);     // [0xa926588] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	// int32_t FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, FString InLabel);                                    // [0xa925e18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	// int32_t FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber);                   // [0xa925ca8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	// FMovieSceneBindingProxy FindBindingByName(class UMovieSceneSequence* Sequence, FString Name);                            // [0xa925480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	// FMovieSceneBindingProxy FindBindingById(class UMovieSceneSequence* Sequence, FGuid BindingID);                           // [0xa9252dc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	// void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);                                                            // [0xa92520c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	// void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32_t DeleteIndex);                                        // [0xa9250ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AreMarkedFramesLocked
	// bool AreMarkedFramesLocked(class UMovieSceneSequence* Sequence);                                                         // [0xa924fe8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddTrack
	// class UMovieSceneTrack* AddTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);                          // [0xa924dc8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	// FMovieSceneBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);     // [0xa924c08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	// FMovieSceneBindingProxy AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn);          // [0xa924a48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	// class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence* Sequence, FString NewFolderName);            // [0xa9241d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	// FMovieSceneBindingProxy AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);             // [0xa924034] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	// class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);                    // [0xa923e04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
	// int32_t AddMarkedFrame(class UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame);                      // [0xa9236ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
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
	// void SetTrackRowDisplayName(class UMovieSceneTrack* Track, FText& InName, int32_t RowIndex);                             // [0xa92c7f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	// void SetSortingOrder(class UMovieSceneTrack* Track, int32_t SortingOrder);                                               // [0xa92c0a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	// void SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                  // [0xa92bf54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	// void SetDisplayName(class UMovieSceneTrack* Track, FText& InName);                                                       // [0xa92aa78] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	// void SetColorTint(class UMovieSceneTrack* Track, FColor& ColorTint);                                                     // [0xa92a93c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	// void RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                    // [0xa92a3d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
	// FText GetTrackRowDisplayName(class UMovieSceneTrack* Track, int32_t RowIndex);                                           // [0xa9291d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	// int32_t GetSortingOrder(class UMovieSceneTrack* Track);                                                                  // [0xa928d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	// class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* Track);                                                // [0xa928ae8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSections
	// TArray<UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);                                                  // [0xa928bc8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	// FText GetDisplayName(class UMovieSceneTrack* Track);                                                                     // [0xa9271b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	// FColor GetColorTint(class UMovieSceneTrack* Track);                                                                      // [0xa9270ec] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.AddSection
	// class UMovieSceneSection* AddSection(class UMovieSceneTrack* Track);                                                     // [0xa924944] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed);                            // [0xa92b4d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
	// int32_t GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track);                                                    // [0xa927f08] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed);                           // [0xa92b4d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
	// int32_t GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track);                                                   // [0xa927f08] Final|Native|Static|Public|BlueprintCallable 
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
	// void SetStartSeconds(FSequencerScriptingRange& Range, float Start);                                                      // [0xa92c384] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	// void SetStartFrame(FSequencerScriptingRange& Range, int32_t Start);                                                      // [0xa92c1e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	// void SetEndSeconds(FSequencerScriptingRange& Range, float End);                                                          // [0xa92ae88] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	// void SetEndFrame(FSequencerScriptingRange& Range, int32_t End);                                                          // [0xa92acec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	// void RemoveStart(FSequencerScriptingRange& Range);                                                                       // [0xa92a52c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	// void RemoveEnd(FSequencerScriptingRange& Range);                                                                         // [0xa92a0c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	// bool HasStart(FSequencerScriptingRange& Range);                                                                          // [0xa9297fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	// bool HasEnd(FSequencerScriptingRange& Range);                                                                            // [0xa929764] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	// float GetStartSeconds(FSequencerScriptingRange& Range);                                                                  // [0xa929050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	// int32_t GetStartFrame(FSequencerScriptingRange& Range);                                                                  // [0xa928fbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	// float GetEndSeconds(FSequencerScriptingRange& Range);                                                                    // [0xa927408] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
	// int32_t GetEndFrame(FSequencerScriptingRange& Range);                                                                    // [0xa927374] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
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

