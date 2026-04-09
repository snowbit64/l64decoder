// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpriteScaleXGain
// Entry Point: 008d8518
// Size: 44 bytes
// Signature: undefined __thiscall setSpriteScaleXGain(ParticleSystem * this, float param_1)


/* ParticleSystem::setSpriteScaleXGain(float) */

void __thiscall ParticleSystem::setSpriteScaleXGain(ParticleSystem *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x144) = param_1;
  fVar1 = *(float *)(this + 0x134) * param_1 * 0.5;
  if (this[0x138] != (ParticleSystem)0x0) {
    fVar1 = 0.0;
  }
  *(float *)(this + 0xa0) = fVar1;
  return;
}


