// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_bytes
// Entry Point: 00e23454
// Size: 36 bytes
// Signature: undefined oggpack_bytes(void)


long oggpack_bytes(long *param_1)

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


