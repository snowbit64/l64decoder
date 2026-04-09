// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_distance
// Entry Point: 00eb4578
// Size: 48 bytes
// Signature: undefined __cdecl fm_distance(float * param_1, float * param_2)


/* FLOAT_MATH::fm_distance(float const*, float const*) */

float FLOAT_MATH::fm_distance(float *param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*param_1 - *param_2,*param_1 - *param_2,
                     (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
  fVar2 = (float)NEON_fmadd(param_1[2] - param_2[2],param_1[2] - param_2[2],uVar1);
  return SQRT(fVar2);
}


