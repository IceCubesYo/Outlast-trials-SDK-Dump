// AnimBlueprintGeneratedClass Default_NightVision_AnimBP.Default_NightVision_AnimBP_C
// Size: 0x358 (Inherited: 0x2c0)
struct UDefault_NightVision_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2f8(0x50)
	struct ARBPlayer_BP_C* Player; // 0x348(0x08)
	float NightVisionActive; // 0x350(0x04)
	float InterpolationSpeed; // 0x354(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Default_NightVision_AnimBP.Default_NightVision_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Default_NightVision_AnimBP.Default_NightVision_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintBeginPlay(); // Function Default_NightVision_AnimBP.Default_NightVision_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Default_NightVision_AnimBP(int32_t EntryPoint); // Function Default_NightVision_AnimBP.Default_NightVision_AnimBP_C.ExecuteUbergraph_Default_NightVision_AnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

