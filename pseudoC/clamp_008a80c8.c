// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clamp
// Entry Point: 008a80c8
// Size: 60 bytes
// Signature: undefined __cdecl clamp(float * param_1)


/* AudioMathUtil::clamp(float&) */

void AudioMathUtil::clamp(float *param_1)

{
  float fVar1;
  
  if (*param_1 <= -1.0) {
    fVar1 = -0.99;
  }
  else {
    if (*param_1 < 1.0) {
      return;
    }
    fVar1 = 0.99;
  }
  *param_1 = fVar1;
  return;
}


