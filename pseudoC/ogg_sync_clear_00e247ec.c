// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_sync_clear
// Entry Point: 00e247ec
// Size: 56 bytes
// Signature: undefined ogg_sync_clear(void)


undefined8 ogg_sync_clear(void **param_1)

{
  if (param_1 != (void **)0x0) {
    if (*param_1 != (void *)0x0) {
      free(*param_1);
    }
    param_1[1] = (void *)0x0;
    *param_1 = (void *)0x0;
    param_1[3] = (void *)0x0;
    param_1[2] = (void *)0x0;
  }
  return 0;
}


