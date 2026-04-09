// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 008dacd4
// Size: 76 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystemManager::destroy() */

void ParticleSystemManager::destroy(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 8) + 8))();
  }
  *(undefined8 *)(in_x0 + 8) = 0;
  if (*(long **)(in_x0 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x10) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x10) = 0;
  return;
}


