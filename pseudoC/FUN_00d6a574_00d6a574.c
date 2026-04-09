// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6a574
// Entry Point: 00d6a574
// Size: 568 bytes
// Signature: undefined FUN_00d6a574(void)


void FUN_00d6a574(long *param_1)

{
  undefined (*pauVar1) [16];
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined (*pauVar15) [16];
  int *piVar16;
  long lVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  
  lVar6 = param_1[0x23];
  if (lVar6 == 0) {
    uVar8 = *(uint *)((long)param_1 + 0x5c);
    if (4 < (int)uVar8) {
      lVar6 = *param_1;
      *(uint *)(lVar6 + 0x2c) = uVar8;
      lVar7 = *param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x1b;
      *(undefined4 *)(lVar7 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
      uVar8 = *(uint *)((long)param_1 + 0x5c);
    }
    *(uint *)((long)param_1 + 0x164) = uVar8;
    if (0 < (int)uVar8) {
      lVar6 = param_1[0xd];
      uVar10 = (ulong)uVar8;
      if (uVar8 < 4) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar10 & 0xfffffffc;
        plVar12 = param_1 + 0x2f;
        uVar14 = uVar13;
        lVar7 = 0;
        lVar9 = 1;
        do {
          uVar14 = uVar14 - 4;
          lVar11 = lVar6 + lVar7 * 0x60;
          lVar17 = lVar6 + lVar9 * 0x60;
          plVar12[-1] = lVar17;
          plVar12[-2] = lVar11;
          plVar12[1] = lVar17 + 0xc0;
          *plVar12 = lVar11 + 0xc0;
          plVar12 = plVar12 + 4;
          lVar7 = lVar7 + 4;
          lVar9 = lVar9 + 4;
        } while (uVar14 != 0);
        if (uVar13 == uVar10) goto LAB_00d6a780;
      }
      lVar7 = uVar10 - uVar13;
      lVar6 = lVar6 + uVar13 * 0x60;
      plVar12 = param_1 + uVar13 + 0x2d;
      do {
        *plVar12 = lVar6;
        lVar6 = lVar6 + 0x60;
        lVar7 = lVar7 + -1;
        plVar12 = plVar12 + 1;
      } while (lVar7 != 0);
    }
    goto LAB_00d6a780;
  }
  lVar7 = (long)*(int *)(param_1[0x3c] + 0x2c);
  uVar8 = *(uint *)(lVar6 + lVar7 * 0x24);
  uVar10 = (ulong)uVar8;
  *(uint *)((long)param_1 + 0x164) = uVar8;
  if (0 < (int)uVar8) {
    lVar9 = param_1[0xd];
    if (uVar8 < 8) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar10 & 0xfffffff8;
      pauVar15 = (undefined (*) [16])(lVar6 + lVar7 * 0x24 + 0x14);
      plVar12 = param_1 + 0x31;
      uVar14 = uVar13;
      do {
        pauVar1 = pauVar15 + -1;
        uVar3 = *(undefined8 *)*pauVar1;
        uVar4 = *(undefined8 *)*pauVar15;
        auVar5 = *pauVar15;
        auVar19 = *pauVar15;
        pauVar15 = pauVar15 + 2;
        uVar14 = uVar14 - 8;
        auVar18 = NEON_ext(*pauVar1,*pauVar1,8,1);
        auVar19 = NEON_ext(auVar19,auVar5,8,1);
        plVar12[-3] = lVar9 + (long)(int)((ulong)uVar3 >> 0x20) * 0x60;
        plVar12[-4] = lVar9 + (long)(int)uVar3 * 0x60;
        plVar12[-1] = lVar9 + (long)auVar18._4_4_ * 0x60;
        plVar12[-2] = lVar9 + (long)auVar18._0_4_ * 0x60;
        plVar12[1] = lVar9 + (long)(int)((ulong)uVar4 >> 0x20) * 0x60;
        *plVar12 = lVar9 + (long)(int)uVar4 * 0x60;
        plVar12[3] = lVar9 + (long)auVar19._4_4_ * 0x60;
        plVar12[2] = lVar9 + (long)auVar19._0_4_ * 0x60;
        plVar12 = plVar12 + 8;
      } while (uVar14 != 0);
      if (uVar13 == uVar10) goto LAB_00d6a6bc;
    }
    lVar11 = uVar10 - uVar13;
    piVar16 = (int *)(lVar6 + lVar7 * 0x24 + uVar13 * 4);
    plVar12 = param_1 + uVar13 + 0x2d;
    do {
      piVar16 = piVar16 + 1;
      lVar11 = lVar11 + -1;
      *plVar12 = lVar9 + (long)*piVar16 * 0x60;
      plVar12 = plVar12 + 1;
    } while (lVar11 != 0);
  }
LAB_00d6a6bc:
  if (*(char *)((long)param_1 + 0x14c) != '\0') {
    lVar6 = lVar6 + lVar7 * 0x24;
    *(undefined8 *)((long)param_1 + 0x1bc) = *(undefined8 *)(lVar6 + 0x14);
    uVar2 = *(undefined4 *)(lVar6 + 0x20);
    *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)(lVar6 + 0x1c);
    *(undefined4 *)(param_1 + 0x39) = uVar2;
    return;
  }
LAB_00d6a780:
  *(undefined4 *)((long)param_1 + 0x1bc) = 0;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0;
  *(int *)(param_1 + 0x38) = *(int *)((long)param_1 + 0x1cc) * *(int *)((long)param_1 + 0x1cc) + -1;
  *(undefined4 *)(param_1 + 0x39) = 0;
  return;
}


