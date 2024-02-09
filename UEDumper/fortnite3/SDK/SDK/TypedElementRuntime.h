
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/TypedElementRuntime.ETypedElementChildInclusionMethod
/// Size: 0x04
enum class ETypedElementChildInclusionMethod : uint8_t
{
	ETypedElementChildInclusionMethod__None                                          = 0,
	ETypedElementChildInclusionMethod__Immediate                                     = 1,
	ETypedElementChildInclusionMethod__Recursive                                     = 2,
	ETypedElementChildInclusionMethod__ETypedElementChildInclusionMethod_MAX         = 3
};

/// Enum /Script/TypedElementRuntime.ETypedElementSelectionMethod
/// Size: 0x03
enum class ETypedElementSelectionMethod : uint8_t
{
	ETypedElementSelectionMethod__Primary                                            = 0,
	ETypedElementSelectionMethod__Secondary                                          = 1,
	ETypedElementSelectionMethod__ETypedElementSelectionMethod_MAX                   = 2
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionSetLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementSelectionSetLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
	// bool SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // [0x586fe30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
	// bool SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // [0x586f3f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
	// FScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, FTypedElementSelectionNormalizationOptions NormalizationOptions); // [0x586d9f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
	// FScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionNormalizationOptions NormalizationOptions); // [0x586d778] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
	// bool DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // [0x586d010] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionSet
/// Size: 0x0870 (0x000028 - 0x000898)
class UTypedElementSelectionSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x828];                                     // 0x0000   (0x0828)  MISSED
	SDK_UNDEFINED(16,66) /* FMulticastInlineDelegate */ __um(OnPreSelectionChange);                                // 0x0828   (0x0010)  
	SDK_UNDEFINED(16,67) /* FMulticastInlineDelegate */ __um(OnSelectionChange);                                   // 0x0838   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0848   (0x0050)  MISSED


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SetSelection
	// bool SetSelection(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x586fc60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElements
	// bool SelectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x586f228] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElement
	// bool SelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);     // [0x586f048] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
	// void RestoreSelectionState(FTypedElementSelectionSetState& InSelectionState);                                         // [0x586ed1c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
	// void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);                            // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
	// void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);                               // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
	// TArray<FScriptTypedElementHandle> K2_GetSelectedElementHandles(class UClass* InBaseInterfaceType);                    // [0x586ec20] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
	// bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FTypedElementIsSelectedOptions InSelectionOptions); // [0x586ea64] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
	// bool HasSelectedObjects(class UClass* InRequiredClass);                                                               // [0x586e720] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
	// bool HasSelectedElements(class UClass* InBaseInterfaceType);                                                          // [0x586e5d4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
	// class UObject* GetTopSelectedObject(class UClass* InRequiredClass);                                                   // [0x586e4c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
	// FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, ETypedElementSelectionMethod InSelectionMethod); // [0x586e308] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
	// TArray<UObject*> GetSelectedObjects(class UClass* InRequiredClass);                                                   // [0x586de90] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
	// int32_t GetNumSelectedElements();                                                                                     // [0x586db48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
	// FTypedElementSelectionSetState GetCurrentSelectionState();                                                            // [0x586d73c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
	// class UObject* GetBottomSelectedObject(class UClass* InRequiredClass);                                                // [0x586d424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElements
	// bool DeselectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x586ce40] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElement
	// bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);   // [0x586cc60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
	// int32_t CountSelectedObjects(class UClass* InRequiredClass);                                                          // [0x586c900] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
	// int32_t CountSelectedElements(class UClass* InBaseInterfaceType);                                                     // [0x586c818] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.ClearSelection
	// bool ClearSelection(FTypedElementSelectionOptions InSelectionOptions);                                                // [0x586c724] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
	// bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);  // [0x586c544] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
	// bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions); // [0x586c248] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
	// bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle);                                             // [0x586c03c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementRuntime.TypedElementAssetDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementAssetDataInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
	// FAssetData GetAssetData(FScriptTypedElementHandle& InElementHandle);                                                  // [0x586d358] RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
	// TArray<FAssetData> GetAllReferencedAssetDatas(FScriptTypedElementHandle& InElementHandle);                            // [0x586d28c] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementHierarchyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementHierarchyInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
	// FScriptTypedElementHandle GetParentElement(FScriptTypedElementHandle& InElementHandle, bool bAllowCreate);            // [0x586dccc] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
	// void GetChildElements(FScriptTypedElementHandle& InElementHandle, TArray<FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate); // [0x586d530] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementObjectInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementObjectInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
	// class UClass* GetObjectClass(FScriptTypedElementHandle& InElementHandle);                                             // [0x586dc18] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementObjectInterface.GetObject
	// class UObject* GetObject(FScriptTypedElementHandle& InElementHandle);                                                 // [0x586db64] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementPrimitiveCustomDataInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomDataValue
	// void SetCustomDataValue(FScriptTypedElementHandle& InElementHandle, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // [0x586f8c0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomData
	// void SetCustomData(FScriptTypedElementHandle& InElementHandle, TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty); // [0x586f674] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementSelectionInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.SelectElement
	// bool SelectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // [0x586edb8] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
	// bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementIsSelectedOptions& InSelectionOptions); // [0x586e7f0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
	// FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InCurrentSelection, ETypedElementSelectionMethod InSelectionMethod); // [0x586dfb8] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
	// bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // [0x586c9d0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
	// bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions); // [0x586c428] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
	// bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions); // [0x586c12c] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
	// bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet); // [0x586bde0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionOptions
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTypedElementSelectionOptions
{ 
	bool                                               bAllowHidden;                                               // 0x0000   (0x0001)  
	bool                                               bAllowGroups;                                               // 0x0001   (0x0001)  
	bool                                               bAllowLegacyNotifications;                                  // 0x0002   (0x0001)  
	bool                                               bWarnIfLocked;                                              // 0x0003   (0x0001)  
	bool                                               bAllowSubRootSelection;                                     // 0x0004   (0x0001)  
	ETypedElementChildInclusionMethod                  ChildElementInclusionMethod;                                // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FName                                              TEDSIntegrationSelectionSetName;                            // 0x0008   (0x0004)  
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionSetState
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTypedElementSelectionSetState
{ 
	SDK_UNDEFINED(8,68) /* TWeakObjectPtr<UTypedElementSelectionSet*> */ __um(CreatedFromSelectionSet);            // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/TypedElementRuntime.TypedElementIsSelectedOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTypedElementIsSelectedOptions
{ 
	bool                                               bAllowIndirect;                                             // 0x0000   (0x0001)  
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionNormalizationOptions
/// Size: 0x0002 (0x000000 - 0x000002)
struct FTypedElementSelectionNormalizationOptions
{ 
	bool                                               bExpandGroups;                                              // 0x0000   (0x0001)  
	bool                                               bFollowAttachment;                                          // 0x0001   (0x0001)  
};

