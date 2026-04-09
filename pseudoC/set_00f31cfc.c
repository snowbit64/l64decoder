// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00f31cfc
// Size: 172 bytes
// Signature: undefined __thiscall set(btAngularLimit * this, float param_1, float param_2, float param_3, float param_4, float param_5)


/* btAngularLimit::set(float, float, float, float, float) */

void __thiscall
btAngularLimit::set(btAngularLimit *this,float param_1,float param_2,float param_3,float param_4,
                   float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_2 - param_1) * 0.5;
  *(float *)(this + 4) = fVar2;
  fVar2 = fmodf(fVar2 + param_1,6.283185);
  if (-3.141593 <= fVar2) {
    if (fVar2 <= 3.141593) goto LAB_00f31d88;
    fVar1 = -6.283185;
  }
  else {
    fVar1 = 6.283185;
  }
  fVar2 = fVar2 + fVar1;
LAB_00f31d88:
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  *(float *)(this + 0x10) = param_5;
  *(float *)this = fVar2;
  return;
}


