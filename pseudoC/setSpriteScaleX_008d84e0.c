// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpriteScaleX
// Entry Point: 008d84e0
// Size: 20 bytes
// Signature: undefined __thiscall setSpriteScaleX(ParticleSystem * this, float param_1)


/* ParticleSystem::setSpriteScaleX(float) */

void __thiscall ParticleSystem::setSpriteScaleX(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0x13c) = param_1;
  *(float *)(this + 0x98) = param_1 * 0.5;
  return;
}


