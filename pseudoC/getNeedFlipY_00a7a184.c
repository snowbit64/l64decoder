// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNeedFlipY
// Entry Point: 00a7a184
// Size: 32 bytes
// Signature: undefined __cdecl getNeedFlipY(ORIGIN param_1, DDSHeader * param_2, TEXTURE_TYPE param_3)


/* DDSUtil::getNeedFlipY(ImageDesc::ORIGIN, DDSUtil::DDSHeader const&, ImageDesc::TEXTURE_TYPE) */

void DDSUtil::getNeedFlipY(ORIGIN param_1,DDSHeader *param_2,TEXTURE_TYPE param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x24) & 1;
  if (*(int *)(param_2 + 0x1c) != 0x288ae8d9) {
    uVar1 = 0;
  }
  ImageUtil::getNeedFlipY(param_1,uVar1,param_3);
  return;
}


