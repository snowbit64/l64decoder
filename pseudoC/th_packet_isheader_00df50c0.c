// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_packet_isheader
// Entry Point: 00df50c0
// Size: 36 bytes
// Signature: undefined th_packet_isheader(void)


byte th_packet_isheader(byte **param_1)

{
  if (0 < (long)param_1[1]) {
    return **param_1 >> 7;
  }
  return 0;
}


