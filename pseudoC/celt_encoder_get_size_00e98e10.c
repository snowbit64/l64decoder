// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_encoder_get_size
// Entry Point: 00e98e10
// Size: 68 bytes
// Signature: undefined celt_encoder_get_size(void)


int celt_encoder_get_size(int param_1)

{
  long lVar1;
  
  lVar1 = opus_custom_mode_create(48000,0x3c0,0);
  return (*(int *)(lVar1 + 4) * 4 + *(int *)(lVar1 + 8) * 8 + 0x1000) * param_1 + 0xfc;
}


