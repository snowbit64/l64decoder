// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applySinus
// Entry Point: 008b854c
// Size: 112 bytes
// Signature: undefined __thiscall applySinus(Distortion * this, float param_1, float * param_2)


/* Distortion::applySinus(float, float&) */

void __thiscall Distortion::applySinus(Distortion *this,float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 1.0;
  fVar3 = *param_2;
  if (fVar3 < 1.0 / param_1) {
    fVar1 = sinf(param_1 * 3.141593);
    fVar2 = sinf(param_1 * 3.141593 * fVar3);
    fVar2 = fVar2 * (1.0 / fVar1);
  }
  *param_2 = fVar2;
  return;
}


