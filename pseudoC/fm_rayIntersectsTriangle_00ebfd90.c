// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_rayIntersectsTriangle
// Entry Point: 00ebfd90
// Size: 320 bytes
// Signature: undefined __cdecl fm_rayIntersectsTriangle(double * param_1, double * param_2, double * param_3, double * param_4, double * param_5, double * param_6)


/* FLOAT_MATH::fm_rayIntersectsTriangle(double const*, double const*, double const*, double const*,
   double const*, double&) */

bool FLOAT_MATH::fm_rayIntersectsTriangle
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
               double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  dVar13 = param_3[1];
  dVar6 = param_3[2];
  dVar4 = *param_2;
  dVar8 = param_2[1];
  dVar2 = param_5[1] - dVar13;
  dVar14 = *param_3;
  dVar1 = param_5[2] - dVar6;
  dVar3 = *param_5 - dVar14;
  dVar5 = param_2[2];
  dVar7 = param_4[1] - dVar13;
  dVar11 = *param_4 - dVar14;
  dVar16 = (double)NEON_fmadd(dVar5,dVar3,dVar4 * -dVar1);
  uVar17 = NEON_fmadd(dVar8,dVar1,dVar5 * -dVar2);
  dVar12 = param_4[2] - dVar6;
  uVar18 = NEON_fmadd(dVar4,dVar2,dVar8 * -dVar3);
  uVar9 = NEON_fmadd(dVar11,uVar17,dVar7 * dVar16);
  dVar10 = (double)NEON_fmadd(dVar12,uVar18,uVar9);
  if ((-1e-05 < dVar10) && (dVar10 < 1e-05)) {
    return false;
  }
  dVar10 = 1.0 / dVar10;
  dVar13 = param_1[1] - dVar13;
  dVar14 = *param_1 - dVar14;
  dVar6 = param_1[2] - dVar6;
  uVar9 = NEON_fmadd(dVar14,uVar17,dVar16 * dVar13);
  dVar16 = (double)NEON_fmadd(dVar6,uVar18,uVar9);
  dVar16 = dVar10 * dVar16;
  if ((dVar16 < 0.0 || dVar16 != 1.0) && (dVar16 < 0.0 || 1.0 <= dVar16)) {
    return false;
  }
  dVar15 = (double)NEON_fmadd(dVar6,dVar11,dVar14 * -dVar12);
  uVar18 = NEON_fmadd(dVar13,dVar12,dVar6 * -dVar7);
  uVar17 = NEON_fmadd(dVar14,dVar7,dVar13 * -dVar11);
  uVar9 = NEON_fmadd(dVar4,uVar18,dVar8 * dVar15);
  dVar4 = (double)NEON_fmadd(dVar5,uVar17,uVar9);
  dVar4 = dVar10 * dVar4;
  if ((dVar4 < 0.0 || dVar16 + dVar4 != 1.0) && (dVar4 < 0.0 || 1.0 <= dVar16 + dVar4)) {
    return false;
  }
  uVar9 = NEON_fmadd(dVar3,uVar18,dVar2 * dVar15);
  dVar1 = (double)NEON_fmadd(dVar1,uVar17,uVar9);
  *param_6 = dVar10 * dVar1;
  return 0.0 < dVar10 * dVar1;
}


