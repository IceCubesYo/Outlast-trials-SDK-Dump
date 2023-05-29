// WidgetBlueprintGeneratedClass SocialMenu_Tab_Party.SocialMenu_Tab_Party_C
// Size: 0x280 (Inherited: 0x260)
struct USocialMenu_Tab_Party_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* WaitingAnimation; // 0x268(0x08)
	struct USocialMenu_PartyWidget_C* SocialMenuParty; // 0x270(0x08)
	struct USocialMenu_EntryList_PartyInvite_C* SocialMenuPartyInviteEntries; // 0x278(0x08)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(bool bCanSendPartyInvite); // Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Deactivate(); // Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Deactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Activate(struct URBSocialMenuManager* SocialMenu); // Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_Tab_Party_SocialMenuPartyInviteEntries_K2Node_ComponentBoundEvent_0_OnNoFocusPossible__DelegateSignature(); // Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.BndEvt__SocialMenu_Tab_Party_SocialMenuPartyInviteEntries_K2Node_ComponentBoundEvent_0_OnNoFocusPossible__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_Tab_Party(int32_t EntryPoint); // Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.ExecuteUbergraph_SocialMenu_Tab_Party // (Final|UbergraphFunction) // @ game+0x201e6d4
};

