// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797e50
// Entry Point: 00797e50
// Size: 40 bytes
// Signature: undefined FUN_00797e50(void)


void FUN_00797e50(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setShadowQuality((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


