// WidgetBlueprintGeneratedClass PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C
// Size: 0x348 (Inherited: 0x2f0)
struct UPartyInviteRequestHudWidget_C : URBPartyInviteRequestNotificationUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* HideAnim; // 0x2f8(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x300(0x08)
	struct UCommonNotificationWidget_C* CommonNotificationWidget; // 0x308(0x08)
	float CurrentTime; // 0x310(0x04)
	float TotalTime; // 0x314(0x04)
	struct FLinearColor AcceptedColor; // 0x318(0x10)
	struct FLinearColor RefusedColor; // 0x328(0x10)
	struct UTexture2D* HardcoreIconTexture; // 0x338(0x08)
	struct UTexture2D* RegularIconTexture; // 0x340(0x08)

	void Finished_2AB4E702456E6779D4DD0FB575589774(); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.Finished_2AB4E702456E6779D4DD0FB575589774 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateDisplayTime(float DisplayTime, float totalDisplayTime); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.Event_UpdateDisplayTime // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Accepted(); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.Event_Accepted // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refused(); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.Event_Refused // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature(); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature(); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_Blocked(); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.Event_Blocked // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PartyInviteRequestHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature(); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.BndEvt__PartyInviteRequestHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PartyInviteRequestHudWidget(int32_t EntryPoint); // Function PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C.ExecuteUbergraph_PartyInviteRequestHudWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

