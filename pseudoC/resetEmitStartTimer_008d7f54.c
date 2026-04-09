// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetEmitStartTimer
// Entry Point: 008d7f54
// Size: 16 bytes
// Signature: undefined __thiscall resetEmitStartTimer(ParticleSystem * this, float param_1)


/* ParticleSystem::resetEmitStartTimer(float) */

void __thiscall ParticleSystem::resetEmitStartTimer(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0xd4) = *(float *)(this + 0x128) * param_1;
  return;
}


