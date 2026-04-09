// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9c1c0
// Entry Point: 00d9c1c0
// Size: 1316 bytes
// Signature: undefined FUN_00d9c1c0(void)


int FUN_00d9c1c0(long param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  
  *(undefined4 *)(param_1 + 0x3d34c) = 1;
  if (*(int *)(param_1 + 0x3d338) != 0) {
    puVar1 = (uint *)(param_1 + 0x32f88);
    uVar6 = (ulong)*puVar1;
    param_2 = *(uint *)(param_1 + 0x33be4) & param_2;
    lVar8 = param_1 + uVar6 * 0x20 + (ulong)param_2 * 2;
    puVar10 = (uint *)(param_1 + 0x3d2f0);
    uVar2 = *(ushort *)(lVar8 + 0x33bf0);
    plVar11 = (long *)(param_1 + 0x3d2f8);
    lVar9 = *plVar11;
    uVar3 = (*puVar10 >> 0xb) * (uint)uVar2;
    uVar7 = *puVar10 - uVar3;
    *(ushort *)(lVar8 + 0x33bf0) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar9 + (ulong)uVar3;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar6 = (ulong)*puVar1;
      uVar7 = *puVar10;
    }
    lVar8 = param_1 + uVar6 * 2;
    uVar2 = *(ushort *)(lVar8 + 0x33d70);
    uVar7 = (uVar7 >> 0xb) * (uint)uVar2;
    *puVar10 = uVar7;
    *(ushort *)(lVar8 + 0x33d70) = uVar2 + (short)(0x800 - uVar2 >> 5);
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar6 = (ulong)*puVar1;
    }
    *puVar1 = *(uint *)(&DAT_005491cc + uVar6 * 4);
    FUN_00d9c6e4(param_1 + 0x34254,puVar10,0,param_2,*(int *)(param_1 + 0x3d2e8) == 0,
                 param_1 + 0x324dc);
    uVar2 = *(ushort *)(param_1 + 0x33f52);
    uVar3 = (*(uint *)(param_1 + 0x3d2f0) >> 0xb) * (uint)uVar2;
    uVar7 = *(uint *)(param_1 + 0x3d2f0) - uVar3;
    lVar8 = *(long *)(param_1 + 0x3d2f8) + (ulong)uVar3;
    *(ushort *)(param_1 + 0x33f52) = uVar2 - (uVar2 >> 5);
    *(long *)(param_1 + 0x3d2f8) = lVar8;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar7 = *puVar10;
      lVar8 = *plVar11;
    }
    uVar2 = *(ushort *)(param_1 + 0x33f56);
    uVar3 = (uVar7 >> 0xb) * (uint)uVar2;
    uVar7 = uVar7 - uVar3;
    lVar8 = lVar8 + (ulong)uVar3;
    *(ushort *)(param_1 + 0x33f56) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar8;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar7 = *puVar10;
      lVar8 = *plVar11;
    }
    uVar2 = *(ushort *)(param_1 + 0x33f5e);
    uVar3 = (uVar7 >> 0xb) * (uint)uVar2;
    uVar7 = uVar7 - uVar3;
    lVar8 = lVar8 + (ulong)uVar3;
    *(ushort *)(param_1 + 0x33f5e) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar8;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar7 = *puVar10;
      lVar8 = *plVar11;
    }
    uVar2 = *(ushort *)(param_1 + 0x33f6e);
    uVar3 = (uVar7 >> 0xb) * (uint)uVar2;
    uVar7 = uVar7 - uVar3;
    lVar8 = lVar8 + (ulong)uVar3;
    *(ushort *)(param_1 + 0x33f6e) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar8;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar7 = *puVar10;
      lVar8 = *plVar11;
    }
    uVar2 = *(ushort *)(param_1 + 0x33f8e);
    uVar3 = (uVar7 >> 0xb) * (uint)uVar2;
    uVar7 = uVar7 - uVar3;
    lVar8 = lVar8 + (ulong)uVar3;
    *(ushort *)(param_1 + 0x33f8e) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar8;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar7 = *puVar10;
      lVar8 = *plVar11;
    }
    uVar2 = *(ushort *)(param_1 + 0x33fce);
    uVar3 = (uVar7 >> 0xb) * (uint)uVar2;
    uVar7 = uVar7 - uVar3;
    *(ushort *)(param_1 + 0x33fce) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar8 + (ulong)uVar3;
    *puVar10 = uVar7;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
    }
    uVar7 = 0x19;
    do {
      uVar3 = *puVar10;
      uVar4 = uVar3 >> 1;
      *puVar10 = uVar4;
      *plVar11 = *plVar11 + (ulong)(uVar4 & -(0x3ffffffU >> (ulong)(uVar7 & 0x1f) & 1));
      if (uVar3 >> 0x19 == 0) {
        *puVar10 = uVar4 << 8;
        FUN_00d9cea4(puVar10);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0xffffffff);
    uVar2 = *(ushort *)(param_1 + 0x34236);
    uVar3 = (*puVar10 >> 0xb) * (uint)uVar2;
    uVar7 = *puVar10 - uVar3;
    lVar8 = *plVar11 + (ulong)uVar3;
    *(ushort *)(param_1 + 0x34236) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar8;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar7 = *puVar10;
      lVar8 = *plVar11;
    }
    uVar2 = *(ushort *)(param_1 + 0x3423a);
    uVar3 = (uVar7 >> 0xb) * (uint)uVar2;
    uVar7 = uVar7 - uVar3;
    lVar8 = lVar8 + (ulong)uVar3;
    *(ushort *)(param_1 + 0x3423a) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar8;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar7 = *puVar10;
      lVar8 = *plVar11;
    }
    uVar2 = *(ushort *)(param_1 + 0x34242);
    uVar3 = (uVar7 >> 0xb) * (uint)uVar2;
    uVar7 = uVar7 - uVar3;
    lVar8 = lVar8 + (ulong)uVar3;
    *(ushort *)(param_1 + 0x34242) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar8;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
      uVar7 = *puVar10;
      lVar8 = *plVar11;
    }
    uVar2 = *(ushort *)(param_1 + 0x34252);
    uVar3 = (uVar7 >> 0xb) * (uint)uVar2;
    uVar7 = uVar7 - uVar3;
    *(ushort *)(param_1 + 0x34252) = uVar2 - (uVar2 >> 5);
    *plVar11 = lVar8 + (ulong)uVar3;
    *puVar10 = uVar7;
    if (uVar7 >> 0x18 == 0) {
      *puVar10 = uVar7 * 0x100;
      FUN_00d9cea4(puVar10);
    }
  }
  lVar8 = param_1 + 0x3d2f0;
  FUN_00d9cea4(lVar8);
  FUN_00d9cea4(lVar8);
  FUN_00d9cea4(lVar8);
  FUN_00d9cea4(lVar8);
  FUN_00d9cea4(lVar8);
  if (*(int *)(param_1 + 0x3d330) == 0) {
    lVar9 = *(long *)(param_1 + 0x3d308) - *(long *)(param_1 + 0x3d318);
    lVar8 = (***(code ***)(param_1 + 0x3d320))
                      (*(code ***)(param_1 + 0x3d320),*(long *)(param_1 + 0x3d318),lVar9);
    if (lVar9 != lVar8) {
      *(undefined4 *)(param_1 + 0x3d330) = 9;
    }
    *(undefined8 *)(param_1 + 0x3d308) = *(undefined8 *)(param_1 + 0x3d318);
    *(long *)(param_1 + 0x3d328) = *(long *)(param_1 + 0x3d328) + lVar9;
    iVar5 = *(int *)(param_1 + 0x3d354);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x3d354);
  }
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(int *)(param_1 + 0x3d330) == 0) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      return 0;
    }
  }
  else {
    iVar5 = 9;
    *(undefined4 *)(param_1 + 0x3d354) = 9;
    if (*(int *)(param_1 + 0xc0) == 0) goto LAB_00d9c6a8;
  }
  iVar5 = 8;
  *(undefined4 *)(param_1 + 0x3d354) = 8;
LAB_00d9c6a8:
  *(undefined4 *)(param_1 + 0x3d34c) = 1;
  return iVar5;
}


