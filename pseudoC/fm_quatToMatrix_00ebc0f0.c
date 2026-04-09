// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_quatToMatrix
// Entry Point: 00ebc0f0
// Size: 180 bytes
// Signature: undefined __cdecl fm_quatToMatrix(double * param_1, double * param_2)


/* FLOAT_MATH::fm_quatToMatrix(double const*, double*) */

void FLOAT_MATH::fm_quatToMatrix(double *param_1,double *param_2)

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
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar5 = param_1[3];
  param_2[7] = 0.0;
  param_2[3] = 0.0;
  param_2[0xf] = 1.0;
  dVar6 = dVar1 * dVar2 + dVar3 * dVar5;
  dVar7 = dVar1 * dVar2 - dVar3 * dVar5;
  dVar8 = dVar1 * dVar3 + dVar2 * dVar5;
  dVar9 = dVar1 * dVar3 - dVar2 * dVar5;
  dVar10 = dVar2 * dVar3 - dVar1 * dVar5;
  dVar5 = dVar2 * dVar3 + dVar1 * dVar5;
  dVar4 = (double)NEON_fmadd(dVar2 * dVar2 + dVar3 * dVar3,0xc000000000000000,0x3ff0000000000000);
  dVar3 = (double)NEON_fmadd(dVar1 * dVar1 + dVar3 * dVar3,0xc000000000000000,0x3ff0000000000000);
  dVar1 = (double)NEON_fmadd(dVar1 * dVar1 + dVar2 * dVar2,0xc000000000000000,0x3ff0000000000000);
  *param_2 = dVar4;
  param_2[1] = dVar6 + dVar6;
  param_2[4] = dVar7 + dVar7;
  param_2[5] = dVar3;
  param_2[6] = dVar5 + dVar5;
  param_2[10] = dVar1;
  param_2[8] = dVar8 + dVar8;
  param_2[9] = dVar10 + dVar10;
  param_2[2] = dVar9 + dVar9;
  param_2[0xc] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xd] = 0.0;
  return;
}


