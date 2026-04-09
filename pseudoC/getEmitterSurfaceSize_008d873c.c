// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEmitterSurfaceSize
// Entry Point: 008d873c
// Size: 24 bytes
// Signature: undefined getEmitterSurfaceSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystem::getEmitterSurfaceSize() */

undefined4 ParticleSystem::getEmitterSurfaceSize(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x1a0) != 0) {
    return *(undefined4 *)(*(long *)(in_x0 + 0x1a0) + 0x18);
  }
  return 0;
}


