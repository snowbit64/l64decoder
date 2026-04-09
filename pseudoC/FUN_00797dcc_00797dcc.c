// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797dcc
// Entry Point: 00797dcc
// Size: 40 bytes
// Signature: undefined FUN_00797dcc(void)


void FUN_00797dcc(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setAnisotropy((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


