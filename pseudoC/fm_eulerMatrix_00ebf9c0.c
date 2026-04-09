// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerMatrix
// Entry Point: 00ebf9c0
// Size: 368 bytes
// Signature: undefined __cdecl fm_eulerMatrix(double param_1, double param_2, double param_3, double * param_4)


/* FLOAT_MATH::fm_eulerMatrix(double, double, double, double*) */

void FLOAT_MATH::fm_eulerMatrix(double param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
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
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  
  sincos(param_1 * 0.5,&dStack_48,&local_50);
  sincos(param_2 * 0.5,&dStack_58,&local_60);
  sincos(param_3 * 0.5,&dStack_68,&local_70);
  param_4[7] = 0.0;
  param_4[3] = 0.0;
  param_4[0xf] = 1.0;
  dVar2 = (double)NEON_fmadd(local_50,local_60 * dStack_68,dStack_58 * local_70 * -dStack_48);
  dVar3 = (double)NEON_fmadd(local_50,dStack_58 * local_70,dStack_48 * local_60 * dStack_68);
  dVar5 = (double)NEON_fmadd(dStack_48,local_60 * local_70,dStack_58 * dStack_68 * -local_50);
  dVar1 = (double)NEON_fmadd(local_50,local_60 * local_70,dStack_48 * dStack_58 * dStack_68);
  dVar11 = dVar5 * dVar3 - dVar2 * dVar1;
  dVar7 = dVar5 * dVar3 + dVar2 * dVar1;
  dVar8 = dVar5 * dVar2 + dVar3 * dVar1;
  dVar9 = dVar5 * dVar2 - dVar3 * dVar1;
  dVar10 = dVar3 * dVar2 - dVar5 * dVar1;
  dVar4 = (double)NEON_fmadd(dVar3 * dVar3 + dVar2 * dVar2,0xc000000000000000,0x3ff0000000000000);
  dVar1 = dVar3 * dVar2 + dVar5 * dVar1;
  dVar6 = (double)NEON_fmadd(dVar5 * dVar5 + dVar2 * dVar2,0xc000000000000000,0x3ff0000000000000);
  *param_4 = dVar4;
  param_4[4] = dVar11 + dVar11;
  dVar2 = (double)NEON_fmadd(dVar5 * dVar5 + dVar3 * dVar3,0xc000000000000000,0x3ff0000000000000);
  param_4[8] = dVar8 + dVar8;
  param_4[9] = dVar10 + dVar10;
  param_4[1] = dVar7 + dVar7;
  param_4[5] = dVar6;
  param_4[2] = dVar9 + dVar9;
  param_4[6] = dVar1 + dVar1;
  param_4[10] = dVar2;
  param_4[0xc] = 0.0;
  param_4[0xb] = 0.0;
  param_4[0xe] = 0.0;
  param_4[0xd] = 0.0;
  return;
}


