// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_free_default
// Entry Point: 00db0ea0
// Size: 20 bytes
// Signature: undefined png_free_default(void)


void png_free_default(long param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    free(param_2);
    return;
  }
  return;
}


