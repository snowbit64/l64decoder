// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlendInFactor
// Entry Point: 008d8628
// Size: 8 bytes
// Signature: undefined __thiscall setBlendInFactor(ParticleSystem * this, float param_1)


/* ParticleSystem::setBlendInFactor(float) */

void __thiscall ParticleSystem::setBlendInFactor(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0xac) = param_1;
  return;
}


