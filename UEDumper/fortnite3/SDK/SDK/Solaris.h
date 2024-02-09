
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: VerseNative

/// Enum /Script/Solaris.EVerseDigestVariant
/// Size: 0x03
enum class EVerseDigestVariant : uint8_t
{
	EVerseDigestVariant__PublicOnly                                                  = 0,
	EVerseDigestVariant__PublicAndEpicInternal                                       = 1,
	EVerseDigestVariant__EVerseDigestVariant_MAX                                     = 2
};

/// Enum /Script/Solaris.EVerseEnumFlags
/// Size: 0x03
enum class EVerseEnumFlags : uint32_t
{
	EVerseEnumFlags__None                                                            = 0,
	EVerseEnumFlags__NativeBound                                                     = 1,
	EVerseEnumFlags__EVerseEnumFlags_MAX                                             = 2
};

/// Enum /Script/Solaris.EVersePackageScope
/// Size: 0x05
enum class EVersePackageScope : uint8_t
{
	EVersePackageScope__PublicAPI                                                    = 0,
	EVersePackageScope__InternalAPI                                                  = 1,
	EVersePackageScope__PublicUser                                                   = 2,
	EVersePackageScope__InternalUser                                                 = 3,
	EVersePackageScope__EVersePackageScope_MAX                                       = 4
};

/// Enum /Script/Solaris.EVersePackageType
/// Size: 0x05
enum class EVersePackageType : uint8_t
{
	EVersePackageType__VNI                                                           = 0,
	EVersePackageType__Content                                                       = 1,
	EVersePackageType__PublishedContent                                              = 2,
	EVersePackageType__Assets                                                        = 3,
	EVersePackageType__EVersePackageType_MAX                                         = 4
};

/// Class /Script/Solaris.VerseStruct
/// Size: 0x0038 (0x0000C0 - 0x0000F8)
class UVerseStruct : public UScriptStruct
{ 
public:
	uint32_t                                           VerseClassFlags;                                            // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UFunction*                                   InitFunction;                                               // 0x00C8   (0x0008)  
	class UVerseClass*                                 ModuleClass;                                                // 0x00D0   (0x0008)  
	FGuid                                              Guid;                                                       // 0x00D8   (0x0010)  
	class UFunction*                                   FactoryFunction;                                            // 0x00E8   (0x0008)  
	class UFunction*                                   OverrideFactoryFunction;                                    // 0x00F0   (0x0008)  
};

/// Class /Script/Solaris.SolarisWeakMapLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisWeakMapLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisWeakMapLibrary.Type
	// void Type(class UClass* KeyType, class UClass* ValueType);                                                            // [0x6fd2278] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisWeakMapLibrary.RefCall
	// void RefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                                     // [0x6fd1094] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.PersistentVarRefCall
	// void PersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);          // [0x6fd0bc0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.PersistentVarCall
	// void PersistentVarCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                           // [0x6fd0a4c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.FitsInPlayerMap
	// void FitsInPlayerMap(FGenericValueType Value);                                                                        // [0x6fcc31c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisWeakMapLibrary.CompletelyAssignedRefCall
	// void CompletelyAssignedRefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                   // [0x6fcaf1c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.CompletelyAssignedPersistentVarRefCall
	// void CompletelyAssignedPersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // [0x6fcad68] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.Call
	// void Call(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                                        // [0x6fca39c] Final|Native|Static|Public|HasOutParms 
};

/// Struct /Script/Solaris.ManifestDependency
/// Size: 0x0010 (0x000000 - 0x000010)
struct FManifestDependency
{ 
	TArray<char>                                       Dependency;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/Solaris.VerseDigest
/// Size: 0x0048 (0x000028 - 0x000070)
class UVerseDigest : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<char>                                       DigestCode;                                                 // 0x0028   (0x0010)  
	TArray<char>                                       ManifestCode;                                               // 0x0038   (0x0010)  
	TArray<FManifestDependency>                        DependencyPackages;                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,15313) /* FString */              __um(ProjectName);                                          // 0x0058   (0x0010)  
	EVerseDigestVariant                                Variant;                                                    // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	uint32_t                                           VerseVersion;                                               // 0x006C   (0x0004)  
};

