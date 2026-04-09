// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079f10c
// Entry Point: 0079f10c
// Size: 24 bytes
// Signature: undefined FUN_0079f10c(void)


void FUN_0079f10c(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 >> 2 & 1;
  return;
}


