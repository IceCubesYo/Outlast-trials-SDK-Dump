// WidgetBlueprintGeneratedClass GroupStatusEntryWidget.GroupStatusEntryWidget_C
// Size: 0x544 (Inherited: 0x2b8)
struct UGroupStatusEntryWidget_C : URBGroupStatusEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UScaleBox* BackgroundScale; // 0x2c0(0x08)
	struct UImage* ClassIcon; // 0x2c8(0x08)
	struct USizeBox* ClassIconSizeBox; // 0x2d0(0x08)
	struct USizeBox* HealthContainer; // 0x2d8(0x08)
	struct UMateHealthBar_C* MateHealthBar; // 0x2e0(0x08)
	struct UHorizontalBox* ObjectiveItemsBox; // 0x2e8(0x08)
	struct UImage* PartyLeaderIcon; // 0x2f0(0x08)
	struct UTextBlock* PlayerName; // 0x2f8(0x08)
	struct UImage* SpeakerIcon; // 0x300(0x08)
	struct UImage* StatusIcon; // 0x308(0x08)
	struct USizeBox* StatusSize; // 0x310(0x08)
	struct FSlateBrush SpeakingBrush; // 0x318(0x88)
	struct FSlateBrush GloballyMutedBrush; // 0x3a0(0x88)
	struct FSlateBrush MutedBrush; // 0x428(0x88)
	struct FSlateBrush NotSpeakingBrush; // 0x4b0(0x88)
	struct UMaterialInstanceDynamic* iconMaterial; // 0x538(0x08)
	int32_t MaxNameLength; // 0x540(0x04)

	void ForceHealthRefresh(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ForceHealthRefresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateHealthVisibility(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateHealthVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateStatusVisibility(enum class ESlateVisibility NewVisibility); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateStatusVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupMaterial(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupStatus(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupCharacterClass(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupCharacterClass // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_MaxDisplayNameLengthUpdated(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_MaxDisplayNameLengthUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_PlayerStatusUpdated(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_PlayerStatusUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh_Audio(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Audio // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh_Health(float newHealth, bool skipAnim); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Health // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh_ObjectiveItemsCount(); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_ObjectiveItemsCount // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh_MaxHealth(float newMaxHealth); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_MaxHealth // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_GroupStatusEntryWidget(int32_t EntryPoint); // Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ExecuteUbergraph_GroupStatusEntryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

