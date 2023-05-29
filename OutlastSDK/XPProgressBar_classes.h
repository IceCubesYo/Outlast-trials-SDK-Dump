// WidgetBlueprintGeneratedClass XPProgressBar.XPProgressBar_C
// Size: 0x2b4 (Inherited: 0x260)
struct UXPProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* BarFadeOut; // 0x268(0x08)
	struct UImage* Image_132; // 0x270(0x08)
	struct UHorizontalBox* LineIndicatorContainer; // 0x278(0x08)
	struct UOverlay* NewProgressContainer; // 0x280(0x08)
	struct UProgressBar* NewProgressionBar; // 0x288(0x08)
	struct UImage* progressBackground; // 0x290(0x08)
	struct UOverlay* ProgressContainer; // 0x298(0x08)
	struct UProgressBar* ProgressionBar; // 0x2a0(0x08)
	int32_t PlayerLevel; // 0x2a8(0x04)
	int32_t StartXp; // 0x2ac(0x04)
	int32_t CurrentXp; // 0x2b0(0x04)

	void Update(int32_t PlayerLevel, int32_t StartXp, int32_t CurrentXp); // Function XPProgressBar.XPProgressBar_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitProgressBar(struct UProgressBar* ProgressBar, int32_t Xp); // Function XPProgressBar.XPProgressBar_C.InitProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function XPProgressBar.XPProgressBar_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(int32_t PlayerLevel, int32_t StartXp, int32_t CurrentXp); // Function XPProgressBar.XPProgressBar_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Finished_9C6F7CD84E0F470B1412B4BAA721AA7E(); // Function XPProgressBar.XPProgressBar_C.Finished_9C6F7CD84E0F470B1412B4BAA721AA7E // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshWithAnimation(); // Function XPProgressBar.XPProgressBar_C.RefreshWithAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_XPProgressBar(int32_t EntryPoint); // Function XPProgressBar.XPProgressBar_C.ExecuteUbergraph_XPProgressBar // (Final|UbergraphFunction) // @ game+0x201e6d4
};

