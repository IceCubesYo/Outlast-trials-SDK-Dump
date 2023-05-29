// WidgetBlueprintGeneratedClass CategoryButtonWidget.CategoryButtonWidget_C
// Size: 0x454 (Inherited: 0x260)
struct UCategoryButtonWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* buyAnimation; // 0x268(0x08)
	struct UWidgetAnimation* Hover; // 0x270(0x08)
	struct UImage* BackgroundImage; // 0x278(0x08)
	struct UButton* Button_597; // 0x280(0x08)
	struct UImage* EquippedIcon; // 0x288(0x08)
	struct UCanvasPanel* HoverBackground; // 0x290(0x08)
	struct UImage* HoverBackgroundImage; // 0x298(0x08)
	struct UImage* Icon; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_164; // 0x2b0(0x08)
	struct UImage* lockIcon; // 0x2b8(0x08)
	struct UScaleBox* lockScaleBox; // 0x2c0(0x08)
	struct UImage* newNotification; // 0x2c8(0x08)
	struct UScaleBox* NewScale; // 0x2d0(0x08)
	enum class ECategoryButtonState State; // 0x2d8(0x01)
	bool isSelected; // 0x2d9(0x01)
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct FMulticastInlineDelegate Event_OnClicked; // 0x2e0(0x10)
	struct UTexture2D* selectedTexture; // 0x2f0(0x08)
	struct UTexture2D* lockedTexture; // 0x2f8(0x08)
	struct UTexture2D* availableTexture; // 0x300(0x08)
	struct UTexture2D* acquiredTexture; // 0x308(0x08)
	struct UTexture2D* hoverBackgroundTexture; // 0x310(0x08)
	bool CanShowIcon; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FSlateBrush equippedBrush; // 0x320(0x88)
	struct FSlateColor BaseColor; // 0x3a8(0x28)
	bool IsEquipped; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FMulticastInlineDelegate Event_OnHovered; // 0x3d8(0x10)
	struct FMulticastInlineDelegate Event_OnUnhovered; // 0x3e8(0x10)
	struct FSlateColor equippedColor; // 0x3f8(0x28)
	struct FMulticastInlineDelegate Event_OnPressed; // 0x420(0x10)
	struct FMulticastInlineDelegate Event_OnReleased; // 0x430(0x10)
	struct FName ItemId; // 0x440(0x08)
	bool IsNewItem; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float newNotificationScale; // 0x44c(0x04)
	bool Has New Items in Sub Category; // 0x450(0x01)
	bool bEnableHoverAnimation; // 0x451(0x01)
	bool bIsHovered; // 0x452(0x01)
	bool bShowToxicity; // 0x453(0x01)

	void SetHovered(bool bInHovered); // Function CategoryButtonWidget.CategoryButtonWidget_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsNew(bool InIsNew, bool InHasNewItemsInSubCategory); // Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsEquipped(bool inIsEquipped); // Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Set Upgrade Item State(enum class EMenuUpgradeItemState upgradeItemState); // Function CategoryButtonWidget.CategoryButtonWidget_C.Set Upgrade Item State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetBaseColor(struct FSlateColor Color); // Function CategoryButtonWidget.CategoryButtonWidget_C.SetBaseColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetCanShowIcon(bool CanShowIcon); // Function CategoryButtonWidget.CategoryButtonWidget_C.SetCanShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Set Icon(struct UTexture2D* Icon, bool matchSize); // Function CategoryButtonWidget.CategoryButtonWidget_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetState(enum class ECategoryButtonState State); // Function CategoryButtonWidget.CategoryButtonWidget_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSelected(bool isSelected); // Function CategoryButtonWidget.CategoryButtonWidget_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_596_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_596_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_596_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CategoryButtonWidget.CategoryButtonWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_596_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_596_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CategoryButtonWidget(int32_t EntryPoint); // Function CategoryButtonWidget.CategoryButtonWidget_C.ExecuteUbergraph_CategoryButtonWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
	void Event_OnReleased__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPressed__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnUnhovered__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnHovered__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnClicked__DelegateSignature(); // Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

