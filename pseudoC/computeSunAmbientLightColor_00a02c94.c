// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSunAmbientLightColor
// Entry Point: 00a02c94
// Size: 68 bytes
// Signature: undefined __cdecl computeSunAmbientLightColor(float * param_1, float * param_2)


/* LightScatteringUtil::computeSunAmbientLightColor(float const*, float*) */

void LightScatteringUtil::computeSunAmbientLightColor(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fmin(param_1[1],0x3f800000);
  fVar2 = fVar1 * 0.25;
  if (fVar1 * 0.25 <= 0.05) {
    fVar2 = 0.05;
  }
  *(ulong *)param_2 = CONCAT44(fVar1 * 0.1,fVar1 * 0.15);
  param_2[2] = fVar2;
  return;
}


