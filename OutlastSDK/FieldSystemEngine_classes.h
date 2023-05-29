// Class FieldSystemEngine.FieldSystemActor
// Size: 0x250 (Inherited: 0x248)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x248(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x560 (Inherited: 0x490)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x490(0x08)
	bool bIsWorldField; // 0x498(0x01)
	bool bIsChaosField; // 0x499(0x01)
	char pad_49A[0x6]; // 0x49a(0x06)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x4a0(0x10)
	struct FFieldObjectCommands ConstructionCommands; // 0x4b0(0x30)
	struct FFieldObjectCommands BufferCommands; // 0x4e0(0x30)
	char pad_510[0x50]; // 0x510(0x50)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x38ce234
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields // (Final|Native|Public|BlueprintCallable) // @ game+0x38ce220
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38ce068
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38cded0
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38cddb4
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38cdc54
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38cdb38
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x38cd9e4
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38cd8c8
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField // (Final|Native|Public|BlueprintCallable) // @ game+0x38cd778
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x38cd628
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xc0 (Inherited: 0xb8)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38ce654
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xc0 (Inherited: 0xb8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38ce5c4
};

// Class FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xc0 (Inherited: 0xb8)
struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	enum class EFieldFilterType FilterType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38ce5c4
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xc0 (Inherited: 0xb8)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38ce654
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xd8 (Inherited: 0xb8)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb8(0x04)
	struct FVector Position; // 0xbc(0x0c)
	int32_t InteriorValue; // 0xc8(0x04)
	int32_t ExteriorValue; // 0xcc(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x38cee48
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xc0 (Inherited: 0xb8)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38cf0cc
};

// Class FieldSystemEngine.WaveScalar
// Size: 0xd8 (Inherited: 0xb8)
struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	struct FVector Position; // 0xbc(0x0c)
	float Wavelength; // 0xc8(0x04)
	float Period; // 0xcc(0x04)
	enum class EWaveFunctionType Function; // 0xd0(0x01)
	enum class EFieldFalloffType Falloff; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)

	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector Position, float Wavelength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x38cf208
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xe0 (Inherited: 0xb8)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	float MinRange; // 0xbc(0x04)
	float MaxRange; // 0xc0(0x04)
	float Default; // 0xc4(0x04)
	float Radius; // 0xc8(0x04)
	struct FVector Position; // 0xcc(0x0c)
	enum class EFieldFalloffType Falloff; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x38cec18
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0xe8 (Inherited: 0xb8)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	float MinRange; // 0xbc(0x04)
	float MaxRange; // 0xc0(0x04)
	float Default; // 0xc4(0x04)
	float Distance; // 0xc8(0x04)
	struct FVector Position; // 0xcc(0x0c)
	struct FVector Normal; // 0xd8(0x0c)
	enum class EFieldFalloffType Falloff; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x38ce998
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x110 (Inherited: 0xb8)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	float MinRange; // 0xbc(0x04)
	float MaxRange; // 0xc0(0x04)
	float Default; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FTransform Transform; // 0xd0(0x30)
	enum class EFieldFalloffType Falloff; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x38ce280
};

// Class FieldSystemEngine.NoiseField
// Size: 0xf0 (Inherited: 0xb8)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb8(0x04)
	float MaxRange; // 0xbc(0x04)
	struct FTransform Transform; // 0xc0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x38ce6e0
};

// Class FieldSystemEngine.UniformVector
// Size: 0xc8 (Inherited: 0xb8)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb8(0x04)
	struct FVector Direction; // 0xbc(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x38cefe4
};

// Class FieldSystemEngine.RadialVector
// Size: 0xc8 (Inherited: 0xb8)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb8(0x04)
	struct FVector Position; // 0xbc(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x38cefe4
};

// Class FieldSystemEngine.RandomVector
// Size: 0xc0 (Inherited: 0xb8)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38cf0cc
};

// Class FieldSystemEngine.OperatorField
// Size: 0xd8 (Inherited: 0xb8)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UFieldNodeBase* RightField; // 0xc0(0x08)
	struct UFieldNodeBase* LeftField; // 0xc8(0x08)
	enum class EFieldOperationType Operation; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38ce844
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xc0 (Inherited: 0xb8)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xb8(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38cf178
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xc0 (Inherited: 0xb8)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xb8(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38cf178
};

// Class FieldSystemEngine.CullingField
// Size: 0xd0 (Inherited: 0xb8)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xb8(0x08)
	struct UFieldNodeBase* Field; // 0xc0(0x08)
	enum class EFieldCullingOperationType Operation; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38ce4bc
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xb8 (Inherited: 0xb8)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38cf164
};

