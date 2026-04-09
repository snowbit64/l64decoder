// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007983b4
// Entry Point: 007983b4
// Size: 40 bytes
// Signature: undefined FUN_007983b4(void)


void FUN_007983b4(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setTyreTracksSegementsCoeff((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


