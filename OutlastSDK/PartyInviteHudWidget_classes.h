// WidgetBlueprintGeneratedClass PartyInviteHudWidget.PartyInviteHudWidget_C
// Size: 0x348 (Inherited: 0x2d8)
struct UPartyInviteHudWidget_C : URBPartyInviteNotificationUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* HideAnim; // 0x2e0(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x2e8(0x08)
	struct UCommonNotificationWidget_C* CommonNotificationWidget; // 0x2f0(0x08)
	float CurrentTime; // 0x2f8(0x04)
	float TotalTime; // 0x2fc(0x04)
	struct FLinearColor AcceptedColor; // 0x300(0x10)
	struct FLinearColor RefusedColor; // 0x310(0x10)
	struct FText TestPlayerName; // 0x320(0x18)
	struct UTexture2D* HardcoreIconTexture; // 0x338(0x08)
	struct UTexture2D* RegularIconTexture; // 0x340(0x08)

	void Finished_1B7ED78D47D24A29ECB5FF94734C6C40(); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.Finished_1B7ED78D47D24A29ECB5FF94734C6C40 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateDisplayTime(float DisplayTime, float totalDisplayTime); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_UpdateDisplayTime // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Accepted(); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Accepted // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refused(); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Refused // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_InputSourceChanged(bool bIsGamepad); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_InputSourceChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature(); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature(); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_Blocked(); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Blocked // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature(); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PartyInviteHudWidget(int32_t EntryPoint); // Function PartyInviteHudWidget.PartyInviteHudWidget_C.ExecuteUbergraph_PartyInviteHudWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

