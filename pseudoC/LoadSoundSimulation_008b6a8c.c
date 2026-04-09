// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadSoundSimulation
// Entry Point: 008b6a8c
// Size: 96 bytes
// Signature: undefined __thiscall LoadSoundSimulation(LoadSoundSimulation * this)


/* LoadSoundSimulation::LoadSoundSimulation() */

void __thiscall LoadSoundSimulation::LoadSoundSimulation(LoadSoundSimulation *this)

{
  *(undefined8 *)this = 0;
  LowFrequencyOscillator::LowFrequencyOscillator((LowFrequencyOscillator *)(this + 8));
  BandDistortion::BandDistortion((BandDistortion *)(this + 0x430));
                    /* try { // try from 008b6ab8 to 008b6abf has its CatchHandler @ 008b6b10 */
  Equalizer::Equalizer((Equalizer *)(this + 0x4d0));
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
                    /* try { // try from 008b6ad4 to 008b6ad7 has its CatchHandler @ 008b6aec */
  WetDry::WetDry((WetDry *)(this + 0x500));
  *(undefined4 *)(this + 0x50c) = 0;
  return;
}


