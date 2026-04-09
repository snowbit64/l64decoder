// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d61ef8
// Entry Point: 00d61ef8
// Size: 440 bytes
// Signature: undefined FUN_00d61ef8(void)


undefined8 FUN_00d61ef8(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  code **ppcVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  
  lVar13 = param_1[0x44];
  iVar4 = *(int *)(param_1 + 0x26);
  uVar3 = ((undefined8 *)param_1[5])[1];
  *(undefined8 *)(lVar13 + 200) = *(undefined8 *)param_1[5];
  *(undefined8 *)(lVar13 + 0xd0) = uVar3;
  if ((iVar4 == 0) || (*(int *)(lVar13 + 0x38) != 0)) {
    iVar4 = *(int *)(param_1 + 0x32);
  }
  else {
    FUN_00d65088(lVar13,*(undefined4 *)(lVar13 + 0x3c));
    iVar4 = *(int *)(param_1 + 0x32);
  }
  if (0 < iVar4) {
    lVar15 = 0;
    do {
      lVar7 = (long)*(int *)((long)param_1 + lVar15 * 4 + 0x194);
      lVar9 = lVar13 + lVar7 * 4;
      iVar4 = (int)**(short **)(param_2 + lVar15 * 8) >> (*(uint *)(param_1 + 0x39) & 0x1f);
      iVar11 = *(int *)(lVar9 + 0x24);
      iVar5 = *(int *)(param_1[lVar7 + 0x2d] + 0x14);
      *(int *)(lVar9 + 0x24) = iVar4;
      uVar6 = iVar4 - iVar11;
      if (uVar6 == 0) {
        uVar14 = 0;
        if (*(char *)(lVar13 + 0xc0) != '\0') goto LAB_00d61fe0;
LAB_00d62010:
        lVar9 = *(long *)(lVar13 + (long)iVar5 * 8 + 0x40);
        FUN_00d64bd0(lVar13,*(undefined4 *)(lVar9 + (ulong)uVar14 * 4),
                     *(undefined *)(lVar9 + (ulong)uVar14 + 0x400));
      }
      else {
        uVar10 = -uVar6;
        uVar2 = 0xffffffff;
        if (-1 < (int)uVar6) {
          uVar10 = uVar6;
        }
        do {
          uVar14 = uVar2;
          uVar2 = uVar14 + 1;
          bVar1 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar1);
        uVar14 = uVar14 + 2;
        if (10 < uVar2) {
          ppcVar8 = (code **)*param_1;
          *(undefined4 *)(ppcVar8 + 5) = 6;
          (**ppcVar8)(param_1);
        }
        if (*(char *)(lVar13 + 0xc0) == '\0') goto LAB_00d62010;
LAB_00d61fe0:
        lVar9 = *(long *)(lVar13 + (long)iVar5 * 8 + 0x80);
        *(long *)(lVar9 + (ulong)uVar14 * 8) = *(long *)(lVar9 + (ulong)uVar14 * 8) + 1;
      }
      if (uVar14 != 0) {
        FUN_00d64bd0(lVar13,uVar6 + ((int)uVar6 >> 0x1f),uVar14);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x32));
  }
  uVar3 = *(undefined8 *)(lVar13 + 0xd0);
  puVar12 = (undefined8 *)param_1[5];
  iVar4 = *(int *)(param_1 + 0x26);
  *puVar12 = *(undefined8 *)(lVar13 + 200);
  puVar12[1] = uVar3;
  if (iVar4 != 0) {
    iVar11 = *(int *)(lVar13 + 0x38);
    if (*(int *)(lVar13 + 0x38) == 0) {
      *(uint *)(lVar13 + 0x3c) = *(int *)(lVar13 + 0x3c) + 1U & 7;
      iVar11 = iVar4;
    }
    *(int *)(lVar13 + 0x38) = iVar11 + -1;
  }
  return 1;
}


