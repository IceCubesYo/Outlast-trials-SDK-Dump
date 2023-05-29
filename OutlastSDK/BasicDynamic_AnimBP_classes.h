// AnimBlueprintGeneratedClass BasicDynamic_AnimBP.BasicDynamic_AnimBP_C
// Size: 0xae0 (Inherited: 0x2c0)
struct UBasicDynamic_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_6; // 0x410(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x528(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x548(0x20)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_5; // 0x568(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4; // 0x680(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3; // 0x798(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0x8b0(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x9c8(0x118)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function BasicDynamic_AnimBP.BasicDynamic_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BasicDynamic_AnimBP(int32_t EntryPoint); // Function BasicDynamic_AnimBP.BasicDynamic_AnimBP_C.ExecuteUbergraph_BasicDynamic_AnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

