// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_transform
// Entry Point: 00ebc4d0
// Size: 132 bytes
// Signature: undefined __cdecl fm_transform(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_transform(double const*, double const*, double*) */

void FLOAT_MATH::fm_transform(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_1 != (double *)0x0) {
    dVar6 = *param_2;
    dVar1 = param_2[1];
    uVar2 = NEON_fmadd(param_1[2],dVar6,dVar1 * param_1[6]);
    uVar3 = NEON_fmadd(*param_1,dVar6,param_1[4] * dVar1);
    dVar8 = param_2[2];
    uVar4 = NEON_fmadd(param_1[1],dVar6,dVar1 * param_1[5]);
    dVar1 = (double)NEON_fmadd(param_1[10],dVar8,uVar2);
    dVar6 = (double)NEON_fmadd(param_1[8],dVar8,uVar3);
    dVar8 = (double)NEON_fmadd(param_1[9],dVar8,uVar4);
    dVar5 = param_1[0xc];
    dVar7 = param_1[0xd];
    param_3[2] = param_1[0xe] + dVar1;
    *param_3 = dVar6 + dVar5;
    param_3[1] = dVar7 + dVar8;
    return;
  }
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  return;
}


