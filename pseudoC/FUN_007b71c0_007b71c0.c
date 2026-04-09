// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b71c0
// Entry Point: 007b71c0
// Size: 56 bytes
// Signature: undefined FUN_007b71c0(void)


void FUN_007b71c0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = ParticleSystem::getEmitStopTime();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


