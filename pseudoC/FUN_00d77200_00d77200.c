// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d77200
// Entry Point: 00d77200
// Size: 748 bytes
// Signature: undefined FUN_00d77200(void)


void FUN_00d77200(long param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar18 = *(long *)(param_1 + 0x228);
  if (*(char *)(lVar18 + 0x68) == '\0') {
    iVar6 = (**(code **)(*(long *)(param_1 + 0x230) + 0x18))
                      (param_1,*(undefined8 *)(lVar18 + (long)*(int *)(lVar18 + 0x80) * 8 + 0x70));
    if (iVar6 == 0) {
      return;
    }
    *(undefined *)(lVar18 + 0x68) = 1;
    *(int *)(lVar18 + 0x88) = *(int *)(lVar18 + 0x88) + 1;
    iVar6 = *(int *)(lVar18 + 0x84);
  }
  else {
    iVar6 = *(int *)(lVar18 + 0x84);
  }
  if (iVar6 != 0) {
    if (iVar6 == 1) goto LAB_00d773ac;
    if (iVar6 != 2) {
      return;
    }
    (**(code **)(*(long *)(param_1 + 0x238) + 8))
              (param_1,*(undefined8 *)(lVar18 + (long)*(int *)(lVar18 + 0x80) * 8 + 0x70),
               lVar18 + 0x60,*(undefined4 *)(lVar18 + 100),param_2,param_3,param_4);
    if (*(uint *)(lVar18 + 0x60) < *(uint *)(lVar18 + 100)) {
      return;
    }
    *(undefined4 *)(lVar18 + 0x84) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  iVar6 = *(int *)(param_1 + 0x18c);
  iVar10 = *(int *)(param_1 + 400);
  *(undefined4 *)(lVar18 + 0x60) = 0;
  *(int *)(lVar18 + 100) = iVar6 + -1;
  if ((*(int *)(lVar18 + 0x88) == iVar10) && (uVar1 = *(uint *)(param_1 + 0x38), 0 < (int)uVar1)) {
    lVar12 = *(long *)(param_1 + 0x228);
    uVar11 = 0;
    iVar10 = *(int *)(lVar12 + 0x80);
    lVar13 = *(long *)(param_1 + 0x120);
    do {
      uVar2 = *(int *)(lVar13 + 0x28) * *(int *)(lVar13 + 0xc);
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = *(uint *)(lVar13 + 0x30) / uVar2;
      }
      uVar5 = *(uint *)(lVar13 + 0x30) - uVar5 * uVar2;
      iVar3 = 0;
      if (iVar6 != 0) {
        iVar3 = (int)uVar2 / iVar6;
      }
      if (uVar5 != 0) {
        uVar2 = uVar5;
      }
      lVar14 = (long)(int)uVar2 + -1;
      if (uVar11 == 0) {
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = (int)lVar14 / iVar3;
        }
        *(int *)(lVar12 + 100) = iVar4 + 1;
      }
      if (0 < iVar3) {
        uVar5 = iVar3 * 2;
        lVar16 = *(long *)(*(long *)(lVar12 + (long)iVar10 * 8 + 0x70) + uVar11 * 8);
        if ((int)uVar5 < 2) {
          uVar5 = 1;
        }
        uVar7 = (ulong)uVar5;
        puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8);
        do {
          uVar7 = uVar7 - 1;
          *puVar15 = *(undefined8 *)(lVar16 + lVar14 * 8);
          puVar15 = puVar15 + 1;
        } while (uVar7 != 0);
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x60;
    } while (uVar11 != uVar1);
  }
  *(undefined4 *)(lVar18 + 0x84) = 1;
LAB_00d773ac:
  (**(code **)(*(long *)(param_1 + 0x238) + 8))
            (param_1,*(undefined8 *)(lVar18 + (long)*(int *)(lVar18 + 0x80) * 8 + 0x70),
             lVar18 + 0x60,*(undefined4 *)(lVar18 + 100),param_2,param_3,param_4);
  if (*(uint *)(lVar18 + 100) <= *(uint *)(lVar18 + 0x60)) {
    if (*(int *)(lVar18 + 0x88) == 1) {
      iVar3 = *(int *)(param_1 + 0x18c);
      uVar1 = *(uint *)(param_1 + 0x38);
      iVar6 = iVar3 + 1;
      iVar10 = iVar3 + 2;
      if (0 < (int)uVar1) {
        uVar11 = 0;
        lVar12 = *(long *)(param_1 + 0x228);
        lVar13 = *(long *)(param_1 + 0x120);
        do {
          uVar2 = 0;
          if (iVar3 != 0) {
            uVar2 = (*(int *)(lVar13 + 0x28) * *(int *)(lVar13 + 0xc)) / iVar3;
          }
          uVar7 = (ulong)uVar2;
          if (0 < (int)uVar2) {
            lVar14 = 0;
            uVar8 = -(ulong)(uVar2 * iVar10 >> 0x1f) & 0xfffffff800000000 |
                    (ulong)(uVar2 * iVar10) << 3;
            lVar16 = *(long *)(*(long *)(lVar12 + 0x70) + uVar11 * 8);
            lVar17 = *(long *)(*(long *)(lVar12 + 0x78) + uVar11 * 8);
            uVar9 = -(ulong)(uVar2 * iVar6 >> 0x1f) & 0xfffffff800000000 |
                    (ulong)(uVar2 * iVar6) << 3;
            do {
              *(undefined8 *)(lVar16 + uVar7 * -8 + lVar14) =
                   *(undefined8 *)(lVar16 + uVar9 + lVar14);
              *(undefined8 *)(lVar17 + uVar7 * -8 + lVar14) =
                   *(undefined8 *)(lVar17 + uVar9 + lVar14);
              *(undefined8 *)(lVar16 + uVar8 + lVar14) = *(undefined8 *)(lVar16 + lVar14);
              *(undefined8 *)(lVar17 + uVar8 + lVar14) = *(undefined8 *)(lVar17 + lVar14);
              lVar14 = lVar14 + 8;
            } while (uVar7 * 8 - lVar14 != 0);
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 0x60;
        } while (uVar11 != uVar1);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18c) + 1;
      iVar10 = *(int *)(param_1 + 0x18c) + 2;
    }
    *(undefined *)(lVar18 + 0x68) = 0;
    *(int *)(lVar18 + 0x60) = iVar6;
    *(int *)(lVar18 + 100) = iVar10;
    *(uint *)(lVar18 + 0x80) = *(uint *)(lVar18 + 0x80) ^ 1;
    *(undefined4 *)(lVar18 + 0x84) = 2;
  }
  return;
}


