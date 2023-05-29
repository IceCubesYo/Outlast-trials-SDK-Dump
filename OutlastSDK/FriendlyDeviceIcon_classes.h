// WidgetBlueprintGeneratedClass FriendlyDeviceIcon.FriendlyDeviceIcon_C
// Size: 0x350 (Inherited: 0x338)
struct UFriendlyDeviceIcon_C : URBHUDFriendlyDeviceIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* FadeIn; // 0x340(0x08)
	struct UImage* Icon; // 0x348(0x08)

	bool ShouldShow(); // Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void UpdateDistanceEffects(); // Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.UpdateDistanceEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDisplay(); // Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.UpdateDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_FriendlyDeviceIcon(int32_t EntryPoint); // Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ExecuteUbergraph_FriendlyDeviceIcon // (Final|UbergraphFunction) // @ game+0x201e6d4
};

