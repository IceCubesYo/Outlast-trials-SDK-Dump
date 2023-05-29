// WidgetBlueprintGeneratedClass TextChatWidget_BP.TextChatWidget_BP_C
// Size: 0x318 (Inherited: 0x2b0)
struct UTextChatWidget_BP_C : URBTextChatWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UInvalidationBox* InvalidationBox_TextChatWidget; // 0x2b8(0x08)
	struct USizeBox* MessageContainerSizeBox; // 0x2c0(0x08)
	struct UVerticalBox* MessagesVBox; // 0x2c8(0x08)
	struct UBorder* TextBackground; // 0x2d0(0x08)
	struct FRBTextChatMessage TestMessage; // 0x2d8(0x40)

	void OnEntryHidden(struct UTextChatEntry_C* Entry); // Function TextChatWidget_BP.TextChatWidget_BP_C.OnEntryHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddMessage(struct FRBTextChatMessage Message); // Function TextChatWidget_BP.TextChatWidget_BP_C.AddMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function TextChatWidget_BP.TextChatWidget_BP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_ShowMessage(struct FRBTextChatMessage& Message); // Function TextChatWidget_BP.TextChatWidget_BP_C.Event_ShowMessage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void Event_HideMessage(int32_t MessageId); // Function TextChatWidget_BP.TextChatWidget_BP_C.Event_HideMessage // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_TextChatWidget_BP(int32_t EntryPoint); // Function TextChatWidget_BP.TextChatWidget_BP_C.ExecuteUbergraph_TextChatWidget_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

