// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_catmullRom
// Entry Point: 00ebdbfc
// Size: 192 bytes
// Signature: undefined __cdecl fm_catmullRom(double * param_1, double * param_2, double * param_3, double * param_4, double * param_5, double param_6)


/* FLOAT_MATH::fm_catmullRom(double*, double const*, double const*, double const*, double const*,
   double) */

void FLOAT_MATH::fm_catmullRom
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
               double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  dVar2 = param_6 * param_6;
  dVar4 = dVar2 * param_6;
  dVar1 = (double)NEON_fmadd(dVar4,0x4008000000000000,dVar2 * -5.0);
  dVar6 = (double)NEON_fnmsub(dVar2,0x4000000000000000,dVar4);
  dVar3 = dVar4 - dVar2;
  dVar1 = dVar1 + 2.0;
  dVar6 = dVar6 - param_6;
  dVar2 = (double)NEON_fmadd(dVar4,0xc008000000000000,dVar2 * 4.0);
  dVar2 = dVar2 + param_6;
  uVar5 = NEON_fmadd(dVar6,*param_2,dVar1 * *param_3);
  uVar5 = NEON_fmadd(dVar2,*param_4,uVar5);
  dVar4 = (double)NEON_fmadd(dVar3,*param_5,uVar5);
  *param_1 = dVar4 * 0.5;
  uVar5 = NEON_fmadd(dVar6,param_2[1],dVar1 * param_3[1]);
  uVar5 = NEON_fmadd(dVar2,param_4[1],uVar5);
  dVar4 = (double)NEON_fmadd(dVar3,param_5[1],uVar5);
  param_1[1] = dVar4 * 0.5;
  uVar5 = NEON_fmadd(dVar6,param_2[2],dVar1 * param_3[2]);
  uVar5 = NEON_fmadd(dVar2,param_4[2],uVar5);
  dVar2 = (double)NEON_fmadd(dVar3,param_5[2],uVar5);
  param_1[2] = dVar2 * 0.5;
  return;
}


