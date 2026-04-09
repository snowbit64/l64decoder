// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_zalloc
// Entry Point: 00da8a10
// Size: 16 bytes
// Signature: undefined png_zalloc(void)


void png_zalloc(long param_1,ulong param_2,uint param_3)

{
  if (param_1 != 0) {
    png_malloc_warn(param_1,(ulong)param_3 * (param_2 & 0xffffffff));
    return;
  }
  return;
}


