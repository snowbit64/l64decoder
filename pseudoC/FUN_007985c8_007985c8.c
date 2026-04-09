// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007985c8
// Entry Point: 007985c8
// Size: 48 bytes
// Signature: undefined FUN_007985c8(void)


void FUN_007985c8(long param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 600);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


