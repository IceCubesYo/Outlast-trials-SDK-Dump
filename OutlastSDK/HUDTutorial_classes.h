// WidgetBlueprintGeneratedClass HUDTutorial.HUDTutorial_C
// Size: 0x318 (Inherited: 0x2e8)
struct UHUDTutorial_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x2f0(0x08)
	struct UImage* Image_176; // 0x2f8(0x08)
	struct UInvalidationBox* InvalidationBox_HUDTutorial; // 0x300(0x08)
	struct URichTextBlock* RichTextBlock_63; // 0x308(0x08)
	struct UTextBlock* Title; // 0x310(0x08)

	bool ShouldShow(); // Function HUDTutorial.HUDTutorial_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void Construct(); // Function HUDTutorial.HUDTutorial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnShowHUDTutorial_Event_1(struct FHUDTutorialTextData& tutorialData); // Function HUDTutorial.HUDTutorial_C.OnShowHUDTutorial_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHideHUDTutorial_Event_1(); // Function HUDTutorial.HUDTutorial_C.OnHideHUDTutorial_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function HUDTutorial.HUDTutorial_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function HUDTutorial.HUDTutorial_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_HUDTutorial(int32_t EntryPoint); // Function HUDTutorial.HUDTutorial_C.ExecuteUbergraph_HUDTutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

