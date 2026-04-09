// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b703c
// Entry Point: 007b703c
// Size: 20 bytes
// Signature: undefined FUN_007b703c(void)


void FUN_007b703c(long param_1,float *param_2)

{
  ParticleSystem *this;
  
  this = (ParticleSystem *)0x0;
  if (param_1 != 0) {
    this = (ParticleSystem *)(param_1 + -0x10);
  }
  ParticleSystem::setNumToEmitPerMs(this,*param_2);
  return;
}


