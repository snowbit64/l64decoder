// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: areaElement
// Entry Point: 00b5e9fc
// Size: 48 bytes
// Signature: undefined __cdecl areaElement(float param_1, float param_2)


/* SphericalHarmonicsUtil::areaElement(float, float) */

void SphericalHarmonicsUtil::areaElement(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(param_1,param_1,param_2 * param_2);
  atan2f(param_1 * param_2,SQRT(fVar1 + 1.0));
  return;
}


