// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validDistance
// Entry Point: 00eba764
// Size: 56 bytes
// Signature: undefined __cdecl validDistance(float * param_1, float * param_2, float param_3)


/* FLOAT_MATH::validDistance(float const*, float const*, float) */

bool FLOAT_MATH::validDistance(float *param_1,float *param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*param_1 - *param_2,*param_1 - *param_2,
                     (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
  fVar2 = (float)NEON_fmadd(param_1[2] - param_2[2],param_1[2] - param_2[2],uVar1);
  return param_3 * param_3 <= fVar2;
}


