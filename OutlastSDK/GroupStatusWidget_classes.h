// WidgetBlueprintGeneratedClass GroupStatusWidget.GroupStatusWidget_C
// Size: 0x351 (Inherited: 0x328)
struct UGroupStatusWidget_C : URBGroupStatusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* FadeIn; // 0x330(0x08)
	struct UVerticalBox* Container; // 0x338(0x08)
	struct UVerticalBox* EntryList; // 0x340(0x08)
	float EntryTopPadding; // 0x348(0x04)
	float EntryBottomPadding; // 0x34c(0x04)
	bool bShowAtFullOpacity; // 0x350(0x01)

	bool ShouldShow(); // Function GroupStatusWidget.GroupStatusWidget_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function GroupStatusWidget.GroupStatusWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function GroupStatusWidget.GroupStatusWidget_C.Event_Refresh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function GroupStatusWidget.GroupStatusWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnWatchedPlayerChanged(struct ARBPlayer* oldPlayer, struct ARBPlayer* NewPlayer); // Function GroupStatusWidget.GroupStatusWidget_C.Event_OnWatchedPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerPartyStateUpdated(struct ARBPlayerState* RBPlayerState); // Function GroupStatusWidget.GroupStatusWidget_C.OnPlayerPartyStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function GroupStatusWidget.GroupStatusWidget_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function GroupStatusWidget.GroupStatusWidget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_GroupStatusWidget(int32_t EntryPoint); // Function GroupStatusWidget.GroupStatusWidget_C.ExecuteUbergraph_GroupStatusWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

