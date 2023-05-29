// WidgetBlueprintGeneratedClass PerkSlotsButton.PerkSlotsButton_C
// Size: 0x2e1 (Inherited: 0x260)
struct UPerkSlotsButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BackgroundImage; // 0x268(0x08)
	struct UImage* FocussedBottomLeftBracket_2; // 0x270(0x08)
	struct UImage* FocussedBottomRightBracket_2; // 0x278(0x08)
	struct UImage* FocussedTopLeftBracket_2; // 0x280(0x08)
	struct UImage* FocussedTopRightBracket_2; // 0x288(0x08)
	struct UTextBlock* HeaderText; // 0x290(0x08)
	struct UButton* InteractionButton; // 0x298(0x08)
	struct UPerkSlotButton_C* PerkSlotButton; // 0x2a0(0x08)
	struct UPerkSlotButton_C* PerkSlotButton_2; // 0x2a8(0x08)
	struct UPerkSlotButton_C* PerkSlotButton_3; // 0x2b0(0x08)
	struct UHorizontalBox* PickupListBox; // 0x2b8(0x08)
	struct UCanvasPanel* SelectionBorderPanel; // 0x2c0(0x08)
	bool bIsGamepad; // 0x2c8(0x01)
	bool bHovered; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct FMulticastInlineDelegate OnClicked; // 0x2d0(0x10)
	bool bFocused; // 0x2e0(0x01)

	void SetFocused(bool bInFocused); // Function PerkSlotsButton.PerkSlotsButton_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void IsConsideredHovered(bool& bConsideredHovered); // Function PerkSlotsButton.PerkSlotsButton_C.IsConsideredHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function PerkSlotsButton.PerkSlotsButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function PerkSlotsButton.PerkSlotsButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function PerkSlotsButton.PerkSlotsButton_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(); // Function PerkSlotsButton.PerkSlotsButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function PerkSlotsButton.PerkSlotsButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function PerkSlotsButton.PerkSlotsButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function PerkSlotsButton.PerkSlotsButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function PerkSlotsButton.PerkSlotsButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function PerkSlotsButton.PerkSlotsButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function PerkSlotsButton.PerkSlotsButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function PerkSlotsButton.PerkSlotsButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function PerkSlotsButton.PerkSlotsButton_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PerkSlotsButton(int32_t EntryPoint); // Function PerkSlotsButton.PerkSlotsButton_C.ExecuteUbergraph_PerkSlotsButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(); // Function PerkSlotsButton.PerkSlotsButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

