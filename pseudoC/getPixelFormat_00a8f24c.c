// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPixelFormat
// Entry Point: 00a8f24c
// Size: 84 bytes
// Signature: undefined __cdecl getPixelFormat(uint param_1, FORMAT param_2)


/* GS2DUtil::getPixelFormat(unsigned int, ImageDesc::FORMAT) */

ulong GS2DUtil::getPixelFormat(uint param_1,FORMAT param_2)

{
  ulong uVar1;
  FORMAT *pFVar2;
  
  if (param_2 == 0) {
    if (param_1 - 1 < 4) {
      return (ulong)*(uint *)(&DAT_004c5870 + (long)(int)(param_1 - 1) * 4);
    }
  }
  else {
    uVar1 = 0;
    pFVar2 = &s_pixelFormatInfo;
    do {
      if (*pFVar2 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pFVar2 = pFVar2 + 3;
    } while (uVar1 != 0x2c);
  }
  return 0;
}


