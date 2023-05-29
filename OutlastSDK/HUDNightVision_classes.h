// WidgetBlueprintGeneratedClass HUDNightVision.HUDNightVision_C
// Size: 0x340 (Inherited: 0x2e8)
struct UHUDNightVision_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* BatteryPulse; // 0x2f0(0x08)
	struct UImage* batteryProgress; // 0x2f8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x300(0x08)
	struct UImage* dirt; // 0x308(0x08)
	struct UInvalidationBox* InvalidationBox_HUDNightVision; // 0x310(0x08)
	struct UImage* vignette; // 0x318(0x08)
	bool isNvActive; // 0x320(0x01)
	bool isNVRelatedActiveSkillActive; // 0x321(0x01)
	char pad_322[0x2]; // 0x322(0x02)
	float progressPadding; // 0x324(0x04)
	float Max Battery; // 0x328(0x04)
	float BarCount; // 0x32c(0x04)
	float lowBatteryValue; // 0x330(0x04)
	bool IsBatteryLow; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UMaterialInstanceDynamic* NVBatteryMat; // 0x338(0x08)

	void UpdateRatio(float batteryValue); // Function HUDNightVision.HUDNightVision_C.UpdateRatio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsNVActive(bool isNvActive); // Function HUDNightVision.HUDNightVision_C.SetIsNVActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function HUDNightVision.HUDNightVision_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void Event_Show(); // Function HUDNightVision.HUDNightVision_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function HUDNightVision.HUDNightVision_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function HUDNightVision.HUDNightVision_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnWatchedPlayerChanged(struct ARBPlayer* oldPlayer, struct ARBPlayer* NewPlayer); // Function HUDNightVision.HUDNightVision_C.Event_OnWatchedPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnNVChanged(bool bOn); // Function HUDNightVision.HUDNightVision_C.OnNVChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnActiveSkillChanged(struct ARBActiveSkill* activeSkillActor); // Function HUDNightVision.HUDNightVision_C.OnActiveSkillChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnActiveSkillActivated(struct ARBActiveSkill* ActiveSkill, bool bIsActive); // Function HUDNightVision.HUDNightVision_C.OnActiveSkillActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BindPlayerEvents(struct ARBPlayer* Player); // Function HUDNightVision.HUDNightVision_C.BindPlayerEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UnbindPlayerEvents(struct ARBPlayer* Player); // Function HUDNightVision.HUDNightVision_C.UnbindPlayerEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnMaxNVBatteryChangedDelegate_Event_1(float maxBattery); // Function HUDNightVision.HUDNightVision_C.OnMaxNVBatteryChangedDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnBatteryLevelChanged(float batteryLevel); // Function HUDNightVision.HUDNightVision_C.OnBatteryLevelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CustomEvent_1(); // Function HUDNightVision.HUDNightVision_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_HUDNightVision(int32_t EntryPoint); // Function HUDNightVision.HUDNightVision_C.ExecuteUbergraph_HUDNightVision // (Final|UbergraphFunction) // @ game+0x201e6d4
};

