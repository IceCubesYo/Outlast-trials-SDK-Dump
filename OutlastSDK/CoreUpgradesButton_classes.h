// WidgetBlueprintGeneratedClass CoreUpgradesButton.CoreUpgradesButton_C
// Size: 0x2c8 (Inherited: 0x260)
struct UCoreUpgradesButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BackgroundImage; // 0x268(0x08)
	struct UTextBlock* CategoryNameText; // 0x270(0x08)
	struct UImage* FocussedBottomLeftBracket_2; // 0x278(0x08)
	struct UImage* FocussedBottomRightBracket_2; // 0x280(0x08)
	struct UImage* FocussedTopLeftBracket_2; // 0x288(0x08)
	struct UImage* FocussedTopRightBracket_2; // 0x290(0x08)
	struct UButton* InteractionButton; // 0x298(0x08)
	struct UCanvasPanel* SelectionBorderPanel; // 0x2a0(0x08)
	struct UTextBlock* StateText; // 0x2a8(0x08)
	bool bHovered; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x2b8(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CoreUpgradesButton.CoreUpgradesButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function CoreUpgradesButton.CoreUpgradesButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function CoreUpgradesButton.CoreUpgradesButton_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(); // Function CoreUpgradesButton.CoreUpgradesButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function CoreUpgradesButton.CoreUpgradesButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function CoreUpgradesButton.CoreUpgradesButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CoreUpgradesButton.CoreUpgradesButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function CoreUpgradesButton.CoreUpgradesButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CoreUpgradesButton.CoreUpgradesButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function CoreUpgradesButton.CoreUpgradesButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CoreUpgradesButton(int32_t EntryPoint); // Function CoreUpgradesButton.CoreUpgradesButton_C.ExecuteUbergraph_CoreUpgradesButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(); // Function CoreUpgradesButton.CoreUpgradesButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

