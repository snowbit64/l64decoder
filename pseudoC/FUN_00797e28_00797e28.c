// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797e28
// Entry Point: 00797e28
// Size: 40 bytes
// Signature: undefined FUN_00797e28(void)


void FUN_00797e28(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setMSAA((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


