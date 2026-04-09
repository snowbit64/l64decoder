// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyPlane
// Entry Point: 00c72fb4
// Size: 152 bytes
// Signature: undefined __thiscall copyPlane(TheoraVideoDecoder * this, uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uchar * param_7, uint param_8)


/* TheoraVideoDecoder::copyPlane(unsigned char const*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned char*, unsigned int) */

TheoraVideoDecoder * __thiscall
TheoraVideoDecoder::copyPlane
          (TheoraVideoDecoder *this,uchar *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uchar *param_7,uint param_8)

{
  TheoraVideoDecoder *pTVar1;
  uchar *__src;
  
  __src = param_1 + (param_5 + param_6 * param_2);
  if ((param_2 == param_3) && (param_2 == param_8)) {
    pTVar1 = (TheoraVideoDecoder *)memcpy(param_7,__src,(ulong)(param_4 * param_2));
    return pTVar1;
  }
  if (param_4 != 0) {
    do {
      this = (TheoraVideoDecoder *)memcpy(param_7,__src,(ulong)param_3);
      __src = __src + param_2;
      param_7 = param_7 + param_8;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return this;
}


