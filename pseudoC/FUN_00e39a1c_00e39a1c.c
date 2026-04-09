// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e39a1c
// Entry Point: 00e39a1c
// Size: 28 bytes
// Signature: undefined FUN_00e39a1c(void)


void FUN_00e39a1c(undefined8 param_1,long *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 & 1) != 0) {
    iVar1 = *(int *)(*param_2 + 0x78);
    if (0 < iVar1) {
      *(int *)(*param_2 + 0x78) = iVar1 + -1;
    }
  }
  return;
}


