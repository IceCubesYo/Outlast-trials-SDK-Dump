// WidgetBlueprintGeneratedClass SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C
// Size: 0x2a2 (Inherited: 0x270)
struct USocialMenu_ContextualMenu_Action_C : URBSocialMenuEntryContextualMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* btn; // 0x278(0x08)
	struct UTextBlock* btn_text; // 0x280(0x08)
	struct UBorder* Line; // 0x288(0x08)
	struct FMulticastInlineDelegate OnActionTriggered; // 0x290(0x10)
	enum class ERBSocialMenuEntryAction action; // 0x2a0(0x01)
	bool bHovered; // 0x2a1(0x01)

	void SetHovered(bool bInHovered); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetButtonText(struct FText Text); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetEnabled(bool bEnabled); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_ContextualMenu_Action(int32_t EntryPoint); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.ExecuteUbergraph_SocialMenu_ContextualMenu_Action // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnActionTriggered__DelegateSignature(enum class ERBSocialMenuEntryAction action); // Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.OnActionTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

