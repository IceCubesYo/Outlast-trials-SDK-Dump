// BlueprintGeneratedClass BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C
// Size: 0xb80 (Inherited: 0xb60)
struct ABaseAmp_SkillItem_BP_C : ARBThrowableSkillItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb60(0x08)
	float Timeline_0_NewTrack_0_F0B2D7A8458F7672C5EB9CA539B6C3B4; // 0xb68(0x04)
	enum class ETimelineDirection Timeline_0__Direction_F0B2D7A8458F7672C5EB9CA539B6C3B4; // 0xb6c(0x01)
	char pad_B6D[0x3]; // 0xb6d(0x03)
	struct UTimelineComponent* Timeline_1; // 0xb70(0x08)
	struct UMaterialInstance* PostProcess; // 0xb78(0x08)

	void RefreshCooldown(struct ARBActiveSkill* ActiveSkill); // Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.RefreshCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__FinishedFunc(); // Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__UpdateFunc(); // Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnActivate(); // Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Event_OnActivate // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDeployed(); // Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Event_OnDeployed // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PlayerAssigned(struct ARBPawn* Pawn, struct ARBPickup* Item); // Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.PlayerAssigned // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void CooldownChanged(struct ARBActiveSkill* ActiveSkill, bool bIsInCooldown); // Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.CooldownChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BaseAmp_SkillItem_BP(int32_t EntryPoint); // Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.ExecuteUbergraph_BaseAmp_SkillItem_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

