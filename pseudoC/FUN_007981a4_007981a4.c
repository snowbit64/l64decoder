// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007981a4
// Entry Point: 007981a4
// Size: 40 bytes
// Signature: undefined FUN_007981a4(void)


void FUN_007981a4(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setFoliageViewDistanceCoeff((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