/// Class /Script/Solaris.VerseEnum
/// Size: 0x0008 (0x000068 - 0x000070)
class UVerseEnum : public UEnum
{ 
public:
	EVerseEnumFlags                                    VerseEnumFlags;                                             // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/Solaris.SolarisArrayLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisArrayLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisArrayLibrary.UnsafeCall
	// void UnsafeCall(TArray<FGenericElementType>& Array, int64_t Index);                                                   // [0x6fb63d8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.RefCall
	// void RefCall(TArray<FGenericElementType>& Array, int64_t Index);                                                      // [0x6fb61dc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Move
	// void Move(TArray<FGenericElementType>& Target, TArray<FGenericElementType>& Source);                                  // [0x6fb6004] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Length
	// int64_t Length(TArray<FGenericElementType>& Array);                                                                   // [0x6fb5ef4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Empty
	// void Empty(TArray<FGenericElementType>& Array);                                                                       // [0x6fb5dcc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.ConcatEquals
	// TArray<FGenericElementType> ConcatEquals(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS);         // [0x6fb5bfc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Concat
	// TArray<FGenericElementType> Concat(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS);               // [0x6fb5a64] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Call
	// void Call(TArray<FGenericElementType>& Array, int64_t Index);                                                         // [0x6fb5764] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Add
	// int64_t Add(TArray<FGenericElementType>& Array, FGenericElementType& new_item);                                       // [0x6fb552c] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisCoroutineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisCoroutineLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskMake
	// class UObject* TaskMake(class UClass* Type, class UObject* Caller, int64_t CallerResumeState, int64_t CallerCancelState, class UObject* OwnerInstance); // [0x6fd1f78] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetState
	// int64_t TaskGetState(class UObject* task);                                                                            // [0x6fd1eb4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty
	// void TaskGetReturnProperty(class UObject* task);                                                                      // [0x6fd1c40] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskFree
	// void TaskFree(class UObject* task);                                                                                   // [0x6fd1b7c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskCancel
	// void TaskCancel(class UObject* task);                                                                                 // [0x6fd1acc] Final|Native|Static|Public 
};

