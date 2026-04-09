// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798074
// Entry Point: 00798074
// Size: 40 bytes
// Signature: undefined FUN_00798074(void)


void FUN_00798074(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setShaderQuality((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


