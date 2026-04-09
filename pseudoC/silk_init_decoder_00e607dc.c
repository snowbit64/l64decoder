// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_init_decoder
// Entry Point: 00e607dc
// Size: 80 bytes
// Signature: undefined silk_init_decoder(void)


undefined8 silk_init_decoder(undefined4 *param_1)

{
  memset(param_1,0,0x10c0);
  param_1[0x418] = 0;
  param_1[0x252] = 1;
  *param_1 = 0x10000;
  silk_CNG_Reset(param_1);
  silk_PLC_Reset(param_1);
  return 0;
}


