// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeCornettAsymetryFactor
// Entry Point: 00a02cd8
// Size: 56 bytes
// Signature: undefined __cdecl computeCornettAsymetryFactor(float param_1, float * param_2)


/* LightScatteringUtil::computeCornettAsymetryFactor(float, float*) */

void LightScatteringUtil::computeCornettAsymetryFactor(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)NEON_fmsub(param_1,param_1,0x3f800000);
  fVar2 = (float)NEON_fmadd(param_1,param_1,0x40000000);
  fVar1 = (float)NEON_fmadd(param_1,param_1,0x3f800000);
  param_2[2] = param_1 * -2.0;
  *param_2 = (fVar3 * 3.0) / (fVar2 + fVar2);
  param_2[1] = fVar1;
  return;
}


