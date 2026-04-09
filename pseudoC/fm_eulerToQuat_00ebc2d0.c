// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerToQuat
// Entry Point: 00ebc2d0
// Size: 212 bytes
// Signature: undefined __cdecl fm_eulerToQuat(double * param_1, double * param_2)


/* FLOAT_MATH::fm_eulerToQuat(double const*, double*) */

void FLOAT_MATH::fm_eulerToQuat(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  
  dVar1 = param_1[1];
  dVar3 = param_1[2];
  sincos(*param_1 * 0.5,&dStack_48,&local_50);
  sincos(dVar1 * 0.5,&dStack_68,&local_70);
  sincos(dVar3 * 0.5,&dStack_58,&local_60);
  dVar1 = (double)NEON_fmadd(local_50,local_70 * dStack_58,dStack_68 * local_60 * -dStack_48);
  dVar2 = (double)NEON_fmadd(dStack_48,local_70 * local_60,dStack_68 * dStack_58 * -local_50);
  dVar4 = (double)NEON_fmadd(local_50,dStack_68 * local_60,dStack_48 * local_70 * dStack_58);
  dVar3 = (double)NEON_fmadd(local_50,local_70 * local_60,dStack_48 * dStack_68 * dStack_58);
  param_2[2] = dVar1;
  *param_2 = dVar2;
  param_2[1] = dVar4;
  param_2[3] = dVar3;
  return;
}


