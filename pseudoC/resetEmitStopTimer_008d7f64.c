// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetEmitStopTimer
// Entry Point: 008d7f64
// Size: 16 bytes
// Signature: undefined __thiscall resetEmitStopTimer(ParticleSystem * this, float param_1)


/* ParticleSystem::resetEmitStopTimer(float) */

void __thiscall ParticleSystem::resetEmitStopTimer(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0xd8) = *(float *)(this + 300) * param_1;
  return;
}


