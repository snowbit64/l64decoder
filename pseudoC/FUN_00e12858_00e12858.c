// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e12858
// Entry Point: 00e12858
// Size: 464 bytes
// Signature: undefined FUN_00e12858(void)


void FUN_00e12858(long param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double *pdVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dStack_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  lVar7 = -((-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3) + 0xf &
           0xfffffffffffffff0);
  lVar4 = lVar7 + -0x20;
  if ((int)param_2 < 1) goto LAB_00e12a08;
  uVar6 = (ulong)param_2;
  if (param_2 < 8) {
    uVar9 = 0;
LAB_00e128e4:
    lVar10 = uVar6 - uVar9;
    pdVar5 = (double *)((long)&dStack_20 + uVar9 * 8 + lVar4 + 0x20);
    pfVar12 = (float *)(param_3 + uVar9 * 4);
    do {
      lVar10 = lVar10 + -1;
      *pdVar5 = (double)*pfVar12;
      pdVar5 = pdVar5 + 1;
      pfVar12 = pfVar12 + 1;
    } while (lVar10 != 0);
  }
  else {
    uVar9 = uVar6 & 0xfffffff8;
    puVar11 = (undefined8 *)(param_3 + 0x10);
    pdVar5 = (double *)(&stack0x00000000 + lVar7);
    uVar13 = uVar9;
    do {
      uVar16 = puVar11[-1];
      uVar2 = puVar11[-2];
      uVar17 = puVar11[1];
      uVar3 = *puVar11;
      puVar11 = puVar11 + 4;
      uVar13 = uVar13 - 8;
      pdVar5[-3] = (double)(float)((ulong)uVar2 >> 0x20);
      pdVar5[-4] = (double)(float)uVar2;
      pdVar5[-1] = (double)(float)((ulong)uVar16 >> 0x20);
      pdVar5[-2] = (double)(float)uVar16;
      pdVar5[1] = (double)(float)((ulong)uVar3 >> 0x20);
      *pdVar5 = (double)(float)uVar3;
      pdVar5[3] = (double)(float)((ulong)uVar17 >> 0x20);
      pdVar5[2] = (double)(float)uVar17;
      pdVar5 = pdVar5 + 8;
    } while (uVar13 != 0);
    if (uVar9 != uVar6) goto LAB_00e128e4;
  }
  if (0 < (int)param_2) {
    iVar8 = 0;
    fVar15 = *(float *)(param_1 + (long)(int)param_2 * 4);
    do {
      dVar18 = 0.0;
      uVar13 = 0;
      do {
        dVar19 = *(double *)((long)&dStack_20 + uVar13 * 8 + lVar4 + 0x20);
        dVar22 = 0.0;
        lVar10 = uVar6 + 1;
        dVar23 = (double)fVar15;
        do {
          iVar14 = (int)lVar10;
          dVar22 = (double)NEON_fmadd(dVar22,dVar19,dVar23);
          lVar10 = lVar10 + -1;
          dVar23 = (double)NEON_fmadd(dVar23,dVar19,
                                      (double)*(float *)(param_1 + (ulong)(iVar14 - 2) * 4));
        } while (1 < lVar10);
        dVar23 = dVar23 / dVar22;
        dVar18 = (double)NEON_fmadd(dVar23,dVar23,dVar18);
        *(double *)((long)&dStack_20 + uVar13 * 8 + lVar4 + 0x20) = dVar19 - dVar23;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar6);
      if (iVar8 == 0x29) goto LAB_00e12a08;
      iVar8 = iVar8 + 1;
    } while (9.999999999999999e-21 < dVar18);
    if ((int)param_2 < 2) {
      param_2 = 1;
    }
    uVar6 = (ulong)param_2;
    if (param_2 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar6 & 0x7ffffff8;
      puVar11 = (undefined8 *)(param_3 + 0x10);
      pdVar5 = (double *)(&stack0x00000000 + lVar7);
      uVar13 = uVar9;
      do {
        dVar19 = pdVar5[-3];
        dVar18 = pdVar5[-4];
        uVar13 = uVar13 - 8;
        dVar22 = pdVar5[1];
        dVar23 = *pdVar5;
        dVar21 = pdVar5[3];
        dVar20 = pdVar5[2];
        puVar11[-1] = CONCAT44((float)pdVar5[-1],(float)pdVar5[-2]);
        puVar11[-2] = CONCAT44((float)dVar19,(float)dVar18);
        puVar11[1] = CONCAT44((float)dVar21,(float)dVar20);
        *puVar11 = CONCAT44((float)dVar22,(float)dVar23);
        puVar11 = puVar11 + 4;
        pdVar5 = pdVar5 + 8;
      } while (uVar13 != 0);
      if (uVar9 == uVar6) goto LAB_00e12a08;
    }
    lVar7 = uVar6 - uVar9;
    pdVar5 = (double *)((long)&dStack_20 + uVar9 * 8 + lVar4 + 0x20);
    pfVar12 = (float *)(param_3 + uVar9 * 4);
    do {
      lVar7 = lVar7 + -1;
      *pfVar12 = (float)*pdVar5;
      pdVar5 = pdVar5 + 1;
      pfVar12 = pfVar12 + 1;
    } while (lVar7 != 0);
  }
LAB_00e12a08:
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


