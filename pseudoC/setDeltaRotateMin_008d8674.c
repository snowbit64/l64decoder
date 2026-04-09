// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDeltaRotateMin
// Entry Point: 008d8674
// Size: 36 bytes
// Signature: undefined __thiscall setDeltaRotateMin(ParticleSystem * this, float param_1)


/* ParticleSystem::setDeltaRotateMin(float) */

void __thiscall ParticleSystem::setDeltaRotateMin(ParticleSystem *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x170) = param_1;
  fVar1 = *(float *)(this + 0x134) * param_1;
  if (this[0x138] != (ParticleSystem)0x0) {
    fVar1 = 0.0;
  }
  *(float *)(this + 0xb8) = fVar1;
  return;
}


