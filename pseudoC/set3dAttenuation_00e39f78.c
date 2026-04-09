// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dAttenuation
// Entry Point: 00e39f78
// Size: 12 bytes
// Signature: undefined __thiscall set3dAttenuation(AudioSource * this, uint param_1, float param_2)


/* SoLoud::AudioSource::set3dAttenuation(unsigned int, float) */

void __thiscall SoLoud::AudioSource::set3dAttenuation(AudioSource *this,uint param_1,float param_2)

{
  *(uint *)(this + 0x2c) = param_1;
  *(float *)(this + 0x28) = param_2;
  return;
}


