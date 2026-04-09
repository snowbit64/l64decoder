// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b73cc
// Entry Point: 007b73cc
// Size: 56 bytes
// Signature: undefined FUN_007b73cc(void)


void FUN_007b73cc(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = ParticleSystem::getEmitterShapeVelocityScale();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


