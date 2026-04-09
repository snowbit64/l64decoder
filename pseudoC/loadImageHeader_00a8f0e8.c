// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageHeader
// Entry Point: 00a8f0e8
// Size: 160 bytes
// Signature: undefined __cdecl loadImageHeader(char * param_1, ORIGIN param_2, ImageDesc * param_3, bool * param_4, ulonglong * param_5)


/* ImageLoadUtil::loadImageHeader(char const*, ImageDesc::ORIGIN, ImageDesc&, bool&, unsigned long
   long&) */

undefined8
ImageLoadUtil::loadImageHeader
          (char *param_1,ORIGIN param_2,ImageDesc *param_3,bool *param_4,ulonglong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = getImageFormatFromExtension(param_1);
  if (iVar1 == 3) {
    uVar2 = GS2DUtil::loadImageHeader(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  if (iVar1 == 0) {
    uVar2 = DDSUtil::loadImageHeader(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}


