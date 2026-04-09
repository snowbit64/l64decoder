// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079801c
// Entry Point: 0079801c
// Size: 40 bytes
// Signature: undefined FUN_0079801c(void)


void FUN_0079801c(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setMaxNumShadowLights((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


