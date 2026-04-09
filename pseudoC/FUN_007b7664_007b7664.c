// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7664
// Entry Point: 007b7664
// Size: 20 bytes
// Signature: undefined FUN_007b7664(void)


void FUN_007b7664(long param_1,float *param_2)

{
  ParticleSystem *this;
  
  this = (ParticleSystem *)0x0;
  if (param_1 != 0) {
    this = (ParticleSystem *)(param_1 + -0x10);
  }
  ParticleSystem::setSpriteScaleYGain(this,*param_2);
  return;
}


