// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a532c
// Entry Point: 007a532c
// Size: 24 bytes
// Signature: undefined FUN_007a532c(void)


void FUN_007a532c(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


