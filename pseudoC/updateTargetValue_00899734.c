// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTargetValue
// Entry Point: 00899734
// Size: 28 bytes
// Signature: undefined __thiscall updateTargetValue(PedestrianTransitionValue * this, float param_1)


/* PedestrianTransitionValue::updateTargetValue(float) */

void __thiscall
PedestrianTransitionValue::updateTargetValue(PedestrianTransitionValue *this,float param_1)

{
  if (this[0x18] != (PedestrianTransitionValue)0x0) {
    *(float *)(this + 8) = param_1;
    return;
  }
  *(float *)(this + 4) = param_1;
  *(float *)(this + 8) = param_1;
  return;
}


