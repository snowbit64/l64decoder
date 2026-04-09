// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_writealign
// Entry Point: 00e22af4
// Size: 32 bytes
// Signature: undefined oggpack_writealign(void)


void oggpack_writealign(long param_1)

{
  if (0 < *(int *)(param_1 + 8)) {
    oggpack_write(param_1,0,8 - *(int *)(param_1 + 8));
    return;
  }
  return;
}


