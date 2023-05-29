// WidgetBlueprintGeneratedClass LevelIndicatorWidget.LevelIndicatorWidget_C
// Size: 0x2b0 (Inherited: 0x260)
struct ULevelIndicatorWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* LevelUp; // 0x268(0x08)
	struct UImage* fx; // 0x270(0x08)
	struct UImage* LevelBrush; // 0x278(0x08)
	struct UImage* LevelBrushLevelUp; // 0x280(0x08)
	struct UTextBlock* LevelNumberTxt; // 0x288(0x08)
	struct UImage* LevelUpBackground; // 0x290(0x08)
	struct FMulticastInlineDelegate LevelUpAnimationFinished; // 0x298(0x10)
	int32_t Level; // 0x2a8(0x04)
	int32_t Release Count; // 0x2ac(0x04)

	void PlayerLevelUpAnimation(); // Function LevelIndicatorWidget.LevelIndicatorWidget_C.PlayerLevelUpAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(int32_t Level, int32_t ReleaseCount); // Function LevelIndicatorWidget.LevelIndicatorWidget_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function LevelIndicatorWidget.LevelIndicatorWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void LevelAnimationFinished(); // Function LevelIndicatorWidget.LevelIndicatorWidget_C.LevelAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_LevelIndicatorWidget(int32_t EntryPoint); // Function LevelIndicatorWidget.LevelIndicatorWidget_C.ExecuteUbergraph_LevelIndicatorWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
	void LevelUpAnimationFinished__DelegateSignature(); // Function LevelIndicatorWidget.LevelIndicatorWidget_C.LevelUpAnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

