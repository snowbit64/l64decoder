// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dDopplerFactor
// Entry Point: 00e39f84
// Size: 8 bytes
// Signature: undefined __thiscall set3dDopplerFactor(AudioSource * this, float param_1)


/* SoLoud::AudioSource::set3dDopplerFactor(float) */

void __thiscall SoLoud::AudioSource::set3dDopplerFactor(AudioSource *this,float param_1)

{
  *(float *)(this + 0x30) = param_1;
  return;
}


