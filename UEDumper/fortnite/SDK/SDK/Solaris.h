
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
	// void Type(class UClass* KeyType, class UClass* ValueType);                                                            // [0x7006bb8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisWeakMapLibrary.RefCall
	// void RefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                                     // [0x70059d4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.PersistentVarRefCall
	// void PersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);          // [0x7005500] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.PersistentVarCall
	// void PersistentVarCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                           // [0x700538c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.FitsInPlayerMap
	// void FitsInPlayerMap(FGenericValueType Value);                                                                        // [0x7000c5c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisWeakMapLibrary.CompletelyAssignedRefCall
	// void CompletelyAssignedRefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                   // [0x6fff85c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.CompletelyAssignedPersistentVarRefCall
	// void CompletelyAssignedPersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // [0x6fff6a8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.Call
	// void Call(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                                        // [0x6ffecdc] Final|Native|Static|Public|HasOutParms 
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
	SDK_UNDEFINED(16,15314) /* FString */              __um(ProjectName);                                          // 0x0058   (0x0010)  
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
	// void UnsafeCall(TArray<FGenericElementType>& Array, int64_t Index);                                                   // [0x6fead18] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.RefCall
	// void RefCall(TArray<FGenericElementType>& Array, int64_t Index);                                                      // [0x6feab1c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Move
	// void Move(TArray<FGenericElementType>& Target, TArray<FGenericElementType>& Source);                                  // [0x6fea944] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Length
	// int64_t Length(TArray<FGenericElementType>& Array);                                                                   // [0x6fea834] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Empty
	// void Empty(TArray<FGenericElementType>& Array);                                                                       // [0x6fea70c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.ConcatEquals
	// TArray<FGenericElementType> ConcatEquals(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS);         // [0x6fea53c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Concat
	// TArray<FGenericElementType> Concat(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS);               // [0x6fea3a4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Call
	// void Call(TArray<FGenericElementType>& Array, int64_t Index);                                                         // [0x6fea0a4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Add
	// int64_t Add(TArray<FGenericElementType>& Array, FGenericElementType& new_item);                                       // [0x6fe9e6c] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisCoroutineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisCoroutineLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskMake
	// class UObject* TaskMake(class UClass* Type, class UObject* Caller, int64_t CallerResumeState, int64_t CallerCancelState, class UObject* OwnerInstance); // [0x70068b8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetState
	// int64_t TaskGetState(class UObject* task);                                                                            // [0x70067f4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty
	// void TaskGetReturnProperty(class UObject* task);                                                                      // [0x7006580] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskFree
	// void TaskFree(class UObject* task);                                                                                   // [0x70064bc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskCancel
	// void TaskCancel(class UObject* task);                                                                                 // [0x700640c] Final|Native|Static|Public 
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
	// void Move(TMap<FGenericKeyType, FGenericValueType>& Dest, TMap<FGenericKeyType, FGenericValueType>& Src);             // [0x70042ac] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Length
	// int64_t Length(TMap<FGenericKeyType, FGenericValueType>& Map);                                                        // [0x7002d78] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.InitMap
	// void InitMap(TMap<FGenericKeyType, FGenericValueType>& Map);                                                          // [0x7002374] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetValueByIndex
	// FGenericValueType GetValueByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index);                      // [0x7001994] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetNextValidIndex
	// int64_t GetNextValidIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t InitialIndex);                       // [0x70016e4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetKeyByIndex
	// FGenericKeyType GetKeyByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index);                          // [0x70014b4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Concat
	// TMap<FGenericKeyType, FGenericValueType> Concat(TMap<FGenericKeyType, FGenericValueType>& LHS, TMap<FGenericKeyType, FGenericValueType>& RHS); // [0x6fff8fc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Add
	// void Add(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType& Key, FGenericValueType& Value);              // [0x6ffdca0] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisMathLibrary_Bool
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Bool : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Bool.Query
	// void Query();                                                                                                         // [0x70056b4] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Int
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Int : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Int.UncheckedConvertI32I64
	// int32_t UncheckedConvertI32I64(int64_t RHS);                                                                          // [0x6412de0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.SubtractEquals
	// void SubtractEquals(int64_t& LHS, int64_t RHS);                                                                       // [0x70061fc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Subtract
	// void Subtract(int64_t LHS, int64_t RHS);                                                                              // [0x7005f34] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateNotEqual
	// bool PredicateNotEqual(int64_t LHS, int64_t RHS);                                                                     // [0x645f81c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateLessEqual
	// bool PredicateLessEqual(int64_t LHS, int64_t RHS);                                                                    // [0x644908c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateLess
	// bool PredicateLess(int64_t LHS, int64_t RHS);                                                                         // [0x6449494] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateGreaterEqual
	// bool PredicateGreaterEqual(int64_t LHS, int64_t RHS);                                                                 // [0x643a994] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateGreater
	// bool PredicateGreater(int64_t LHS, int64_t RHS);                                                                      // [0x643ad50] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateEqual
	// bool PredicateEqual(int64_t LHS, int64_t RHS);                                                                        // [0x6427408] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Negate
	// void Negate(int64_t Value);                                                                                           // [0x7004ee8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.MultiplyEquals
	// void MultiplyEquals(int64_t& LHS, int64_t RHS);                                                                       // [0x7004988] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Multiply
	// void Multiply(int64_t LHS, int64_t RHS);                                                                              // [0x70046c4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.LessEqual
	// void LessEqual(int64_t LHS, int64_t RHS);                                                                             // [0x70033bc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Less
	// void Less(int64_t LHS, int64_t RHS);                                                                                  // [0x70030bc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.GreaterEqual
	// void GreaterEqual(int64_t LHS, int64_t RHS);                                                                          // [0x7002060] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Greater
	// void Greater(int64_t LHS, int64_t RHS);                                                                               // [0x7001d64] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Divide
	// void Divide(int64_t LHS, int64_t RHS);                                                                                // [0x7000764] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.CheckConstrainedInt
	// void CheckConstrainedInt(int64_t Min, int64_t Max, int64_t Value);                                                    // [0x6fff4b4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.AddEquals
	// void AddEquals(int64_t& LHS, int64_t RHS);                                                                            // [0x6ffe608] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Add
	// void Add(int64_t LHS, int64_t RHS);                                                                                   // [0x6ffe1e8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.abs
	// void abs(int64_t Value);                                                                                              // [0x6ffdb74] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Rational
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Rational : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Rational.floor
	// void floor(FVerseRational Val);                                                                                       // [0x7000f68] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Rational.ceil
	// void ceil(FVerseRational Val);                                                                                        // [0x6fff128] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Float
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Float : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Float.SubtractEquals
	// double SubtractEquals(double& LHS, double RHS);                                                                       // [0x70060d8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Subtract
	// double Subtract(double LHS, double RHS);                                                                              // [0x7005de4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Negate
	// double Negate(double Value);                                                                                          // [0x7004e20] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyIntFloat
	// double MultiplyIntFloat(int64_t LHS, double RHS);                                                                     // [0x7004cdc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyFloatInt
	// double MultiplyFloatInt(double LHS, int64_t RHS);                                                                     // [0x7004b98] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyEquals
	// double MultiplyEquals(double& LHS, double RHS);                                                                       // [0x7004864] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Multiply
	// double Multiply(double LHS, double RHS);                                                                              // [0x7004574] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.LessEqual
	// void LessEqual(double LHS, double RHS);                                                                               // [0x7003228] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Less
	// void Less(double LHS, double RHS);                                                                                    // [0x7002f2c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.GreaterEqual
	// void GreaterEqual(double LHS, double RHS);                                                                            // [0x7001ed0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Greater
	// void Greater(double LHS, double RHS);                                                                                 // [0x7001bd4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.DivideEquals
	// double DivideEquals(double& LHS, double RHS);                                                                         // [0x7000900] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Divide
	// double Divide(double LHS, double RHS);                                                                                // [0x7000614] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.CheckConstrainedFloat
	// void CheckConstrainedFloat(double Min, double Max, double Value);                                                     // [0x6fff2b4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.AddEquals
	// double AddEquals(double& LHS, double RHS);                                                                            // [0x6ffe4e4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Add
	// double Add(double LHS, double RHS);                                                                                   // [0x6ffe098] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.abs
	// double abs(double Value);                                                                                             // [0x6ffdaac] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_String
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_String : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_String.UncheckedCall
	// void UncheckedCall(int32_t& String, int64_t Index);                                                                   // [0x7006ce8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.RefCall
	// void RefCall(int32_t& String, int64_t Index);                                                                         // [0x700583c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Move
	// void Move(int32_t& Destination, int32_t& Source);                                                                     // [0x7004438] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.MakeLiteral
	// int32_t MakeLiteral();                                                                                                // [0x7003804] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_String.Make
	// void Make();                                                                                                          // [0x7003610] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_String.Length
	// int64_t Length(int32_t& Array);                                                                                       // [0x7002e70] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.ConcatEquals
	// int32_t ConcatEquals(int32_t& LHS, int32_t& RHS);                                                                     // [0x70000fc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Concat
	// int32_t Concat(int32_t& LHS, int32_t& RHS);                                                                           // [0x6ffff98] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Call
	// void Call(int32_t& String, int64_t Index);                                                                            // [0x6ffea1c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Add
	// void Add(int32_t& String, int8_t Character);                                                                          // [0x6ffe38c] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisMathLibrary_Option
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Option : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Option.Query
	// void Query();                                                                                                         // [0x7005790] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Option.Make
	// void Make();                                                                                                          // [0x7003528] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisGameSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class USolarisGameSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,15315) /* TArray<FString> */      __um(Blacklist);                                            // 0x0028   (0x0010)  
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
	// int64_t ReplaceOptionValue(int64_t ResultProperty, int64_t Option, int64_t Value);                                    // [0x7005adc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ReferenceIsValid
	// bool ReferenceIsValid(int64_t Reference);                                                                             // [0x7005a74] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ObjectHasNoFlags
	// bool ObjectHasNoFlags(class UObject* Object, int32_t Flags);                                                          // [0x700524c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.MakeUnsetOption
	// int64_t MakeUnsetOption();                                                                                            // [0x70041c0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.MakeOptionFromValue
	// bool MakeOptionFromValue(class UObject* Property, int64_t Value);                                                     // [0x700391c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.IsOptionSet
	// bool IsOptionSet(int64_t Option);                                                                                     // [0x7002ca8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.IsNonNullObject
	// bool IsNonNullObject(class UObject* Object);                                                                          // [0x7002bf0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.InstantiateObject
	// void InstantiateObject(class UClass* Class, int64_t InstancingGraph);                                                 // [0x70028b4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.InstanceFunction
	// void InstanceFunction(class UObject* Object, FName MethodName);                                                       // [0x7002758] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.HasInterface
	// bool HasInterface(class UObject* Object, class UVerseClass* InterfaceClass);                                          // [0x70021cc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetOptionValue
	// int64_t GetOptionValue(int64_t Option);                                                                               // [0x7001894] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetFunctionForInterfaceMethod
	// void GetFunctionForInterfaceMethod(class UObject* Object, FName MethodName);                                          // [0x7001114] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject
	// class UObject* GetCurrentlyInstantiatedObject();                                                                      // [0x70010f0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.Dereference
	// int64_t Dereference(int64_t Reference);                                                                               // [0x7000520] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.CallFunction
	// void CallFunction();                                                                                                  // [0x6ffeeb8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.CallFinalFunctionWithContext
	// void CallFinalFunctionWithContext();                                                                                  // [0x6ffed78] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.Addressof
	// int64_t Addressof(int64_t Value);                                                                                     // [0x6ffe95c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.AddPropertyToSubobjectExclusionList
	// void AddPropertyToSubobjectExclusionList(int64_t InstancingGraph, int64_t Property);                                  // [0x6ffe818] Final|Native|Static|Public 
};

