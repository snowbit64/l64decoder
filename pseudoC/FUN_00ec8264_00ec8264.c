// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ec8264
// Entry Point: 00ec8264
// Size: 2496 bytes
// Signature: undefined FUN_00ec8264(void)


void FUN_00ec8264(uint *param_1,uint *param_2,long *param_3)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  uint uVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
LAB_00ec8294:
  puVar20 = param_2 + -1;
  puVar17 = param_1;
LAB_00ec829c:
  param_1 = puVar17;
  uVar12 = (long)param_2 - (long)param_1;
  uVar11 = (long)uVar12 >> 2;
  switch(uVar11) {
  case 0:
  case 1:
    goto switchD_00ec8920_caseD_0;
  case 2:
    uVar18 = param_2[-1];
    lVar13 = *param_3;
    lVar3 = param_3[1];
    uVar5 = uVar18 * 3;
    lVar16 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
    uVar4 = *param_1;
    uVar8 = uVar4 * 3;
    dVar22 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar5 * 4) * 0x18 + lVar16) +
              *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar16)
             + *(double *)
                (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar16)) / 3.0;
    dVar23 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar8 * 4) * 0x18 + lVar16) +
              *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar16)
             + *(double *)
                (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar16)) / 3.0;
    bVar7 = uVar18 < uVar4;
    if (dVar22 != dVar23) {
      bVar7 = dVar22 < dVar23;
    }
    if (bVar7) {
      *param_1 = uVar18;
      param_2[-1] = uVar4;
      return;
    }
    return;
  case 3:
    FUN_00ec7f8c(param_1,param_1 + 1,puVar20,param_3);
    return;
  case 4:
    FUN_00ec8c24(param_1,param_1 + 1,param_1 + 2,puVar20,param_3);
    return;
  case 5:
    FUN_00ec8ed0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar20,param_3);
    return;
  default:
    if (0x7b < (long)uVar12) {
      uVar1 = uVar11;
      if ((long)uVar11 < 0) {
        uVar1 = uVar11 + 1;
      }
      puVar17 = (uint *)((long)param_1 + (uVar1 & 0x7ffffffffffffffe) * 2);
      if (uVar12 < 0xf9d) {
        iVar9 = FUN_00ec7f8c(param_1,puVar17,puVar20,param_3);
      }
      else {
        uVar12 = uVar11 + 3;
        if (-1 < (long)uVar11) {
          uVar12 = uVar11;
        }
        iVar9 = FUN_00ec8ed0(param_1,(long)param_1 + (uVar12 & 0xfffffffffffffffc),puVar17,
                             (long)puVar17 + (uVar12 & 0xfffffffffffffffc),puVar20,param_3);
      }
      uVar4 = *param_1;
      lVar13 = *param_3;
      lVar3 = param_3[1];
      uVar5 = uVar4 * 3;
      lVar16 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
      uVar18 = *puVar17;
      uVar8 = uVar18 * 3;
      dVar22 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar5 * 4) * 0x18 + lVar16) +
                *(double *)
                 (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar16)) / 3.0;
      dVar23 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar8 * 4) * 0x18 + lVar16) +
                *(double *)
                 (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar16)) / 3.0;
      bVar7 = uVar4 < uVar18;
      if (dVar22 != dVar23) {
        bVar7 = dVar22 < dVar23;
      }
      puVar14 = puVar20;
      if (!bVar7) break;
      puVar15 = param_1 + 1;
      if (puVar15 < puVar20) goto LAB_00ec8470;
      goto LAB_00ec83d8;
    }
    FUN_00ec7f8c(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar3 = *param_3;
    lVar16 = param_3[1];
    lVar13 = 0xc;
    puVar17 = param_1 + 3;
    puVar20 = param_1 + 2;
    goto LAB_00ec8a8c;
  }
  while (puVar14 = puVar14 + -1, puVar14 != param_1) {
    uVar5 = *puVar14;
    uVar8 = uVar5 * 3;
    dVar24 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar8 * 4) * 0x18 + lVar16) +
              *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar16)
             + *(double *)
                (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar16)) / 3.0;
    bVar7 = uVar5 < uVar18;
    if (dVar24 != dVar23) {
      bVar7 = dVar24 < dVar23;
    }
    if (bVar7) goto code_r0x00ec8458;
  }
  uVar18 = *puVar20;
  uVar5 = uVar18 * 3;
  dVar23 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar5 * 4) * 0x18 + lVar16) +
            *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar16) +
           *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar16)) /
           3.0;
  bVar7 = uVar4 < uVar18;
  if (dVar22 != dVar23) {
    bVar7 = dVar22 < dVar23;
  }
  puVar14 = param_1 + 1;
  puVar17 = puVar14;
  if (!bVar7) {
    while( true ) {
      if (puVar17 == puVar20) {
        return;
      }
      uVar5 = *puVar17;
      uVar8 = uVar5 * 3;
      dVar23 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar8 * 4) * 0x18 + lVar16) +
                *(double *)
                 (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar16)) / 3.0;
      bVar7 = uVar4 < uVar5;
      if (dVar22 != dVar23) {
        bVar7 = dVar22 < dVar23;
      }
      if (bVar7) break;
      puVar17 = puVar17 + 1;
    }
    puVar14 = puVar17 + 1;
    *puVar17 = uVar18;
    *puVar20 = uVar5;
  }
  puVar15 = puVar20;
  if (puVar14 == puVar20) {
    return;
  }
  while( true ) {
    uVar4 = *param_1;
    uVar18 = uVar4 * 3;
    lVar16 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
    dVar22 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar18 * 4) * 0x18 + lVar16) +
              *(double *)
               (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar18 + 1) * 4) * 0x18 + lVar16) +
             *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar18 + 2) * 4) * 0x18 + lVar16)
             ) / 3.0;
    do {
      puVar17 = puVar14;
      puVar14 = puVar17 + 1;
      uVar18 = *puVar17;
      uVar5 = uVar18 * 3;
      dVar23 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar5 * 4) * 0x18 + lVar16) +
                *(double *)
                 (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar16)) / 3.0;
      bVar7 = uVar4 < uVar18;
      if (dVar22 != dVar23) {
        bVar7 = dVar22 < dVar23;
      }
    } while (!bVar7);
    do {
      puVar15 = puVar15 + -1;
      uVar5 = *puVar15;
      uVar8 = uVar5 * 3;
      dVar23 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar8 * 4) * 0x18 + lVar16) +
                *(double *)
                 (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar16)) / 3.0;
      bVar7 = uVar4 < uVar5;
      if (dVar22 != dVar23) {
        bVar7 = dVar22 < dVar23;
      }
    } while (bVar7);
    if (puVar15 <= puVar17) break;
    *puVar17 = uVar5;
    *puVar15 = uVar18;
  }
  goto LAB_00ec829c;
