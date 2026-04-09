// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDeltaRotateMax
// Entry Point: 008d86a0
// Size: 36 bytes
// Signature: undefined __thiscall setDeltaRotateMax(ParticleSystem * this, float param_1)


/* ParticleSystem::setDeltaRotateMax(float) */

void __thiscall ParticleSystem::setDeltaRotateMax(ParticleSystem *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x174) = param_1;
  fVar1 = *(float *)(this + 0x134) * param_1;
  if (this[0x138] != (ParticleSystem)0x0) {
    fVar1 = 0.0;
  }
  *(float *)(this + 0xbc) = fVar1;
  return;
}


