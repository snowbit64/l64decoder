// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMipInfos
// Entry Point: 00a98b50
// Size: 208 bytes
// Signature: undefined __cdecl getMipInfos(ImageDesc * param_1, uint param_2, uint param_3, bool param_4)


/* MipMapUtil::getMipInfos(ImageDesc const&, unsigned int, unsigned int, bool) */

ulong MipMapUtil::getMipInfos(ImageDesc *param_1,uint param_2,uint param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int unaff_w23;
  int iVar8;
  uint uVar9;
  uint unaff_w27;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == -1) {
    iVar7 = 0;
    uVar6 = 0;
  }
  else {
    iVar8 = 0;
    uVar9 = 0;
    iVar7 = 0;
    do {
      uVar2 = *(uint *)param_1 >> (ulong)(uVar9 & 0x1f);
      uVar5 = *(uint *)(param_1 + 4) >> (ulong)(uVar9 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      uVar3 = *(uint *)(param_1 + 8) >> (ulong)(uVar9 & 0x1f);
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      uVar5 = ImageUtil::getMemorySize
                        (uVar2,uVar5,uVar3,*(FORMAT *)(param_1 + 0x40),*(TYPE *)(param_1 + 0x18));
      iVar7 = uVar5 + iVar7;
      uVar2 = uVar5;
      iVar4 = iVar8;
      if (param_3 != uVar9) {
        uVar2 = unaff_w27;
        iVar4 = unaff_w23;
      }
      unaff_w23 = iVar4;
      iVar8 = uVar5 + iVar8;
      uVar9 = uVar9 + 1;
      unaff_w27 = uVar2;
    } while (iVar1 + 1U != uVar9);
    uVar6 = (ulong)uVar2 << 0x20;
  }
  return uVar6 | unaff_w23 + iVar7 * param_2;
}


