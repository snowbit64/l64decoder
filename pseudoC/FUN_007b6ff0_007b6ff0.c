// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6ff0
// Entry Point: 007b6ff0
// Size: 20 bytes
// Signature: undefined FUN_007b6ff0(void)


void FUN_007b6ff0(long param_1,uint *param_2)

{
  ParticleSystem *this;
  
  this = (ParticleSystem *)0x0;
  if (param_1 != 0) {
    this = (ParticleSystem *)(param_1 + -0x10);
  }
  ParticleSystem::setMaxParticles(this,*param_2);
  return;
}


