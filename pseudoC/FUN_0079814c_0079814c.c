// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079814c
// Entry Point: 0079814c
// Size: 40 bytes
// Signature: undefined FUN_0079814c(void)


void FUN_0079814c(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setViewDistanceCoeff((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


