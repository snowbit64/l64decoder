// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getSidePlane
// Entry Point: 00eb67f0
// Size: 68 bytes
// Signature: undefined __cdecl fm_getSidePlane(float * param_1, float * param_2, float param_3)


/* FLOAT_MATH::fm_getSidePlane(float const*, float const*, float) */

undefined4 FLOAT_MATH::fm_getSidePlane(float *param_1,float *param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*param_1,*param_2,param_1[1] * param_2[1]);
  fVar2 = (float)NEON_fmadd(param_1[2],param_2[2],uVar1);
  fVar2 = fVar2 + param_2[3];
  uVar1 = 2;
  if (0.0 < fVar2) {
    uVar1 = 1;
  }
  if (fVar2 <= param_3 && -param_3 <= fVar2) {
    uVar1 = 0;
  }
  return uVar1;
}


