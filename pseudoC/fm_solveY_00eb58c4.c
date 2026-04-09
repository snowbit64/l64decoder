// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_solveY
// Entry Point: 00eb58c4
// Size: 32 bytes
// Signature: undefined __cdecl fm_solveY(float * param_1, float param_2, float param_3)


/* FLOAT_MATH::fm_solveY(float const*, float, float) */

float FLOAT_MATH::fm_solveY(float *param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(param_2,*param_1,param_1[2] * param_3);
  return (param_1[3] + fVar1) / -param_1[1];
}


