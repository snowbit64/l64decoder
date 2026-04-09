// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fit
// Entry Point: 00f31e88
// Size: 272 bytes
// Signature: undefined __thiscall fit(btAngularLimit * this, float * param_1)


/* btAngularLimit::fit(float&) const */

void __thiscall btAngularLimit::fit(btAngularLimit *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(this + 4);
  if (fVar3 <= 0.0) {
    return;
  }
  fVar4 = *(float *)this;
  fVar2 = fmodf(*param_1 - fVar4,6.283185);
  if (-3.141593 <= fVar2) {
    if (3.141593 < fVar2) {
      fVar1 = -6.283185;
      goto LAB_00f31f00;
    }
  }
  else {
    fVar1 = 6.283185;
LAB_00f31f00:
    fVar2 = fVar2 + fVar1;
  }
  if ((fVar2 <= fVar3) && (-fVar3 <= fVar2)) {
    return;
  }
  if (fVar2 <= 0.0) {
    fVar4 = fVar4 - fVar3;
  }
  else {
    fVar4 = fVar4 + fVar3;
  }
  fVar3 = fmodf(fVar4,6.283185);
  if (-3.141593 <= fVar3) {
    if (fVar3 <= 3.141593) goto LAB_00f31f84;
    fVar2 = -6.283185;
  }
  else {
    fVar2 = 6.283185;
  }
  fVar3 = fVar3 + fVar2;
LAB_00f31f84:
  *param_1 = fVar3;
  return;
}


