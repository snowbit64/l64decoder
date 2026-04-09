// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeBC1Block_RGBA_Squish
// Entry Point: 00a8ebb0
// Size: 8 bytes
// Signature: undefined __cdecl encodeBC1Block_RGBA_Squish(uchar * param_1, uchar * param_2)


/* DXTUtil::encodeBC1Block_RGBA_Squish(unsigned char const*, unsigned char*) */

void DXTUtil::encodeBC1Block_RGBA_Squish(uchar *param_1,uchar *param_2)

{
  squish::Compress(param_1,param_2,0x51);
  return;
}


