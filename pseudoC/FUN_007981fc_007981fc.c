// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007981fc
// Entry Point: 007981fc
// Size: 40 bytes
// Signature: undefined FUN_007981fc(void)


void FUN_007981fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setAllowFoliageShadows
            ((HardwareScalability *)(lVar1 + 0x198),*(bool *)param_1);
  return;
}