code_r0x00ec8458:
  iVar9 = iVar9 + 1;
  *param_1 = uVar5;
  *puVar14 = uVar4;
  puVar15 = param_1 + 1;
  if (puVar15 < puVar14) {
LAB_00ec8470:
    while( true ) {
      uVar4 = *puVar17;
      uVar18 = uVar4 * 3;
      lVar16 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
      dVar22 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar18 * 4) * 0x18 + lVar16) +
                *(double *)
                 (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar18 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar18 + 2) * 4) * 0x18 + lVar16)) / 3.0;
      do {
        puVar21 = puVar15;
        puVar15 = puVar21 + 1;
        uVar18 = *puVar21;
        uVar5 = uVar18 * 3;
        dVar23 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar5 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar16) +
                 *(double *)
                  (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar16)) / 3.0
        ;
        bVar7 = uVar18 < uVar4;
        if (dVar23 != dVar22) {
          bVar7 = dVar23 < dVar22;
        }
      } while (bVar7);
      do {
        puVar14 = puVar14 + -1;
        uVar5 = *puVar14;
        uVar8 = uVar5 * 3;
        dVar23 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar8 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar16) +
                 *(double *)
                  (lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar16)) / 3.0
        ;
        bVar7 = uVar5 < uVar4;
        if (dVar23 != dVar22) {
          bVar7 = dVar23 < dVar22;
        }
      } while (!bVar7);
      if (puVar14 < puVar21) break;
      iVar9 = iVar9 + 1;
      puVar2 = puVar14;
      if (puVar21 != puVar17) {
        puVar2 = puVar17;
      }
      *puVar21 = uVar5;
      *puVar14 = uVar18;
      puVar17 = puVar2;
    }
    if (puVar21 == puVar17) goto LAB_00ec866c;
  }
  else {
LAB_00ec83d8:
    puVar21 = param_1 + 1;
    if (puVar21 == puVar17) goto LAB_00ec866c;
  }
  uVar4 = *puVar17;
  uVar5 = uVar4 * 3;
  lVar16 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
  uVar18 = *puVar21;
  uVar8 = uVar18 * 3;
  dVar22 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar5 * 4) * 0x18 + lVar16) +
            *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar16) +
           *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar16)) /
           3.0;
  dVar23 = (*(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)uVar8 * 4) * 0x18 + lVar16) +
            *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar16) +
           *(double *)(lVar13 + (ulong)*(uint *)(lVar3 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar16)) /
           3.0;
  bVar7 = uVar4 < uVar18;
  if (dVar22 != dVar23) {
    bVar7 = dVar22 < dVar23;
  }
  if (bVar7) {
    iVar9 = iVar9 + 1;
    *puVar21 = uVar4;
    *puVar17 = uVar18;
  }
