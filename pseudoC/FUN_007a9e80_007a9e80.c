// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9e80
// Entry Point: 007a9e80
// Size: 40 bytes
// Signature: undefined FUN_007a9e80(void)


void FUN_007a9e80(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 400);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(undefined4 *)(param_2 + 0x118) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  *(byte *)(param_2 + 0x110) = *(byte *)(param_1 + 400) >> 1 & 1;
  return;
}


