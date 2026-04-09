// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageMipRange
// Entry Point: 00a8f020
// Size: 200 bytes
// Signature: undefined __cdecl loadImageMipRange(char * param_1, uint param_2, uint param_3, ImageStreamingDesc * param_4, uchar * * param_5, uint * param_6, uint * param_7)


/* ImageLoadUtil::loadImageMipRange(char const*, unsigned int, unsigned int, ImageStreamingDesc
   const&, unsigned char*&, unsigned int&, unsigned int&) */

undefined8
ImageLoadUtil::loadImageMipRange
          (char *param_1,uint param_2,uint param_3,ImageStreamingDesc *param_4,uchar **param_5,
          uint *param_6,uint *param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = getImageFormatFromExtension(param_1);
  if (iVar1 == 3) {
    uVar2 = GS2DUtil::loadImageMipRange(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  if (iVar1 == 0) {
    uVar2 = DDSUtil::loadImageMipRange(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  return 0;
}


