// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileLevelInfo
// Entry Point: 00a7be54
// Size: 184 bytes
// Signature: undefined __cdecl getFileLevelInfo(ImageDesc * param_1, uint param_2, uint param_3, ulonglong * param_4)


/* DDSUtil::getFileLevelInfo(ImageDesc const&, unsigned int, unsigned int, unsigned long long&) */

void DDSUtil::getFileLevelInfo(ImageDesc *param_1,uint param_2,uint param_3,ulonglong *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    *param_4 = 0;
  }
  else {
    iVar4 = MipMapUtil::getMipRangeSize(param_1,0,*(int *)(param_1 + 0x10) + 1);
    *param_4 = (ulong)(iVar4 * param_2);
  }
  if (param_3 != 0) {
    uVar6 = 0;
    do {
      uVar1 = *(uint *)param_1 >> (ulong)(uVar6 & 0x1f);
      uVar2 = *(uint *)(param_1 + 4) >> (ulong)(uVar6 & 0x1f);
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      uVar3 = *(uint *)(param_1 + 8) >> (ulong)(uVar6 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      uVar5 = ImageUtil::getMemorySize
                        (uVar1,uVar2,uVar3,*(FORMAT *)(param_1 + 0x40),*(TYPE *)(param_1 + 0x18));
      uVar6 = uVar6 + 1;
      *param_4 = *param_4 + (uVar5 & 0xffffffff);
    } while (param_3 != uVar6);
  }
  return;
}


