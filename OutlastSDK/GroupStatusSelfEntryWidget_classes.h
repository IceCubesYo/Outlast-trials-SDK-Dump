// WidgetBlueprintGeneratedClass GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C
// Size: 0x51c (Inherited: 0x2b8)
struct UGroupStatusSelfEntryWidget_C : URBGroupStatusEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UScaleBox* BackgroundScale; // 0x2c0(0x08)
	struct UImage* ClassIcon; // 0x2c8(0x08)
	struct USizeBox* ClassIconSizeBox; // 0x2d0(0x08)
	struct UImage* PartyLeaderIcon; // 0x2d8(0x08)
	struct UTextBlock* PlayerName; // 0x2e0(0x08)
	struct UImage* SpeakerIcon; // 0x2e8(0x08)
	struct USizeBox* SpeakerSizeBox; // 0x2f0(0x08)
	struct FSlateBrush SpeakingBrush; // 0x2f8(0x88)
	struct FSlateBrush GloballyMutedBrush; // 0x380(0x88)
	struct FSlateBrush MutedBrush; // 0x408(0x88)
	struct FSlateBrush NotSpeakingBrush; // 0x490(0x88)
	int32_t MaxNameLength; // 0x518(0x04)

	void SetupStatus(); // Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupCharacterClass(); // Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupCharacterClass // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_MaxDisplayNameLengthUpdated(); // Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_MaxDisplayNameLengthUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh_Audio(); // Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh_Audio // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_GroupStatusSelfEntryWidget(int32_t EntryPoint); // Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.ExecuteUbergraph_GroupStatusSelfEntryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

