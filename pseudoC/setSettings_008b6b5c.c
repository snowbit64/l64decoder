// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSettings
// Entry Point: 008b6b5c
// Size: 88 bytes
// Signature: undefined __thiscall setSettings(LoadSoundSimulation * this, LoadSimulationRuntimeSettings * param_1)


/* LoadSoundSimulation::setSettings(LoadSimulationRuntimeSettings const*) */

undefined8 __thiscall
LoadSoundSimulation::setSettings(LoadSoundSimulation *this,LoadSimulationRuntimeSettings *param_1)

{
  *(LoadSimulationRuntimeSettings **)this = param_1;
  initEqualizerBands(this,(vector *)(param_1 + 0x48));
  updateRuntimeSettings();
  LowFrequencyOscillator::setSettings
            ((LowFrequencyOscillator *)(this + 8),(LFOSettings *)(param_1 + 0x2c));
  BandDistortion::setSettings
            ((BandDistortion *)(this + 0x430),(BandDistortionSettings *)(param_1 + 0xc));
  this[0x508] = *(LoadSoundSimulation *)(param_1 + 9);
  return 1;
}


