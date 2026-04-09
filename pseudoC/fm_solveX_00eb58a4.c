// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_solveX
// Entry Point: 00eb58a4
// Size: 32 bytes
// Signature: undefined __cdecl fm_solveX(float * param_1, float param_2, float param_3)


/* FLOAT_MATH::fm_solveX(float const*, float, float) */

float FLOAT_MATH::fm_solveX(float *param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(param_2,param_1[1],param_1[2] * param_3);
  return (param_1[3] + fVar1) / -*param_1;
}


