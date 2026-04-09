// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_1pass_quantizer
// Entry Point: 00d8ed54
// Size: 1300 bytes
// Signature: undefined jinit_1pass_quantizer(void)


void jinit_1pass_quantizer(long *param_1)

{
  int *piVar1;
  undefined uVar2;
  undefined auVar3 [16];
  code **ppcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined auVar27 [16];
  
  ppcVar4 = (code **)(**(code **)param_1[1])(param_1,1,0x98);
  iVar22 = *(int *)((long)param_1 + 0x7c);
  param_1[0x4e] = (long)ppcVar4;
  ppcVar4[0xe] = (code *)0x0;
  *ppcVar4 = FUN_00d8f268;
  ppcVar4[10] = (code *)0x0;
  ppcVar4[2] = FUN_00d8f524;
  ppcVar4[3] = FUN_00d8f528;
  if (iVar22 < 5) {
    iVar22 = *(int *)((long)param_1 + 0x6c);
    if (0x100 < iVar22) goto LAB_00d8ee78;
LAB_00d8edc4:
    uVar20 = (ulong)*(uint *)((long)param_1 + 0x7c);
    lVar18 = (long)iVar22;
    if ((int)*(uint *)((long)param_1 + 0x7c) < 2) goto LAB_00d8eeac;
LAB_00d8edd4:
    uVar21 = (int)uVar20 - 1;
    lVar17 = 1;
    do {
      lVar7 = lVar17;
      lVar17 = lVar7 + 1;
      if (uVar21 < 2) {
        lVar14 = lVar17;
        uVar19 = 1;
LAB_00d8ee38:
        iVar22 = (int)uVar20 - uVar19;
        do {
          lVar14 = lVar14 * lVar17;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      else {
        lVar14 = 1;
        lVar6 = lVar17;
        uVar19 = uVar21 & 0xfffffffe;
        do {
          lVar6 = lVar6 * lVar17;
          uVar19 = uVar19 - 2;
          lVar14 = lVar14 * lVar17;
        } while (uVar19 != 0);
        lVar14 = lVar14 * lVar6;
        uVar19 = uVar21 | 1;
        if (uVar21 != (uVar21 & 0xfffffffe)) goto LAB_00d8ee38;
      }
    } while (lVar14 <= lVar18);
  }
  else {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000039;
    (**(code **)*param_1)(param_1);
    iVar22 = *(int *)((long)param_1 + 0x6c);
    if (iVar22 < 0x101) goto LAB_00d8edc4;
LAB_00d8ee78:
    *(undefined8 *)(*param_1 + 0x28) = 0x1000000003b;
    (**(code **)*param_1)(param_1);
    uVar20 = (ulong)*(uint *)((long)param_1 + 0x7c);
    lVar18 = (long)*(int *)((long)param_1 + 0x6c);
    if (1 < (int)*(uint *)((long)param_1 + 0x7c)) goto LAB_00d8edd4;
LAB_00d8eeac:
    lVar7 = lVar18;
    if (lVar18 < 2) {
      lVar7 = 1;
    }
    lVar14 = lVar7 + 1;
  }
  lVar17 = param_1[0x4e];
  uVar21 = (uint)lVar7;
  if (uVar21 < 2) {
    lVar7 = *param_1;
    *(int *)(lVar7 + 0x2c) = (int)lVar14;
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar7 + 0x28) = 0x3a;
    (**ppcVar4)(param_1);
  }
  uVar19 = (uint)uVar20;
  if ((int)uVar19 < 1) {
    uVar16 = 1;
    goto LAB_00d8f0a8;
  }
  if (uVar19 < 8) {
    uVar8 = 0;
    uVar16 = 1;
LAB_00d8ef58:
    lVar7 = uVar20 - uVar8;
    puVar11 = (uint *)(lVar17 + uVar8 * 4 + 0x3c);
    do {
      uVar16 = uVar16 * uVar21;
      lVar7 = lVar7 + -1;
      *puVar11 = uVar21;
      puVar11 = puVar11 + 1;
    } while (lVar7 != 0);
  }
  else {
    uVar8 = uVar20 & 0xfffffff8;
    puVar10 = (undefined8 *)(lVar17 + 0x4c);
    iVar22 = 1;
    iVar23 = 1;
    iVar24 = 1;
    iVar25 = 1;
    iVar30 = 1;
    iVar26 = 1;
    iVar28 = 1;
    iVar29 = 1;
    uVar12 = uVar8;
    do {
      iVar22 = iVar22 * uVar21;
      iVar23 = iVar23 * uVar21;
      iVar24 = iVar24 * uVar21;
      iVar25 = iVar25 * uVar21;
      puVar10[-1] = CONCAT44(uVar21,uVar21);
      puVar10[-2] = CONCAT44(uVar21,uVar21);
      puVar10[1] = CONCAT44(uVar21,uVar21);
      *puVar10 = CONCAT44(uVar21,uVar21);
      iVar26 = iVar26 * uVar21;
      iVar28 = iVar28 * uVar21;
      iVar29 = iVar29 * uVar21;
      iVar30 = iVar30 * uVar21;
      puVar10 = puVar10 + 4;
      uVar12 = uVar12 - 8;
    } while (uVar12 != 0);
    iVar26 = iVar26 * iVar22;
    iVar28 = iVar28 * iVar23;
    auVar27._4_4_ = iVar28;
    auVar27._0_4_ = iVar26;
    auVar27._8_4_ = iVar29 * iVar24;
    auVar27._12_4_ = iVar30 * iVar25;
    auVar3._4_4_ = iVar28;
    auVar3._0_4_ = iVar26;
    auVar3._8_4_ = iVar29 * iVar24;
    auVar3._12_4_ = iVar30 * iVar25;
    auVar27 = NEON_ext(auVar27,auVar3,8,1);
    uVar16 = iVar26 * auVar27._0_4_ * iVar28 * auVar27._4_4_;
    if (uVar8 != uVar20) goto LAB_00d8ef58;
  }
  if (*(int *)(param_1 + 8) == 2) {
    piVar1 = (int *)(lVar17 + 0x40);
    iVar22 = *piVar1;
    iVar26 = 0;
    if (iVar22 != 0) {
      iVar26 = (int)uVar16 / iVar22;
    }
    uVar20 = (long)iVar22 + 1;
    lVar7 = (long)iVar26 * uVar20;
    if (lVar7 - lVar18 == 0 || lVar7 < lVar18) {
      uVar12 = 0;
      piVar15 = piVar1;
LAB_00d8efdc:
      do {
        *piVar15 = (int)uVar20;
        uVar16 = (uint)lVar7;
        if (uVar12 != uVar19 - 1) {
          uVar12 = uVar12 + 1;
          piVar15 = (int *)(lVar17 + (long)*(int *)(&UNK_00548c44 + uVar12 * 4) * 4 + 0x3c);
          iVar22 = *piVar15;
          iVar26 = 0;
          if (iVar22 != 0) {
            iVar26 = (int)uVar16 / iVar22;
          }
          lVar7 = (long)iVar26 * ((long)iVar22 + 1U);
          uVar20 = (long)iVar22 + 1U & 0xffffffff;
          if (lVar7 - lVar18 == 0 || lVar7 < lVar18) goto LAB_00d8efdc;
        }
        iVar22 = *piVar1;
        uVar12 = 0;
        iVar26 = 0;
        if (iVar22 != 0) {
          iVar26 = (int)uVar16 / iVar22;
        }
        uVar20 = (long)iVar22 + 1;
        lVar7 = (long)iVar26 * uVar20;
        piVar15 = piVar1;
      } while (lVar7 - lVar18 == 0 || lVar7 < lVar18);
    }
  }
  else {
    piVar1 = (int *)(lVar17 + 0x3c);
    iVar22 = *piVar1;
    iVar26 = 0;
    if (iVar22 != 0) {
      iVar26 = (int)uVar16 / iVar22;
    }
    uVar20 = (long)iVar22 + 1;
    lVar7 = (long)iVar26 * uVar20;
    if (lVar7 - lVar18 == 0 || lVar7 < lVar18) {
      uVar12 = 0;
      piVar15 = piVar1;
LAB_00d8f06c:
      do {
        uVar16 = (uint)lVar7;
        *piVar15 = (int)uVar20;
        if (uVar12 != uVar19 - 1) {
          uVar12 = uVar12 + 1;
          piVar15 = (int *)(lVar17 + uVar12 * 4 + 0x3c);
          iVar22 = *piVar15;
          iVar26 = 0;
          if (iVar22 != 0) {
            iVar26 = (int)uVar16 / iVar22;
          }
          lVar7 = (long)iVar26 * ((long)iVar22 + 1U);
          uVar20 = (long)iVar22 + 1U & 0xffffffff;
          if (lVar7 - lVar18 == 0 || lVar7 < lVar18) goto LAB_00d8f06c;
        }
        iVar22 = *piVar1;
        uVar12 = 0;
        iVar26 = 0;
        if (iVar22 != 0) {
          iVar26 = (int)uVar16 / iVar22;
        }
        uVar20 = (long)iVar22 + 1;
        lVar7 = (long)iVar26 * uVar20;
        piVar15 = piVar1;
      } while (lVar7 - lVar18 == 0 || lVar7 < lVar18);
    }
  }
LAB_00d8f0a8:
  iVar22 = *(int *)((long)param_1 + 0x7c);
  lVar18 = *param_1;
  *(uint *)(lVar18 + 0x2c) = uVar16;
  if (iVar22 == 3) {
    *(undefined4 *)(lVar18 + 0x30) = *(undefined4 *)(lVar17 + 0x3c);
    *(undefined4 *)(lVar18 + 0x34) = *(undefined4 *)(lVar17 + 0x40);
    uVar9 = 0x60;
    *(undefined4 *)(lVar18 + 0x38) = *(undefined4 *)(lVar17 + 0x44);
    lVar7 = lVar18;
  }
  else {
    lVar7 = *param_1;
    uVar9 = 0x61;
  }
  *(undefined4 *)(lVar18 + 0x28) = uVar9;
  (**(code **)(lVar7 + 8))(param_1,1);
  lVar18 = (**(code **)(param_1[1] + 0x10))(param_1,1,uVar16,*(undefined4 *)((long)param_1 + 0x7c));
  iVar22 = *(int *)((long)param_1 + 0x7c);
  if (0 < iVar22) {
    lVar7 = 0;
    uVar20 = (ulong)uVar16;
    do {
      uVar21 = *(uint *)(lVar17 + lVar7 * 4 + 0x3c);
      uVar19 = 0;
      iVar26 = (int)uVar20;
      if (uVar21 != 0) {
        uVar19 = iVar26 / (int)uVar21;
      }
      uVar20 = (ulong)uVar19;
      lVar14 = (long)(int)uVar21 + -1;
      uVar13 = (uint)lVar14;
      if ((int)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      if ((0 < (int)uVar21) && (0 < (int)uVar19)) {
        uVar12 = 0;
        iVar22 = 0;
        do {
          if ((int)(uVar19 * (int)uVar12) < (int)uVar16) {
            lVar6 = (long)iVar22;
            uVar2 = 0;
            if (lVar14 != 0) {
              uVar2 = (undefined)
                      ((long)(uVar12 * 0xff + ((long)((ulong)uVar13 << 0x20) >> 0x21)) / lVar14);
            }
            do {
              uVar8 = 0;
              do {
                *(undefined *)(*(long *)(lVar18 + lVar7 * 8) + lVar6 + uVar8) = uVar2;
                uVar8 = uVar8 + 1;
              } while (uVar20 != uVar8);
              lVar6 = lVar6 + iVar26;
            } while (lVar6 < (int)uVar16);
          }
          uVar12 = uVar12 + 1;
          iVar22 = iVar22 + uVar19;
        } while (uVar12 != uVar21);
        iVar22 = *(int *)((long)param_1 + 0x7c);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar22);
  }
  *(long *)(lVar17 + 0x20) = lVar18;
  *(uint *)(lVar17 + 0x28) = uVar16;
  FUN_00d8f53c(param_1);
  if ((*(int *)((long)param_1 + 100) == 2) && (0 < *(int *)((long)param_1 + 0x7c))) {
    iVar22 = *(int *)((long)param_1 + 0x74);
    lVar18 = 0;
    lVar7 = param_1[0x4e];
    do {
      uVar5 = (**(code **)(param_1[1] + 8))(param_1,1,(ulong)(iVar22 + 2) << 1);
      iVar26 = *(int *)((long)param_1 + 0x7c);
      *(undefined8 *)(lVar7 + 0x70 + lVar18 * 8) = uVar5;
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar26);
  }
  return;
}


