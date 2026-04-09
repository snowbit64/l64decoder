// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFloat
// Entry Point: 0086cfb4
// Size: 44 bytes
// Signature: undefined __thiscall setFloat(ConditionalAnimationValue * this, float param_1)


/* ConditionalAnimationValue::setFloat(float) */

void __thiscall ConditionalAnimationValue::setFloat(ConditionalAnimationValue *this,float param_1)

{
  float fVar1;
  
  *(undefined4 *)this = 2;
  fVar1 = 0.0;
  if (0.001 <= ABS(param_1)) {
    fVar1 = param_1;
  }
  *(float *)(this + 4) = fVar1;
  return;
}


