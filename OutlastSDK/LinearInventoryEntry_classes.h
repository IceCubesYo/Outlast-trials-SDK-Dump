// WidgetBlueprintGeneratedClass LinearInventoryEntry.LinearInventoryEntry_C
// Size: 0x3da (Inherited: 0x2e8)
struct ULinearInventoryEntry_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* ItemReady; // 0x2f0(0x08)
	struct UWidgetAnimation* Highlight; // 0x2f8(0x08)
	struct UImage* Bgd; // 0x300(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x308(0x08)
	struct UImage* ItemIcon; // 0x310(0x08)
	struct UImage* ItemReadyCue; // 0x318(0x08)
	struct UActionIconWidget_C* Prompt; // 0x320(0x08)
	struct UImage* SelectionCue; // 0x328(0x08)
	struct UImage* SwapIcon; // 0x330(0x08)
	struct UTextBlock* Text; // 0x338(0x08)
	bool IsSpecialSlot; // 0x340(0x01)
	bool IconStartsCollapsed; // 0x341(0x01)
	bool ShouldAlwaysShowText; // 0x342(0x01)
	char pad_343[0x5]; // 0x343(0x05)
	struct UTexture2D* DefaultIcon; // 0x348(0x08)
	struct FName PromptActionName; // 0x350(0x08)
	struct FUILinearInventoryItem itemInfo; // 0x358(0x80)
	bool WasSelected; // 0x3d8(0x01)
	bool SwapState; // 0x3d9(0x01)

	bool ShouldShow(); // Function LinearInventoryEntry.LinearInventoryEntry_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void UpdateSwapIconVisibility(bool Swap); // Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSwapIconVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateSpecialColor(struct FLinearColor SpecialColor); // Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSpecialColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdatePrompt(); // Function LinearInventoryEntry.LinearInventoryEntry_C.UpdatePrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateInfo(struct FUILinearInventoryItem itemInfo); // Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSelected(bool isSelected); // Function LinearInventoryEntry.LinearInventoryEntry_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(); // Function LinearInventoryEntry.LinearInventoryEntry_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function LinearInventoryEntry.LinearInventoryEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function LinearInventoryEntry.LinearInventoryEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_InputSourceChanged(bool bIsGamepad); // Function LinearInventoryEntry.LinearInventoryEntry_C.Event_InputSourceChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_LinearInventoryEntry(int32_t EntryPoint); // Function LinearInventoryEntry.LinearInventoryEntry_C.ExecuteUbergraph_LinearInventoryEntry // (Final|UbergraphFunction) // @ game+0x201e6d4
};

