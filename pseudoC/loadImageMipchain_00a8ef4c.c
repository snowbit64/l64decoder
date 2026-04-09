// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageMipchain
// Entry Point: 00a8ef4c
// Size: 212 bytes
// Signature: undefined __cdecl loadImageMipchain(char * param_1, bool param_2, uint param_3, uint param_4, ORIGIN param_5, ImageDesc * param_6, ImageStreamingDesc * param_7)


/* ImageLoadUtil::loadImageMipchain(char const*, bool, unsigned int, unsigned int,
   ImageDesc::ORIGIN, ImageDesc&, ImageStreamingDesc&) */

void ImageLoadUtil::loadImageMipchain
               (char *param_1,bool param_2,uint param_3,uint param_4,ORIGIN param_5,
               ImageDesc *param_6,ImageStreamingDesc *param_7)

{
  int iVar1;
  
  iVar1 = getImageFormatFromExtension(param_1);
  if (iVar1 == 3) {
    GS2DUtil::loadImageMipchain(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  if (iVar1 == 0) {
    DDSUtil::loadImageMipchain(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  loadImage(param_1,param_5,param_6,0);
  return;
}


