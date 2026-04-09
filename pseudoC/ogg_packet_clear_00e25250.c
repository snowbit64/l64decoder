// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_packet_clear
// Entry Point: 00e25250
// Size: 48 bytes
// Signature: undefined ogg_packet_clear(void)


void ogg_packet_clear(void **param_1)

{
  free(*param_1);
  param_1[3] = (void *)0x0;
  param_1[2] = (void *)0x0;
  param_1[5] = (void *)0x0;
  param_1[4] = (void *)0x0;
  param_1[1] = (void *)0x0;
  *param_1 = (void *)0x0;
  return;
}


