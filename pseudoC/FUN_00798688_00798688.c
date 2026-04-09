// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798688
// Entry Point: 00798688
// Size: 72 bytes
// Signature: undefined FUN_00798688(void)


void FUN_00798688(long param_1)

{
  PERFORMANCE_CLASS PVar1;
  undefined8 uVar2;
  
  EngineManager::getInstance();
  PVar1 = HardwareScalability::getAutoPerformanceClass();
  uVar2 = HardwareScalability::getPerformanceClassStr(PVar1);
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


