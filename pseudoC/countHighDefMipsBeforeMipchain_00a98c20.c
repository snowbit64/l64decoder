// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: countHighDefMipsBeforeMipchain
// Entry Point: 00a98c20
// Size: 268 bytes
// Signature: undefined __cdecl countHighDefMipsBeforeMipchain(ImageDesc * param_1, bool param_2, uint param_3, uint param_4, uint * param_5, uint * param_6)


/* MipMapUtil::countHighDefMipsBeforeMipchain(ImageDesc const&, bool, unsigned int, unsigned int,
   unsigned int&, unsigned int&) */

int MipMapUtil::countHighDefMipsBeforeMipchain
              (ImageDesc *param_1,bool param_2,uint param_3,uint param_4,uint *param_5,uint *param_6
              )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = 1;
  *param_5 = 1;
  *param_6 = 1;
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar1 = uVar7 + 1;
  if (uVar7 == 0xffffffff) {
    bVar4 = false;
  }
  else {
    uVar8 = 0;
    uVar9 = 1;
    do {
      uVar6 = *(uint *)param_1 >> (ulong)(uVar7 & 0x1f);
      uVar2 = *(uint *)(param_1 + 4) >> (ulong)(uVar7 & 0x1f);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar3 = *(uint *)(param_1 + 8) >> (ulong)(uVar7 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      iVar5 = ImageUtil::getMemorySize
                        (uVar6,uVar2,uVar3,*(FORMAT *)(param_1 + 0x40),*(TYPE *)(param_1 + 0x18));
      uVar8 = iVar5 + uVar8;
      if (uVar8 <= param_3) {
        *param_5 = uVar9;
      }
      if (param_4 < uVar8) {
        uVar6 = *param_6;
        break;
      }
      *param_6 = uVar9;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 + 1;
      uVar6 = uVar1;
    } while (uVar7 != 0xffffffff);
    bVar4 = *(int *)(param_1 + 0x10) == 0;
  }
  if (!param_2) {
    uVar6 = *param_5;
  }
  iVar5 = 0;
  if (!bVar4) {
    iVar5 = uVar1 - uVar6;
  }
  return iVar5;
}


