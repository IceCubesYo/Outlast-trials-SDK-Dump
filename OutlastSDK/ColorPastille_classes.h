// WidgetBlueprintGeneratedClass ColorPastille.ColorPastille_C
// Size: 0x2e8 (Inherited: 0x260)
struct UColorPastille_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Hover; // 0x268(0x08)
	struct UButton* ColorButton; // 0x270(0x08)
	struct UImage* ColoredSquare; // 0x278(0x08)
	struct USimpleActionTooltip_C* GamepadTooltip; // 0x280(0x08)
	struct UImage* SelectedIcon; // 0x288(0x08)
	struct FRBHairColorOption LocalColor; // 0x290(0x28)
	struct FMulticastInlineDelegate OnClicked; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2c8(0x10)
	bool isSelected; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct USimpleActionTooltip_C* ToolTip; // 0x2e0(0x08)

	void CreateTooltip(); // Function ColorPastille.ColorPastille_C.CreateTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function ColorPastille.ColorPastille_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm_Released(); // Function ColorPastille.ColorPastille_C.GamepadNav_MenuConfirm_Released // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm(); // Function ColorPastille.ColorPastille_C.GamepadNav_MenuConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool IsHovered); // Function ColorPastille.ColorPastille_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function ColorPastille.ColorPastille_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function ColorPastille.ColorPastille_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSelected(bool Selected); // Function ColorPastille.ColorPastille_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(struct FRBHairColorOption Hair Color); // Function ColorPastille.ColorPastille_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ColorPastille.ColorPastille_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ColorPastille.ColorPastille_C.BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ColorPastille.ColorPastille_C.BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ColorPastille.ColorPastille_C.BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ColorPastille(int32_t EntryPoint); // Function ColorPastille.ColorPastille_C.ExecuteUbergraph_ColorPastille // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnHovered__DelegateSignature(struct FRBHairColorOption HoveredColor); // Function ColorPastille.ColorPastille_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(struct UColorPastille_C* ClickedPastille); // Function ColorPastille.ColorPastille_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

