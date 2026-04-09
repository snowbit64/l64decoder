// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007983dc
// Entry Point: 007983dc
// Size: 48 bytes
// Signature: undefined FUN_007983dc(void)


void FUN_007983dc(long param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x1dc);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


