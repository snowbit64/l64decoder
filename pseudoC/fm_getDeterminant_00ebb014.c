// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getDeterminant
// Entry Point: 00ebb014
// Size: 76 bytes
// Signature: undefined __cdecl fm_getDeterminant(double * param_1)


/* FLOAT_MATH::fm_getDeterminant(double const*) */

undefined  [16] FLOAT_MATH::fm_getDeterminant(double *param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = (double)NEON_fmadd(param_1[6],param_1[8],param_1[10] * -param_1[4]);
  uVar3 = NEON_fmadd(param_1[5],param_1[10],param_1[9] * -param_1[6]);
  uVar1 = NEON_fmadd(param_1[4],param_1[9],param_1[8] * -param_1[5]);
  uVar3 = NEON_fmadd(*param_1,uVar3,param_1[1] * dVar4);
  auVar2._0_8_ = NEON_fmadd(param_1[2],uVar1,uVar3);
  auVar2._8_8_ = 0;
  return auVar2;
}


