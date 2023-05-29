// WidgetBlueprintGeneratedClass CustomizationOptionThumbnail.CustomizationOptionThumbnail_C
// Size: 0x3a0 (Inherited: 0x260)
struct UCustomizationOptionThumbnail_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* buyAnimation; // 0x268(0x08)
	struct UImage* Border; // 0x270(0x08)
	struct UOverlay* costOverlay; // 0x278(0x08)
	struct UTextBlock* costValue; // 0x280(0x08)
	struct UImage* dlcIcon; // 0x288(0x08)
	struct UImage* dollarIcon; // 0x290(0x08)
	struct UOverlay* EmptyOverlay; // 0x298(0x08)
	struct UImage* EquippedIcon; // 0x2a0(0x08)
	struct UCustomizationInteractionWidget_C* GamepadTooltip; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Lock; // 0x2b8(0x08)
	struct UImage* lockedGreyout; // 0x2c0(0x08)
	struct UOverlay* LockedOverlay; // 0x2c8(0x08)
	struct UImage* newNotification; // 0x2d0(0x08)
	struct UOverlay* OptionOverlay; // 0x2d8(0x08)
	struct UImage* RarityOverlay; // 0x2e0(0x08)
	struct UImage* scratches; // 0x2e8(0x08)
	struct UImage* Thumbnail; // 0x2f0(0x08)
	struct UButton* ThumbnailButton; // 0x2f8(0x08)
	struct FMulticastInlineDelegate Event_OnClicked; // 0x300(0x10)
	struct FMulticastInlineDelegate Event_OnHovered; // 0x310(0x10)
	struct FMulticastInlineDelegate Event_OnUnhovered; // 0x320(0x10)
	bool IsEquipped; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FUICustomizationItem Item; // 0x338(0x30)
	struct FMulticastInlineDelegate Event_OnPressed; // 0x368(0x10)
	struct FMulticastInlineDelegate Event_OnReleased; // 0x378(0x10)
	struct UCustomizationInteractionWidget_C* ToolTip; // 0x388(0x08)
	enum class ECustomizationInteractionType InteractionType; // 0x390(0x01)
	bool Is New Item; // 0x391(0x01)
	char pad_392[0x2]; // 0x392(0x02)
	struct FName ItemId; // 0x394(0x08)
	bool Rotating; // 0x39c(0x01)
	bool MaintainHoveredState; // 0x39d(0x01)
	bool IsEmpty; // 0x39e(0x01)
	enum class ECustomizationMenuCategory Category; // 0x39f(0x01)

	void IsElementEmpty(bool& bIsEmpty); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.IsElementEmpty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshInteractionType(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.RefreshInteractionType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateThumbnailType(bool IsEmpty); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.UpdateThumbnailType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HideTooltip(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.HideTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm_Release(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.GamepadNav_MenuConfirm_Release // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.GamepadNav_MenuConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CreateTooltip(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.CreateTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitCost(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.InitCost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsNew(bool isNew); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetIsNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateRarity(enum class EPlayerCustomizationRarity Rarity); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.UpdateRarity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ShowLockedOverlay(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.ShowLockedOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HideLockedOverlay(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.HideLockedOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsEquipped(bool equipped); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool IsHovered); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize(struct FUICustomizationItem Item, int32_t Index, enum class ECustomizationMenuCategory Category); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_28_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_28_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_28_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CustomizationOptionThumbnail(int32_t EntryPoint); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.ExecuteUbergraph_CustomizationOptionThumbnail // (Final|UbergraphFunction) // @ game+0x201e6d4
	void Event_OnReleased__DelegateSignature(struct UCustomizationOptionThumbnail_C* Button); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPressed__DelegateSignature(struct UCustomizationOptionThumbnail_C* Button); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnUnhovered__DelegateSignature(struct UCustomizationOptionThumbnail_C* Widget); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnHovered__DelegateSignature(struct UCustomizationOptionThumbnail_C* Widget); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnClicked__DelegateSignature(struct UCustomizationOptionThumbnail_C* Widget); // Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

