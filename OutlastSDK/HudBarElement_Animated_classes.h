// WidgetBlueprintGeneratedClass HudBarElement_Animated.HudBarElement_Animated_C
// Size: 0x2c1 (Inherited: 0x260)
struct UHudBarElement_Animated_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Bracket; // 0x268(0x08)
	struct UImage* FirstDelimiter; // 0x270(0x08)
	struct UImage* SecondDelimiter; // 0x278(0x08)
	struct UMaterialInstanceDynamic* BracketMaterial; // 0x280(0x08)
	bool TweenInProgress; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float TargetValue; // 0x28c(0x04)
	float OriginalValue; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate TweenCompleted; // 0x298(0x10)
	bool Increasing; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct FMulticastInlineDelegate BleedoutCompleted; // 0x2b0(0x10)
	bool Is Start Bracket; // 0x2c0(0x01)

	void ForceValue(float NewValue); // Function HudBarElement_Animated.HudBarElement_Animated_C.ForceValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetEntireBar(bool Empty); // Function HudBarElement_Animated.HudBarElement_Animated_C.SetEntireBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateTween(); // Function HudBarElement_Animated.HudBarElement_Animated_C.UpdateTween // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupNewTween(float NewValue, bool IsStartBracket, bool IsFinishBracket); // Function HudBarElement_Animated.HudBarElement_Animated_C.SetupNewTween // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup Tints(struct FLinearColor Tint, struct FLinearColor BgdTint, struct FLinearColor GlowTint); // Function HudBarElement_Animated.HudBarElement_Animated_C.Setup Tints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function HudBarElement_Animated.HudBarElement_Animated_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function HudBarElement_Animated.HudBarElement_Animated_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HudBarElement_Animated.HudBarElement_Animated_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void StartTween(); // Function HudBarElement_Animated.HudBarElement_Animated_C.StartTween // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_HudBarElement_Animated(int32_t EntryPoint); // Function HudBarElement_Animated.HudBarElement_Animated_C.ExecuteUbergraph_HudBarElement_Animated // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void BleedoutCompleted__DelegateSignature(); // Function HudBarElement_Animated.HudBarElement_Animated_C.BleedoutCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TweenCompleted__DelegateSignature(); // Function HudBarElement_Animated.HudBarElement_Animated_C.TweenCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

