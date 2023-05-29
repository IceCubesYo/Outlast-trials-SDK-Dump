// BlueprintGeneratedClass OrientedDecalActor.OrientedDecalActor_C
// Size: 0x270 (Inherited: 0x258)
struct AOrientedDecalActor_C : ADecalActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UMaterialInterface* OrientedDecalMaterial; // 0x260(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x268(0x08)

	bool GetStateName(struct FString& stateA, struct FString& stateB); // Function OrientedDecalActor.OrientedDecalActor_C.GetStateName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool IsStateA(); // Function OrientedDecalActor.OrientedDecalActor_C.IsStateA // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	bool ShouldBeIgnoredForLots(); // Function OrientedDecalActor.OrientedDecalActor_C.ShouldBeIgnoredForLots // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void CreateDynamicOrientedMaterial(); // Function OrientedDecalActor.OrientedDecalActor_C.CreateDynamicOrientedMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function OrientedDecalActor.OrientedDecalActor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PrepareState(bool bStateA, struct AActor* randomOwner); // Function OrientedDecalActor.OrientedDecalActor_C.PrepareState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetShouldBeIgnoredForLots(bool bValue); // Function OrientedDecalActor.OrientedDecalActor_C.SetShouldBeIgnoredForLots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetState(bool bStateA); // Function OrientedDecalActor.OrientedDecalActor_C.SetState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function OrientedDecalActor.OrientedDecalActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_OrientedDecalActor(int32_t EntryPoint); // Function OrientedDecalActor.OrientedDecalActor_C.ExecuteUbergraph_OrientedDecalActor // (Final|UbergraphFunction) // @ game+0x201e6d4
};

