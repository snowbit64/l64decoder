// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vp_global_free
// Entry Point: 00e0c948
// Size: 24 bytes
// Signature: undefined _vp_global_free(void)


void _vp_global_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    free(param_1);
    return;
  }
  return;
}


