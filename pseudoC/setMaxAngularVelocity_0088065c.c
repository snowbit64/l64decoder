// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxAngularVelocity
// Entry Point: 0088065c
// Size: 40 bytes
// Signature: undefined __thiscall setMaxAngularVelocity(AnimalSteering * this, float param_1)


/* AnimalSteering::setMaxAngularVelocity(float) */

void __thiscall AnimalSteering::setMaxAngularVelocity(AnimalSteering *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * 1000.0 + param_1 * 1000.0;
  *(float *)(this + 0x60) = fVar1;
  *(float *)(this + 0x6c) = fVar1 / *(float *)(this + 0x54);
  *(float *)(this + 0x70) = *(float *)(this + 0x54) / fVar1;
  return;
}


