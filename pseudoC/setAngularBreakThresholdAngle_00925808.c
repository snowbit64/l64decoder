// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAngularBreakThresholdAngle
// Entry Point: 00925808
// Size: 36 bytes
// Signature: undefined __thiscall setAngularBreakThresholdAngle(DestructionShape * this, float param_1)


/* DestructionShape::setAngularBreakThresholdAngle(float) */

void __thiscall
DestructionShape::setAngularBreakThresholdAngle(DestructionShape *this,float param_1)

{
  float fVar1;
  
  fVar1 = cosf(param_1);
  *(float *)(this + 0x2b0) = fVar1;
  return;
}


