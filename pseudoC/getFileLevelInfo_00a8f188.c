// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileLevelInfo
// Entry Point: 00a8f188
// Size: 128 bytes
// Signature: undefined __cdecl getFileLevelInfo(char * param_1, ImageDesc * param_2, uint param_3, uint param_4, ulonglong * param_5)


/* ImageLoadUtil::getFileLevelInfo(char const*, ImageDesc const&, unsigned int, unsigned int,
   unsigned long long&) */

void ImageLoadUtil::getFileLevelInfo
               (char *param_1,ImageDesc *param_2,uint param_3,uint param_4,ulonglong *param_5)

{
  int iVar1;
  
  iVar1 = getImageFormatFromExtension(param_1);
  if (iVar1 == 3) {
    GS2DUtil::getFileLevelInfo(param_2,param_3,param_4,param_5);
    return;
  }
  if (iVar1 == 0) {
    DDSUtil::getFileLevelInfo(param_2,param_3,param_4,param_5);
    return;
  }
  return;
}


