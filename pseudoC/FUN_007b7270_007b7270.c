// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7270
// Entry Point: 007b7270
// Size: 128 bytes
// Signature: undefined FUN_007b7270(void)


void FUN_007b7270(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = ParticleSystem::getSpeed();
  uVar2 = ParticleSystem::getSpeedRandom();
  fVar4 = (float)NEON_fmadd(uVar2,0x3f000000,uVar1);
  fVar3 = (float)ParticleSystem::getNormalSpeed();
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(float *)(param_2 + 0x100) = fVar3 * fVar4;
  fVar3 = (float)ParticleSystem::getTangentSpeed();
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(float *)(param_2 + 0x110) = fVar4 * fVar3;
  return;
}


