// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpriteScaleY
// Entry Point: 008d84fc
// Size: 20 bytes
// Signature: undefined __thiscall setSpriteScaleY(ParticleSystem * this, float param_1)


/* ParticleSystem::setSpriteScaleY(float) */

void __thiscall ParticleSystem::setSpriteScaleY(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0x140) = param_1;
  *(float *)(this + 0x9c) = param_1 * 0.5;
  return;
}


