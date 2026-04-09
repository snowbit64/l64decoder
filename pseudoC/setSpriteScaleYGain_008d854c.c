// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpriteScaleYGain
// Entry Point: 008d854c
// Size: 44 bytes
// Signature: undefined __thiscall setSpriteScaleYGain(ParticleSystem * this, float param_1)


/* ParticleSystem::setSpriteScaleYGain(float) */

void __thiscall ParticleSystem::setSpriteScaleYGain(ParticleSystem *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x148) = param_1;
  fVar1 = *(float *)(this + 0x134) * param_1 * 0.5;
  if (this[0x138] != (ParticleSystem)0x0) {
    fVar1 = 0.0;
  }
  *(float *)(this + 0xa4) = fVar1;
  return;
}


