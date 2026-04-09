// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797f6c
// Entry Point: 00797f6c
// Size: 40 bytes
// Signature: undefined FUN_00797f6c(void)


void FUN_00797f6c(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setShadowMapFilterSize((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