/// Class /Script/Solaris.GameFeature_SolarisObserver
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeature_SolarisObserver : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/Solaris.SolarisMapLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMapLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMapLibrary.Move
	// void Move(TMap<FGenericKeyType, FGenericValueType>& Dest, TMap<FGenericKeyType, FGenericValueType>& Src);             // [0x6fcf96c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Length
	// int64_t Length(TMap<FGenericKeyType, FGenericValueType>& Map);                                                        // [0x6fce438] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.InitMap
	// void InitMap(TMap<FGenericKeyType, FGenericValueType>& Map);                                                          // [0x6fcda34] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetValueByIndex
	// FGenericValueType GetValueByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index);                      // [0x6fcd054] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetNextValidIndex
	// int64_t GetNextValidIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t InitialIndex);                       // [0x6fccda4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetKeyByIndex
	// FGenericKeyType GetKeyByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index);                          // [0x6fccb74] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Concat
	// TMap<FGenericKeyType, FGenericValueType> Concat(TMap<FGenericKeyType, FGenericValueType>& LHS, TMap<FGenericKeyType, FGenericValueType>& RHS); // [0x6fcafbc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Add
	// void Add(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType& Key, FGenericValueType& Value);              // [0x6fc9360] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisMathLibrary_Bool
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Bool : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Bool.Query
	// void Query();                                                                                                         // [0x6fd0d74] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Int
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Int : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Int.UncheckedConvertI32I64
	// int32_t UncheckedConvertI32I64(int64_t RHS);                                                                          // [0x63e0200] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.SubtractEquals
	// void SubtractEquals(int64_t& LHS, int64_t RHS);                                                                       // [0x6fd18bc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Subtract
	// void Subtract(int64_t LHS, int64_t RHS);                                                                              // [0x6fd15f4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateNotEqual
	// bool PredicateNotEqual(int64_t LHS, int64_t RHS);                                                                     // [0x642cb40] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateLessEqual
	// bool PredicateLessEqual(int64_t LHS, int64_t RHS);                                                                    // [0x6416510] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateLess
	// bool PredicateLess(int64_t LHS, int64_t RHS);                                                                         // [0x6416918] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateGreaterEqual
	// bool PredicateGreaterEqual(int64_t LHS, int64_t RHS);                                                                 // [0x6407e18] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateGreater
	// bool PredicateGreater(int64_t LHS, int64_t RHS);                                                                      // [0x64081d4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateEqual
	// bool PredicateEqual(int64_t LHS, int64_t RHS);                                                                        // [0x63f47a0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Negate
	// void Negate(int64_t Value);                                                                                           // [0x6fd05a8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.MultiplyEquals
	// void MultiplyEquals(int64_t& LHS, int64_t RHS);                                                                       // [0x6fd0048] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Multiply
	// void Multiply(int64_t LHS, int64_t RHS);                                                                              // [0x6fcfd84] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.LessEqual
	// void LessEqual(int64_t LHS, int64_t RHS);                                                                             // [0x6fcea7c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Less
	// void Less(int64_t LHS, int64_t RHS);                                                                                  // [0x6fce77c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.GreaterEqual
	// void GreaterEqual(int64_t LHS, int64_t RHS);                                                                          // [0x6fcd720] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Greater
	// void Greater(int64_t LHS, int64_t RHS);                                                                               // [0x6fcd424] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Divide
	// void Divide(int64_t LHS, int64_t RHS);                                                                                // [0x6fcbe24] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.CheckConstrainedInt
	// void CheckConstrainedInt(int64_t Min, int64_t Max, int64_t Value);                                                    // [0x6fcab74] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.AddEquals
	// void AddEquals(int64_t& LHS, int64_t RHS);                                                                            // [0x6fc9cc8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Add
	// void Add(int64_t LHS, int64_t RHS);                                                                                   // [0x6fc98a8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.abs
	// void abs(int64_t Value);                                                                                              // [0x6fc9234] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Rational
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Rational : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Rational.floor
	// void floor(FVerseRational Val);                                                                                       // [0x6fcc628] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Rational.ceil
	// void ceil(FVerseRational Val);                                                                                        // [0x6fca7e8] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Float
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Float : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Float.SubtractEquals
	// double SubtractEquals(double& LHS, double RHS);                                                                       // [0x6fd1798] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Subtract
	// double Subtract(double LHS, double RHS);                                                                              // [0x6fd14a4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Negate
	// double Negate(double Value);                                                                                          // [0x6fd04e0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyIntFloat
	// double MultiplyIntFloat(int64_t LHS, double RHS);                                                                     // [0x6fd039c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyFloatInt
	// double MultiplyFloatInt(double LHS, int64_t RHS);                                                                     // [0x6fd0258] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyEquals
	// double MultiplyEquals(double& LHS, double RHS);                                                                       // [0x6fcff24] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Multiply
	// double Multiply(double LHS, double RHS);                                                                              // [0x6fcfc34] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.LessEqual
	// void LessEqual(double LHS, double RHS);                                                                               // [0x6fce8e8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Less
	// void Less(double LHS, double RHS);                                                                                    // [0x6fce5ec] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.GreaterEqual
	// void GreaterEqual(double LHS, double RHS);                                                                            // [0x6fcd590] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Greater
	// void Greater(double LHS, double RHS);                                                                                 // [0x6fcd294] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.DivideEquals
	// double DivideEquals(double& LHS, double RHS);                                                                         // [0x6fcbfc0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Divide
	// double Divide(double LHS, double RHS);                                                                                // [0x6fcbcd4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.CheckConstrainedFloat
	// void CheckConstrainedFloat(double Min, double Max, double Value);                                                     // [0x6fca974] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.AddEquals
	// double AddEquals(double& LHS, double RHS);                                                                            // [0x6fc9ba4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Add
	// double Add(double LHS, double RHS);                                                                                   // [0x6fc9758] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.abs
	// double abs(double Value);                                                                                             // [0x6fc916c] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_String
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_String : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_String.UncheckedCall
	// void UncheckedCall(int32_t& String, int64_t Index);                                                                   // [0x6fd23a8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.RefCall
	// void RefCall(int32_t& String, int64_t Index);                                                                         // [0x6fd0efc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Move
	// void Move(int32_t& Destination, int32_t& Source);                                                                     // [0x6fcfaf8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.MakeLiteral
	// int32_t MakeLiteral();                                                                                                // [0x6fceec4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_String.Make
	// void Make();                                                                                                          // [0x6fcecd0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_String.Length
	// int64_t Length(int32_t& Array);                                                                                       // [0x6fce530] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.ConcatEquals
	// int32_t ConcatEquals(int32_t& LHS, int32_t& RHS);                                                                     // [0x6fcb7bc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Concat
	// int32_t Concat(int32_t& LHS, int32_t& RHS);                                                                           // [0x6fcb658] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Call
	// void Call(int32_t& String, int64_t Index);                                                                            // [0x6fca0dc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Add
	// void Add(int32_t& String, int8_t Character);                                                                          // [0x6fc9a4c] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisMathLibrary_Option
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Option : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Option.Query
	// void Query();                                                                                                         // [0x6fd0e50] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Option.Make
	// void Make();                                                                                                          // [0x6fcebe8] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisGameSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class USolarisGameSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,15314) /* TArray<FString> */      __um(Blacklist);                                            // 0x0028   (0x0010)  
	int32_t                                            MaxAllowedSize;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/Solaris.SolarisUtilLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisUtilLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisUtilLibrary.ReplaceOptionValue
	// int64_t ReplaceOptionValue(int64_t ResultProperty, int64_t Option, int64_t Value);                                    // [0x6fd119c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ReferenceIsValid
	// bool ReferenceIsValid(int64_t Reference);                                                                             // [0x6fd1134] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ObjectHasNoFlags
	// bool ObjectHasNoFlags(class UObject* Object, int32_t Flags);                                                          // [0x6fd090c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.MakeUnsetOption
	// int64_t MakeUnsetOption();                                                                                            // [0x6fcf880] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.MakeOptionFromValue
	// bool MakeOptionFromValue(class UObject* Property, int64_t Value);                                                     // [0x6fcefdc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.IsOptionSet
	// bool IsOptionSet(int64_t Option);                                                                                     // [0x6fce368] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.IsNonNullObject
	// bool IsNonNullObject(class UObject* Object);                                                                          // [0x6fce2b0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.InstantiateObject
	// void InstantiateObject(class UClass* Class, int64_t InstancingGraph);                                                 // [0x6fcdf74] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.InstanceFunction
	// void InstanceFunction(class UObject* Object, FName MethodName);                                                       // [0x6fcde18] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.HasInterface
	// bool HasInterface(class UObject* Object, class UVerseClass* InterfaceClass);                                          // [0x6fcd88c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetOptionValue
	// int64_t GetOptionValue(int64_t Option);                                                                               // [0x6fccf54] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetFunctionForInterfaceMethod
	// void GetFunctionForInterfaceMethod(class UObject* Object, FName MethodName);                                          // [0x6fcc7d4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject
	// class UObject* GetCurrentlyInstantiatedObject();                                                                      // [0x6fcc7b0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.Dereference
	// int64_t Dereference(int64_t Reference);                                                                               // [0x6fcbbe0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.CallFunction
	// void CallFunction();                                                                                                  // [0x6fca578] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.CallFinalFunctionWithContext
	// void CallFinalFunctionWithContext();                                                                                  // [0x6fca438] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.Addressof
	// int64_t Addressof(int64_t Value);                                                                                     // [0x6fca01c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.AddPropertyToSubobjectExclusionList
	// void AddPropertyToSubobjectExclusionList(int64_t InstancingGraph, int64_t Property);                                  // [0x6fc9ed8] Final|Native|Static|Public 
};

