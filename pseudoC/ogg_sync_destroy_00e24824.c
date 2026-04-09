// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_sync_destroy
// Entry Point: 00e24824
// Size: 64 bytes
// Signature: undefined ogg_sync_destroy(void)


undefined8 ogg_sync_destroy(void **param_1)

{
  if (param_1 != (void **)0x0) {
    if (*param_1 != (void *)0x0) {
      free(*param_1);
    }
    param_1[1] = (void *)0x0;
    *param_1 = (void *)0x0;
    param_1[3] = (void *)0x0;
    param_1[2] = (void *)0x0;
    free(param_1);
  }
  return 0;
}


