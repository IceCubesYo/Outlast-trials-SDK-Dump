// WidgetBlueprintGeneratedClass PerkUpgradeButton.PerkUpgradeButton_C
// Size: 0x400 (Inherited: 0x260)
struct UPerkUpgradeButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCategoryButtonWidget_C* CategoryButtonWidget; // 0x268(0x08)
	struct UTextBlock* CostAmountText; // 0x270(0x08)
	struct UImage* CurrencyTypeImage; // 0x278(0x08)
	struct UImage* EquippedImage; // 0x280(0x08)
	struct FName ItemId; // 0x288(0x08)
	struct FMulticastInlineDelegate OnClickedEvent; // 0x290(0x10)
	enum class EMenuUpgradeItemState ItemState; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FMulticastInlineDelegate OnHoveredEvent; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnUnhoveredEvent; // 0x2b8(0x10)
	struct FMenuUpgradeItemInfo itemInfo; // 0x2c8(0x108)
	bool bIsLoadout; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FMulticastInlineDelegate OnPressedEvent; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnReleasedEvent; // 0x3e8(0x10)
	int32_t SlotIndex; // 0x3f8(0x04)
	bool bIsSlot; // 0x3fc(0x01)
	bool bIsLockedSlot; // 0x3fd(0x01)
	bool bIsEquipped; // 0x3fe(0x01)
	bool bEnableLoadoutHoverEvents; // 0x3ff(0x01)

	void Setup(); // Function PerkUpgradeButton.PerkUpgradeButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm_Release(); // Function PerkUpgradeButton.PerkUpgradeButton_C.GamepadNav_MenuConfirm_Release // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm(); // Function PerkUpgradeButton.PerkUpgradeButton_C.GamepadNav_MenuConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function PerkUpgradeButton.PerkUpgradeButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function PerkUpgradeButton.PerkUpgradeButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetIsEquipped(bool& IsEquipped); // Function PerkUpgradeButton.PerkUpgradeButton_C.GetIsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetIsEquipped(bool IsEquipped); // Function PerkUpgradeButton.PerkUpgradeButton_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitializeEmptySlot(int32_t SlotIndex); // Function PerkUpgradeButton.PerkUpgradeButton_C.InitializeEmptySlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize Locked Slot(int32_t SlotIndex); // Function PerkUpgradeButton.PerkUpgradeButton_C.Initialize Locked Slot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize(struct FMenuUpgradeItemInfo itemUpgradeInfo, bool inIsLoadout, int32_t SlotIndex, bool bInIsSlot); // Function PerkUpgradeButton.PerkUpgradeButton_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function PerkUpgradeButton.PerkUpgradeButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature(); // Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature(); // Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature(); // Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature(); // Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature(); // Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PerkUpgradeButton(int32_t EntryPoint); // Function PerkUpgradeButton.PerkUpgradeButton_C.ExecuteUbergraph_PerkUpgradeButton // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnReleasedEvent__DelegateSignature(struct FMenuUpgradeItemInfo itemInfo); // Function PerkUpgradeButton.PerkUpgradeButton_C.OnReleasedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPressedEvent__DelegateSignature(struct FMenuUpgradeItemInfo itemInfo); // Function PerkUpgradeButton.PerkUpgradeButton_C.OnPressedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUnhoveredEvent__DelegateSignature(struct UPerkUpgradeButton_C* Button); // Function PerkUpgradeButton.PerkUpgradeButton_C.OnUnhoveredEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHoveredEvent__DelegateSignature(struct UPerkUpgradeButton_C* Button); // Function PerkUpgradeButton.PerkUpgradeButton_C.OnHoveredEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnClickedEvent__DelegateSignature(struct UPerkUpgradeButton_C* Button); // Function PerkUpgradeButton.PerkUpgradeButton_C.OnClickedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

