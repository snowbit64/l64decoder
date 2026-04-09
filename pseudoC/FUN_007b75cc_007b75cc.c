// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b75cc
// Entry Point: 007b75cc
// Size: 20 bytes
// Signature: undefined FUN_007b75cc(void)


void FUN_007b75cc(long param_1,float *param_2)

{
  ParticleSystem *this;
  
  this = (ParticleSystem *)0x0;
  if (param_1 != 0) {
    this = (ParticleSystem *)(param_1 + -0x10);
  }
  ParticleSystem::setSpriteScaleY(this,*param_2);
  return;
}


