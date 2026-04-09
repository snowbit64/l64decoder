// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 00a8ecec
// Size: 360 bytes
// Signature: undefined __cdecl loadImage(char * param_1, uchar * param_2, uint param_3, ORIGIN param_4, ImageDesc * param_5, uint param_6)


/* ImageLoadUtil::loadImage(char const*, unsigned char*, unsigned int, ImageDesc::ORIGIN,
   ImageDesc&, unsigned int) */

undefined8
ImageLoadUtil::loadImage
          (char *param_1,uchar *param_2,uint param_3,ORIGIN param_4,ImageDesc *param_5,uint param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = DDSUtil::checkHeader(param_2,param_3);
  if ((uVar1 & 1) != 0) {
    uVar2 = DDSUtil::loadImage(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  uVar1 = GS2DUtil::checkHeader(param_2,param_3);
  if ((uVar1 & 1) != 0) {
    uVar2 = GS2DUtil::loadImage(param_1,param_2,param_3,param_4,param_5,param_6,false);
    return uVar2;
  }
  uVar1 = PNGUtil::checkHeader(param_2,param_3);
  if ((uVar1 & 1) != 0) {
    uVar2 = PNGUtil::loadImage(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  uVar1 = JPEGUtil::checkHeader(param_2,param_3);
  if ((uVar1 & 1) != 0) {
    uVar2 = JPEGUtil::loadImage(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  uVar1 = HDRUtil::checkHeader(param_2,param_3);
  if ((uVar1 & 1) != 0) {
    uVar2 = HDRUtil::loadImage(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}


