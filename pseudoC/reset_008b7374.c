// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008b7374
// Size: 56 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoadSoundSimulation::reset() */

void LoadSoundSimulation::reset(void)

{
  Equalizer::resetDbGains();
  BandDistortion::reset();
  WetDry::reset();
  LowFrequencyOscillator::reset();
  return;
}


