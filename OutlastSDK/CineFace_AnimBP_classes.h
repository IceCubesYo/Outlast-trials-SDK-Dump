// AnimBlueprintGeneratedClass CineFace_AnimBP.CineFace_AnimBP_C
// Size: 0x878 (Inherited: 0x2c0)
struct UCineFace_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8(0x48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x340(0xc8)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x408(0x1d8)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x5e0(0x18)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x5f8(0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x6b8(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x810(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x838(0x28)
	struct UPoseAsset* PoseAsset; // 0x860(0x08)
	struct USkeletalMeshComponent* Source Mesh Component; // 0x868(0x08)
	struct UAnimSequence* LipSyncAnim; // 0x870(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function CineFace_AnimBP.CineFace_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CineFace_AnimBP(int32_t EntryPoint); // Function CineFace_AnimBP.CineFace_AnimBP_C.ExecuteUbergraph_CineFace_AnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

