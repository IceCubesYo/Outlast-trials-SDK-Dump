// WidgetBlueprintGeneratedClass HudTutorialMessages.HUDTutorialMessages_C
// Size: 0x300 (Inherited: 0x2e8)
struct UHUDTutorialMessages_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Show; // 0x2f0(0x08)
	struct URichTextBlock* tutorialMessage; // 0x2f8(0x08)

	void UpdateInputDecorator(); // Function HudTutorialMessages.HUDTutorialMessages_C.UpdateInputDecorator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateTextSize(enum class EUIFontSize Size); // Function HudTutorialMessages.HUDTutorialMessages_C.UpdateTextSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function HudTutorialMessages.HUDTutorialMessages_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void SetMessage(struct FText Message); // Function HudTutorialMessages.HUDTutorialMessages_C.SetMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function HudTutorialMessages.HUDTutorialMessages_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function HudTutorialMessages.HUDTutorialMessages_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function HudTutorialMessages.HUDTutorialMessages_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function HudTutorialMessages.HUDTutorialMessages_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void CustomEvent_1(struct FText& Message); // Function HudTutorialMessages.HUDTutorialMessages_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHideTutorialMessage_Event_1(); // Function HudTutorialMessages.HUDTutorialMessages_C.OnHideTutorialMessage_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnTutorialSizeChangedEvent(); // Function HudTutorialMessages.HUDTutorialMessages_C.OnTutorialSizeChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_HUDTutorialMessages(int32_t EntryPoint); // Function HudTutorialMessages.HUDTutorialMessages_C.ExecuteUbergraph_HUDTutorialMessages // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

