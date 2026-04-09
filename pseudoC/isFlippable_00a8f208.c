// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isFlippable
// Entry Point: 00a8f208
// Size: 68 bytes
// Signature: undefined __cdecl isFlippable(FORMAT param_1)


/* GS2DUtil::isFlippable(ImageDesc::FORMAT) */

uint GS2DUtil::isFlippable(FORMAT param_1)

{
  ulong uVar1;
  FORMAT *pFVar2;
  
  uVar1 = 0;
  pFVar2 = &s_pixelFormatInfo;
  do {
    if (*pFVar2 == param_1) {
      return (uint)(0x800000ffffe >> (uVar1 & 0x3f)) & 1;
    }
    uVar1 = uVar1 + 1;
    pFVar2 = pFVar2 + 3;
  } while (uVar1 != 0x2c);
  return 0;
}


