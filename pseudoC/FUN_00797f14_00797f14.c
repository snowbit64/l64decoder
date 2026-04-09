// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797f14
// Entry Point: 00797f14
// Size: 40 bytes
// Signature: undefined FUN_00797f14(void)


void FUN_00797f14(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setHasShadowFocusBox((HardwareScalability *)(lVar1 + 0x198),*(bool *)param_1)
  ;
  return;
}