/// Struct /Script/Solaris.VersePersistentVar
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVersePersistentVar
{ 
	SDK_UNDEFINED(16,15315) /* FString */              __um(Path);                                                 // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Struct /Script/Solaris.VerseSessionVar
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVerseSessionVar
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Class /Script/Solaris.VerseClass
/// Size: 0x00E8 (0x000200 - 0x0002E8)
class UVerseClass : public UVerseClassBase
{ 
public:
	uint32_t                                           SolClassFlags;                                              // 0x0200   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0204   (0x0004)  MISSED
	TArray<class UVerseClass*>                         TaskClasses;                                                // 0x0208   (0x0010)  
	SDK_UNDEFINED(80,15316) /* TSet<UVerseClass*> */   __um(InterfaceClasses);                                     // 0x0218   (0x0050)  
	SDK_UNDEFINED(80,15317) /* TMap<FName, InterfaceMethodFunctionProperties> */ __um(InterfaceMethodFunctionProperties); // 0x0268   (0x0050)  
	class UFunction*                                   InitInstanceFunction;                                       // 0x02B8   (0x0008)  
	TArray<FVersePersistentVar>                        PersistentVars;                                             // 0x02C0   (0x0010)  
	TArray<FVerseSessionVar>                           SessionVars;                                                // 0x02D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02E0   (0x0008)  MISSED
};

/// Class /Script/Solaris.VerseDebugData
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseDebugData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/Solaris.VerseDynamicallyTypedValueLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseDynamicallyTypedValueLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.NotEqual
	// void NotEqual(int32_t Left, int32_t Right);                                                                           // [0x6fd06d4] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple
	// void MakeRuntimeTypeTuple(TArray<int32_t> ValueType);                                                                 // [0x6fcf730] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeStruct
	// void MakeRuntimeTypeStruct(class UStruct* Struct);                                                                    // [0x6fcf670] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString
	// void MakeRuntimeTypeString();                                                                                         // [0x6fcf64c] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption
	// void MakeRuntimeTypeOption(int32_t ValueType);                                                                        // [0x6fcf58c] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject
	// void MakeRuntimeTypeObject();                                                                                         // [0x6fcf568] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap
	// void MakeRuntimeTypeMap(int32_t KeyType, int32_t ValueType);                                                          // [0x6fcf428] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic
	// void MakeRuntimeTypeLogic();                                                                                          // [0x6fcf404] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64
	// void MakeRuntimeTypeInt64();                                                                                          // [0x6fcf3e0] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction
	// void MakeRuntimeTypeFunction();                                                                                       // [0x6fcf3bc] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat
	// void MakeRuntimeTypeFloat();                                                                                          // [0x6fcf398] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum
	// void MakeRuntimeTypeEnum(FName Name);                                                                                 // [0x6fcf2d8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic
	// void MakeRuntimeTypeDynamic();                                                                                        // [0x6fcf2b4] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass
	// void MakeRuntimeTypeClass();                                                                                          // [0x6fcf290] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8
	// void MakeRuntimeTypeChar8();                                                                                          // [0x6fcf26c] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32
	// void MakeRuntimeTypeChar32();                                                                                         // [0x6fcf248] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray
	// void MakeRuntimeTypeArray(int32_t ElementType);                                                                       // [0x6fcf188] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.Equal
	// void Equal(int32_t Left, int32_t Right);                                                                              // [0x6fcc0e4] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue
	// void ConvertToDynamicallyTypedValue(int32_t RuntimeType, int32_t Value);                                              // [0x6fcba94] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue
	// void ConvertFromDynamicallyTypedValue(int32_t RuntimeType, int32_t Value);                                            // [0x6fcb954] Final|Native|Static|Public 
};

