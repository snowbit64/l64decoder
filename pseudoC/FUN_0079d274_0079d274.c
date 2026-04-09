// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079d274
// Entry Point: 0079d274
// Size: 44 bytes
// Signature: undefined FUN_0079d274(void)


void FUN_0079d274(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = GenericSaveGameUtil::getNumSaveGames();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


