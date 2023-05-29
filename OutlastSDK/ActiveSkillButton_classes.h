// WidgetBlueprintGeneratedClass ActiveSkillButton.ActiveSkillButton_C
// Size: 0x3e1 (Inherited: 0x260)
struct UActiveSkillButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCategoryButtonWidget_C* CategoryButtonWidget; // 0x268(0x08)
	enum class EActiveSkillType ActiveSkillType; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FMulticastInlineDelegate OnClickedEvent; // 0x278(0x10)
	enum class EMenuUpgradeItemState State; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FMulticastInlineDelegate OnHoveredEvent; // 0x290(0x10)
	struct FMulticastInlineDelegate OnUnhoveredEvent; // 0x2a0(0x10)
	struct FMenuUpgradeItemInfo itemInfo; // 0x2b0(0x108)
	struct FMulticastInlineDelegate OnPressedEvent; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnReleasedEvent; // 0x3c8(0x10)
	struct FName ItemId; // 0x3d8(0x08)
	bool bIsSlot; // 0x3e0(0x01)

	void GamepadNav_MenuConfirm_Release(); // Function ActiveSkillButton.ActiveSkillButton_C.GamepadNav_MenuConfirm_Release // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_MenuConfirm(); // Function ActiveSkillButton.ActiveSkillButton_C.GamepadNav_MenuConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function ActiveSkillButton.ActiveSkillButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function ActiveSkillButton.ActiveSkillButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function ActiveSkillButton.ActiveSkillButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateNewStatus(); // Function ActiveSkillButton.ActiveSkillButton_C.UpdateNewStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetIsEquipped(bool& IsEquipped); // Function ActiveSkillButton.ActiveSkillButton_C.GetIsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetIsEquipped(bool IsEquipped); // Function ActiveSkillButton.ActiveSkillButton_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSelected(bool Selected); // Function ActiveSkillButton.ActiveSkillButton_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize Empty Slot(); // Function ActiveSkillButton.ActiveSkillButton_C.Initialize Empty Slot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize(struct FMenuUpgradeItemInfo itemInfo, bool bInIsSlot); // Function ActiveSkillButton.ActiveSkillButton_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature(); // Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature(); // Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature(); // Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature(); // Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature(); // Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ActiveSkillButton.ActiveSkillButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnUpdateNewStatus_Event_1(); // Function ActiveSkillButton.ActiveSkillButton_C.OnUpdateNewStatus_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ActiveSkillButton(int32_t EntryPoint); // Function ActiveSkillButton.ActiveSkillButton_C.ExecuteUbergraph_ActiveSkillButton // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnReleasedEvent__DelegateSignature(struct FMenuUpgradeItemInfo itemInfo); // Function ActiveSkillButton.ActiveSkillButton_C.OnReleasedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPressedEvent__DelegateSignature(struct FMenuUpgradeItemInfo itemInfo); // Function ActiveSkillButton.ActiveSkillButton_C.OnPressedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUnhoveredEvent__DelegateSignature(struct UActiveSkillButton_C* Button); // Function ActiveSkillButton.ActiveSkillButton_C.OnUnhoveredEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHoveredEvent__DelegateSignature(struct UActiveSkillButton_C* Button); // Function ActiveSkillButton.ActiveSkillButton_C.OnHoveredEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnClickedEvent__DelegateSignature(struct UActiveSkillButton_C* Button); // Function ActiveSkillButton.ActiveSkillButton_C.OnClickedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

