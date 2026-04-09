// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateWaveform
// Entry Point: 008ae42c
// Size: 12 bytes
// Signature: undefined updateWaveform(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LowFrequencyOscillator::updateWaveform() */

void LowFrequencyOscillator::updateWaveform(void)

{
  LowFrequencyOscillator *in_x0;
  
  setWaveform(in_x0,*(Waveform *)(*(long *)(in_x0 + 0x420) + 4));
  return;
}


