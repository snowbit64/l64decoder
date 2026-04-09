// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEmitStopTime
// Entry Point: 008d83d8
// Size: 8 bytes
// Signature: undefined __thiscall setEmitStopTime(ParticleSystem * this, float param_1)


/* ParticleSystem::setEmitStopTime(float) */

void __thiscall ParticleSystem::setEmitStopTime(ParticleSystem *this,float param_1)

{
  *(float *)(this + 300) = param_1;
  return;
}


