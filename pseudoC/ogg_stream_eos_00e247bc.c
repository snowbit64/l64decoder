// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_eos
// Entry Point: 00e247bc
// Size: 28 bytes
// Signature: undefined ogg_stream_eos(void)


undefined4 ogg_stream_eos(long *param_1)

{
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    return *(undefined4 *)(param_1 + 0x2e);
  }
  return 1;
}


