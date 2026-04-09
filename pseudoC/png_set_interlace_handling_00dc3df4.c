// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_interlace_handling
// Entry Point: 00dc3df4
// Size: 44 bytes
// Signature: undefined png_set_interlace_handling(void)


undefined8 png_set_interlace_handling(long param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x29c) != '\0')) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 2;
    return 7;
  }
  return 1;
}


