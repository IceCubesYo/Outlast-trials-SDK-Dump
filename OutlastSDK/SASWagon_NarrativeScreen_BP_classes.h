// BlueprintGeneratedClass SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C
// Size: 0x40c (Inherited: 0x390)
struct ASASWagon_NarrativeScreen_BP_C : ANarrativeScreenBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UStaticMeshComponent* Support-01; // 0x398(0x08)
	struct UStaticMeshComponent* Screen-01; // 0x3a0(0x08)
	struct UStaticMeshComponent* SupportPole-01; // 0x3a8(0x08)
	float Timeline_2_NewTrack_0_D59475BD491BEE89C2937EA223B7F6C9; // 0x3b0(0x04)
	enum class ETimelineDirection Timeline_2__Direction_D59475BD491BEE89C2937EA223B7F6C9; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct UTimelineComponent* Timeline_3; // 0x3b8(0x08)
	float RotateArmTimeline_NewTrack_0_8853498042BADDE8C69CA2BE2747C7CA; // 0x3c0(0x04)
	enum class ETimelineDirection RotateArmTimeline__Direction_8853498042BADDE8C69CA2BE2747C7CA; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	struct UTimelineComponent* RotateArmTimeline; // 0x3c8(0x08)
	bool bDebugScreenDown; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FMulticastInlineDelegate TVDownPosition; // 0x3d8(0x10)
	struct FMulticastInlineDelegate TVUpPosition; // 0x3e8(0x10)
	bool bTelevisionDown; // 0x3f8(0x01)
	bool bShouldBeDown; // 0x3f9(0x01)
	bool bIsPlayingAnim; // 0x3fa(0x01)
	char pad_3FB[0x5]; // 0x3fb(0x05)
	struct ARecessedLight-01_BP_C* LinkedLight; // 0x400(0x08)
	float StartingIntensity; // 0x408(0x04)

	void SetTVDown(bool IsDown); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.SetTVDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void DebugScreenDown(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.DebugScreenDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RotateArmTimeline__FinishedFunc(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.RotateArmTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void RotateArmTimeline__UpdateFunc(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.RotateArmTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void RotateArmTimeline__OpenTV__EventFunc(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.RotateArmTimeline__OpenTV__EventFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_2__FinishedFunc(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_2__UpdateFunc(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void UpdateTVRotation_Internal(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.UpdateTVRotation_Internal // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SASWagon_NarrativeScreen_BP(int32_t EntryPoint); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.ExecuteUbergraph_SASWagon_NarrativeScreen_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void TVUpPosition__DelegateSignature(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.TVUpPosition__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TVDownPosition__DelegateSignature(); // Function SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C.TVDownPosition__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

