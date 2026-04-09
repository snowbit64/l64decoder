// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyFuzzingAtTheMouth
// Entry Point: 008b8680
// Size: 24 bytes
// Signature: undefined __thiscall applyFuzzingAtTheMouth(Distortion * this, float param_1, float * param_2)


/* Distortion::applyFuzzingAtTheMouth(float, float&) */

void __thiscall Distortion::applyFuzzingAtTheMouth(Distortion *this,float param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  *param_2 = fVar1 / (fVar1 * fVar1 + param_1);
  return;
}


