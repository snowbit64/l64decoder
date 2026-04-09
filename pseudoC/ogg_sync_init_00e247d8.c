// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_sync_init
// Entry Point: 00e247d8
// Size: 20 bytes
// Signature: undefined ogg_sync_init(void)


undefined8 ogg_sync_init(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return 0;
}


