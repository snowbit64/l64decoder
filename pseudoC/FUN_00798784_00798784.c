// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798784
// Entry Point: 00798784
// Size: 68 bytes
// Signature: undefined FUN_00798784(void)


void FUN_00798784(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = EngineManager::getInstance();
  uVar2 = HardwareScalability::getDiscretePerformanceSettingStr
                    (*(DISCRETE_PERFORMANCE_SETTING *)(lVar1 + 0x2a0));
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


