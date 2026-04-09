// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e342c0
// Entry Point: 00e342c0
// Size: 564 bytes
// Signature: undefined FUN_00e342c0(void)


undefined8 FUN_00e342c0(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0xffffff98;
  }
  puVar15 = (undefined8 *)param_1[1];
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)malloc(0x1010);
    if (puVar15 == (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      return 0xffffff98;
    }
    *puVar15 = 0;
    *param_1 = puVar15;
    param_1[1] = puVar15;
    puVar15[2] = 0;
    puVar15[1] = 0xff0;
  }
  if (param_3 != 0) {
    uVar7 = puVar15[1];
    do {
      if (uVar7 == 0) {
        puVar2 = (undefined8 *)malloc(0x1010);
        if (puVar2 == (undefined8 *)0x0) {
          *puVar15 = 0;
          return 0xffffff98;
        }
        lVar5 = 0;
        *puVar2 = 0;
        *puVar15 = puVar2;
        uVar7 = 0xff0;
        param_1[1] = puVar2;
        puVar2[2] = 0;
        puVar2[1] = 0xff0;
        uVar4 = 0xff0;
        if (param_3 < 0xff1) {
          uVar4 = param_3;
        }
        iVar3 = (int)uVar4;
        puVar15 = puVar2;
      }
      else {
        lVar5 = puVar15[2];
        uVar4 = uVar7;
        if (param_3 <= uVar7) {
          uVar4 = param_3;
        }
        iVar3 = (int)uVar4;
      }
      if (iVar3 != 0) {
        uVar9 = uVar4 & 0xffffffff;
        if ((uVar9 < 8) ||
           (((ulong)((long)puVar15 + lVar5 + 0x20) < param_2 + uVar9 &&
            (param_2 < (long)puVar15 + lVar5 + uVar9 + 0x20)))) {
          lVar11 = 0;
LAB_00e343ec:
          lVar10 = uVar9 - lVar11;
          puVar6 = (undefined *)(param_2 + lVar11);
          puVar8 = (undefined *)((long)puVar15 + lVar11 + lVar5 + 0x20);
          do {
            lVar10 = lVar10 + -1;
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar10 != 0);
        }
        else if (uVar9 < 0x20) {
          lVar11 = 0;
LAB_00e34460:
          lVar10 = lVar11 + lVar5;
          uVar12 = param_3;
          if (uVar7 <= param_3) {
            uVar12 = uVar7;
          }
          puVar2 = (undefined8 *)(param_2 + lVar11);
          uVar7 = uVar12 & 7;
          lVar14 = lVar11 + uVar7;
          lVar11 = (uVar12 & 0xffffffff) - uVar7;
          lVar14 = lVar14 - uVar9;
          puVar13 = (undefined8 *)((long)puVar15 + lVar10 + 0x20);
          do {
            lVar14 = lVar14 + 8;
            *puVar13 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar13 = puVar13 + 1;
          } while (lVar14 != 0);
          if (uVar7 != 0) goto LAB_00e343ec;
        }
        else {
          uVar12 = uVar4 & 0x1f;
          lVar11 = uVar9 - uVar12;
          puVar2 = (undefined8 *)(param_2 + 0x10);
          puVar13 = (undefined8 *)((long)puVar15 + lVar5 + 0x30);
          lVar10 = lVar11;
          do {
            puVar1 = puVar2 + -1;
            uVar16 = puVar2[-2];
            uVar18 = puVar2[1];
            uVar17 = *puVar2;
            puVar2 = puVar2 + 4;
            lVar10 = lVar10 + -0x20;
            puVar13[-1] = *puVar1;
            puVar13[-2] = uVar16;
            puVar13[1] = uVar18;
            *puVar13 = uVar17;
            puVar13 = puVar13 + 4;
          } while (lVar10 != 0);
          if (uVar12 != 0) {
            if (uVar12 < 8) goto LAB_00e343ec;
            goto LAB_00e34460;
          }
        }
        uVar7 = puVar15[1];
        lVar5 = puVar15[2];
      }
      uVar4 = uVar4 & 0xffffffff;
      uVar7 = uVar7 - uVar4;
      param_2 = param_2 + uVar4;
      param_3 = param_3 - uVar4;
      puVar15[1] = uVar7;
      puVar15[2] = lVar5 + uVar4;
    } while (param_3 != 0);
  }
  return 0;
}


