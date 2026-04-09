// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_distanceSquared
// Entry Point: 00eb45a8
// Size: 44 bytes
// Signature: undefined __cdecl fm_distanceSquared(float * param_1, float * param_2)


/* FLOAT_MATH::fm_distanceSquared(float const*, float const*) */

undefined4 FLOAT_MATH::fm_distanceSquared(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(*param_1 - *param_2,*param_1 - *param_2,
                     (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
  uVar1 = NEON_fmadd(param_1[2] - param_2[2],param_1[2] - param_2[2],uVar1);
  return uVar1;
}


