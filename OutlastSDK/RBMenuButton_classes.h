// WidgetBlueprintGeneratedClass RBMenuButton.RBMenuButton_C
// Size: 0x360 (Inherited: 0x268)
struct URBMenuButton_C : URBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UActionIconWidget_C* ActionIconWidget; // 0x270(0x08)
	struct UScaleBox* backgroundScaleBox; // 0x278(0x08)
	struct UImage* buttonBackground; // 0x280(0x08)
	struct UImage* ButtonTextIcon; // 0x288(0x08)
	struct UTextBlock* ButtonTxt; // 0x290(0x08)
	struct UInvalidationBox* InvalidationBox_RBMenuButton; // 0x298(0x08)
	struct UButton* MainButton; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2a8(0x10)
	struct FText ButtonText; // 0x2b8(0x18)
	struct FString ActionName; // 0x2d0(0x10)
	bool ShowInputForKBM; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UAkAudioEvent* OnClickedSound; // 0x2e8(0x08)
	bool ShowHoldPrompt; // 0x2f0(0x01)
	bool showBackground; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct FMulticastInlineDelegate OnPressed; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x308(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x318(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x328(0x10)
	bool ShowInputOnGamepad; // 0x338(0x01)
	bool IsVisualPromptOnly; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
	struct UTexture2D* ButtonIconTexture; // 0x340(0x08)
	struct FVector2D buttonIconSize; // 0x348(0x08)
	struct FMargin ButtonIconPadding; // 0x350(0x10)

	void SetButtonIconDetails(struct UTexture2D* ButtonIconTexture, struct FVector2D buttonIconSize, struct FMargin ButtonIconPadding); // Function RBMenuButton.RBMenuButton_C.SetButtonIconDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetActionName(struct FString ActionName); // Function RBMenuButton.RBMenuButton_C.SetActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateButtonTextIcon(); // Function RBMenuButton.RBMenuButton_C.UpdateButtonTextIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateButtonText(struct FText Text); // Function RBMenuButton.RBMenuButton_C.UpdateButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateInputImage(); // Function RBMenuButton.RBMenuButton_C.UpdateInputImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function RBMenuButton.RBMenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function RBMenuButton.RBMenuButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OninputChanged(); // Function RBMenuButton.RBMenuButton_C.OninputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function RBMenuButton.RBMenuButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RBMenuButton(int32_t EntryPoint); // Function RBMenuButton.RBMenuButton_C.ExecuteUbergraph_RBMenuButton // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnHovered__DelegateSignature(); // Function RBMenuButton.RBMenuButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUnhovered__DelegateSignature(); // Function RBMenuButton.RBMenuButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnReleased__DelegateSignature(); // Function RBMenuButton.RBMenuButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPressed__DelegateSignature(); // Function RBMenuButton.RBMenuButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function RBMenuButton.RBMenuButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

