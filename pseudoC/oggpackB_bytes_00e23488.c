// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_bytes
// Entry Point: 00e23488
// Size: 36 bytes
// Signature: undefined oggpackB_bytes(void)


long oggpackB_bytes(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 1) + 7;
  iVar2 = *(int *)(param_1 + 1) + 0xe;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return *param_1 + (long)(iVar2 >> 3);
}


