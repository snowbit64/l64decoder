// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioSource
// Entry Point: 00e39eec
// Size: 36 bytes
// Signature: undefined __thiscall ~AudioSource(AudioSource * this)


/* SoLoud::AudioSource::~AudioSource() */

void __thiscall SoLoud::AudioSource::~AudioSource(AudioSource *this)

{
  *(undefined ***)this = &PTR_setFilter_01013d38;
  if (*(Soloud **)(this + 0x78) != (Soloud *)0x0) {
    Soloud::stopAudioSource(*(Soloud **)(this + 0x78),this);
    return;
  }
  return;
}


