// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC3Block_RGBA
// Entry Point: 00a8bc4c
// Size: 72 bytes
// Signature: undefined __cdecl decodeBC3Block_RGBA(uchar * param_1, uchar * param_2, uint param_3)


/* DXTUtil::decodeBC3Block_RGBA(unsigned char const*, unsigned char*, unsigned int) */

void DXTUtil::decodeBC3Block_RGBA(uchar *param_1,uchar *param_2,uint param_3)

{
  decodeBC1Block_RGBA(param_1 + 8,param_2,param_3,true);
  decode3bppBlock(param_1,param_2,param_3,3);
  return;
}


