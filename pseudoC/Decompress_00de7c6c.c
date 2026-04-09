// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decompress
// Entry Point: 00de7c6c
// Size: 132 bytes
// Signature: undefined __cdecl Decompress(uchar * param_1, void * param_2, int param_3)


/* squish::Decompress(unsigned char*, void const*, int) */

void squish::Decompress(uchar *param_1,void *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 & 7;
  if (uVar1 != 4 && uVar1 != 2) {
    uVar1 = 1;
  }
  DecompressColour(param_1,(void *)((long)param_2 + (ulong)((uVar1 & 6) != 0) * 8),
                   (bool)((byte)uVar1 & 1));
  if ((uVar1 >> 1 & 1) == 0) {
    if (uVar1 >> 2 == 0) {
      return;
    }
    DecompressAlphaDxt5(param_1,param_2);
    return;
  }
  DecompressAlphaDxt3(param_1,param_2);
  return;
}


