// Class MagicLeapARPin.MagicLeapARPinComponent
// Size: 0x3d0 (Inherited: 0x220)
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; // 0x218(0x10)
	int32_t UserIndex; // 0x228(0x04)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x22c(0x01)
	bool bShouldPinActor; // 0x22d(0x01)
	struct UMagicLeapARPinSaveGame* PinDataClass; // 0x230(0x08)
	struct TSet<enum class EMagicLeapARPinType> SearchPinTypes; // 0x238(0x50)
	struct USphereComponent* SearchVolume; // 0x288(0x08)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x290(0x10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnPinDataLoadAttemptCompleted; // 0x2b0(0x10)
	struct FGuid PinnedCFUID; // 0x2c0(0x10)
	struct USceneComponent* PinnedSceneComponent; // 0x2d0(0x08)
	struct UMagicLeapARPinSaveGame* PinData; // 0x2d8(0x08)
	char pad_2E6[0xea]; // 0x2e6(0xea)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin // (Final|Native|Public|BlueprintCallable) // @ game+0x17b7074
	struct UMagicLeapARPinSaveGame* TryGetPinData(struct UMagicLeapARPinSaveGame* InPinDataClass, bool& OutPinDataValid); // Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17b6e70
	bool PinToRestoredOrSyncedID(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID // (Final|Native|Public|BlueprintCallable) // @ game+0x17b6b48
	bool PinToID(struct FGuid& PinId); // Function MagicLeapARPin.MagicLeapARPinComponent.PinToID // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17b6ab0
	void PinToBestFit(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit // (Final|Native|Public|BlueprintCallable) // @ game+0x17b6a8c
	bool PinSceneComponent(struct USceneComponent* ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x17b69a8
	bool PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17b6990
	bool PinActor(struct AActor* ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor // (Final|Native|Public|BlueprintCallable) // @ game+0x17b68b8
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	bool IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17b676c
	bool GetPinState(struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x17b6620
	bool GetPinnedPinID(struct FGuid& PinId); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x17b66c8
	struct UMagicLeapARPinSaveGame* GetPinData(struct UMagicLeapARPinSaveGame* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData // (Final|Native|Public|BlueprintCallable) // @ game+0x17b6544
	void AttemptPinDataRestorationAsync(); // Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x17b5b90
	bool AttemptPinDataRestoration(); // Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration // (Final|Native|Public|BlueprintCallable) // @ game+0x17b5b6c
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	void UnBindToOnMagicLeapContentBindingFoundDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b6fd4
	void UnBindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b6f38
	enum class EMagicLeapPassableWorldError SetGlobalQueryFilter(struct FMagicLeapARPinQuery& InGlobalFilter); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b6d18
	void SetContentBindingSaveGameUserIndex(int32_t UserIndex); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b6ca8
	enum class EMagicLeapPassableWorldError QueryARPins(struct FMagicLeapARPinQuery& Query, struct TArray<struct FGuid>& Pins); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b6b6c
	bool ParseStringToARPinId(struct FString PinIdString, struct FGuid& ARPinId); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x17b67d8
	bool IsTrackerValid(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x17b6798
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t& Count); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b64c0
	enum class EMagicLeapPassableWorldError GetGlobalQueryFilter(struct FMagicLeapARPinQuery& CurrentGlobalFilter); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17b63e0
	int32_t GetContentBindingSaveGameUserIndex(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x17b63a4
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector& SearchPoint, struct FGuid& PinId); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17b62c4
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, struct TArray<struct FGuid>& Pins); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b61a4
	struct FString GetARPinStateToString(struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17b60fc
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid& PinId, struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17b6010
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid& PinId, struct FVector& Position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17b5e9c
	bool GetARPinPositionAndOrientation(struct FGuid& PinId, struct FVector& Position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17b5d28
	enum class EMagicLeapPassableWorldError DestroyTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b5cf0
	enum class EMagicLeapPassableWorldError CreateTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b5ccc
	void BindToOnMagicLeapContentBindingFoundDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b5c38
	void BindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b5ba4
	struct FString ARPinIdToString(struct FGuid& ARPinId); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x17b5acc
};

// Class MagicLeapARPin.MagicLeapARPinInfoActorBase
// Size: 0x260 (Inherited: 0x248)
struct AMagicLeapARPinInfoActorBase : AActor {
	struct FGuid PinId; // 0x248(0x10)
	bool bVisibilityOverride; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)

	void OnUpdateARPinState(); // Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

// Class MagicLeapARPin.MagicLeapARPinRenderer
// Size: 0x2b0 (Inherited: 0x248)
struct AMagicLeapARPinRenderer : AActor {
	bool bInfoActorsVisibilityOverride; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct TMap<struct FGuid, struct AMagicLeapARPinInfoActorBase*> AllInfoActors; // 0x250(0x50)
	char pad_2A0[0x8]; // 0x2a0(0x08)
	struct AMagicLeapARPinInfoActorBase* ClassToSpawn; // 0x2a8(0x08)

	void SetVisibilityOverride(bool InVisibilityOverride); // Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride // (Final|Native|Private|BlueprintCallable) // @ game+0x17b6df0
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size: 0x40 (Inherited: 0x28)
struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28(0x04)
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c(0x14)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size: 0xb0 (Inherited: 0x28)
struct UMagicLeapARPinSaveGame : USaveGame {
	struct FGuid PinnedID; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform ComponentWorldTransform; // 0x40(0x30)
	struct FTransform PinTransform; // 0x70(0x30)
	bool bShouldPinActor; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// Class MagicLeapARPin.MagicLeapARPinContentBindings
// Size: 0x78 (Inherited: 0x28)
struct UMagicLeapARPinContentBindings : USaveGame {
	struct TMap<struct FGuid, struct FMagicLeapARPinObjectIdList> AllContentBindings; // 0x28(0x50)
};