LAB_00ec866c:
  if (iVar9 == 0) {
    uVar11 = FUN_00ec9250(param_1,puVar21,param_3);
    uVar12 = FUN_00ec9250(puVar21 + 1,param_2,param_3);
    if ((uVar12 & 1) != 0) goto LAB_00ec8900;
    puVar17 = puVar21 + 1;
    if ((uVar11 & 1) != 0) goto LAB_00ec829c;
  }
  if ((long)param_2 - (long)puVar21 <= (long)puVar21 - (long)param_1) {
    FUN_00ec8264(puVar21 + 1,param_2,param_3);
    param_2 = puVar21;
    goto LAB_00ec8294;
  }
  FUN_00ec8264(param_1,puVar21,param_3);
  puVar17 = puVar21 + 1;
  goto LAB_00ec829c;
LAB_00ec8900:
  param_2 = puVar21;
  if ((uVar11 & 1) != 0) {
    return;
  }
  goto LAB_00ec8294;
LAB_00ec8a8c:
  puVar14 = puVar17;
  uVar4 = *puVar14;
  uVar18 = *puVar20;
  uVar5 = uVar4 * 3;
  lVar19 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
  uVar8 = uVar18 * 3;
  dVar22 = (*(double *)(lVar3 + (ulong)*(uint *)(lVar16 + (ulong)uVar5 * 4) * 0x18 + lVar19) +
            *(double *)(lVar3 + (ulong)*(uint *)(lVar16 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar19) +
           *(double *)(lVar3 + (ulong)*(uint *)(lVar16 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar19)) /
           3.0;
  dVar23 = (*(double *)(lVar3 + (ulong)*(uint *)(lVar16 + (ulong)uVar8 * 4) * 0x18 + lVar19) +
            *(double *)(lVar3 + (ulong)*(uint *)(lVar16 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar19) +
           *(double *)(lVar3 + (ulong)*(uint *)(lVar16 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar19)) /
           3.0;
  bVar7 = uVar4 < uVar18;
  if (dVar22 != dVar23) {
    bVar7 = dVar22 < dVar23;
  }
  lVar19 = lVar13;
  if (bVar7) {
    do {
      lVar6 = lVar19 + -4;
      *(uint *)((long)param_1 + lVar19) = uVar18;
      puVar17 = param_1;
      if (lVar6 == 0) goto LAB_00ec8a78;
      lVar10 = (ulong)*(uint *)((long)param_3 + 0x14) * 8;
      uVar18 = *(uint *)((long)param_1 + lVar19 + -8);
      uVar8 = uVar18 * 3;
      dVar22 = (*(double *)(lVar3 + (ulong)*(uint *)(lVar16 + (ulong)uVar5 * 4) * 0x18 + lVar10) +
                *(double *)
                 (lVar3 + (ulong)*(uint *)(lVar16 + (ulong)(uVar5 + 1) * 4) * 0x18 + lVar10) +
               *(double *)
                (lVar3 + (ulong)*(uint *)(lVar16 + (ulong)(uVar5 + 2) * 4) * 0x18 + lVar10)) / 3.0;
      dVar23 = (*(double *)(lVar3 + (ulong)*(uint *)(lVar16 + (ulong)uVar8 * 4) * 0x18 + lVar10) +
                *(double *)
                 (lVar3 + (ulong)*(uint *)(lVar16 + (ulong)(uVar8 + 1) * 4) * 0x18 + lVar10) +
               *(double *)
                (lVar3 + (ulong)*(uint *)(lVar16 + (ulong)(uVar8 + 2) * 4) * 0x18 + lVar10)) / 3.0;
      bVar7 = uVar4 < uVar18;
      if (dVar22 != dVar23) {
        bVar7 = dVar22 < dVar23;
      }
      lVar19 = lVar6;
    } while (bVar7);
    puVar17 = (uint *)((long)param_1 + lVar6);
LAB_00ec8a78:
    *puVar17 = uVar4;
  }
  lVar13 = lVar13 + 4;
  puVar17 = puVar14 + 1;
  puVar20 = puVar14;
  if (puVar14 + 1 == param_2) {
switchD_00ec8920_caseD_0:
    return;
  }
  goto LAB_00ec8a8c;
}


