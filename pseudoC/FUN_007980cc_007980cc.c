// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007980cc
// Entry Point: 007980cc
// Size: 40 bytes
// Signature: undefined FUN_007980cc(void)


void FUN_007980cc(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setMaxNumReflectionPlanes((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


