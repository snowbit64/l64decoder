// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyPlaybackStart
// Entry Point: 008b47a8
// Size: 120 bytes
// Signature: undefined notifyPlaybackStart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::notifyPlaybackStart() */

void LoopSynthesisGenerator::notifyPlaybackStart(void)

{
  long **in_x0;
  
  if (*in_x0 != (long *)0x0) {
    (**(code **)(**in_x0 + 0x10))();
  }
  if (in_x0[1] != (long *)0x0) {
    (**(code **)(*in_x0[1] + 0x10))();
  }
  if (in_x0[5] != (long *)0x0) {
    StaticSoundGenerator::notifyPlaybackStart();
  }
  if (in_x0[6] != (long *)0x0) {
    StaticSoundGenerator::notifyPlaybackStart();
  }
  if (in_x0[3] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b4810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0[3] + 0x10))();
    return;
  }
  return;
}


