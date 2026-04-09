// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a7234
// Entry Point: 007a7234
// Size: 32 bytes
// Signature: undefined FUN_007a7234(void)


void FUN_007a7234(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_2 + 0x100) = 0;
  lVar1 = *(long *)(param_1 + 0x110);
  *(undefined4 *)(param_2 + 0x108) = 1;
  if (lVar1 != 0) {
    *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lVar1 + -8);
  }
  return;
}


