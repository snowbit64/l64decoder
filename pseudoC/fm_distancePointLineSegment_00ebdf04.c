// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_distancePointLineSegment
// Entry Point: 00ebdf04
// Size: 476 bytes
// Signature: undefined __cdecl fm_distancePointLineSegment(double * param_1, double * param_2, double * param_3, double * param_4, LineSegmentType * param_5, double param_6)


/* FLOAT_MATH::fm_distancePointLineSegment(double const*, double const*, double const*, double*,
   FLOAT_MATH::LineSegmentType&, double) */

undefined  [16]
FLOAT_MATH::fm_distancePointLineSegment
          (double *param_1,double *param_2,double *param_3,double *param_4,LineSegmentType *param_5,
          double param_6)

{
  undefined4 uVar1;
  double *pdVar2;
  double *pdVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar11 = *param_3;
  dVar12 = *param_2;
  pdVar3 = param_3 + 1;
  dVar14 = param_2[1];
  dVar13 = dVar11 - dVar12;
  pdVar2 = param_3 + 2;
  dVar16 = *pdVar3 - dVar14;
  dVar17 = param_2[2];
  dVar18 = *pdVar2 - dVar17;
  uVar8 = NEON_fmadd(dVar13,dVar13,dVar16 * dVar16);
  dVar9 = (double)NEON_fmadd(dVar18,dVar18,uVar8);
  dVar9 = SQRT(dVar9);
  if (dVar9 <= 0.0) {
    *param_4 = dVar11;
    param_4[1] = *pdVar3;
    param_4[2] = *pdVar2;
    *(undefined4 *)param_5 = 2;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar9;
    return auVar5;
  }
  dVar14 = param_1[1] - dVar14;
  dVar15 = *param_1 - dVar12;
  dVar17 = param_1[2] - dVar17;
  uVar8 = NEON_fmadd(dVar15,dVar13,dVar16 * dVar14);
  dVar16 = (double)NEON_fmadd(dVar17,dVar18,uVar8);
  dVar16 = dVar16 / (dVar9 * dVar9);
  if (0.0 <= dVar16 && dVar16 == 1.0 || 0.0 <= dVar16 && dVar16 < 1.0) {
    dVar12 = (double)NEON_fmadd(dVar16,dVar13,dVar12);
    *param_4 = dVar12;
    dVar11 = (param_6 + param_6) * (param_6 + param_6);
    dVar13 = (double)NEON_fmadd(dVar16,*pdVar3 - param_2[1],param_2[1]);
    param_4[1] = dVar13;
    dVar14 = (double)NEON_fmadd(dVar16,*pdVar2 - param_2[2],param_2[2]);
    param_4[2] = dVar14;
    uVar8 = NEON_fmadd(*param_1 - dVar12,*param_1 - dVar12,
                       (param_1[1] - dVar13) * (param_1[1] - dVar13));
    dVar9 = (double)NEON_fmadd(param_1[2] - dVar14,param_1[2] - dVar14,uVar8);
    uVar8 = NEON_fmadd(dVar12 - *param_2,dVar12 - *param_2,
                       (dVar13 - param_2[1]) * (dVar13 - param_2[1]));
    dVar16 = (double)NEON_fmadd(dVar14 - param_2[2],dVar14 - param_2[2],uVar8);
    if (dVar11 <= dVar16) {
      uVar8 = NEON_fmadd(dVar12 - *param_3,dVar12 - *param_3,
                         (dVar13 - param_3[1]) * (dVar13 - param_3[1]));
      dVar12 = (double)NEON_fmadd(dVar14 - param_3[2],dVar14 - param_3[2],uVar8);
      uVar1 = 2;
      if (dVar11 <= dVar12) {
        uVar1 = 1;
      }
      *(undefined4 *)param_5 = uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = SQRT(dVar9);
      return auVar7;
    }
    *(undefined4 *)param_5 = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = SQRT(dVar9);
    return auVar6;
  }
  dVar9 = param_1[1] - *pdVar3;
  dVar13 = *param_1 - dVar11;
  dVar16 = param_1[2] - *pdVar2;
  uVar10 = NEON_fmadd(dVar15,dVar15,dVar14 * dVar14);
  uVar8 = NEON_fmadd(dVar13,dVar13,dVar9 * dVar9);
  dVar14 = (double)NEON_fmadd(dVar17,dVar17,uVar10);
  dVar13 = (double)NEON_fmadd(dVar16,dVar16,uVar8);
  dVar9 = dVar13;
  if (dVar14 <= dVar13) {
    pdVar2 = param_2 + 2;
    dVar9 = dVar14;
    pdVar3 = param_2 + 1;
  }
  if (dVar14 <= dVar13) {
    dVar11 = dVar12;
  }
  *param_4 = dVar11;
  param_4[1] = *pdVar3;
  param_4[2] = *pdVar2;
  *(uint *)param_5 = (uint)(dVar13 < dVar14) << 1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = SQRT(dVar9);
  return auVar4;
}


