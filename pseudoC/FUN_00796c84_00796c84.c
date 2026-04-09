// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796c84
// Entry Point: 00796c84
// Size: 52 bytes
// Signature: undefined FUN_00796c84(void)


void FUN_00796c84(long param_1)

{
  byte bVar1;
  
  *(undefined4 *)(param_1 + 0x108) = 3;
  bVar1 = AndroidSysUtil::getIsUserSignedIn();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


