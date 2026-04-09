// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImage
// Entry Point: 00a92848
// Size: 244 bytes
// Signature: undefined __cdecl saveImage(char * param_1, ImageDesc * param_2, bool param_3)


/* ImageSaveUtil::saveImage(char const*, ImageDesc const&, bool) */

ulong ImageSaveUtil::saveImage(char *param_1,ImageDesc *param_2,bool param_3)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  
  lVar1 = StringUtil::stristr(param_1,".png");
  if (lVar1 != 0) {
    uVar2 = PNGUtil::saveImage(param_1,param_2);
    return uVar2;
  }
  lVar1 = StringUtil::stristr(param_1,".jpg");
  if (lVar1 != 0) {
    uVar2 = JPEGUtil::saveImage(param_1,param_2);
    return uVar2;
  }
  lVar1 = StringUtil::stristr(param_1,".dds");
  if (lVar1 != 0) {
    uVar2 = DDSUtil::saveImage(param_1,param_2);
    return uVar2;
  }
  uVar2 = GS2DUtil::checkFileSuffix(param_1);
  if ((uVar2 & 1) != 0) {
    uVar2 = GS2DUtil::saveImage(param_1,param_2);
    return uVar2;
  }
  lVar1 = StringUtil::stristr(param_1,".hdr");
  if (lVar1 == 0) {
    pcVar3 = (char *)LogManager::getInstance();
    LogManager::errorf(pcVar3,"Error: Can\'t save image file \'%s\'. Format is not supported.\n",
                       param_1);
  }
  else {
    HDRUtil::saveImage(param_1,param_2);
  }
  return (ulong)(lVar1 != 0);
}


