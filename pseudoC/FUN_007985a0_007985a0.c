// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007985a0
// Entry Point: 007985a0
// Size: 40 bytes
// Signature: undefined FUN_007985a0(void)


void FUN_007985a0(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setShadingRateQuality((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


