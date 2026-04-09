// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: texelCoordSolidAngle
// Entry Point: 00b5ea2c
// Size: 188 bytes
// Signature: undefined __cdecl texelCoordSolidAngle(float param_1, float param_2, uint param_3)


/* SphericalHarmonicsUtil::texelCoordSolidAngle(float, float, unsigned int) */

float SphericalHarmonicsUtil::texelCoordSolidAngle(float param_1,float param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = 1.0 / (float)(ulong)param_3;
  fVar5 = param_2 - fVar3;
  fVar4 = param_1 - fVar3;
  fVar6 = fVar3 + param_1;
  fVar3 = fVar3 + param_2;
  fVar2 = (float)NEON_fmadd(fVar4,fVar4,fVar5 * fVar5);
  fVar2 = atan2f(fVar4 * fVar5,SQRT(fVar2 + 1.0));
  fVar1 = (float)NEON_fmadd(fVar4,fVar4,fVar3 * fVar3);
  fVar1 = atan2f(fVar4 * fVar3,SQRT(fVar1 + 1.0));
  fVar4 = (float)NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
  fVar4 = atan2f(fVar6 * fVar5,SQRT(fVar4 + 1.0));
  fVar5 = (float)NEON_fmadd(fVar6,fVar6,fVar3 * fVar3);
  fVar5 = atan2f(fVar6 * fVar3,SQRT(fVar5 + 1.0));
  return ((fVar2 - fVar1) - fVar4) + fVar5;
}


