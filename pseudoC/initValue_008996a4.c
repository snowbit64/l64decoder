// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initValue
// Entry Point: 008996a4
// Size: 24 bytes
// Signature: undefined __thiscall initValue(PedestrianTransitionValue * this, float param_1)


/* PedestrianTransitionValue::initValue(float) */

void __thiscall PedestrianTransitionValue::initValue(PedestrianTransitionValue *this,float param_1)

{
  *(float *)(this + 8) = param_1;
  *(float *)(this + 4) = param_1;
  *(float *)this = param_1;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x11) = 0;
  return;
}


