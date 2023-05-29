// WidgetBlueprintGeneratedClass SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C
// Size: 0x2c0 (Inherited: 0x270)
struct USocialMenu_ContextualMenu_C : URBSocialMenuEntryContextualMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* WaitingAnimation; // 0x278(0x08)
	struct UVerticalBox* action_container; // 0x280(0x08)
	struct USizeBox* SizeBox_1; // 0x288(0x08)
	struct USocialMenu_ContextualMenu_Action_C* SocialMenuEntryContextualMenuActionV2; // 0x290(0x08)
	struct USocialMenu_ContextualMenu_Action_C* SocialMenuEntryContextualMenuActionV2_2; // 0x298(0x08)
	struct USocialMenu_ContextualMenu_Action_C* SocialMenuEntryContextualMenuActionV2_3; // 0x2a0(0x08)
	struct USocialMenu_ContextualMenu_Action_C* SocialMenuEntryContextualMenuActionV2_4; // 0x2a8(0x08)
	struct USocialMenu_ContextualMenu_Action_C* SocialMenuEntryContextualMenuActionV2_5; // 0x2b0(0x08)
	struct USocialMenu_Slider_C* VoiceChatVolumeSlider; // 0x2b8(0x08)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct UWidget* DoCustomNavigation_1(enum class EUINavigation Navigation); // Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.DoCustomNavigation_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FText GetActionText(enum class ERBSocialMenuEntryAction Enumerator); // Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.GetActionText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnActionTriggered(enum class ERBSocialMenuEntryAction action); // Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.OnActionTriggered // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_ContextualMenu_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature(float Value); // Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.BndEvt__SocialMenu_ContextualMenu_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_ContextualMenu(int32_t EntryPoint); // Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.ExecuteUbergraph_SocialMenu_ContextualMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

