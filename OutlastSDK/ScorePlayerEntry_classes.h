// WidgetBlueprintGeneratedClass ScorePlayerEntry.ScorePlayerEntry_C
// Size: 0x2c8 (Inherited: 0x268)
struct UScorePlayerEntry_C : URBPhotoFinishEntry {
	struct UImage* BackgroundImage; // 0x268(0x08)
	struct USizeBox* DeathSizeBox; // 0x270(0x08)
	struct UImage* Image_80; // 0x278(0x08)
	struct UTextBlock* NameText; // 0x280(0x08)
	struct UImage* PlatformIcon; // 0x288(0x08)
	struct UImage* ProfileIcon; // 0x290(0x08)
	struct USizeBox* ScoreSizeBox; // 0x298(0x08)
	struct UTextBlock* ScoreText; // 0x2a0(0x08)
	struct FString Name; // 0x2a8(0x10)
	enum class EProfilePlatform Platform; // 0x2b8(0x01)
	bool Dead; // 0x2b9(0x01)
	char pad_2BA[0x2]; // 0x2ba(0x02)
	float Score; // 0x2bc(0x04)
	struct UTexture2D* Icon; // 0x2c0(0x08)

	void Setup(); // Function ScorePlayerEntry.ScorePlayerEntry_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(struct FString Name, enum class EProfilePlatform Platform, bool bDead, float Score, struct TSoftObjectPtr<UTexture2D> Icon); // Function ScorePlayerEntry.ScorePlayerEntry_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

