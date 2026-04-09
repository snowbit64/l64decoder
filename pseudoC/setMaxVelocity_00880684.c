// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxVelocity
// Entry Point: 00880684
// Size: 24 bytes
// Signature: undefined __thiscall setMaxVelocity(AnimalSteering * this, float param_1)


/* AnimalSteering::setMaxVelocity(float) */

void __thiscall AnimalSteering::setMaxVelocity(AnimalSteering *this,float param_1)

{
  *(float *)(this + 0x54) = param_1;
  *(float *)(this + 0x6c) = *(float *)(this + 0x60) / param_1;
  *(float *)(this + 0x70) = param_1 / *(float *)(this + 0x60);
  return;
}


