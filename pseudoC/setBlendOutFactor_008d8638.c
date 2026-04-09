// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlendOutFactor
// Entry Point: 008d8638
// Size: 8 bytes
// Signature: undefined __thiscall setBlendOutFactor(ParticleSystem * this, float param_1)


/* ParticleSystem::setBlendOutFactor(float) */

void __thiscall ParticleSystem::setBlendOutFactor(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0xb0) = param_1;
  return;
}


