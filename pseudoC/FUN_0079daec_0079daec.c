// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079daec
// Entry Point: 0079daec
// Size: 44 bytes
// Signature: undefined FUN_0079daec(void)


void FUN_0079daec(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = GenericSaveGameUtil::getReadSaveGameProgress();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


