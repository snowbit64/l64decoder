// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007984f0
// Entry Point: 007984f0
// Size: 40 bytes
// Signature: undefined FUN_007984f0(void)


void FUN_007984f0(long param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setUseDOF((HardwareScalability *)(lVar1 + 0x198),*(bool *)(param_1 + 0x100));
  return;
}


