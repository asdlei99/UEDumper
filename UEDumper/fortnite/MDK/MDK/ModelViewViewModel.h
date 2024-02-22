
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/ModelViewViewModel.MVVMConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMVVMConversionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMConversionLibrary.Conv_BoolToSlateVisibility
	// ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // [0x9e82a3c] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelContextResolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UMVVMViewModelContextResolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelContextResolver.K2_DestroyInstance
	// void K2_DestroyInstance(class UObject* ViewModel, class UMVVMView* View);                                                // [0x3d1d968] Event|Public|BlueprintEvent|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelContextResolver.K2_CreateInstance
	// TScriptInterface<Class> K2_CreateInstance(class UClass* ExpectedType, class UUserWidget* UserWidget);                    // [0x3d1d968] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/ModelViewViewModel.MVVMGameSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UMVVMGameSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UMVVMViewModelCollectionObject*)     ViewModelCollection                                         OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMGameSubsystem.GetViewModelCollection
	// class UMVVMViewModelCollectionObject* GetViewModelCollection();                                                          // [0x625fab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UMVVMSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
	// class UMVVMView* K2_GetViewFromUserWidget(class UUserWidget* UserWidget);                                                // [0x9e83ce8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
	// TArray<FMVVMAvailableBinding> K2_GetAvailableBindings(class UClass* Class, class UClass* Accessor);                      // [0x9e8359c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
	// FMVVMAvailableBinding K2_GetAvailableBinding(class UClass* Class, FMVVMBindingName BindingName, class UClass* Accessor); // [0x9e832c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
	// class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection();                                                    // [0x6486500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
	// bool DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget);                            // [0x9e82b3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBase
/// Size: 0x0040 (0x000028 - 0x000068)
class UMVVMViewModelBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
	// bool K2_SetPropertyValue(int32_t& OldValue, int32_t& NewValue);                                                          // [0x9e83fa4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
	// void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                       // [0x9e83d68] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
	// void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);                                                        // [0x9e83188] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
	// void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                          // [0x9e82f4c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelCollectionObject
/// Size: 0x0028 (0x000028 - 0x000050)
class UMVVMViewModelCollectionObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMVVMViewModelCollection)                  ViewModelCollection                                         OFFSET(getStruct<T>, {0x28, 40, 0, 0})


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
	// bool RemoveViewModel(FMVVMViewModelContext Context);                                                                     // [0x9e843d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
	// int32_t RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);                                                 // [0x9e84330] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
	// class UMVVMViewModelBase* FindViewModelInstance(FMVVMViewModelContext Context);                                          // [0x9e82d28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
	// class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(class UClass*& ViewModelClass);                               // [0x9e82c50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
	// bool AddViewModelInstance(FMVVMViewModelContext Context, class UMVVMViewModelBase* ViewModel);                           // [0x9e827c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMInstancedViewModelGeneratedClass
/// Size: 0x0060 (0x000368 - 0x0003C8)
class UMVVMInstancedViewModelGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	CMember(TArray<class UFunction*>)                  OnRepFunctionToLink                                         OFFSET(get<T>, {0x368, 16, 0, 0})
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
/// Size: 0x0000 (0x000368 - 0x000368)
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
};

