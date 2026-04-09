// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTangentSpeed
// Entry Point: 008d85b0
// Size: 8 bytes
// Signature: undefined __thiscall setTangentSpeed(ParticleSystem * this, float param_1)


/* ParticleSystem::setTangentSpeed(float) */

void __thiscall ParticleSystem::setTangentSpeed(ParticleSystem *this,float param_1)

{
  *(float *)(this + 0x158) = param_1;
  return;
}


