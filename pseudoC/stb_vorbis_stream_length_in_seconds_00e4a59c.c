// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_stream_length_in_seconds
// Entry Point: 00e4a59c
// Size: 48 bytes
// Signature: undefined stb_vorbis_stream_length_in_seconds(void)


float stb_vorbis_stream_length_in_seconds(undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = stb_vorbis_stream_length_in_samples();
  fVar2 = (float)NEON_ucvtf(*param_1);
  return (float)(ulong)uVar1 / fVar2;
}


