// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x278 (Inherited: 0xc0)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_C0[0x110]; // 0xc0(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1d0(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x220(0x50)
	char pad_270[0x8]; // 0x270(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x38c6a08
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x340 (Inherited: 0x248)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x248(0x68)
	float TimeStepMultiplier; // 0x2b0(0x04)
	int32_t CollisionIterations; // 0x2b4(0x04)
	int32_t PushOutIterations; // 0x2b8(0x04)
	int32_t PushOutPairIterations; // 0x2bc(0x04)
	float ClusterConnectionFactor; // 0x2c0(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2c4(0x01)
	bool DoGenerateCollisionData; // 0x2c5(0x01)
	char pad_2C6[0x2]; // 0x2c6(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2c8(0x10)
	bool DoGenerateBreakingData; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2dc(0x10)
	bool DoGenerateTrailingData; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2f0(0x10)
	float MassScale; // 0x300(0x04)
	bool bGenerateContactGraph; // 0x304(0x01)
	bool bHasFloor; // 0x305(0x01)
	char pad_306[0x2]; // 0x306(0x02)
	float FloorHeight; // 0x308(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x30c(0x03)
	char pad_30F[0x1]; // 0x30f(0x01)
	struct UBillboardComponent* SpriteComponent; // 0x310(0x08)
	char pad_318[0x18]; // 0x318(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x1d21600
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x38c6af0
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

