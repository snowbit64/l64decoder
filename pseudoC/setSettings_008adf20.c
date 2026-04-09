// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSettings
// Entry Point: 008adf20
// Size: 60 bytes
// Signature: undefined __thiscall setSettings(LowFrequencyOscillator * this, LFOSettings * param_1)


/* LowFrequencyOscillator::setSettings(LFOSettings const*) */

undefined8 __thiscall
LowFrequencyOscillator::setSettings(LowFrequencyOscillator *this,LFOSettings *param_1)

{
  Waveform WVar1;
  
  *(LFOSettings **)(this + 0x420) = param_1;
  WVar1 = *(Waveform *)(param_1 + 4);
  *(int *)(this + 8) = (int)((256.0 / *(float *)this) * 1.677722e+07);
  setWaveform(this,WVar1);
  return 1;
}


