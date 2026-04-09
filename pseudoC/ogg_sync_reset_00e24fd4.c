// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_sync_reset
// Entry Point: 00e24fd4
// Size: 40 bytes
// Signature: undefined ogg_sync_reset(void)


undefined8 ogg_sync_reset(long param_1)

{
  if (-1 < *(int *)(param_1 + 8)) {
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xffffffff;
}


