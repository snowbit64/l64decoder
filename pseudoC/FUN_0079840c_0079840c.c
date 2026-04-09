// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079840c
// Entry Point: 0079840c
// Size: 40 bytes
// Signature: undefined FUN_0079840c(void)


void FUN_0079840c(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setSSAOQuality((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


