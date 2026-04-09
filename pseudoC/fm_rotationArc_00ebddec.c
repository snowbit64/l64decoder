// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_rotationArc
// Entry Point: 00ebddec
// Size: 280 bytes
// Signature: undefined __cdecl fm_rotationArc(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_rotationArc(double const*, double const*, double*) */

void FLOAT_MATH::fm_rotationArc(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  
  dVar4 = *param_1;
  dVar1 = param_1[1];
  dVar5 = *param_2;
  dVar3 = param_2[1];
  dVar6 = param_2[2];
  uVar8 = NEON_fmadd(dVar4,dVar5,dVar1 * dVar3);
  dVar7 = param_1[2];
  dVar9 = (double)NEON_fmadd(dVar7,dVar6,uVar8);
  if (-0.9999899864196777 < dVar9) {
    dVar2 = (double)NEON_fmadd(dVar1,dVar6,dVar3 * -dVar7);
    dVar6 = (double)NEON_fmadd(dVar7,dVar5,dVar6 * -dVar4);
    dVar1 = (double)NEON_fmadd(dVar4,dVar3,dVar5 * -dVar1);
    dVar3 = SQRT(dVar9 + 1.0 + dVar9 + 1.0);
    dVar4 = 1.0 / dVar3;
    *param_3 = dVar2 * dVar4;
    param_3[1] = dVar6 * dVar4;
    param_3[2] = dVar1 * dVar4;
    param_3[3] = dVar3 * 0.5;
    return;
  }
  if (0.1 <= ABS((float)dVar4)) {
    *param_3 = dVar1;
    dVar4 = 0.0;
    dVar3 = -*param_1;
  }
  else {
    *param_3 = 0.0;
    dVar3 = param_1[2];
    param_3[1] = dVar3;
    dVar4 = -param_1[1];
    dVar1 = 0.0;
  }
  uVar8 = NEON_fmadd(dVar1,dVar1,dVar3 * dVar3);
  dVar5 = (double)NEON_fmadd(dVar4,dVar4,uVar8);
  dVar5 = 1.0 / (double)SQRT((float)(dVar5 + 0.0));
  *param_3 = dVar1 * dVar5;
  param_3[1] = dVar3 * dVar5;
  param_3[3] = dVar5 * 0.0;
  param_3[2] = dVar4 * dVar5;
  return;
}


