// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyObliqueDepthProjection
// Entry Point: 00aa840c
// Size: 192 bytes
// Signature: undefined __cdecl applyObliqueDepthProjection(float * param_1, float * param_2)


/* RenderDeviceUtil::applyObliqueDepthProjection(float*, float const*) */

void RenderDeviceUtil::applyObliqueDepthProjection(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)MathUtil::sign(*param_2);
  fVar3 = param_1[8];
  fVar4 = *param_1;
  fVar2 = (float)MathUtil::sign(param_2[1]);
  fVar1 = (float)NEON_fmadd(*param_2,(fVar1 + fVar3) / fVar4,
                            ((fVar2 + param_1[9]) / param_1[5]) * param_2[1]);
  fVar1 = (float)NEON_fmadd(param_2[3],param_1[10] / param_1[0xe],fVar1 - param_2[2]);
  fVar1 = 1.0 / fVar1;
  param_1[2] = fVar1 * -*param_2;
  param_1[6] = fVar1 * -param_2[1];
  fVar2 = (float)NEON_fmsub(param_2[2],fVar1,0xbf800000);
  param_1[10] = fVar2;
  param_1[0xe] = fVar1 * -param_2[3];
  return;
}


