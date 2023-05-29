// AnimBlueprintGeneratedClass NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C
// Size: 0x60a (Inherited: 0x2c0)
struct UNightVision_Goggle_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x348(0x50)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x398(0x50)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3e8(0xa8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x490(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x4c0(0x50)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x510(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x540(0xb0)
	struct ARBPlayer_BP_C* Player; // 0x5f0(0x08)
	float NVAnimTime; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)
	struct UAnimSequenceBase* AnimSequence; // 0x600(0x08)
	bool bMoving; // 0x608(0x01)
	bool bIsDown; // 0x609(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CachePlayer(); // Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.CachePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintBeginPlay(); // Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NightVision_Goggle_AnimBP(int32_t EntryPoint); // Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.ExecuteUbergraph_NightVision_Goggle_AnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

