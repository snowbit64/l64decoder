// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_inverseRT
// Entry Point: 00ebafa8
// Size: 108 bytes
// Signature: undefined __cdecl fm_inverseRT(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_inverseRT(double const*, double const*, double*) */

void FLOAT_MATH::fm_inverseRT(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = *param_2 - param_1[0xc];
  dVar1 = param_2[1] - param_1[0xd];
  dVar5 = param_2[2] - param_1[0xe];
  uVar2 = NEON_fmadd(*param_1,dVar4,dVar1 * param_1[1]);
  dVar3 = (double)NEON_fmadd(param_1[2],dVar5,uVar2);
  *param_3 = dVar3;
  uVar2 = NEON_fmadd(param_1[4],dVar4,dVar1 * param_1[5]);
  dVar3 = (double)NEON_fmadd(param_1[6],dVar5,uVar2);
  param_3[1] = dVar3;
  uVar2 = NEON_fmadd(param_1[8],dVar4,dVar1 * param_1[9]);
  dVar1 = (double)NEON_fmadd(param_1[10],dVar5,uVar2);
  param_3[2] = dVar1;
  return;
}


