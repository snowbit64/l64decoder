// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007981cc
// Entry Point: 007981cc
// Size: 48 bytes
// Signature: undefined FUN_007981cc(void)


void FUN_007981cc(long param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x1cc);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


