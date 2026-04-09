// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_distToPlane
// Entry Point: 00eb46a4
// Size: 40 bytes
// Signature: undefined __cdecl fm_distToPlane(float * param_1, float * param_2)


/* FLOAT_MATH::fm_distToPlane(float const*, float const*) */

float FLOAT_MATH::fm_distToPlane(float *param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*param_2,*param_1,param_2[1] * param_1[1]);
  fVar2 = (float)NEON_fmadd(param_2[2],param_1[2],uVar1);
  return fVar2 + param_1[3];
}


