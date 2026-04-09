// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: adjustSkipMipmaps
// Entry Point: 00a8f6e4
// Size: 128 bytes
// Signature: undefined __cdecl adjustSkipMipmaps(char * param_1, GS2DHeader * param_2, ImageDesc * param_3, uint * param_4)


/* GS2DUtil::adjustSkipMipmaps(char const*, GS2DUtil::GS2DHeader const&, ImageDesc const&, unsigned
   int&) */

void GS2DUtil::adjustSkipMipmaps(char *param_1,GS2DHeader *param_2,ImageDesc *param_3,uint *param_4)

{
  char *pcVar1;
  uint uVar2;
  
  if (*param_4 == 0) goto LAB_00a8f740;
  if ((*(uint *)(param_2 + 0x18) >> 3 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x18) >> 1 & 1) == 0) {
      pcVar1 = strrchr(param_1,0x2e);
      if ((pcVar1 <= param_1) || (pcVar1[-1] != 'H')) goto LAB_00a8f740;
      goto LAB_00a8f730;
    }
    uVar2 = *param_4 - 1;
  }
  else {
LAB_00a8f730:
    uVar2 = 0;
  }
  *param_4 = uVar2;
LAB_00a8f740:
  if (*(uint *)(param_3 + 0x10) < *param_4) {
    *param_4 = *(uint *)(param_3 + 0x10);
  }
  return;
}


