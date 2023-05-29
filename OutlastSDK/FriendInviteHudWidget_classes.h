// WidgetBlueprintGeneratedClass FriendInviteHudWidget.FriendInviteHudWidget_C
// Size: 0x300 (Inherited: 0x2d8)
struct UFriendInviteHudWidget_C : URBFriendInviteNotificationUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* HideAnim; // 0x2e0(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x2e8(0x08)
	struct UCommonNotificationWidget_C* CommonNotificationWidget; // 0x2f0(0x08)
	float CurrentTime; // 0x2f8(0x04)
	float TotalTime; // 0x2fc(0x04)

	void Finished_26B0BE55452502A8206556BB17217B15(); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.Finished_26B0BE55452502A8206556BB17217B15 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateDisplayTime(float DisplayTime, float totalDisplayTime); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.Event_UpdateDisplayTime // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Accepted(); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.Event_Accepted // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refused(); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.Event_Refused // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Blocked(); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.Event_Blocked // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__FriendInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnBlockButtonClicked__DelegateSignature(); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.BndEvt__FriendInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnBlockButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__FriendInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnAcceptedButtonClicked__DelegateSignature(); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.BndEvt__FriendInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnAcceptedButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__FriendInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnDeclinedButtonClicked__DelegateSignature(); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.BndEvt__FriendInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnDeclinedButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_FriendInviteHudWidget(int32_t EntryPoint); // Function FriendInviteHudWidget.FriendInviteHudWidget_C.ExecuteUbergraph_FriendInviteHudWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

