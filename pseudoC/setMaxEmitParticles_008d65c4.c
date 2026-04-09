// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxEmitParticles
// Entry Point: 008d65c4
// Size: 16 bytes
// Signature: undefined __thiscall setMaxEmitParticles(ParticleSystem * this, uint param_1)


/* ParticleSystem::setMaxEmitParticles(unsigned int) */

void __thiscall ParticleSystem::setMaxEmitParticles(ParticleSystem *this,uint param_1)

{
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  *(uint *)(this + 0x124) = param_1;
  return;
}


