// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vi_psy_free
// Entry Point: 00e0c9b4
// Size: 52 bytes
// Signature: undefined _vi_psy_free(void)


void _vi_psy_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x208);
    free(param_1);
    return;
  }
  return;
}


