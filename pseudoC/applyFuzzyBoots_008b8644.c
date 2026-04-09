// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyFuzzyBoots
// Entry Point: 008b8644
// Size: 60 bytes
// Signature: undefined __thiscall applyFuzzyBoots(Distortion * this, float param_1, float * param_2)


/* Distortion::applyFuzzyBoots(float, float&) */

void __thiscall Distortion::applyFuzzyBoots(Distortion *this,float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_2;
  fVar1 = sinf(param_1);
  *param_2 = fVar2 / (fVar1 + ABS(fVar2));
  return;
}


