// BlueprintGeneratedClass Futterman_Drill.Futterman_Drill_C
// Size: 0x31 (Inherited: 0x30)
struct UFutterman_Drill_C : UAnimNotifyState {
	bool DrillManual; // 0x30(0x01)

	struct FString GetNotifyName(); // Function Futterman_Drill.Futterman_Drill_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x201e6d4
	void TryToSetFuttermanDrillVariable(struct USkeletalMeshComponent* Mesh Comp, bool Drill Value, bool DrillManual, bool& Result); // Function Futterman_Drill.Futterman_Drill_C.TryToSetFuttermanDrillVariable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x201e6d4
	bool Received_NotifyEnd(struct USkeletalMeshComponent* meshComp, struct UAnimSequenceBase* Animation, float AnimDeltaTime); // Function Futterman_Drill.Futterman_Drill_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x201e6d4
	bool Received_NotifyBegin(struct USkeletalMeshComponent* meshComp, struct UAnimSequenceBase* Animation, float AnimDeltaTime, float TotalDuration); // Function Futterman_Drill.Futterman_Drill_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x201e6d4
};

