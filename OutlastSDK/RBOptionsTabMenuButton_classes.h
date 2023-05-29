// WidgetBlueprintGeneratedClass RBOptionsTabMenuButton.RBOptionsTabMenuButton_C
// Size: 0x351 (Inherited: 0x288)
struct URBOptionsTabMenuButton_C : URBMenuTabButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x290(0x08)
	struct UTextBlock* ButtonTxt; // 0x298(0x08)
	struct UImage* Delimiter; // 0x2a0(0x08)
	struct UImage* Highlight; // 0x2a8(0x08)
	struct USpacer* LeftSpacer; // 0x2b0(0x08)
	struct UButton* MainButton; // 0x2b8(0x08)
	struct FText ButtonText; // 0x2c0(0x18)
	struct FSlateColor SelectedTextColor; // 0x2d8(0x28)
	struct FSlateColor UnSelectedTextColor; // 0x300(0x28)
	struct FSlateColor DisabledTextColor; // 0x328(0x28)
	bool bHovered; // 0x350(0x01)

	void SetHovered(bool bInHovered); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetText(struct FText Text); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Disable(); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.Disable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnSelectedChanged(); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.Event_OnSelectedChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RBOptionsTabMenuButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.BndEvt__RBOptionsTabMenuButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RBOptionsTabMenuButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.BndEvt__RBOptionsTabMenuButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RBOptionsTabMenuButton(int32_t EntryPoint); // Function RBOptionsTabMenuButton.RBOptionsTabMenuButton_C.ExecuteUbergraph_RBOptionsTabMenuButton // (Final|UbergraphFunction) // @ game+0x201e6d4
};

