// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00975e64
// Entry Point: 00975e64
// Size: 2016 bytes
// Signature: undefined FUN_00975e64(void)


void FUN_00975e64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
LAB_00975eac:
  puVar15 = param_2 + -3;
  puVar11 = param_1;
LAB_00975eb4:
  param_1 = puVar11;
  uVar6 = (long)param_2 - (long)param_1;
  if ((ulong)(((long)uVar6 >> 3) * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x0097645c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00976460 +
              (ulong)*(ushort *)(&DAT_00519dca + ((long)uVar6 >> 3) * 0x5555555555555556) * 4))();
    return;
  }
  if ((long)uVar6 < 0x2e8) {
    dVar24 = (double)param_1[4];
    puVar11 = param_1 + 6;
    puVar15 = param_1 + 3;
    dVar21 = (double)param_1[7];
    if ((double)param_1[1] <= dVar24) {
      if (dVar21 < dVar24) {
        uVar20 = param_1[4];
        uVar16 = *puVar15;
        param_1[4] = param_1[7];
        *puVar15 = *puVar11;
        uVar7 = param_1[5];
        param_1[5] = param_1[8];
        param_1[7] = uVar20;
        *puVar11 = uVar16;
        param_1[8] = uVar7;
        if ((double)param_1[4] < (double)param_1[1]) {
          uVar7 = param_1[2];
          uVar20 = param_1[1];
          uVar16 = *param_1;
          param_1[1] = param_1[4];
          *param_1 = *puVar15;
          param_1[2] = param_1[5];
          param_1[4] = uVar20;
          *puVar15 = uVar16;
          param_1[5] = uVar7;
        }
      }
    }
    else if (dVar24 <= dVar21) {
      uVar7 = param_1[2];
      uVar20 = param_1[1];
      uVar16 = *param_1;
      param_1[1] = param_1[4];
      *param_1 = *puVar15;
      param_1[2] = param_1[5];
      param_1[4] = uVar20;
      *puVar15 = uVar16;
      param_1[5] = uVar7;
      if (dVar21 < (double)param_1[4]) {
        uVar20 = param_1[4];
        uVar16 = *puVar15;
        uVar7 = param_1[5];
        param_1[4] = param_1[7];
        *puVar15 = *puVar11;
        param_1[5] = param_1[8];
        param_1[7] = uVar20;
        *puVar11 = uVar16;
        param_1[8] = uVar7;
      }
    }
    else {
      uVar7 = param_1[2];
      uVar20 = param_1[1];
      uVar16 = *param_1;
      param_1[1] = param_1[7];
      *param_1 = *puVar11;
      param_1[2] = param_1[8];
      param_1[7] = uVar20;
      *puVar11 = uVar16;
      param_1[8] = uVar7;
    }
    if (param_1 + 9 == param_2) goto LAB_00976898;
    lVar14 = 0;
    puVar15 = param_1 + 9;
    goto LAB_0097683c;
  }
  if (uVar6 < 0x5da9) {
    puVar11 = param_1 + (ulong)(((uint)uVar6 & 0xffff) / 0x30) * 3;
    pdVar8 = (double *)(puVar11 + 1);
    dVar21 = *pdVar8;
    if ((double)param_1[1] <= dVar21) {
      if (dVar21 <= (double)param_2[-2]) {
        iVar4 = 0;
      }
      else {
        uVar7 = puVar11[2];
        uVar22 = puVar11[1];
        uVar16 = *puVar11;
        uVar23 = param_2[-2];
        uVar20 = *puVar15;
        puVar11[2] = param_2[-1];
        puVar11[1] = uVar23;
        *puVar11 = uVar20;
        param_2[-1] = uVar7;
        param_2[-2] = uVar22;
        *puVar15 = uVar16;
        if ((double)param_1[1] <= *pdVar8) goto LAB_0097619c;
        uVar7 = param_1[2];
        iVar4 = 2;
        uVar22 = param_1[1];
        uVar16 = *param_1;
        uVar23 = puVar11[1];
        uVar20 = *puVar11;
        param_1[2] = puVar11[2];
        param_1[1] = uVar23;
        *param_1 = uVar20;
        puVar11[2] = uVar7;
        puVar11[1] = uVar22;
        *puVar11 = uVar16;
      }
    }
    else {
      if (dVar21 <= (double)param_2[-2]) {
        uVar7 = param_1[2];
        uVar22 = param_1[1];
        uVar16 = *param_1;
        uVar23 = puVar11[1];
        uVar20 = *puVar11;
        param_1[2] = puVar11[2];
        param_1[1] = uVar23;
        *param_1 = uVar20;
        puVar11[2] = uVar7;
        puVar11[1] = uVar22;
        *puVar11 = uVar16;
        if (*pdVar8 <= (double)param_2[-2]) {
LAB_0097619c:
          iVar4 = 1;
          goto LAB_009761b4;
        }
        local_80 = puVar11[2];
        iVar4 = 2;
        uStack_88 = puVar11[1];
        local_90 = *puVar11;
        uVar16 = param_2[-2];
        uVar7 = *puVar15;
        puVar11[2] = param_2[-1];
        puVar11[1] = uVar16;
        *puVar11 = uVar7;
      }
      else {
        local_80 = param_1[2];
        iVar4 = 1;
        uStack_88 = param_1[1];
        local_90 = *param_1;
        uVar16 = param_2[-2];
        uVar7 = *puVar15;
        param_1[2] = param_2[-1];
        param_1[1] = uVar16;
        *param_1 = uVar7;
      }
      param_2[-1] = local_80;
      param_2[-2] = uStack_88;
      *puVar15 = local_90;
    }
  }
  else {
    uVar19 = uVar6 / 0x60;
    puVar11 = param_1 + (uVar6 / 0x30) * 3;
    puVar10 = param_1 + uVar19 * 3;
    puVar12 = puVar11 + uVar19 * 3;
    iVar4 = FUN_009768d0(param_1,puVar10,puVar11,puVar12);
    if ((double)param_2[-2] < (double)puVar12[1]) {
      uVar7 = puVar12[2];
      uVar22 = puVar12[1];
      uVar16 = *puVar12;
      uVar23 = param_2[-2];
      uVar20 = *puVar15;
      puVar12[2] = param_2[-1];
      puVar12[1] = uVar23;
      *puVar12 = uVar20;
      param_2[-1] = uVar7;
      param_2[-2] = uVar22;
      *puVar15 = uVar16;
      if ((double)param_1[(uVar6 / 0x30) * 3 + 1] <= (double)puVar12[1]) {
        iVar4 = iVar4 + 1;
      }
      else {
        uVar7 = puVar11[2];
        uVar22 = puVar11[1];
        uVar16 = *puVar11;
        uVar23 = puVar12[1];
        uVar20 = *puVar12;
        puVar11[2] = puVar12[2];
        puVar11[1] = uVar23;
        *puVar11 = uVar20;
        puVar12[2] = uVar7;
        puVar12[1] = uVar22;
        *puVar12 = uVar16;
        if ((double)param_1[uVar19 * 3 + 1] <= (double)param_1[(uVar6 / 0x30) * 3 + 1]) {
          iVar4 = iVar4 + 2;
        }
        else {
          uVar7 = puVar10[2];
          uVar22 = puVar10[1];
          uVar16 = *puVar10;
          uVar23 = puVar11[1];
          uVar20 = *puVar11;
          puVar10[2] = puVar11[2];
          puVar10[1] = uVar23;
          *puVar10 = uVar20;
          puVar11[2] = uVar7;
          puVar11[1] = uVar22;
          *puVar11 = uVar16;
          if ((double)param_1[1] <= (double)param_1[uVar19 * 3 + 1]) {
            iVar4 = iVar4 + 3;
          }
          else {
            uVar7 = param_1[2];
            iVar4 = iVar4 + 4;
            uVar22 = param_1[1];
            uVar16 = *param_1;
            uVar23 = puVar10[1];
            uVar20 = *puVar10;
            param_1[2] = puVar10[2];
            param_1[1] = uVar23;
            *param_1 = uVar20;
            puVar10[2] = uVar7;
            puVar10[1] = uVar22;
            *puVar10 = uVar16;
          }
        }
      }
    }
  }
