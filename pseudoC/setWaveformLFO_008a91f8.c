// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWaveformLFO
// Entry Point: 008a91f8
// Size: 8 bytes
// Signature: undefined __thiscall setWaveformLFO(LoadSimulationRuntimeSettings * this, Waveform param_1)


/* LoadSimulationRuntimeSettings::setWaveformLFO(LFOSettings::Waveform) */

void __thiscall
LoadSimulationRuntimeSettings::setWaveformLFO(LoadSimulationRuntimeSettings *this,Waveform param_1)

{
  *(Waveform *)(this + 0x30) = param_1;
  return;
}


