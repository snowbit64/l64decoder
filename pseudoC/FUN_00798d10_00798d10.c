// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798d10
// Entry Point: 00798d10
// Size: 40 bytes
// Signature: undefined FUN_00798d10(void)


void FUN_00798d10(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setSharpness((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


