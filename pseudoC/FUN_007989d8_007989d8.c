// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007989d8
// Entry Point: 007989d8
// Size: 48 bytes
// Signature: undefined FUN_007989d8(void)


void FUN_007989d8(long param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x220);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


