// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getDeterminant
// Entry Point: 00eb2ff4
// Size: 76 bytes
// Signature: undefined __cdecl fm_getDeterminant(float * param_1)


/* FLOAT_MATH::fm_getDeterminant(float const*) */

undefined4 FLOAT_MATH::fm_getDeterminant(float *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)NEON_fmadd(param_1[6],param_1[8],param_1[10] * -param_1[4]);
  uVar2 = NEON_fmadd(param_1[5],param_1[10],param_1[9] * -param_1[6]);
  uVar1 = NEON_fmadd(param_1[4],param_1[9],param_1[8] * -param_1[5]);
  uVar2 = NEON_fmadd(*param_1,uVar2,param_1[1] * fVar3);
  uVar1 = NEON_fmadd(param_1[2],uVar1,uVar2);
  return uVar1;
}


