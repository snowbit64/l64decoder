// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ParticleSystem
// Entry Point: 008d673c
// Size: 36 bytes
// Signature: undefined __thiscall ~ParticleSystem(ParticleSystem * this)


/* ParticleSystem::~ParticleSystem() */

void __thiscall ParticleSystem::~ParticleSystem(ParticleSystem *this)

{
  ~ParticleSystem(this);
  operator_delete(this);
  return;
}


