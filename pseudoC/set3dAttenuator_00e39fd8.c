// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dAttenuator
// Entry Point: 00e39fd8
// Size: 8 bytes
// Signature: undefined __thiscall set3dAttenuator(AudioSource * this, AudioAttenuator * param_1)


/* SoLoud::AudioSource::set3dAttenuator(SoLoud::AudioAttenuator*) */

void __thiscall SoLoud::AudioSource::set3dAttenuator(AudioSource *this,AudioAttenuator *param_1)

{
  *(AudioAttenuator **)(this + 0x88) = param_1;
  return;
}


