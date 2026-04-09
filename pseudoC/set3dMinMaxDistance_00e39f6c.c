// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dMinMaxDistance
// Entry Point: 00e39f6c
// Size: 12 bytes
// Signature: undefined __thiscall set3dMinMaxDistance(AudioSource * this, float param_1, float param_2)


/* SoLoud::AudioSource::set3dMinMaxDistance(float, float) */

void __thiscall
SoLoud::AudioSource::set3dMinMaxDistance(AudioSource *this,float param_1,float param_2)

{
  *(float *)(this + 0x20) = param_1;
  *(float *)(this + 0x24) = param_2;
  return;
}