LAB_009761b4:
  dVar21 = (double)param_1[1];
  puVar10 = puVar15;
  if ((double)puVar11[1] <= dVar21) {
    do {
      puVar12 = puVar10;
      puVar10 = puVar12 + -3;
      if (puVar10 == param_1) {
        puVar10 = param_1 + 3;
        puVar11 = puVar10;
        if ((double)param_2[-2] <= dVar21) goto joined_r0x00976364;
        goto LAB_009763b4;
      }
    } while ((double)puVar11[1] <= (double)puVar12[-2]);
    uVar7 = param_1[2];
    iVar4 = iVar4 + 1;
    uVar22 = param_1[1];
    uVar16 = *param_1;
    uVar23 = puVar12[-2];
    uVar20 = *puVar10;
    param_1[2] = puVar12[-1];
    param_1[1] = uVar23;
    *param_1 = uVar20;
    puVar12[-1] = uVar7;
    puVar12[-2] = uVar22;
    *puVar10 = uVar16;
  }
  puVar12 = param_1 + 3;
  puVar18 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar12 = puVar18 + -3;
      do {
        puVar13 = puVar12;
        puVar12 = puVar13 + 3;
      } while ((double)puVar13[4] < (double)puVar11[1]);
      puVar18 = puVar13 + 6;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + -3;
      } while ((double)puVar11[1] <= (double)puVar9[-2]);
      if (puVar10 < puVar12) break;
      uVar7 = puVar13[5];
      uVar20 = puVar13[4];
      uVar16 = *puVar12;
      iVar4 = iVar4 + 1;
      puVar1 = puVar10;
      if (puVar12 != puVar11) {
        puVar1 = puVar11;
      }
      uVar23 = puVar9[-2];
      uVar22 = *puVar10;
      puVar13[5] = puVar9[-1];
      puVar13[4] = uVar23;
      *puVar12 = uVar22;
      puVar9[-1] = uVar7;
      puVar9[-2] = uVar20;
      *puVar10 = uVar16;
      puVar11 = puVar1;
    }
  }
  if ((puVar12 != puVar11) && ((double)puVar11[1] < (double)puVar12[1])) {
    uVar7 = puVar12[2];
    iVar4 = iVar4 + 1;
    uVar22 = puVar12[1];
    uVar16 = *puVar12;
    uVar23 = puVar11[1];
    uVar20 = *puVar11;
    puVar12[2] = puVar11[2];
    puVar12[1] = uVar23;
    *puVar12 = uVar20;
    puVar11[2] = uVar7;
    puVar11[1] = uVar22;
    *puVar11 = uVar16;
  }
  if (iVar4 == 0) {
    uVar6 = FUN_00976ab8(param_1,puVar12);
    uVar19 = FUN_00976ab8(puVar12 + 3,param_2);
    if ((uVar19 & 1) != 0) goto LAB_0097643c;
    puVar11 = puVar12 + 3;
    if ((uVar6 & 1) != 0) goto LAB_00975eb4;
  }
  if (((long)param_2 - (long)puVar12 >> 3) * -0x5555555555555555 <=
      ((long)puVar12 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_00975e64(puVar12 + 3,param_2);
    param_2 = puVar12;
    goto LAB_00975eac;
  }
  FUN_00975e64(param_1,puVar12);
  puVar11 = puVar12 + 3;
  goto LAB_00975eb4;
joined_r0x00976364:
  if (puVar11 == puVar15) goto LAB_00976898;
  if (dVar21 < (double)puVar11[1]) goto LAB_00976384;
  puVar11 = puVar11 + 3;
  goto joined_r0x00976364;
LAB_00976384:
  uVar7 = puVar11[2];
  uVar22 = puVar11[1];
  uVar16 = *puVar11;
  uVar23 = param_2[-2];
  uVar20 = *puVar15;
  puVar11[2] = param_2[-1];
  puVar10 = puVar11 + 3;
  puVar11[1] = uVar23;
  *puVar11 = uVar20;
  param_2[-1] = uVar7;
  param_2[-2] = uVar22;
  *puVar15 = uVar16;
LAB_009763b4:
  puVar12 = puVar15;
  if (puVar10 == puVar15) goto LAB_00976898;
  while( true ) {
    puVar11 = puVar10 + -3;
    do {
      puVar18 = puVar11;
      puVar11 = puVar18 + 3;
    } while ((double)puVar18[4] <= (double)param_1[1]);
    puVar10 = puVar18 + 6;
    do {
      puVar13 = puVar12;
      puVar12 = puVar13 + -3;
    } while ((double)param_1[1] < (double)puVar13[-2]);
    if (puVar12 <= puVar11) break;
    uVar7 = puVar18[5];
    uVar22 = puVar18[4];
    uVar16 = *puVar11;
    uVar23 = puVar13[-2];
    uVar20 = *puVar12;
    puVar18[5] = puVar13[-1];
    puVar18[4] = uVar23;
    *puVar11 = uVar20;
    puVar13[-1] = uVar7;
    puVar13[-2] = uVar22;
    *puVar12 = uVar16;
  }
  goto LAB_00975eb4;
LAB_0097643c:
  param_2 = puVar12;
  if ((uVar6 & 1) != 0) goto LAB_00976898;
  goto LAB_00975eac;
LAB_0097683c:
  do {
    dVar21 = (double)puVar15[1];
    if (dVar21 < (double)puVar11[1]) {
      uVar7 = *puVar15;
      uVar16 = puVar15[2];
      lVar3 = lVar14;
      do {
        lVar17 = lVar3;
        *(undefined8 *)((long)param_1 + lVar17 + 0x50) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x38);
        *(undefined8 *)((long)param_1 + lVar17 + 0x48) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x30);
        *(undefined8 *)((long)param_1 + lVar17 + 0x58) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x40);
        puVar11 = param_1;
        if (lVar17 == -0x30) goto LAB_00976820;
        lVar3 = lVar17 + -0x18;
      } while (dVar21 < *(double *)((long)param_1 + lVar17 + 0x20));
      puVar11 = (undefined8 *)((long)param_1 + lVar17 + 0x30);
LAB_00976820:
      *puVar11 = uVar7;
      puVar11[1] = dVar21;
      puVar11[2] = uVar16;
    }
    puVar10 = puVar15 + 3;
    lVar14 = lVar14 + 0x18;
    puVar11 = puVar15;
    puVar15 = puVar10;
  } while (puVar10 != param_2);
LAB_00976898:
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


