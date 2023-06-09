// Class RawInput.RawInputFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct URawInputFunctionLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FRegisteredDeviceInfo> GetRegisteredDevices(); // Function RawInput.RawInputFunctionLibrary.GetRegisteredDevices // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x16bd808
};

// Class RawInput.RawInputSettings
// Size: 0x50 (Inherited: 0x38)
struct URawInputSettings : UDeveloperSettings {
	struct TArray<struct FRawInputDeviceConfiguration> DeviceConfigurations; // 0x38(0x10)
	bool bRegisterDefaultDevice; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

