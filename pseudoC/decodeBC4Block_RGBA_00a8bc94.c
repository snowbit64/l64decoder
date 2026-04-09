// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC4Block_RGBA
// Entry Point: 00a8bc94
// Size: 8 bytes
// Signature: undefined __cdecl decodeBC4Block_RGBA(uchar * param_1, uchar * param_2, uint param_3)


/* DXTUtil::decodeBC4Block_RGBA(unsigned char const*, unsigned char*, unsigned int) */

void DXTUtil::decodeBC4Block_RGBA(uchar *param_1,uchar *param_2,uint param_3)

{
  decode3bppBlock(param_1,param_2,param_3,4);
  return;
}


