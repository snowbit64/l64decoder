// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798254
// Entry Point: 00798254
// Size: 40 bytes
// Signature: undefined FUN_00798254(void)


void FUN_00798254(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setLODDistanceCoeff((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


