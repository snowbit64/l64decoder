// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_InitDecoder
// Entry Point: 00e5fa4c
// Size: 56 bytes
// Signature: undefined silk_InitDecoder(void)


void silk_InitDecoder(long param_1)

{
  silk_init_decoder();
  silk_init_decoder(param_1 + 0x10c0);
  *(undefined8 *)(param_1 + 0x2180) = 0;
  *(undefined4 *)(param_1 + 0x2188) = 0;
  *(undefined4 *)(param_1 + 0x2194) = 0;
  return;
}


