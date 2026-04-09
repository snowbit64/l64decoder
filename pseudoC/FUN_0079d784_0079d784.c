// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079d784
// Entry Point: 0079d784
// Size: 56 bytes
// Signature: undefined FUN_0079d784(void)


void FUN_0079d784(uint *param_1)

{
  byte bVar1;
  
  bVar1 = GenericSaveGameUtil::getHasSpaceForSaveGame(*param_1,param_1[4]);
  param_1[0x42] = 3;
  *(byte *)(param_1 + 0x40) = bVar1 & 1;
  return;
}


