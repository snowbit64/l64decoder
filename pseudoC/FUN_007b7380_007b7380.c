// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7380
// Entry Point: 007b7380
// Size: 56 bytes
// Signature: undefined FUN_007b7380(void)


void FUN_007b7380(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = ParticleSystem::getEmitterSurfaceSize();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


