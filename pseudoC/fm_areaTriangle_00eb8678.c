// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_areaTriangle
// Entry Point: 00eb8678
// Size: 68 bytes
// Signature: undefined __cdecl fm_areaTriangle(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_areaTriangle(float const*, float const*, float const*) */

float FLOAT_MATH::fm_areaTriangle(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)NEON_fmadd(*param_1,param_2[1],param_1[1] * -*param_2);
  fVar1 = (float)NEON_fmadd(*param_2,param_3[1],param_2[1] * -*param_3);
  fVar2 = (float)NEON_fmadd(*param_3,param_1[1],param_3[1] * -*param_1);
  return (fVar3 + fVar1 + fVar2) * 0.5;
}


