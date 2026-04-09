// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: attenuateLinearDistance
// Entry Point: 00e3ad94
// Size: 44 bytes
// Signature: undefined __cdecl attenuateLinearDistance(float param_1, float param_2, float param_3, float param_4)


/* SoLoud::attenuateLinearDistance(float, float, float, float) */

float SoLoud::attenuateLinearDistance(float param_1,float param_2,float param_3,float param_4)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_3 <= param_1) {
    param_1 = param_3;
  }
  return 1.0 - ((param_1 - param_2) * param_4) / (param_3 - param_2);
}


