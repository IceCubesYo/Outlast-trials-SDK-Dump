// WidgetBlueprintGeneratedClass MateHealthBar.MateHealthBar_C
// Size: 0x2ed (Inherited: 0x260)
struct UMateHealthBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeInFadeOut; // 0x268(0x08)
	struct UWidgetAnimation* FadeInBar; // 0x270(0x08)
	struct UMateHealthBarElement_C* FifthBracket; // 0x278(0x08)
	struct UMateHealthBarElement_C* FirstBracket; // 0x280(0x08)
	struct UMateHealthBarElement_C* FourBracket; // 0x288(0x08)
	struct UHorizontalBox* HealthBar; // 0x290(0x08)
	struct UInvalidationBox* InvalidationBox_HealthBar; // 0x298(0x08)
	struct UMateHealthBarElement_C* SecondBracket; // 0x2a0(0x08)
	struct UMateHealthBarElement_C* ThirdBracket; // 0x2a8(0x08)
	bool ShouldShowEmpty; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float CurrentHealth; // 0x2b4(0x04)
	float PreviousHealth; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UMaterialInstanceDynamic* HealthBarMaterial; // 0x2c0(0x08)
	struct TArray<struct UMateHealthBarElement_C*> MateHealthBrackets; // 0x2c8(0x10)
	struct UMateHealthBarElement_C* CurrentAnimatedBracket; // 0x2d8(0x08)
	int32_t FinishingBracket; // 0x2e0(0x04)
	bool WasDown; // 0x2e4(0x01)
	bool OngoingTweens; // 0x2e5(0x01)
	char pad_2E6[0x2]; // 0x2e6(0x02)
	float BarHeight; // 0x2e8(0x04)
	bool BracketsInitialized; // 0x2ec(0x01)

	void TryConstructBracketsArray(); // Function MateHealthBar.MateHealthBar_C.TryConstructBracketsArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateFifthBarVisibility(bool Show); // Function MateHealthBar.MateHealthBar_C.UpdateFifthBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ChainTweens(); // Function MateHealthBar.MateHealthBar_C.ChainTweens // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ProcessHealthEvent(float newHealth, bool SkipAnims); // Function MateHealthBar.MateHealthBar_C.ProcessHealthEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function MateHealthBar.MateHealthBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MateHealthBar(int32_t EntryPoint); // Function MateHealthBar.MateHealthBar_C.ExecuteUbergraph_MateHealthBar // (Final|UbergraphFunction) // @ game+0x201e6d4
};

