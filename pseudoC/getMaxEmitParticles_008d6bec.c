// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxEmitParticles
// Entry Point: 008d6bec
// Size: 16 bytes
// Signature: undefined getMaxEmitParticles(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystem::getMaxEmitParticles() */

int ParticleSystem::getMaxEmitParticles(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = 0;
  if (*(int *)(in_x0 + 0x124) != -1) {
    iVar1 = *(int *)(in_x0 + 0x124);
  }
  return iVar1;
}


