// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStartDuration
// Entry Point: 008b5a70
// Size: 60 bytes
// Signature: undefined getStartDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::getStartDuration() const */

float LoopSynthesisGenerator::getStartDuration(void)

{
  long in_x0;
  float fVar1;
  
  if (*(long **)(in_x0 + 0x28) != (long *)0x0) {
    fVar1 = (float)NEON_ucvtf(*(undefined4 *)(**(long **)(in_x0 + 0x28) + 0x30));
    return (fVar1 * 1000.0) / 44100.0;
  }
  return 0.0;
}


