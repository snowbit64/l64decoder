// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNeedFlipY
// Entry Point: 00a9524c
// Size: 28 bytes
// Signature: undefined __cdecl getNeedFlipY(ORIGIN param_1, ORIGIN param_2, TEXTURE_TYPE param_3)


/* ImageUtil::getNeedFlipY(ImageDesc::ORIGIN, ImageDesc::ORIGIN, ImageDesc::TEXTURE_TYPE) */

bool ImageUtil::getNeedFlipY(ORIGIN param_1,ORIGIN param_2,TEXTURE_TYPE param_3)

{
  return (param_1 != param_2) != param_3 - 1 < 2;
}


