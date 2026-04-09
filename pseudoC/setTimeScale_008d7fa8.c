// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTimeScale
// Entry Point: 008d7fa8
// Size: 8 bytes
// Signature: undefined __thiscall setTimeScale(ParticleSystem * this, float param_1)


/* ParticleSystem::setTimeScale(float) */

void __thiscall ParticleSystem::setTimeScale(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0xfc) = param_1;
  return;
}


