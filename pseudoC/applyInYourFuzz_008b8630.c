// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyInYourFuzz
// Entry Point: 008b8630
// Size: 20 bytes
// Signature: undefined __thiscall applyInYourFuzz(Distortion * this, float param_1, float * param_2)


/* Distortion::applyInYourFuzz(float, float&) */

void __thiscall Distortion::applyInYourFuzz(Distortion *this,float param_1,float *param_2)

{
  *param_2 = *param_2 * *param_2 * param_1;
  return;
}


