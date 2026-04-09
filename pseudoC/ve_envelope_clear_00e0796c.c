// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _ve_envelope_clear
// Entry Point: 00e0796c
// Size: 160 bytes
// Signature: undefined _ve_envelope_clear(void)


void _ve_envelope_clear(undefined8 *param_1)

{
  mdct_clear(param_1 + 2);
  free((void *)param_1[8]);
  free((void *)param_1[0xb]);
  free((void *)param_1[0xe]);
  free((void *)param_1[0x11]);
  free((void *)param_1[0x14]);
  free((void *)param_1[0x17]);
  free((void *)param_1[0x1a]);
  free((void *)param_1[6]);
  free((void *)param_1[0x1c]);
  free((void *)param_1[0x1e]);
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


