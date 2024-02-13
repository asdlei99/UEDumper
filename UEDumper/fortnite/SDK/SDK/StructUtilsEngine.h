
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/StructUtilsEngine.EStructUtilsResult
/// Size: 0x03
enum class EStructUtilsResult : uint8_t
{
	EStructUtilsResult__Valid                                                        = 0,
	EStructUtilsResult__NotValid                                                     = 1,
	EStructUtilsResult__EStructUtilsResult_MAX                                       = 2
};

/// Class /Script/StructUtilsEngine.StructUtilsFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue
	// void SetInstancedStructValue(FInstancedStruct& InstancedStruct, int32_t& Value);                                      // [0x6c1b1a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.Reset
	// void Reset(FInstancedStruct& InstancedStruct, class UScriptStruct* StructType);                                       // [0x6c1afa8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
	// bool NotEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                              // [0x6c1ae9c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct
	// FInstancedStruct MakeInstancedStruct(int32_t& Value);                                                                 // [0x6c1ad50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct
	// bool IsValid_InstancedStruct(FInstancedStruct& InstancedStruct);                                                      // [0x6c1acac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid
	// EStructUtilsResult IsInstancedStructValid(FInstancedStruct& InstancedStruct);                                         // [0x6c1ac08] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue
	// void GetInstancedStructValue(EStructUtilsResult& ExecResult, FInstancedStruct& InstancedStruct, int32_t& Value);      // [0x6c1a968] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
	// bool EqualEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                            // [0x6c1a860] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

