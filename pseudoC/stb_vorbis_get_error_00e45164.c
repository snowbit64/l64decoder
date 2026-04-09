// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_error
// Entry Point: 00e45164
// Size: 16 bytes
// Signature: undefined stb_vorbis_get_error(void)


undefined4 stb_vorbis_get_error(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return uVar1;
}


