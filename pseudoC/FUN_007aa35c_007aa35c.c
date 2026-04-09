// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa35c
// Entry Point: 007aa35c
// Size: 24 bytes
// Signature: undefined FUN_007aa35c(void)


void FUN_007aa35c(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x191);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


