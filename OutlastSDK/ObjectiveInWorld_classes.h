// WidgetBlueprintGeneratedClass ObjectiveInWorld.ObjectiveInWorld_C
// Size: 0x3bc (Inherited: 0x358)
struct UObjectiveInWorld_C : URBHUDObjectiveInWorld {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct USizeBox* IconSize; // 0x360(0x08)
	struct UInvalidationBox* InvalidationBox_ObjectiveInWorld; // 0x368(0x08)
	struct UImage* ObjectiveIcon; // 0x370(0x08)
	struct UImage* PingIcon; // 0x378(0x08)
	struct UImage* RippleImage; // 0x380(0x08)
	struct USizeBox* RippleSize; // 0x388(0x08)
	struct UMaterialInstanceDynamic* ObjectiveMaterial; // 0x390(0x08)
	float FarScalePercentage; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct UMaterialInstanceDynamic* RippleMaterial; // 0x3a0(0x08)
	float RippleSizeMultiplier; // 0x3a8(0x04)
	float TargetOpacity; // 0x3ac(0x04)
	struct URBObjectiveActorComponent* ObjectiveComponent; // 0x3b0(0x08)
	float TargetScale; // 0x3b8(0x04)

	bool ShouldShow(); // Function ObjectiveInWorld.ObjectiveInWorld_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void ProcessOpacity(float Distance, float& TargetOpacity); // Function ObjectiveInWorld.ObjectiveInWorld_C.ProcessOpacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void UpdateIconImage(); // Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateIconImage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupRipple(); // Function ObjectiveInWorld.ObjectiveInWorld_C.SetupRipple // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateRippleDisplay(bool A); // Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateRippleDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDisplay(); // Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateIcon(); // Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDistanceEffects(); // Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateDistanceEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDistance(); // Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ObjectiveInWorld.ObjectiveInWorld_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ObjectiveInWorld.ObjectiveInWorld_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function ObjectiveInWorld.ObjectiveInWorld_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function ObjectiveInWorld.ObjectiveInWorld_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnWatchedPlayerChanged(struct ARBPlayer* oldPlayer, struct ARBPlayer* NewPlayer); // Function ObjectiveInWorld.ObjectiveInWorld_C.Event_OnWatchedPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnCompletingObjectiveChanged(bool isCompletingObjective); // Function ObjectiveInWorld.ObjectiveInWorld_C.OnCompletingObjectiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ObjectiveInWorld(int32_t EntryPoint); // Function ObjectiveInWorld.ObjectiveInWorld_C.ExecuteUbergraph_ObjectiveInWorld // (Final|UbergraphFunction) // @ game+0x201e6d4
};

