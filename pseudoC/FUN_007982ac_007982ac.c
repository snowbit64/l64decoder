// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007982ac
// Entry Point: 007982ac
// Size: 40 bytes
// Signature: undefined FUN_007982ac(void)


void FUN_007982ac(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setTerrainLODDistanceCoeff((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


