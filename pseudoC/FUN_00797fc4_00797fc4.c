// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797fc4
// Entry Point: 00797fc4
// Size: 40 bytes
// Signature: undefined FUN_00797fc4(void)


void FUN_00797fc4(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setBaseShadowMapSize((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


