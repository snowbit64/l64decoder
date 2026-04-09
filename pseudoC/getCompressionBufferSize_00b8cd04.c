// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCompressionBufferSize
// Entry Point: 00b8cd04
// Size: 36 bytes
// Signature: undefined __cdecl getCompressionBufferSize(uchar * param_1, int param_2)


/* LZMACompressionUtil::getCompressionBufferSize(unsigned char const*, int) */

int LZMACompressionUtil::getCompressionBufferSize(uchar *param_1,int param_2)

{
  return param_2 + param_2 / 3 + 0x85;
}


