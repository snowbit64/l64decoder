// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compress
// Entry Point: 00de7aec
// Size: 16 bytes
// Signature: undefined __cdecl Compress(uchar * param_1, void * param_2, int param_3)


/* squish::Compress(unsigned char const*, void*, int) */

void squish::Compress(uchar *param_1,void *param_2,int param_3)

{
  CompressMasked(param_1,0xffff,param_2,param_3);
  return;
}


