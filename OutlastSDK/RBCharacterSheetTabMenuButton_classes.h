// WidgetBlueprintGeneratedClass RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C
// Size: 0x342 (Inherited: 0x288)
struct URBCharacterSheetTabMenuButton_C : URBMenuTabButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBorder* Border_1; // 0x290(0x08)
	struct UTextBlock* ButtonTxt; // 0x298(0x08)
	struct UButton* MainButton; // 0x2a0(0x08)
	struct UImage* newNotification; // 0x2a8(0x08)
	struct FText ButtonText; // 0x2b0(0x18)
	struct FSlateColor SelectedTextColor; // 0x2c8(0x28)
	struct FSlateColor UnSelectedTextColor; // 0x2f0(0x28)
	struct FSlateColor DisabledTextColor; // 0x318(0x28)
	bool bHovered; // 0x340(0x01)
	bool bPlayDefaultClickSound; // 0x341(0x01)

	void SetHovered(bool bInHovered); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHasNewItems(bool hasNewItems); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.SetHasNewItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetText(struct FText Text); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Disable(); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Disable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnSelectedChanged(); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Event_OnSelectedChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RBCharacterSheetTabMenuButton(int32_t EntryPoint); // Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.ExecuteUbergraph_RBCharacterSheetTabMenuButton // (Final|UbergraphFunction) // @ game+0x201e6d4
};

