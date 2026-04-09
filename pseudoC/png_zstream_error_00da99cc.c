// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_zstream_error
// Entry Point: 00da99cc
// Size: 64 bytes
// Signature: undefined png_zstream_error(void)


void png_zstream_error(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x1a8) != 0) {
    return;
  }
  if (param_2 + 7U < 10) {
    *(undefined **)(param_1 + 0x1a8) =
         &DAT_00549c08 + *(int *)(&DAT_00549c08 + (long)(int)(param_2 + 7U) * 4);
    return;
  }
  *(char **)(param_1 + 0x1a8) = "unexpected zlib return code";
  return;
}


