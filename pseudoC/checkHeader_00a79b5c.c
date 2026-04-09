// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkHeader
// Entry Point: 00a79b5c
// Size: 68 bytes
// Signature: undefined __cdecl checkHeader(uchar * param_1, uint param_2)


/* DDSUtil::checkHeader(unsigned char const*, unsigned int) */

bool DDSUtil::checkHeader(uchar *param_1,uint param_2)

{
  if ((((0x7f < param_2) && (*param_1 == 'D')) && (param_1[1] == 'D')) && (param_1[2] == 'S')) {
    return param_1[3] == ' ';
  }
  return false;
}


