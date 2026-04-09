// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798548
// Entry Point: 00798548
// Size: 40 bytes
// Signature: undefined FUN_00798548(void)


void FUN_00798548(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setCloudQuality((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


