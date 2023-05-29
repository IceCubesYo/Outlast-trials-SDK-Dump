// WidgetBlueprintGeneratedClass MatchAcceptanceNotificationWidget.MatchAcceptanceNotificationWidget_C
// Size: 0x318 (Inherited: 0x2f0)
struct UMatchAcceptanceNotificationWidget_C : URBMatchAcceptanceNotificationUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* HideAnim; // 0x2f8(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x300(0x08)
	struct UCommonNotificationWidget_C* CommonNotificationWidget; // 0x308(0x08)
	float CurrentTime; // 0x310(0x04)
	float TotalTime; // 0x314(0x04)

	void Finished_B968D2F4453AEAEB172D068B95ABDC98(); // Function MatchAcceptanceNotificationWidget.MatchAcceptanceNotificationWidget_C.Finished_B968D2F4453AEAEB172D068B95ABDC98 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function MatchAcceptanceNotificationWidget.MatchAcceptanceNotificationWidget_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateDisplayTime(float DisplayTime, float totalDisplayTime); // Function MatchAcceptanceNotificationWidget.MatchAcceptanceNotificationWidget_C.Event_UpdateDisplayTime // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function MatchAcceptanceNotificationWidget.MatchAcceptanceNotificationWidget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Accepted(); // Function MatchAcceptanceNotificationWidget.MatchAcceptanceNotificationWidget_C.Event_Accepted // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refused(); // Function MatchAcceptanceNotificationWidget.MatchAcceptanceNotificationWidget_C.Event_Refused // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Blocked(); // Function MatchAcceptanceNotificationWidget.MatchAcceptanceNotificationWidget_C.Event_Blocked // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MatchAcceptanceNotificationWidget(int32_t EntryPoint); // Function MatchAcceptanceNotificationWidget.MatchAcceptanceNotificationWidget_C.ExecuteUbergraph_MatchAcceptanceNotificationWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

