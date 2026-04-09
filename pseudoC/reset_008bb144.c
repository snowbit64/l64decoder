// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008bb144
// Size: 28 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SteadyLoopSoundGenerator::reset() */

void SteadyLoopSoundGenerator::reset(void)

{
  long *in_x0;
  
  *(undefined4 *)(in_x0 + 0xd) = 0;
  in_x0[2] = 0xffffffff;
  in_x0[6] = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x008bb15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0x50))();
  return;
}


