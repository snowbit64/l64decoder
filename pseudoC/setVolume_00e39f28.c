// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolume
// Entry Point: 00e39f28
// Size: 8 bytes
// Signature: undefined __thiscall setVolume(AudioSource * this, float param_1)


/* SoLoud::AudioSource::setVolume(float) */

void __thiscall SoLoud::AudioSource::setVolume(AudioSource *this,float param_1)

{
  *(float *)(this + 0x10) = param_1;
  return;
}


