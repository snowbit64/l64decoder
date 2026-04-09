// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applySoftClippingAtan
// Entry Point: 008b85e4
// Size: 76 bytes
// Signature: undefined __thiscall applySoftClippingAtan(Distortion * this, float param_1, float * param_2)


/* Distortion::applySoftClippingAtan(float, float&) */

void __thiscall Distortion::applySoftClippingAtan(Distortion *this,float param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = atanf(*param_2 * param_1);
  *param_2 = fVar1 * 0.6366197;
  return;
}


