// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9890
// Entry Point: 007a9890
// Size: 40 bytes
// Signature: undefined FUN_007a9890(void)


void FUN_007a9890(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_2 + 0x100) = 0;
  lVar1 = *(long *)(param_1 + 0x170);
  *(undefined4 *)(param_2 + 0x108) = 1;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2c) != '\0')) {
    *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lVar1 + 0x28);
  }
  return;
}


