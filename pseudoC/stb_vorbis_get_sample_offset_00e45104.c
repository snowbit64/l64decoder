// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_sample_offset
// Entry Point: 00e45104
// Size: 24 bytes
// Signature: undefined stb_vorbis_get_sample_offset(void)


undefined4 stb_vorbis_get_sample_offset(long param_1)

{
  if (*(int *)(param_1 + 0x584) != 0) {
    return *(undefined4 *)(param_1 + 0x580);
  }
  return 0xffffffff;
}


