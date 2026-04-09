// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798c84
// Entry Point: 00798c84
// Size: 52 bytes
// Signature: undefined FUN_00798c84(void)


void FUN_00798c84(long param_1)

{
  undefined4 uVar1;
  
  EngineManager::getInstance();
  uVar1 = HardwareScalability::getValarQuality();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


