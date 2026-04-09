// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_Create
// Entry Point: 00d9d380
// Size: 680 bytes
// Signature: undefined MatchFinder_Create(void)


undefined8
MatchFinder_Create(long param_1,uint param_2,int param_3,int param_4,int param_5,code **param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  
  if (param_2 < 0xc0000001) {
    iVar1 = param_2 + 1;
    uVar9 = 1;
    if (0x80000000 < param_2) {
      uVar9 = 2;
    }
    param_5 = param_5 + param_4;
    *(int *)(param_1 + 0x58) = iVar1 + param_3;
    *(int *)(param_1 + 0x5c) = param_5;
    iVar7 = iVar1 + param_3 + (param_2 >> (ulong)uVar9) + param_5 + ((uint)(param_5 + param_3) >> 1)
            + 0x80000;
    if (*(int *)(param_1 + 100) == 0) {
      if ((*(long *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x54) != iVar7)) {
        (*param_6[1])(param_6);
        pcVar8 = *param_6;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(int *)(param_1 + 0x54) = iVar7;
        lVar6 = (*pcVar8)(param_6,iVar7);
        *(long *)(param_1 + 0x40) = lVar6;
        if (lVar6 == 0) {
          (*param_6[1])(param_6,*(undefined8 *)(param_1 + 0x28));
          *(undefined8 *)(param_1 + 0x28) = 0;
          if (*(int *)(param_1 + 100) != 0) {
            return 0;
          }
          goto LAB_00d9d5fc;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x54) = iVar7;
    }
    uVar9 = *(uint *)(param_1 + 0x60);
    *(int *)(param_1 + 0x20) = param_4;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    if (uVar9 == 2) {
      iVar10 = 0;
      iVar7 = 0x10000;
      *(undefined4 *)(param_1 + 0x38) = 0xffff;
    }
    else {
      uVar5 = param_2 - 1 | param_2 - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar4 = uVar5 >> 1 | uVar5 >> 9 | 0xffff;
      uVar5 = 0xffffff;
      if (uVar9 != 3) {
        uVar5 = uVar4 >> 1;
      }
      if (uVar4 < 0x1000001) {
        uVar5 = uVar4;
      }
      iVar7 = uVar5 + 1;
      *(uint *)(param_1 + 0x38) = uVar5;
      if (uVar9 < 3) {
        iVar10 = 0;
      }
      else {
        iVar10 = 0x400;
        *(undefined4 *)(param_1 + 0x7c) = 0x400;
        if (uVar9 != 3) {
          iVar10 = 0x110400;
          if (uVar9 < 5) {
            iVar10 = 0x10400;
          }
          *(int *)(param_1 + 0x7c) = iVar10;
        }
      }
    }
    iVar2 = *(int *)(param_1 + 0x80);
    iVar3 = *(int *)(param_1 + 0x84);
    *(uint *)(param_1 + 0x78) = param_2;
    *(int *)(param_1 + 0x1c) = iVar1;
    iVar1 = iVar1 << (*(int *)(param_1 + 0x70) != 0);
    uVar9 = iVar1 + iVar10 + iVar7;
    *(int *)(param_1 + 0x80) = iVar10 + iVar7;
    *(int *)(param_1 + 0x84) = iVar1;
    if ((*(long *)(param_1 + 0x28) != 0) && (iVar3 + iVar2 == uVar9)) {
      return 1;
    }
    (*param_6[1])(param_6);
    pcVar8 = *param_6;
    *(undefined8 *)(param_1 + 0x28) = 0;
    lVar6 = (*pcVar8)(param_6,(ulong)uVar9 << 2);
    *(long *)(param_1 + 0x28) = lVar6;
    if (lVar6 != 0) {
      *(ulong *)(param_1 + 0x30) = lVar6 + (ulong)*(uint *)(param_1 + 0x80) * 4;
      return 1;
    }
    (*param_6[1])(param_6,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 100) != 0) {
      return 0;
    }
  }
  else {
    (*param_6[1])(param_6,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 100) != 0) {
      return 0;
    }
  }
LAB_00d9d5fc:
  (*param_6[1])(param_6,*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return 0;
}


