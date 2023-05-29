// WidgetBlueprintGeneratedClass ActiveEffectsHudWidget.ActiveEffectsHudWidget_C
// Size: 0x310 (Inherited: 0x2e8)
struct UActiveEffectsHudWidget_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UActiveEffectEntryWidget_C* ActiveEffectEntryWidget; // 0x2f0(0x08)
	struct UActiveEffectEntryWidget_C* ActiveEffectEntryWidget_30; // 0x2f8(0x08)
	struct UVerticalBox* EffectList; // 0x300(0x08)
	struct ARBPlayer* CurrentPlayer; // 0x308(0x08)

	void Refresh(struct TArray<struct FActiveEffectTrackingData>& activeEffectTrackingDataEntries); // Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.Refresh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RemoveActiveEffect(struct FName& EffectId); // Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.RemoveActiveEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateActiveEffect(struct FActiveEffectTrackingData& activeEffectTrackingDataEntry); // Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.UpdateActiveEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddActiveEffect(struct FActiveEffectTrackingData& activeEffectTrackingDataEntry); // Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.AddActiveEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnWatchedPlayerChanged(struct ARBPlayer* oldPlayer, struct ARBPlayer* NewPlayer); // Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.Event_OnWatchedPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ActiveEffectsHudWidget(int32_t EntryPoint); // Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.ExecuteUbergraph_ActiveEffectsHudWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
};

