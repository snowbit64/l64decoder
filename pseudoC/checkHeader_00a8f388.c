// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkHeader
// Entry Point: 00a8f388
// Size: 96 bytes
// Signature: undefined __cdecl checkHeader(uchar * param_1, uint param_2)


/* GS2DUtil::checkHeader(unsigned char const*, unsigned int) */

bool GS2DUtil::checkHeader(uchar *param_1,uint param_2)

{
  if ((((0x4b < param_2) && (*param_1 == *s_GS2DHeaderID)) && (param_1[1] == s_GS2DHeaderID[1])) &&
     (param_1[2] == s_GS2DHeaderID[2])) {
    return param_1[3] == s_GS2DHeaderID[3];
  }
  return false;
}


