// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyPlaybackEnd
// Entry Point: 008b4820
// Size: 120 bytes
// Signature: undefined notifyPlaybackEnd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::notifyPlaybackEnd() */

void LoopSynthesisGenerator::notifyPlaybackEnd(void)

{
  long **in_x0;
  
  if (*in_x0 != (long *)0x0) {
    (**(code **)(**in_x0 + 0x18))();
  }
  if (in_x0[1] != (long *)0x0) {
    (**(code **)(*in_x0[1] + 0x18))();
  }
  if (in_x0[5] != (long *)0x0) {
    StaticSoundGenerator::notifyPlaybackEnd();
  }
  if (in_x0[6] != (long *)0x0) {
    StaticSoundGenerator::notifyPlaybackEnd();
  }
  if (in_x0[3] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b4888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0[3] + 0x18))();
    return;
  }
  return;
}


