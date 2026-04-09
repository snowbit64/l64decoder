// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797fec
// Entry Point: 00797fec
// Size: 48 bytes
// Signature: undefined FUN_00797fec(void)


void FUN_00797fec(long param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x1ec);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