/// Struct /Script/Solaris.VersePersistentVar
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVersePersistentVar
{ 
	SDK_UNDEFINED(16,15316) /* FString */              __um(Path);                                                 // 0x0000   (0x0010)  
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
	SDK_UNDEFINED(80,15317) /* TSet<UVerseClass*> */   __um(InterfaceClasses);                                     // 0x0218   (0x0050)  
	SDK_UNDEFINED(80,15318) /* TMap<FName, InterfaceMethodFunctionProperties> */ __um(InterfaceMethodFunctionProperties); // 0x0268   (0x0050)  
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
	// void NotEqual(int32_t Left, int32_t Right);                                                                           // [0x7005014] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple
	// void MakeRuntimeTypeTuple(TArray<int32_t> ValueType);                                                                 // [0x7004070] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeStruct
	// void MakeRuntimeTypeStruct(class UStruct* Struct);                                                                    // [0x7003fb0] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString
	// void MakeRuntimeTypeString();                                                                                         // [0x7003f8c] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption
	// void MakeRuntimeTypeOption(int32_t ValueType);                                                                        // [0x7003ecc] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject
	// void MakeRuntimeTypeObject();                                                                                         // [0x7003ea8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap
	// void MakeRuntimeTypeMap(int32_t KeyType, int32_t ValueType);                                                          // [0x7003d68] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic
	// void MakeRuntimeTypeLogic();                                                                                          // [0x7003d44] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64
	// void MakeRuntimeTypeInt64();                                                                                          // [0x7003d20] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction
	// void MakeRuntimeTypeFunction();                                                                                       // [0x7003cfc] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat
	// void MakeRuntimeTypeFloat();                                                                                          // [0x7003cd8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum
	// void MakeRuntimeTypeEnum(FName Name);                                                                                 // [0x7003c18] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic
	// void MakeRuntimeTypeDynamic();                                                                                        // [0x7003bf4] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass
	// void MakeRuntimeTypeClass();                                                                                          // [0x7003bd0] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8
	// void MakeRuntimeTypeChar8();                                                                                          // [0x7003bac] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32
	// void MakeRuntimeTypeChar32();                                                                                         // [0x7003b88] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray
	// void MakeRuntimeTypeArray(int32_t ElementType);                                                                       // [0x7003ac8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.Equal
	// void Equal(int32_t Left, int32_t Right);                                                                              // [0x7000a24] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue
	// void ConvertToDynamicallyTypedValue(int32_t RuntimeType, int32_t Value);                                              // [0x70003d4] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue
	// void ConvertFromDynamicallyTypedValue(int32_t RuntimeType, int32_t Value);                                            // [0x7000294] Final|Native|Static|Public 
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
	SDK_UNDEFINED(16,15319) /* FString */              __um(VersePath);                                            // 0x0000   (0x0010)  
	EVersePackageScope                                 VerseScope;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	SDK_UNDEFINED(16,15320) /* TArray<FString> */      __um(DependencyPackages);                                   // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,15321) /* FString */              __um(VniDestDir);                                           // 0x0030   (0x0010)  
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
	SDK_UNDEFINED(16,15322) /* FString */              __um(Filename);                                             // 0x0000   (0x0010)  
	TArray<FVerseSourceCode>                           CodeChunks;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Solaris.VersePackageContainer
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FVersePackageContainer
{ 
	SDK_UNDEFINED(16,15323) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15324) /* FString */              __um(DirPath);                                              // 0x0010   (0x0010)  
	EVersePackageType                                  PackageType;                                                // 0x0020   (0x0001)  
	bool                                               bEnableVerseAssetReflection;                                // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	FVersePackageContainerSettings                     Settings;                                                   // 0x0028   (0x0040)  
	TArray<FVerseSourceFile>                           SourceFiles;                                                // 0x0068   (0x0010)  
	TArray<char>                                       AssetDigest;                                                // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,15325) /* TArray<FString> */      __um(AssetDependencies);                                    // 0x0088   (0x0010)  
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

