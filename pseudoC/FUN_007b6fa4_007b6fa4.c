// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6fa4
// Entry Point: 007b6fa4
// Size: 20 bytes
// Signature: undefined FUN_007b6fa4(void)


void FUN_007b6fa4(long param_1,undefined8 param_2)

{
  ParticleSystem *this;
  
  this = (ParticleSystem *)0x0;
  if (param_1 != 0) {
    this = (ParticleSystem *)(param_1 + -0x10);
  }
  ParticleSystem::setEmittingState(this,*(bool *)param_2);
  return;
}


