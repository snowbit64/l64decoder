// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_writealign
// Entry Point: 00e22b14
// Size: 32 bytes
// Signature: undefined oggpackB_writealign(void)


void oggpackB_writealign(long param_1)

{
  if (0 < *(int *)(param_1 + 8)) {
    oggpackB_write(param_1,0,8 - *(int *)(param_1 + 8));
    return;
  }
  return;
}


