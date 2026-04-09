// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImageFormatFromExtension
// Entry Point: 00a8ebb8
// Size: 164 bytes
// Signature: undefined __cdecl getImageFormatFromExtension(char * param_1)


/* ImageLoadUtil::getImageFormatFromExtension(char const*) */

undefined4 ImageLoadUtil::getImageFormatFromExtension(char *param_1)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  
  __s1 = strrchr(param_1,0x2e);
  if (__s1 != (char *)0x0) {
    uVar2 = GS2DUtil::checkFileSuffix(__s1);
    if ((uVar2 & 1) != 0) {
      return 3;
    }
    iVar1 = strcasecmp(__s1,".dds");
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = strcasecmp(__s1,".png");
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = strcasecmp(__s1,".jpg");
    if (iVar1 == 0) {
      return 2;
    }
    iVar1 = strcasecmp(__s1,".hdr");
    if (iVar1 == 0) {
      return 4;
    }
  }
  return 5;
}


