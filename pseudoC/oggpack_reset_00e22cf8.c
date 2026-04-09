// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_reset
// Entry Point: 00e22cf8
// Size: 32 bytes
// Signature: undefined oggpack_reset(void)


void oggpack_reset(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[3] = (undefined *)param_1[2];
    *(undefined *)param_1[2] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}


