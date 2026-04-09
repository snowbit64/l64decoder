// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079874c
// Entry Point: 0079874c
// Size: 56 bytes
// Signature: undefined FUN_0079874c(void)


void FUN_0079874c(char **param_1)

{
  DISCRETE_PERFORMANCE_SETTING DVar1;
  long lVar2;
  
  lVar2 = EngineManager::getInstance();
  DVar1 = HardwareScalability::getDiscretePerformanceSettingFromStr(*param_1);
  HardwareScalability::setDiscretePerformanceSetting((HardwareScalability *)(lVar2 + 0x198),DVar1);
  return;
}


