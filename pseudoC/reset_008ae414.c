// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008ae414
// Size: 24 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LowFrequencyOscillator::reset() */

void LowFrequencyOscillator::reset(void)

{
  long in_x0;
  
  *(undefined4 *)(in_x0 + 4) = 0;
  *(undefined4 *)(in_x0 + 8) = 0;
  *(undefined4 *)(in_x0 + 0x418) = 0x3f800000;
  *(undefined8 *)(in_x0 + 0x410) = 0;
  return;
}


