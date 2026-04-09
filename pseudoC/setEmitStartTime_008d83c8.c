// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEmitStartTime
// Entry Point: 008d83c8
// Size: 8 bytes
// Signature: undefined __thiscall setEmitStartTime(ParticleSystem * this, float param_1)


/* ParticleSystem::setEmitStartTime(float) */

void __thiscall ParticleSystem::setEmitStartTime(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0x128) = param_1;
  return;
}


