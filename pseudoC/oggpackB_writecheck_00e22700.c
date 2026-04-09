// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_writecheck
// Entry Point: 00e22700
// Size: 32 bytes
// Signature: undefined oggpackB_writecheck(void)


int oggpackB_writecheck(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return -(uint)(*(long *)(param_1 + 0x20) == 0);
  }
  return -1;
}