/// Struct /Script/Solaris.GenericKeyType
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGenericKeyType
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Solaris.GenericValueType
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGenericValueType
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Solaris.VersePackageContainerSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVersePackageContainerSettings
{ 
	SDK_UNDEFINED(16,15318) /* FString */              __um(VersePath);                                            // 0x0000   (0x0010)  
	EVersePackageScope                                 VerseScope;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	SDK_UNDEFINED(16,15319) /* TArray<FString> */      __um(DependencyPackages);                                   // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,15320) /* FString */              __um(VniDestDir);                                           // 0x0030   (0x0010)  
};

/// Struct /Script/Solaris.VerseSourceCode
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVerseSourceCode
{ 
	TArray<char>                                       Code;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Solaris.VerseSourceFile
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVerseSourceFile
{ 
	SDK_UNDEFINED(16,15321) /* FString */              __um(Filename);                                             // 0x0000   (0x0010)  
	TArray<FVerseSourceCode>                           CodeChunks;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Solaris.VersePackageContainer
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FVersePackageContainer
{ 
	SDK_UNDEFINED(16,15322) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15323) /* FString */              __um(DirPath);                                              // 0x0010   (0x0010)  
	EVersePackageType                                  PackageType;                                                // 0x0020   (0x0001)  
	bool                                               bEnableVerseAssetReflection;                                // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	FVersePackageContainerSettings                     Settings;                                                   // 0x0028   (0x0040)  
	TArray<FVerseSourceFile>                           SourceFiles;                                                // 0x0068   (0x0010)  
	TArray<char>                                       AssetDigest;                                                // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,15324) /* TArray<FString> */      __um(AssetDependencies);                                    // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0098   (0x0010)  MISSED
};

/// Struct /Script/Solaris.VerseProjectContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVerseProjectContainer
{ 
	TArray<FVersePackageContainer>                     Packages;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Solaris.GenericElementType
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGenericElementType
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

