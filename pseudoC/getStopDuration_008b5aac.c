// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStopDuration
// Entry Point: 008b5aac
// Size: 60 bytes
// Signature: undefined getStopDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::getStopDuration() const */

float LoopSynthesisGenerator::getStopDuration(void)

{
  long in_x0;
  float fVar1;
  
  if (*(long **)(in_x0 + 0x30) != (long *)0x0) {
    fVar1 = (float)NEON_ucvtf(*(undefined4 *)(**(long **)(in_x0 + 0x30) + 0x30));
    return (fVar1 * 1000.0) / 44100.0;
  }
  return 0.0;
}


