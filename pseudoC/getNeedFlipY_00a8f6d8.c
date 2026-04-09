// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNeedFlipY
// Entry Point: 00a8f6d8
// Size: 12 bytes
// Signature: undefined __cdecl getNeedFlipY(ORIGIN param_1, GS2D_ORIGIN param_2, TEXTURE_TYPE param_3)


/* GS2DUtil::getNeedFlipY(ImageDesc::ORIGIN, GS2DUtil::GS2D_ORIGIN, ImageDesc::TEXTURE_TYPE) */

void GS2DUtil::getNeedFlipY(ORIGIN param_1,GS2D_ORIGIN param_2,TEXTURE_TYPE param_3)

{
  ImageUtil::getNeedFlipY(param_1,(uint)(param_2 != 0),param_3);
  return;
}


