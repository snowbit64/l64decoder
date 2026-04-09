// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_colinear
// Entry Point: 00ebe5a8
// Size: 192 bytes
// Signature: undefined __cdecl fm_colinear(double * param_1, double * param_2, double * param_3, double param_4)


/* FLOAT_MATH::fm_colinear(double const*, double const*, double const*, double) */

bool FLOAT_MATH::fm_colinear(double *param_1,double *param_2,double *param_3,double param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar11 = param_2[1] - param_1[1];
  dVar13 = param_2[2] - param_1[2];
  dVar12 = *param_2 - *param_1;
  dVar10 = *param_3 - *param_2;
  dVar5 = 0.0;
  dVar9 = param_3[1] - param_2[1];
  dVar8 = param_3[2] - param_2[2];
  uVar1 = NEON_fmadd(dVar12,dVar12,dVar11 * dVar11);
  dVar7 = 0.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  dVar2 = (double)NEON_fmadd(dVar13,dVar13,uVar1);
  dVar3 = 0.0;
  if (1.000000011686097e-07 < SQRT(dVar2)) {
    dVar7 = 1.0 / SQRT(dVar2);
    dVar6 = dVar12 * dVar7;
    dVar5 = dVar11 * dVar7;
    dVar7 = dVar13 * dVar7;
  }
  uVar1 = NEON_fmadd(dVar10,dVar10,dVar9 * dVar9);
  dVar2 = (double)NEON_fmadd(dVar8,dVar8,uVar1);
  dVar11 = 0.0;
  if (1.000000011686097e-07 < SQRT(dVar2)) {
    dVar11 = 1.0 / SQRT(dVar2);
    dVar4 = dVar10 * dVar11;
    dVar3 = dVar9 * dVar11;
    dVar11 = dVar8 * dVar11;
  }
  uVar1 = NEON_fmadd(dVar6,dVar4,dVar5 * dVar3);
  dVar2 = (double)NEON_fmadd(dVar7,dVar11,uVar1);
  return param_4 <= dVar2;
}


