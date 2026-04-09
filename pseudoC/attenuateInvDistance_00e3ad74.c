// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: attenuateInvDistance
// Entry Point: 00e3ad74
// Size: 32 bytes
// Signature: undefined __cdecl attenuateInvDistance(float param_1, float param_2, float param_3, float param_4)


/* SoLoud::attenuateInvDistance(float, float, float, float) */

float SoLoud::attenuateInvDistance(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_3 <= param_1) {
    param_1 = param_3;
  }
  fVar1 = (float)NEON_fmadd(param_4,param_1 - param_2,param_2);
  return param_2 / fVar1;
}


