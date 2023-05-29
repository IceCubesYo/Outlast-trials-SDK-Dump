// WidgetBlueprintGeneratedClass TextChatEntry.TextChatEntry_C
// Size: 0x2f0 (Inherited: 0x268)
struct UTextChatEntry_C : URBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* HideAnim; // 0x270(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x278(0x08)
	struct UHorizontalBox* HBox; // 0x280(0x08)
	struct UInvalidationBox* InvalidationBox_TextChatEntry; // 0x288(0x08)
	struct UCommonRichTextBlock* MessageContent; // 0x290(0x08)
	struct FRBTextChatMessage Message; // 0x298(0x40)
	struct UTextChatWidget_BP_C* Parent; // 0x2d8(0x08)
	struct FMulticastInlineDelegate OnHidden; // 0x2e0(0x10)

	void Hide(); // Function TextChatEntry.TextChatEntry_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(struct FRBTextChatMessage Message, struct UTextChatWidget_BP_C* Parent); // Function TextChatEntry.TextChatEntry_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1(); // Function TextChatEntry.TextChatEntry_C.WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_TextChatEntry(int32_t EntryPoint); // Function TextChatEntry.TextChatEntry_C.ExecuteUbergraph_TextChatEntry // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnHidden__DelegateSignature(struct UTextChatEntry_C* Entry); // Function TextChatEntry.TextChatEntry_C.OnHidden__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

