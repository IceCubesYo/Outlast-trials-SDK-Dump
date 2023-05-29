// WidgetBlueprintGeneratedClass RigSlotButton.RigSlotButton_C
// Size: 0x400 (Inherited: 0x260)
struct URigSlotButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* ActiveSkillName; // 0x268(0x08)
	struct UTextBlock* ActiveSkillTier; // 0x270(0x08)
	struct UImage* BackgroundImage; // 0x278(0x08)
	struct UImage* BackgroundImage_2; // 0x280(0x08)
	struct UImage* EquippedIcon; // 0x288(0x08)
	struct UImage* FocussedBottomLeftBracket_2; // 0x290(0x08)
	struct UImage* FocussedBottomRightBracket_2; // 0x298(0x08)
	struct UImage* FocussedTopLeftBracket_2; // 0x2a0(0x08)
	struct UImage* FocussedTopRightBracket_2; // 0x2a8(0x08)
	struct UTextBlock* HeaderText; // 0x2b0(0x08)
	struct UCanvasPanel* HoverBackground; // 0x2b8(0x08)
	struct UImage* HoverBackgroundImage; // 0x2c0(0x08)
	struct UImage* Icon; // 0x2c8(0x08)
	struct UButton* InteractionButton; // 0x2d0(0x08)
	struct UCanvasPanel* SelectionBorderPanel; // 0x2d8(0x08)
	struct FMenuUpgradeItemInfo UpgradeInfo; // 0x2e0(0x108)
	int32_t CurrentUpgradeTier; // 0x3e8(0x04)
	bool bHovered; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct FMulticastInlineDelegate OnClicked; // 0x3f0(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function RigSlotButton.RigSlotButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ComputeTier(); // Function RigSlotButton.RigSlotButton_C.ComputeTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function RigSlotButton.RigSlotButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function RigSlotButton.RigSlotButton_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(); // Function RigSlotButton.RigSlotButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function RigSlotButton.RigSlotButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function RigSlotButton.RigSlotButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function RigSlotButton.RigSlotButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function RigSlotButton.RigSlotButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function RigSlotButton.RigSlotButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function RigSlotButton.RigSlotButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RigSlotButton(int32_t EntryPoint); // Function RigSlotButton.RigSlotButton_C.ExecuteUbergraph_RigSlotButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(); // Function RigSlotButton.RigSlotButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

