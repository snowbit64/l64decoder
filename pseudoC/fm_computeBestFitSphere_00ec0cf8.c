// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitSphere
// Entry Point: 00ec0cf8
// Size: 704 bytes
// Signature: undefined __cdecl fm_computeBestFitSphere(uint param_1, double * param_2, uint param_3, double * param_4)


/* FLOAT_MATH::fm_computeBestFitSphere(unsigned int, double const*, unsigned int, double*) */

void FLOAT_MATH::fm_computeBestFitSphere(uint param_1,double *param_2,uint param_3,double *param_4)

{
  uint uVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  
  if (param_1 == 0) {
    dVar6 = 100000000.0;
    dVar4 = -100000000.0;
    dVar9 = dVar6;
    dVar18 = dVar4;
    dVar22 = dVar4;
    dVar12 = dVar6;
    dVar16 = dVar4;
    dVar14 = dVar6;
    dVar15 = dVar4;
    dVar13 = dVar4;
    dVar11 = dVar6;
    dVar10 = dVar6;
    dVar17 = dVar4;
    dVar8 = dVar4;
    dVar7 = dVar4;
    dVar19 = dVar6;
    dVar20 = dVar6;
    dVar21 = dVar6;
  }
  else {
    dVar4 = -100000000.0;
    dVar6 = 100000000.0;
    pdVar5 = param_2 + 2;
    dVar9 = dVar6;
    dVar18 = dVar4;
    dVar26 = dVar4;
    dVar24 = dVar6;
    dVar16 = dVar4;
    dVar14 = dVar6;
    dVar15 = dVar4;
    dVar13 = dVar4;
    dVar11 = dVar6;
    dVar10 = dVar6;
    dVar28 = dVar4;
    dVar8 = dVar4;
    dVar7 = dVar4;
    dVar19 = dVar6;
    dVar20 = dVar6;
    dVar21 = dVar6;
    uVar1 = param_1;
    do {
      dVar22 = pdVar5[-2];
      if (dVar22 < dVar14) {
        dVar9 = pdVar5[-1];
        dVar6 = *pdVar5;
        dVar25 = pdVar5[-1];
        dVar14 = dVar22;
      }
      else {
        dVar25 = pdVar5[-1];
      }
      if (dVar16 < dVar22) {
        dVar4 = *pdVar5;
        dVar16 = dVar22;
        dVar18 = dVar25;
      }
      if (dVar25 < dVar20) {
        dVar19 = *pdVar5;
        dVar20 = dVar25;
        dVar21 = dVar22;
      }
      dVar27 = *pdVar5;
      pdVar5 = (double *)((long)pdVar5 + (ulong)param_3);
      dVar17 = dVar22;
      dVar12 = dVar27;
      dVar3 = dVar25;
      if (dVar25 <= dVar8) {
        dVar17 = dVar28;
        dVar12 = dVar7;
        dVar3 = dVar8;
      }
      dVar8 = dVar3;
      dVar7 = dVar12;
      dVar12 = dVar22;
      dVar28 = dVar27;
      dVar3 = dVar25;
      if (dVar10 <= dVar27) {
        dVar12 = dVar24;
        dVar28 = dVar10;
        dVar3 = dVar11;
      }
      dVar11 = dVar3;
      dVar10 = dVar28;
      if (dVar27 <= dVar13) {
        dVar22 = dVar26;
        dVar27 = dVar13;
        dVar25 = dVar15;
      }
      dVar15 = dVar25;
      dVar13 = dVar27;
      uVar1 = uVar1 - 1;
      dVar26 = dVar22;
      dVar24 = dVar12;
      dVar28 = dVar17;
    } while (uVar1 != 0);
  }
  uVar23 = NEON_fmadd(dVar16 - dVar14,dVar16 - dVar14,(dVar18 - dVar9) * (dVar18 - dVar9));
  uVar29 = NEON_fmadd(dVar17 - dVar21,dVar17 - dVar21,(dVar8 - dVar20) * (dVar8 - dVar20));
  dVar26 = (double)NEON_fmadd(dVar4 - dVar6,dVar4 - dVar6,uVar23);
  dVar28 = (double)NEON_fmadd(dVar7 - dVar19,dVar7 - dVar19,uVar29);
  uVar23 = NEON_fmadd(dVar22 - dVar12,dVar22 - dVar12,(dVar15 - dVar11) * (dVar15 - dVar11));
  dVar24 = (double)NEON_fmadd(dVar13 - dVar10,dVar13 - dVar10,uVar23);
  if (dVar26 < dVar28) {
    dVar4 = dVar7;
    dVar6 = dVar19;
    dVar9 = dVar20;
    dVar18 = dVar8;
    dVar16 = dVar17;
    dVar14 = dVar21;
    dVar26 = dVar28;
  }
  if (dVar26 < dVar24) {
    dVar4 = dVar13;
    dVar6 = dVar10;
    dVar9 = dVar11;
    dVar18 = dVar15;
    dVar16 = dVar22;
    dVar14 = dVar12;
  }
  dVar11 = (dVar9 + dVar18) * 0.5;
  dVar8 = (dVar14 + dVar16) * 0.5;
  dVar10 = (dVar6 + dVar4) * 0.5;
  *param_4 = dVar8;
  param_4[1] = dVar11;
  param_4[2] = dVar10;
  uVar23 = NEON_fmadd(dVar16 - dVar8,dVar16 - dVar8,(dVar18 - dVar11) * (dVar18 - dVar11));
  dVar13 = (double)NEON_fmadd(dVar4 - dVar10,dVar4 - dVar10,uVar23);
  dVar7 = SQRT(dVar13);
  if (param_1 != 0) {
    do {
      dVar16 = *param_2;
      pdVar2 = param_2 + 1;
      dVar4 = dVar16 - dVar8;
      dVar15 = *pdVar2 - dVar11;
      pdVar5 = param_2 + 2;
      dVar18 = *pdVar5 - dVar10;
      uVar23 = NEON_fmadd(dVar4,dVar4,dVar15 * dVar15);
      dVar15 = (double)NEON_fmadd(dVar18,dVar18,uVar23);
      if (dVar13 < dVar15) {
        dVar15 = SQRT(dVar15);
        param_2 = (double *)((long)param_2 + (ulong)param_3);
        dVar7 = (dVar7 + dVar15) * 0.5;
        dVar4 = 1.0 / dVar15;
        dVar15 = dVar15 - dVar7;
        dVar8 = (double)NEON_fmadd(dVar7,dVar8,dVar16 * dVar15);
        dVar11 = (double)NEON_fmadd(dVar7,dVar11,*pdVar2 * dVar15);
        dVar10 = (double)NEON_fmadd(dVar7,dVar10,*pdVar5 * dVar15);
        dVar13 = dVar7 * dVar7;
        dVar8 = dVar4 * dVar8;
        dVar11 = dVar4 * dVar11;
        dVar10 = dVar4 * dVar10;
        *param_4 = dVar8;
        param_4[1] = dVar11;
        param_4[2] = dVar10;
      }
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}


