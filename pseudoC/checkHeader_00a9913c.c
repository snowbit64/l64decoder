// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkHeader
// Entry Point: 00a9913c
// Size: 64 bytes
// Signature: undefined __cdecl checkHeader(uchar * param_1, uint param_2)


/* PNGUtil::checkHeader(unsigned char const*, unsigned int) */

bool PNGUtil::checkHeader(uchar *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < HEADER_PREFIX_SIZE) {
    return false;
  }
  iVar1 = png_sig_cmp(param_1,0);
  return iVar1 == 0;
}