/// Class /Script/ModelViewViewModel.MVVMBindingSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UMVVMBindingSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/ModelViewViewModel.MVVMView
/// Size: 0x0050 (0x000028 - 0x000078)
class UMVVMView : public UUserWidgetExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UMVVMViewClass*)                     ClassExtension                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FMVVMViewSource>)                   Sources                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bLogBinding                                                 OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bConstructed                                                OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(bool)                                      bSourcesInitialized                                         OFFSET(get<bool>, {0x72, 1, 0, 0})
	DMember(bool)                                      bBindingsInitialized                                        OFFSET(get<bool>, {0x73, 1, 0, 0})
	DMember(bool)                                      bHasEveryTickBinding                                        OFFSET(get<bool>, {0x74, 1, 0, 0})


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeSources
	// void UninitializeSources();                                                                                              // [0x9e846ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeBindings
	// void UninitializeBindings();                                                                                             // [0x9e8468c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModelByClass
	// bool SetViewModelByClass(TScriptInterface<Class> NewValue);                                                              // [0x9e8452c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModel
	// bool SetViewModel(FName ViewModelName, TScriptInterface<Class> ViewModel);                                               // [0x253e070] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeSources
	// void InitializeSources();                                                                                                // [0x9e82f38] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeBindings
	// void InitializeBindings();                                                                                               // [0x9e82f24] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.GetViewModel
	// TScriptInterface<Class> GetViewModel(FName ViewModelName);                                                               // [0x9e82e88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreSourcesInitialized
	// bool AreSourcesInitialized();                                                                                            // [0x9e82a28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreBindingsInitialized
	// bool AreBindingsInitialized();                                                                                           // [0x9e82a14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMViewClass
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FMVVMViewClass_SourceCreator>)      SourceCreators                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FMVVMViewClass_CompiledBinding>)    CompiledBindings                                            OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FMVVMViewClass_CompiledEvent>)      CompiledEvents                                              OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FMVVMCompiledBindingLibrary)               BindingLibrary                                              OFFSET(getStruct<T>, {0x58, 96, 0, 0})
	DMember(bool)                                      bInitializeSourcesOnConstruct                               OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(bool)                                      bInitializeBindingsOnConstruct                              OFFSET(get<bool>, {0xBD, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMAvailableBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FMVVMAvailableBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FMVVMBindingName)                          BindingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsReadable                                                 OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bIsWritable                                                 OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bHasNotify                                                  OFFSET(get<bool>, {0x6, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMBindingName
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMBindingName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     BindingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMEventField
/// Size: 0x0001 (0x000000 - 0x000001)
class FMVVMEventField : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContextInstance
/// Size: 0x0018 (0x000000 - 0x000018)
class FMVVMViewModelContextInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMVVMViewModelContext)                     Context                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UMVVMViewModelBase*)                 Instance                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContext
/// Size: 0x0010 (0x000000 - 0x000010)
class FMVVMViewModelContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             ContextClass                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ContextName                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFields
/// Size: 0x0010 (0x000000 - 0x000010)
class FMVVMVCompiledFields : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UStruct*)                            ClassOrScriptStruct                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int16_t)                                   LibraryStartIndex                                           OFFSET(get<int16_t>, {0x8, 2, 0, 0})
	DMember(int16_t)                                   NumberOfProperties                                          OFFSET(get<int16_t>, {0xA, 2, 0, 0})
	DMember(int16_t)                                   NumberOfFunctions                                           OFFSET(get<int16_t>, {0xC, 2, 0, 0})
	DMember(int16_t)                                   NumberOfFieldIds                                            OFFSET(get<int16_t>, {0xE, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldPath
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMVCompiledFieldPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   StartIndex                                                  OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Num                                                         OFFSET(get<int16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldId
/// Size: 0x0002 (0x000000 - 0x000002)
class FMVVMVCompiledFieldId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(int16_t)                                   FieldIdIndex                                                OFFSET(get<int16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMCompiledLoadedPropertyOrFunctionIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   Index                                                       OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(bool)                                      bIsObjectProperty                                           OFFSET(get<bool>, {0x2, 1, 1, 0})
	DMember(bool)                                      bIsScriptStructProperty                                     OFFSET(get<bool>, {0x2, 1, 1, 1})
	DMember(bool)                                      bIsProperty                                                 OFFSET(get<bool>, {0x2, 1, 1, 2})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledBinding
/// Size: 0x000E (0x000000 - 0x00000E)
class FMVVMVCompiledBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14;

public:
	SMember(FMVVMVCompiledFieldPath)                   SourceFieldPath                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   DestinationFieldPath                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   ConversionFunctionFieldPath                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0xC, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledBindingLibrary
/// Size: 0x0060 (0x000000 - 0x000060)
class FMVVMCompiledBindingLibrary : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FMVVMCompiledLoadedPropertyOrFunctionIndex>) FieldPaths                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FMVVMVCompiledFields>)              CompiledFields                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FName>)                             CompiledFieldNames                                          OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelCollection
/// Size: 0x0028 (0x000000 - 0x000028)
class FMVVMViewModelCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FMVVMViewModelContextInstance>)     ViewModelInstances                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewSource
/// Size: 0x0018 (0x000000 - 0x000018)
class FMVVMViewSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            Source                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RegisteredCount                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bCreatedSource                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bBindingsInitialized                                        OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bSetManually                                                OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bAssignedToUserWidgetProperty                               OFFSET(get<bool>, {0x13, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceCreator
/// Size: 0x0030 (0x000000 - 0x000030)
class FMVVMViewClass_SourceCreator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             ExpectedSourceType                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMVVMViewModelContextResolver*)      Resolver                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FMVVMViewModelContext)                     GlobalViewModelInstance                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   FieldPath                                                   OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     ParentSourceName                                            OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0x2C, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FMVVMViewClass_CompiledBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FMVVMVCompiledFieldId)                     FieldId                                                     OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FName)                                     SourcePropertyName                                          OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMVVMVCompiledBinding)                     Binding                                                     OFFSET(getStruct<T>, {0x8, 14, 0, 0})
	CMember(EMVVMExecutionMode)                        ExecutionMode                                               OFFSET(get<T>, {0x16, 1, 0, 0})
	DMember(int8_t)                                    EvaluateSourceCreatorIndex                                  OFFSET(get<int8_t>, {0x17, 1, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledEvent
/// Size: 0x000C (0x000000 - 0x00000C)
class FMVVMViewClass_CompiledEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMVVMVCompiledFieldPath)                   FieldPath                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     FunctionName                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Enum /Script/ModelViewViewModel.EMVVMExecutionMode
/// Size: 0x05
enum EMVVMExecutionMode : uint8_t
{
	EMVVMExecutionMode__Immediate                                                    = 0,
	EMVVMExecutionMode__Delayed                                                      = 1,
	EMVVMExecutionMode__Tick                                                         = 2,
	EMVVMExecutionMode__DelayedWhenSharedElseImmediate                               = 3,
	EMVVMExecutionMode__EMVVMExecutionMode_MAX                                       = 4
};

/// Enum /Script/ModelViewViewModel.EMVVMBindingMode
/// Size: 0x06
enum EMVVMBindingMode : uint8_t
{
	EMVVMBindingMode__OneTimeToDestination                                           = 0,
	EMVVMBindingMode__OneWayToDestination                                            = 1,
	EMVVMBindingMode__TwoWay                                                         = 2,
	EMVVMBindingMode__OneTimeToSource                                                = 3,
	EMVVMBindingMode__OneWayToSource                                                 = 4,
	EMVVMBindingMode__EMVVMBindingMode_MAX                                           = 5
};

