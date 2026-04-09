// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlendFactor
// Entry Point: 008d8618
// Size: 8 bytes
// Signature: undefined __thiscall setBlendFactor(ParticleSystem * this, float param_1)


/* ParticleSystem::setBlendFactor(float) */

void __thiscall ParticleSystem::setBlendFactor(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0xa8) = param_1;
  return;
}


