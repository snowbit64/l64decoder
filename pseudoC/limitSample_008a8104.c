// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: limitSample
// Entry Point: 008a8104
// Size: 136 bytes
// Signature: undefined __cdecl limitSample(float param_1)


/* AudioMathUtil::limitSample(float) */

float AudioMathUtil::limitSample(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 * param_1 * param_1 * param_1;
  fVar1 = fVar1 * fVar1;
  if (param_1 <= 0.8) {
    if (-0.8 <= param_1) {
      return param_1;
    }
    fVar1 = 0.0671089 / (fVar1 + 0.167772);
    fVar2 = -1.0;
  }
  else {
    fVar1 = -0.0671089 / (fVar1 + 0.167772);
    fVar2 = 1.0;
  }
  return fVar1 + fVar2;
}


