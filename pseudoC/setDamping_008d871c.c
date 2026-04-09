// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDamping
// Entry Point: 008d871c
// Size: 8 bytes
// Signature: undefined __thiscall setDamping(ParticleSystem * this, float param_1)


/* ParticleSystem::setDamping(float) */

void __thiscall ParticleSystem::setDamping(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0x188) = param_1;
  return;
}


