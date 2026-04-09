// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798650
// Entry Point: 00798650
// Size: 56 bytes
// Signature: undefined FUN_00798650(void)


void FUN_00798650(char **param_1)

{
  PERFORMANCE_CLASS PVar1;
  long lVar2;
  
  lVar2 = EngineManager::getInstance();
  PVar1 = HardwareScalability::getPerformanceClassFromStr(*param_1);
  HardwareScalability::setPerformanceClass((HardwareScalability *)(lVar2 + 0x198),PVar1);
  return;
}


