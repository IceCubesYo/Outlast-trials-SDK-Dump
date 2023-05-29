// WidgetBlueprintGeneratedClass PlayerPingIcon.PlayerPingIcon_C
// Size: 0x388 (Inherited: 0x348)
struct UPlayerPingIcon_C : URBHUDPlayerPingIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* PingBounce; // 0x350(0x08)
	struct USizeBox* IconSize; // 0x358(0x08)
	struct USizeBox* IconSize_2; // 0x360(0x08)
	struct UImage* ItemIcon; // 0x368(0x08)
	struct USizeBox* ItemIconSize; // 0x370(0x08)
	struct UImage* ObjectiveIcon; // 0x378(0x08)
	struct UImage* ObjectiveIcon_2; // 0x380(0x08)

	void UpdateOpacity(); // Function PlayerPingIcon.PlayerPingIcon_C.UpdateOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDesiredSize(); // Function PlayerPingIcon.PlayerPingIcon_C.UpdateDesiredSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function PlayerPingIcon.PlayerPingIcon_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void UpdateDisplay(); // Function PlayerPingIcon.PlayerPingIcon_C.UpdateDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupIcon(struct UTexture2D* Icon); // Function PlayerPingIcon.PlayerPingIcon_C.SetupIcon // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function PlayerPingIcon.PlayerPingIcon_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function PlayerPingIcon.PlayerPingIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PlayerPingIcon(int32_t EntryPoint); // Function PlayerPingIcon.PlayerPingIcon_C.ExecuteUbergraph_PlayerPingIcon // (Final|UbergraphFunction) // @ game+0x201e6d4
};

