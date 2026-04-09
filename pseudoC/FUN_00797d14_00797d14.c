// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797d14
// Entry Point: 00797d14
// Size: 48 bytes
// Signature: undefined FUN_00797d14(void)


void FUN_00797d14(long param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x1fc);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


