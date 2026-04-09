// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797f94
// Entry Point: 00797f94
// Size: 48 bytes
// Signature: undefined FUN_00797f94(void)


void FUN_00797f94(long param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


