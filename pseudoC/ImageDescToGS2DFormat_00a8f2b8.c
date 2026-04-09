// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ImageDescToGS2DFormat
// Entry Point: 00a8f2b8
// Size: 52 bytes
// Signature: undefined __cdecl ImageDescToGS2DFormat(FORMAT param_1)


/* GS2DUtil::ImageDescToGS2DFormat(ImageDesc::FORMAT) */

long GS2DUtil::ImageDescToGS2DFormat(FORMAT param_1)

{
  long lVar1;
  FORMAT *pFVar2;
  
  lVar1 = 0;
  pFVar2 = &s_pixelFormatInfo;
  do {
    if (*pFVar2 == param_1) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
    pFVar2 = pFVar2 + 3;
  } while (lVar1 != 0x2c);
  return 0;
}


