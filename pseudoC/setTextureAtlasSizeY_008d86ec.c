// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTextureAtlasSizeY
// Entry Point: 008d86ec
// Size: 24 bytes
// Signature: undefined __thiscall setTextureAtlasSizeY(ParticleSystem * this, uint param_1)


/* ParticleSystem::setTextureAtlasSizeY(unsigned int) */

void __thiscall ParticleSystem::setTextureAtlasSizeY(ParticleSystem *this,uint param_1)

{
  *(uint *)(this + 0x17c) = param_1;
  *(float *)(this + 0x94) = 1.0 / (float)(ulong)param_1;
  return;
}


