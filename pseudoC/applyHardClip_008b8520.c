// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyHardClip
// Entry Point: 008b8520
// Size: 44 bytes
// Signature: undefined __thiscall applyHardClip(Distortion * this, float param_1, float * param_2)


/* Distortion::applyHardClip(float, float&) */

void __thiscall Distortion::applyHardClip(Distortion *this,float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_2;
  fVar1 = -param_1;
  if (-param_1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar3 = param_1;
  if (fVar2 <= param_1) {
    fVar3 = fVar2;
  }
  if (0.0 <= fVar2) {
    fVar1 = fVar3;
  }
  *param_2 = fVar1 / param_1;
  return;
}


