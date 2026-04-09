// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ParticleSystem
// Entry Point: 008d67b0
// Size: 40 bytes
// Signature: undefined __thiscall ~ParticleSystem(ParticleSystem * this)


/* non-virtual thunk to ParticleSystem::~ParticleSystem() */

void __thiscall ParticleSystem::~ParticleSystem(ParticleSystem *this)

{
  ~ParticleSystem(this + -0x80);
  operator_delete(this + -0x80);
  return;
}


