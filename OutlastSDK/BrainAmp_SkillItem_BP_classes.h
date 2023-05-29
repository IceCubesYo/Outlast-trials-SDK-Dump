// BlueprintGeneratedClass BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C
// Size: 0xb90 (Inherited: 0xb80)
struct ABrainAmp_SkillItem_BP_C : ABaseAmp_SkillItem_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb80(0x08)
	struct UParticleSystemComponent* Ptc_AmpExplo; // 0xb88(0x08)

	void Event_OnActivate(); // Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.Event_OnActivate // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDeployed(); // Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.Event_OnDeployed // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BrainAmp_SkillItem_BP(int32_t EntryPoint); // Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.ExecuteUbergraph_BrainAmp_SkillItem_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

