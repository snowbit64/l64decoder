// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797cec
// Entry Point: 00797cec
// Size: 40 bytes
// Signature: undefined FUN_00797cec(void)


void FUN_00797cec(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setSkipMipmaps((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


