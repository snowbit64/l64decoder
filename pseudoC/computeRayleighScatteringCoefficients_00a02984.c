// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeRayleighScatteringCoefficients
// Entry Point: 00a02984
// Size: 48 bytes
// Signature: undefined __cdecl computeRayleighScatteringCoefficients(float param_1, float * param_2)


/* LightScatteringUtil::computeRayleighScatteringCoefficients(float, float*) */

void LightScatteringUtil::computeRayleighScatteringCoefficients(float param_1,float *param_2)

{
  *(ulong *)param_2 = CONCAT44(param_1 * 1.356291e-05,param_1 * 5.804543e-06);
  param_2[2] = param_1 * 3.311258e-05;
  return;
}


