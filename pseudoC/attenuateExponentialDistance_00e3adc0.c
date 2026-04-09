// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: attenuateExponentialDistance
// Entry Point: 00e3adc0
// Size: 44 bytes
// Signature: undefined __cdecl attenuateExponentialDistance(float param_1, float param_2, float param_3, float param_4)


/* SoLoud::attenuateExponentialDistance(float, float, float, float) */

void SoLoud::attenuateExponentialDistance(float param_1,float param_2,float param_3,float param_4)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_3 <= param_1) {
    param_1 = param_3;
  }
  powf(param_1 / param_2,-param_4);
  return;
}


