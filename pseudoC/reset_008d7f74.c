// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008d7f74
// Size: 44 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystem::reset() */

void ParticleSystem::reset(void)

{
  long in_x0;
  
  *(undefined8 *)(in_x0 + 0xcc) = 0;
  *(undefined4 *)(in_x0 + 0x1b0) = 0;
  *(undefined8 *)(in_x0 + 0xd4) = *(undefined8 *)(in_x0 + 0x128);
  if (*(long **)(in_x0 + 0x1a0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008d7f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x1a0) + 0x10))();
    return;
  }
  return;
}


