// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b72f0
// Entry Point: 007b72f0
// Size: 72 bytes
// Signature: undefined FUN_007b72f0(void)


void FUN_007b72f0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = ParticleSystem::getEmitterShape();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x18);
  }
  *(undefined4 *)(param_2 + 0x100) = uVar2;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


