// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7220
// Entry Point: 007b7220
// Size: 56 bytes
// Signature: undefined FUN_007b7220(void)


void FUN_007b7220(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = ParticleSystem::getLifespan();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


