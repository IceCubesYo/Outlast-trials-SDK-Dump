// AnimBlueprintGeneratedClass SE_MansionTheatre_Futterman_AnimBP.SE_MansionTheatre_Futterman_AnimBP_C
// Size: 0xab5 (Inherited: 0x2c0)
struct USE_MansionTheatre_Futterman_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2c8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x348(0x80)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3c8(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x3e8(0x158)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x540(0x108)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x648(0xa8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x6f0(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x720(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x740(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x768(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x8c0(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x8e8(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x9a8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x9d0(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x9f8(0xa8)
	bool IsInteracting; // 0xaa0(0x01)
	char pad_AA1[0x3]; // 0xaa1(0x03)
	float DrillRotationRate; // 0xaa4(0x04)
	struct FRotator DrillRotating; // 0xaa8(0x0c)
	bool DrillOn; // 0xab4(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SE_MansionTheatre_Futterman_AnimBP.SE_MansionTheatre_Futterman_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SE_MansionTheatre_Futterman_AnimBP.SE_MansionTheatre_Futterman_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SE_MansionTheatre_Futterman_AnimBP(int32_t EntryPoint); // Function SE_MansionTheatre_Futterman_AnimBP.SE_MansionTheatre_Futterman_AnimBP_C.ExecuteUbergraph_SE_MansionTheatre_Futterman_AnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

