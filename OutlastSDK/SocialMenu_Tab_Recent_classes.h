// WidgetBlueprintGeneratedClass SocialMenu_Tab_Recent.SocialMenu_Tab_Recent_C
// Size: 0x270 (Inherited: 0x260)
struct USocialMenu_Tab_Recent_C : UUserWidget {
	struct UWidgetAnimation* WaitingAnimation; // 0x260(0x08)
	struct USocialMenu_EntryList_C* SocialMenuEntryListV2; // 0x268(0x08)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SocialMenu_Tab_Recent.SocialMenu_Tab_Recent_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Deactivate(); // Function SocialMenu_Tab_Recent.SocialMenu_Tab_Recent_C.Deactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Activate(struct URBSocialMenuManager* SocialMenu); // Function SocialMenu_Tab_Recent.SocialMenu_Tab_Recent_C.Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

