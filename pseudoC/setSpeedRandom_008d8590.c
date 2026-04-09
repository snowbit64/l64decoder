// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpeedRandom
// Entry Point: 008d8590
// Size: 8 bytes
// Signature: undefined __thiscall setSpeedRandom(ParticleSystem * this, float param_1)


/* ParticleSystem::setSpeedRandom(float) */

void __thiscall ParticleSystem::setSpeedRandom(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0x150) = param_1;
  return;
}


