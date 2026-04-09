// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_packet_iskeyframe
// Entry Point: 00df50e4
// Size: 52 bytes
// Signature: undefined th_packet_iskeyframe(void)


uint th_packet_iskeyframe(byte **param_1)

{
  if ((long)param_1[1] < 1) {
    return 0;
  }
  if (-1 < (char)**param_1) {
    return (**param_1 >> 6 ^ 0xffffffff) & 1;
  }
  return 0xffffffff;
}


