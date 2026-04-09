// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTextureAtlasSizeX
// Entry Point: 008d86d4
// Size: 24 bytes
// Signature: undefined __thiscall setTextureAtlasSizeX(ParticleSystem * this, uint param_1)


/* ParticleSystem::setTextureAtlasSizeX(unsigned int) */

void __thiscall ParticleSystem::setTextureAtlasSizeX(ParticleSystem *this,uint param_1)

{
  *(uint *)(this + 0x178) = param_1;
  *(float *)(this + 0x90) = 1.0 / (float)(ulong)param_1;
  return;
}


