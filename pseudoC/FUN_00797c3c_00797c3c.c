// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797c3c
// Entry Point: 00797c3c
// Size: 40 bytes
// Signature: undefined FUN_00797c3c(void)


void FUN_00797c3c(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setUiResolutionScaling((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


