// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_check
// Entry Point: 00e23bf0
// Size: 28 bytes
// Signature: undefined ogg_stream_check(void)


int ogg_stream_check(long *param_1)

{
  if (param_1 != (long *)0x0) {
    return -(uint)(*param_1 == 0);
  }
  return -1;
}


