// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_pack_bytes_left
// Entry Point: 00dede28
// Size: 40 bytes
// Signature: undefined oc_pack_bytes_left(void)


long oc_pack_bytes_left(long param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return -1;
  }
  return (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) +
         (long)(*(int *)(param_1 + 0x18) >> 3);
}


