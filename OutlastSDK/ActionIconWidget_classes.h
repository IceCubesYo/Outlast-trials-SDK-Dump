// WidgetBlueprintGeneratedClass ActionIconWidget.ActionIconWidget_C
// Size: 0x3a3 (Inherited: 0x280)
struct UActionIconWidget_C : URBInputIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UOverlay* EscapeKey; // 0x288(0x08)
	struct UImage* Gamepad_Border_Bottom; // 0x290(0x08)
	struct UImage* Gamepad_Border_Top; // 0x298(0x08)
	struct UImage* Gamepad_Button; // 0x2a0(0x08)
	struct UOverlay* GamepadInput_Overlay; // 0x2a8(0x08)
	struct UScaleBox* iconScaleBox; // 0x2b0(0x08)
	struct UImage* KeyboardButtonBorder_Bottom; // 0x2b8(0x08)
	struct UImage* KeyboardButtonBorder_Top; // 0x2c0(0x08)
	struct UImage* KeyboardIcon_Enter; // 0x2c8(0x08)
	struct UImage* KeyboardIcon_Esc; // 0x2d0(0x08)
	struct UImage* KeyboardIcon_Space; // 0x2d8(0x08)
	struct UImage* KeyboardIcon_Tab; // 0x2e0(0x08)
	struct UImage* KeyboardIconBG; // 0x2e8(0x08)
	struct UImage* KeyboardIconLargeBG; // 0x2f0(0x08)
	struct UOverlay* KeyboardInput_Custom_Overlay; // 0x2f8(0x08)
	struct UOverlay* KeyboardInput_Overlay; // 0x300(0x08)
	struct UOverlay* KeyboardInput_Overlay_Hold; // 0x308(0x08)
	struct UTextBlock* KeyboardLabelText; // 0x310(0x08)
	struct UImage* MouseButtonBG; // 0x318(0x08)
	struct UImage* MouseButtonBorder_Bottom; // 0x320(0x08)
	struct UImage* MouseButtonBorder_Top; // 0x328(0x08)
	struct UImage* MouseButtonLeft; // 0x330(0x08)
	struct UImage* MouseButtonMiddle; // 0x338(0x08)
	struct UImage* MouseButtonRight; // 0x340(0x08)
	struct UOverlay* MouseInput_Overlay; // 0x348(0x08)
	struct UImage* MouseScrollDown; // 0x350(0x08)
	struct UImage* MouseScrollUp; // 0x358(0x08)
	int32_t ActionValue; // 0x360(0x04)
	float baseHeight; // 0x364(0x04)
	float FillInformation; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UMaterialInstanceDynamic* BorderMaterial_Mouse; // 0x370(0x08)
	struct UMaterialInstanceDynamic* BorderMaterial_Gamepad; // 0x378(0x08)
	struct TArray<struct UWidget*> CurrentlyVisibleWidgets; // 0x380(0x10)
	bool ShowOnlyGamepad; // 0x390(0x01)
	bool ShowOnlyKBM; // 0x391(0x01)
	bool ShouldIntersect; // 0x392(0x01)
	char pad_393[0x5]; // 0x393(0x05)
	struct UMaterialInstanceDynamic* BorderMaterial_Keyboard; // 0x398(0x08)
	bool bShowOnGamepad; // 0x3a0(0x01)
	bool bShowOnKBM; // 0x3a1(0x01)
	bool bIsUsingGamepad; // 0x3a2(0x01)

	void SetHoldRequirement(bool RequiresHold); // Function ActionIconWidget.ActionIconWidget_C.SetHoldRequirement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ResetVisibleIcons(); // Function ActionIconWidget.ActionIconWidget_C.ResetVisibleIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetWidgetVisible(struct UWidget* Widget); // Function ActionIconWidget.ActionIconWidget_C.SetWidgetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateSize(); // Function ActionIconWidget.ActionIconWidget_C.UpdateSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetDesiredHeight(float DesiredHeight); // Function ActionIconWidget.ActionIconWidget_C.SetDesiredHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ShowContainer(struct UPanelWidget* Container); // Function ActionIconWidget.ActionIconWidget_C.ShowContainer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HideIcons(); // Function ActionIconWidget.ActionIconWidget_C.HideIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshActionIcon(); // Function ActionIconWidget.ActionIconWidget_C.RefreshActionIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetActionName(struct FName NewActionName, int32_t Value); // Function ActionIconWidget.ActionIconWidget_C.SetActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ActionIconWidget.ActionIconWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ActionIconWidget.ActionIconWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ActionIconWidget.ActionIconWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function ActionIconWidget.ActionIconWidget_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuActionProgressChanged(struct FName& ActionName, float newProgress); // Function ActionIconWidget.ActionIconWidget_C.OnMenuActionProgressChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHudActionProgressChanged(float newProgress); // Function ActionIconWidget.ActionIconWidget_C.OnHudActionProgressChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ActionIconWidget(int32_t EntryPoint); // Function ActionIconWidget.ActionIconWidget_C.ExecuteUbergraph_ActionIconWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

