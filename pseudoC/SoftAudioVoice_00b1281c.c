// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioVoice
// Entry Point: 00b1281c
// Size: 104 bytes
// Signature: undefined __thiscall ~SoftAudioVoice(SoftAudioVoice * this)


/* SoftAudioVoice::~SoftAudioVoice() */

void __thiscall SoftAudioVoice::~SoftAudioVoice(SoftAudioVoice *this)

{
  *(undefined ***)this = &PTR__SoftAudioVoice_00fe7f70;
                    /* try { // try from 00b12840 to 00b1285f has its CatchHandler @ 00b12884 */
  SoftAudioSource::notifyVoiceIsBeingDestroyed();
  if (*(long *)(this + 0x210) != 0) {
    (**(code **)(**(long **)(this + 0x1f0) + 0x28))(*(long **)(this + 0x1f0),this + 0x210);
  }
  if (*(long **)(this + 0x1f0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f0) + 8))();
  }
  SoLoud::AudioSourceInstance::~AudioSourceInstance((AudioSourceInstance *)this);
  return;
}


