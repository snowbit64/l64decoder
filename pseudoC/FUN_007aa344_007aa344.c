// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa344
// Entry Point: 007aa344
// Size: 24 bytes
// Signature: undefined FUN_007aa344(void)


void FUN_007aa344(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x193);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


