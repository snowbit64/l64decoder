// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797c94
// Entry Point: 00797c94
// Size: 40 bytes
// Signature: undefined FUN_00797c94(void)


void FUN_00797c94(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::set3dResolutionScaling((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


