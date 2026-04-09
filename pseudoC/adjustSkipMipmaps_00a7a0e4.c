// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: adjustSkipMipmaps
// Entry Point: 00a7a0e4
// Size: 160 bytes
// Signature: undefined __cdecl adjustSkipMipmaps(char * param_1, DDSHeader * param_2, ImageDesc * param_3, uint * param_4)


/* DDSUtil::adjustSkipMipmaps(char const*, DDSUtil::DDSHeader const&, ImageDesc const&, unsigned
   int&) */

void DDSUtil::adjustSkipMipmaps(char *param_1,DDSHeader *param_2,ImageDesc *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  
  uVar1 = *param_4;
  if (uVar1 == 0) goto LAB_00a7a160;
  if (*(int *)(param_2 + 0x1c) == 0x288ae8d9) {
    if (((byte)param_2[0x24] >> 4 & 1) != 0) goto LAB_00a7a158;
    uVar2 = *(uint *)(param_2 + 0x20);
    if (uVar2 == 0) goto LAB_00a7a138;
    uVar4 = uVar1 - uVar2;
    if (uVar1 < uVar2) goto LAB_00a7a160;
  }
  else {
LAB_00a7a138:
    sVar3 = strlen(param_1);
    if (((uint)sVar3 < 6) || (param_1[(uint)sVar3 - 5] != 'H')) goto LAB_00a7a160;
LAB_00a7a158:
    uVar4 = 0;
  }
  *param_4 = uVar4;
LAB_00a7a160:
  if (*(uint *)(param_3 + 0x10) < *param_4) {
    *param_4 = *(uint *)(param_3 + 0x10);
  }
  return;
}


