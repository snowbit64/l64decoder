// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7258
// Entry Point: 007b7258
// Size: 24 bytes
// Signature: undefined FUN_007b7258(void)


void FUN_007b7258(long param_1,float *param_2)

{
  ParticleSystem *this;
  
  this = (ParticleSystem *)0x0;
  if (param_1 != 0) {
    this = (ParticleSystem *)(param_1 + -0x10);
  }
  ParticleSystem::setLifespan(this,*param_2,*(bool *)(param_2 + 4));
  return;
}


