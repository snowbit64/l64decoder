// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dCollider
// Entry Point: 00e39fcc
// Size: 12 bytes
// Signature: undefined __thiscall set3dCollider(AudioSource * this, AudioCollider * param_1, int param_2)


/* SoLoud::AudioSource::set3dCollider(SoLoud::AudioCollider*, int) */

void __thiscall
SoLoud::AudioSource::set3dCollider(AudioSource *this,AudioCollider *param_1,int param_2)

{
  *(AudioCollider **)(this + 0x80) = param_1;
  *(int *)(this + 0x90) = param_2;
  return;
}


