// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_writecheck
// Entry Point: 00e226e0
// Size: 32 bytes
// Signature: undefined oggpack_writecheck(void)


int oggpack_writecheck(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return -(uint)(*(long *)(param_1 + 0x20) == 0);
  }
  return -1;
}


