// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_colinear
// Entry Point: 00ebe4c8
// Size: 224 bytes
// Signature: undefined __cdecl fm_colinear(double * param_1, double * param_2, double * param_3, double * param_4, double param_5)


/* FLOAT_MATH::fm_colinear(double const*, double const*, double const*, double const*, double) */

bool FLOAT_MATH::fm_colinear
               (double *param_1,double *param_2,double *param_3,double *param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar4 = *param_1;
  dVar3 = param_1[1];
  dVar6 = param_2[2];
  dVar2 = *param_2 - dVar4;
  dVar1 = param_2[1] - dVar3;
  dVar13 = dVar6 - param_1[2];
  uVar7 = NEON_fmadd(dVar2,dVar2,dVar1 * dVar1);
  dVar8 = (double)NEON_fmadd(dVar13,dVar13,uVar7);
  dVar5 = 0.0;
  dVar12 = (*param_4 - dVar4) - (*param_3 - dVar4);
  dVar10 = (param_4[2] - dVar6) - (param_3[2] - dVar6);
  dVar11 = (param_4[1] - dVar3) - (param_3[1] - dVar3);
  dVar4 = 0.0;
  dVar3 = 0.0;
  dVar9 = 1.0;
  dVar6 = 1.0;
  if (1.000000011686097e-07 < SQRT(dVar8)) {
    dVar3 = 1.0 / SQRT(dVar8);
    dVar6 = dVar2 * dVar3;
    dVar4 = dVar1 * dVar3;
    dVar3 = dVar13 * dVar3;
  }
  uVar7 = NEON_fmadd(dVar12,dVar12,dVar11 * dVar11);
  dVar1 = (double)NEON_fmadd(dVar10,dVar10,uVar7);
  dVar2 = 0.0;
  if (1.000000011686097e-07 < SQRT(dVar1)) {
    dVar2 = 1.0 / SQRT(dVar1);
    dVar9 = dVar12 * dVar2;
    dVar5 = dVar11 * dVar2;
    dVar2 = dVar10 * dVar2;
  }
  uVar7 = NEON_fmadd(dVar6,dVar9,dVar4 * dVar5);
  dVar1 = (double)NEON_fmadd(dVar3,dVar2,uVar7);
  return param_5 <= dVar1;
}


