// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_reset_serialno
// Entry Point: 00e2503c
// Size: 68 bytes
// Signature: undefined ogg_stream_reset_serialno(void)


undefined8 ogg_stream_reset_serialno(long *param_1,int param_2)

{
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x30] = -1;
    param_1[0x2e] = 0;
    param_1[0x2f] = (long)param_2;
    return 0;
  }
  return 0xffffffff;
}


