// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res0_free_info
// Entry Point: 00e16490
// Size: 52 bytes
// Signature: undefined res0_free_info(void)


void res0_free_info(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xb20);
    free(param_1);
    return;
  }
  return;
}


