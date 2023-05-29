// BlueprintGeneratedClass BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C
// Size: 0xae8 (Inherited: 0xae0)
struct ABlindFogger_SkillItem_BP_C : ABaseFogger_SkillItem_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xae0(0x08)

	void SpawnAndExplodeBomb_Server(struct AActor*& BombActor); // Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Server // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SpawnAndExplodeBomb_Client(struct AActor*& BombActor); // Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Client // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDeployed(); // Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_OnDeployed // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnActivate(); // Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_OnActivate // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_AudioDistractionTriggered(); // Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_AudioDistractionTriggered // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BlindFogger_SkillItem_BP(int32_t EntryPoint); // Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.ExecuteUbergraph_BlindFogger_SkillItem_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

