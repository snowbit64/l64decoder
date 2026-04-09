// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_distanceSquaredXZ
// Entry Point: 00eb45d4
// Size: 36 bytes
// Signature: undefined __cdecl fm_distanceSquaredXZ(float * param_1, float * param_2)


/* FLOAT_MATH::fm_distanceSquaredXZ(float const*, float const*) */

undefined4 FLOAT_MATH::fm_distanceSquaredXZ(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(*param_1 - *param_2,*param_1 - *param_2,
                     (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
  return uVar1;
}


