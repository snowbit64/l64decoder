// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_capsuleVolume
// Entry Point: 00eb445c
// Size: 76 bytes
// Signature: undefined __cdecl fm_capsuleVolume(float param_1, float param_2)


/* FLOAT_MATH::fm_capsuleVolume(float, float) */

float FLOAT_MATH::fm_capsuleVolume(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fmadd(param_1,0xc0000000,param_2);
  fVar2 = param_1 * 3.141593 * param_1 * fVar1;
  if (fVar1 <= 0.0) {
    fVar2 = -0.0;
  }
  return param_1 * 4.18879 * param_1 * param_1 + fVar2;
}


