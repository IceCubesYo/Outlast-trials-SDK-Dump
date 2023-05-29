// ScriptStruct CableComponent.CableParticle
// Size: 0x1c (Inherited: 0x00)
struct FCableParticle {
	bool bFree; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Position; // 0x04(0x0c)
	struct FVector OldPosition; // 0x10(0x0c)
};

