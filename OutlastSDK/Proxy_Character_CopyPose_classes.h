// AnimBlueprintGeneratedClass Proxy_Character_CopyPose.Proxy_Character_CopyPose_C
// Size: 0x4d0 (Inherited: 0x2c0)
struct UProxy_Character_CopyPose_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Proxy_Character_CopyPose.Proxy_Character_CopyPose_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Proxy_Character_CopyPose(int32_t EntryPoint); // Function Proxy_Character_CopyPose.Proxy_Character_CopyPose_C.ExecuteUbergraph_Proxy_Character_CopyPose // (Final|UbergraphFunction) // @ game+0x201e6d4
};

