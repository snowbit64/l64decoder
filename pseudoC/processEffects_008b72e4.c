// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processEffects
// Entry Point: 008b72e4
// Size: 144 bytes
// Signature: undefined __thiscall processEffects(LoadSoundSimulation * this, float * param_1)


/* LoadSoundSimulation::processEffects(float&) */

void __thiscall LoadSoundSimulation::processEffects(LoadSoundSimulation *this,float *param_1)

{
  char cVar1;
  float fVar2;
  
  fVar2 = *param_1;
  cVar1 = *(char *)(*(float **)this + 2);
  *param_1 = fVar2 * **(float **)this;
  if (cVar1 == '\0') {
    Equalizer::apply((Equalizer *)(this + 0x4d0),param_1);
    BandDistortion::apply((BandDistortion *)(this + 0x430),param_1);
  }
  else {
    BandDistortion::apply((BandDistortion *)(this + 0x430),param_1);
    Equalizer::apply((Equalizer *)(this + 0x4d0),param_1);
  }
  LowFrequencyOscillator::apply((LowFrequencyOscillator *)(this + 8),param_1);
  WetDry::apply((WetDry *)(this + 0x500),fVar2,param_1);
  return;
}


