// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMipRangeSize
// Entry Point: 00a98d2c
// Size: 144 bytes
// Signature: undefined __cdecl getMipRangeSize(ImageDesc * param_1, uint param_2, uint param_3)


/* MipMapUtil::getMipRangeSize(ImageDesc const&, unsigned int, unsigned int) */

int MipMapUtil::getMipRangeSize(ImageDesc *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < param_3 + param_2) {
    iVar5 = 0;
    do {
      uVar1 = *(uint *)param_1 >> (ulong)(param_2 & 0x1f);
      uVar2 = *(uint *)(param_1 + 4) >> (ulong)(param_2 & 0x1f);
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      uVar3 = *(uint *)(param_1 + 8) >> (ulong)(param_2 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      iVar4 = ImageUtil::getMemorySize
                        (uVar1,uVar2,uVar3,*(FORMAT *)(param_1 + 0x40),*(TYPE *)(param_1 + 0x18));
      param_2 = param_2 + 1;
      iVar5 = iVar4 + iVar5;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}


