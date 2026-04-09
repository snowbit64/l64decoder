// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007980f4
// Entry Point: 007980f4
// Size: 40 bytes
// Signature: undefined FUN_007980f4(void)


void FUN_007980f4(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setReflectionMapRatio((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


