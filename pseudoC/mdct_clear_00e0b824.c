// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mdct_clear
// Entry Point: 00e0b824
// Size: 64 bytes
// Signature: undefined mdct_clear(void)


void mdct_clear(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
    }
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}


