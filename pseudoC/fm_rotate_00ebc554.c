// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_rotate
// Entry Point: 00ebc554
// Size: 112 bytes
// Signature: undefined __cdecl fm_rotate(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_rotate(double const*, double const*, double*) */

void FLOAT_MATH::fm_rotate(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  if (param_1 != (double *)0x0) {
    dVar5 = *param_2;
    dVar1 = param_2[1];
    uVar2 = NEON_fmadd(param_1[2],dVar5,dVar1 * param_1[6]);
    uVar3 = NEON_fmadd(*param_1,dVar5,param_1[4] * dVar1);
    dVar6 = param_2[2];
    uVar4 = NEON_fmadd(param_1[1],dVar5,dVar1 * param_1[5]);
    dVar1 = (double)NEON_fmadd(param_1[10],dVar6,uVar2);
    dVar5 = (double)NEON_fmadd(param_1[8],dVar6,uVar3);
    dVar6 = (double)NEON_fmadd(param_1[9],dVar6,uVar4);
    param_3[2] = dVar1;
    *param_3 = dVar5;
    param_3[1] = dVar6;
    return;
  }
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  return;
}


