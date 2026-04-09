// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079dabc
// Entry Point: 0079dabc
// Size: 48 bytes
// Signature: undefined FUN_0079dabc(void)


void FUN_0079dabc(long param_1)

{
  byte bVar1;
  
  bVar1 = GenericSaveGameUtil::hasReadSaveGameProgress();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


