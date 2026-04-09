// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798498
// Entry Point: 00798498
// Size: 40 bytes
// Signature: undefined FUN_00798498(void)


void FUN_00798498(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setBloomQuality((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


