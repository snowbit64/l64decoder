// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImageFormat
// Entry Point: 00a8ec5c
// Size: 144 bytes
// Signature: undefined __cdecl getImageFormat(uchar * param_1, uint param_2)


/* ImageLoadUtil::getImageFormat(unsigned char const*, unsigned int) */

undefined4 ImageLoadUtil::getImageFormat(uchar *param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = DDSUtil::checkHeader(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    uVar1 = GS2DUtil::checkHeader(param_1,param_2);
    if ((uVar1 & 1) == 0) {
      uVar1 = PNGUtil::checkHeader(param_1,param_2);
      if ((uVar1 & 1) == 0) {
        uVar1 = JPEGUtil::checkHeader(param_1,param_2);
        if ((uVar1 & 1) == 0) {
          uVar1 = HDRUtil::checkHeader(param_1,param_2);
          uVar2 = 4;
          if ((uVar1 & 1) == 0) {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


