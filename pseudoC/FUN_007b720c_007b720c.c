// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b720c
// Entry Point: 007b720c
// Size: 20 bytes
// Signature: undefined FUN_007b720c(void)


void FUN_007b720c(long param_1,float *param_2)

{
  ParticleSystem *this;
  
  this = (ParticleSystem *)0x0;
  if (param_1 != 0) {
    this = (ParticleSystem *)(param_1 + -0x10);
  }
  ParticleSystem::setTimeScale(this,*param_2);
  return;
}


