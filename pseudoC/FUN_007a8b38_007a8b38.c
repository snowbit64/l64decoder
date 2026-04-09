// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8b38
// Entry Point: 007a8b38
// Size: 24 bytes
// Signature: undefined FUN_007a8b38(void)


void FUN_007a8b38(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 >> 7;
  return;
}


