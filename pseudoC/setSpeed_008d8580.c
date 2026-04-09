// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpeed
// Entry Point: 008d8580
// Size: 8 bytes
// Signature: undefined __thiscall setSpeed(ParticleSystem * this, float param_1)


/* ParticleSystem::setSpeed(float) */

void __thiscall ParticleSystem::setSpeed(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0x14c) = param_1;
  return;
}


