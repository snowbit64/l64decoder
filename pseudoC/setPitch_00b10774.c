// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPitch
// Entry Point: 00b10774
// Size: 32 bytes
// Signature: undefined __thiscall setPitch(SoftAudioSource * this, float param_1)


/* SoftAudioSource::setPitch(float) */

void __thiscall SoftAudioSource::setPitch(SoftAudioSource *this,float param_1)

{
  if (*(uint *)(this + 200) != 0) {
    SoLoud::Soloud::setRelativePlaySpeed(*(Soloud **)(this + 0xb8),*(uint *)(this + 200),param_1);
  }
  return;
}


