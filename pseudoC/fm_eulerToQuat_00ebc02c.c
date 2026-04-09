// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerToQuat
// Entry Point: 00ebc02c
// Size: 196 bytes
// Signature: undefined __cdecl fm_eulerToQuat(double param_1, double param_2, double param_3, double * param_4)


/* FLOAT_MATH::fm_eulerToQuat(double, double, double, double*) */

void FLOAT_MATH::fm_eulerToQuat(double param_1,double param_2,double param_3,double *param_4)

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
  
  sincos(param_1 * 0.5,&dStack_48,&local_50);
  sincos(param_2 * 0.5,&dStack_58,&local_60);
  sincos(param_3 * 0.5,&dStack_68,&local_70);
  dVar1 = (double)NEON_fmadd(local_50,local_60 * dStack_68,dStack_58 * local_70 * -dStack_48);
  dVar3 = (double)NEON_fmadd(dStack_48,local_60 * local_70,dStack_58 * dStack_68 * -local_50);
  dVar4 = (double)NEON_fmadd(local_50,dStack_58 * local_70,dStack_48 * local_60 * dStack_68);
  dVar2 = (double)NEON_fmadd(local_50,local_60 * local_70,dStack_48 * dStack_58 * dStack_68);
  *param_4 = dVar3;
  param_4[1] = dVar4;
  param_4[2] = dVar1;
  param_4[3] = dVar2;
  return;
}


