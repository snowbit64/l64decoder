// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798304
// Entry Point: 00798304
// Size: 40 bytes
// Signature: undefined FUN_00798304(void)


void FUN_00798304(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setTerrainQuality((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


