// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_halfrate
// Entry Point: 00e1d7b8
// Size: 48 bytes
// Signature: undefined vorbis_synthesis_halfrate(void)


undefined8 vorbis_synthesis_halfrate(long param_1,int param_2)

{
  if ((param_2 != 0) && (**(long **)(param_1 + 0x30) < 0x41)) {
    return 0xffffffff;
  }
  *(uint *)(*(long **)(param_1 + 0x30) + 0x2d2) = (uint)(param_2 != 0);
  return 0;
}


