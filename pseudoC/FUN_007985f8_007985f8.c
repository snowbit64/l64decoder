// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007985f8
// Entry Point: 007985f8
// Size: 88 bytes
// Signature: undefined FUN_007985f8(void)


void FUN_007985f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = EngineManager::getInstance();
  uVar2 = HardwareScalability::getPerformanceClassStr(*(PERFORMANCE_CLASS *)(lVar1 + 0x1b0));
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  lVar1 = EngineManager::getInstance();
  *(undefined *)(param_1 + 0x110) = *(undefined *)(lVar1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x118) = 3;
  return;
}


