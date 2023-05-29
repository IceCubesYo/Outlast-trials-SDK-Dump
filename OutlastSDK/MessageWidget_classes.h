// WidgetBlueprintGeneratedClass MessageWidget.MessageWidget_C
// Size: 0x35c (Inherited: 0x2e8)
struct UMessageWidget_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2f0(0x08)
	struct UInvalidationBox* InvalidationBox_MessageWidget; // 0x2f8(0x08)
	struct USpacer* ItemsSpacer; // 0x300(0x08)
	struct UMessageLineWidget_C* MessageLineWidget; // 0x308(0x08)
	struct UVerticalBox* MessageVerticalBox; // 0x310(0x08)
	struct UImage* PickedUpItem; // 0x318(0x08)
	struct UImage* SwapIcon; // 0x320(0x08)
	struct UImage* SwapItem; // 0x328(0x08)
	struct FText Text; // 0x330(0x18)
	float LinePadding; // 0x348(0x04)
	struct FLinearColor Color; // 0x34c(0x10)

	void HideIcons(); // Function MessageWidget.MessageWidget_C.HideIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HandleItemsIconsDisplay(); // Function MessageWidget.MessageWidget_C.HandleItemsIconsDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OninputChanged(); // Function MessageWidget.MessageWidget_C.OninputChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetMessage(struct FText messageText, struct FLinearColor DefaultColor); // Function MessageWidget.MessageWidget_C.SetMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SendTemporaryText(struct FText messageText); // Function MessageWidget.MessageWidget_C.SendTemporaryText // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function MessageWidget.MessageWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function MessageWidget.MessageWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function MessageWidget.MessageWidget_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function MessageWidget.MessageWidget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MessageWidget(int32_t EntryPoint); // Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

