// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_writeclear
// Entry Point: 00e22930
// Size: 52 bytes
// Signature: undefined oggpack_writeclear(void)


void oggpack_writeclear(undefined8 *param_1)

{
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


