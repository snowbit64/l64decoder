// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC5Block_RGBA
// Entry Point: 00a8bc9c
// Size: 72 bytes
// Signature: undefined __cdecl decodeBC5Block_RGBA(uchar * param_1, uchar * param_2, uint param_3)


/* DXTUtil::decodeBC5Block_RGBA(unsigned char const*, unsigned char*, unsigned int) */

void DXTUtil::decodeBC5Block_RGBA(uchar *param_1,uchar *param_2,uint param_3)

{
  decode3bppBlock(param_1 + 8,param_2,param_3,4);
  decode3bppBlock(param_1,param_2,param_3,0);
  return;
}


