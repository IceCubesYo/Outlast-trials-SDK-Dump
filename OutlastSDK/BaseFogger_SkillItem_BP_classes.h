// BlueprintGeneratedClass BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C
// Size: 0xae0 (Inherited: 0xa90)
struct ABaseFogger_SkillItem_BP_C : ARBDeployableSkillItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa90(0x08)
	struct UPointLightComponent* Light_Marker; // 0xa98(0x08)
	struct UNiagaraComponent* Ngr_Marker; // 0xaa0(0x08)
	struct URBSoundComponent* SoundComponent; // 0xaa8(0x08)
	struct FLinearColor PaintColor; // 0xab0(0x10)
	struct FLinearColor MineLightColor; // 0xac0(0x10)
	struct TArray<struct AActor*> SpawnedActors; // 0xad0(0x10)

	void SpawnAndExplodeBomb_Server(struct AActor*& BombActor); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Server // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Activate Light(struct FLinearColor Color, bool On); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Activate Light // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SpawnAndExplodeBomb_Client(struct AActor*& BombActor); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Client // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnActivate(); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnActivate // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnExpiredUnactivated(); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnExpiredUnactivated // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDeployed(); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnDeployed // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPlaced(); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnPlaced // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_EffectFinished(); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_EffectFinished // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void DestroySpawnedActors(); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.DestroySpawnedActors // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BaseFogger_SkillItem_BP(int32_t EntryPoint); // Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.ExecuteUbergraph_BaseFogger_SkillItem_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

