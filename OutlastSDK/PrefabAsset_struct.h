// Enum PrefabAsset.EPrefabVariantRuleType
enum class EPrefabVariantRuleType : uint8 {
	SkipProp = 0,
	EPrefabVariantRuleType_MAX = 1
};

// Enum PrefabAsset.EPTUITheme
enum class EPTUITheme : uint8 {
	Default = 0,
	Dark = 1,
	EPTUITheme_MAX = 2
};

// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8 {
	WireBox = 0,
	WireSphere = 1,
	EPrefabVisualizerType_MAX = 2
};

// ScriptStruct PrefabAsset.PrefabVariantRule
// Size: 0x20 (Inherited: 0x00)
struct FPrefabVariantRule {
	struct FName Scope; // 0x00(0x08)
	struct FString Rule; // 0x08(0x10)
	enum class EPrefabVariantRuleType RuleType; // 0x18(0x01)
	bool bEnable; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

