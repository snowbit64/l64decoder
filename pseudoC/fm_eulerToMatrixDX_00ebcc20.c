// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerToMatrixDX
// Entry Point: 00ebcc20
// Size: 252 bytes
// Signature: undefined __cdecl fm_eulerToMatrixDX(double param_1, double param_2, double param_3, double * param_4)


/* FLOAT_MATH::fm_eulerToMatrixDX(double, double, double, double*) */

void FLOAT_MATH::fm_eulerToMatrixDX(double param_1,double param_2,double param_3,double *param_4)

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
  
  param_4[3] = 0.0;
  param_4[0xf] = 1.0;
  param_4[7] = 0.0;
  param_4[0xc] = 0.0;
  param_4[0xb] = 0.0;
  param_4[0xe] = 0.0;
  param_4[0xd] = 0.0;
  sincos(param_3,&dStack_68,&local_70);
  sincos(param_2,&dStack_58,&local_60);
  sincos(param_1,&dStack_48,&local_50);
  param_4[1] = local_50 * dStack_68;
  param_4[9] = -dStack_48;
  param_4[5] = local_50 * local_70;
  dVar3 = (double)NEON_fmadd(local_70,local_60,dStack_58 * dStack_48 * dStack_68);
  dVar2 = (double)NEON_fmsub(local_70,dStack_58,local_60 * dStack_48 * dStack_68);
  dVar4 = (double)NEON_fmsub(dStack_68,local_60,dStack_58 * dStack_48 * local_70);
  dVar1 = (double)NEON_fmadd(dStack_68,dStack_58,local_60 * dStack_48 * local_70);
  param_4[8] = local_50 * dStack_58;
  *param_4 = dVar3;
  param_4[2] = dVar2;
  param_4[4] = dVar4;
  param_4[6] = dVar1;
  param_4[10] = local_50 * local_60;
  return;
}


