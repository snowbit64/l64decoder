// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7404
// Entry Point: 007b7404
// Size: 20 bytes
// Signature: undefined FUN_007b7404(void)


void FUN_007b7404(long param_1,float *param_2)

{
  ParticleSystem *this;
  
  this = (ParticleSystem *)0x0;
  if (param_1 != 0) {
    this = (ParticleSystem *)(param_1 + -0x10);
  }
  ParticleSystem::setEmitterShapeVelocityScale(this,*param_2);
  return;
}


