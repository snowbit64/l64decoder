// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioVoice
// Entry Point: 00b12898
// Size: 112 bytes
// Signature: undefined __thiscall ~SoftAudioVoice(SoftAudioVoice * this)


/* SoftAudioVoice::~SoftAudioVoice() */

void __thiscall SoftAudioVoice::~SoftAudioVoice(SoftAudioVoice *this)

{
  *(undefined ***)this = &PTR__SoftAudioVoice_00fe7f70;
                    /* try { // try from 00b128bc to 00b128db has its CatchHandler @ 00b12908 */
  SoftAudioSource::notifyVoiceIsBeingDestroyed();
  if (*(long *)(this + 0x210) != 0) {
    (**(code **)(**(long **)(this + 0x1f0) + 0x28))(*(long **)(this + 0x1f0),this + 0x210);
  }
  if (*(long **)(this + 0x1f0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f0) + 8))();
  }
  SoLoud::AudioSourceInstance::~AudioSourceInstance((AudioSourceInstance *)this);
  operator_delete(this);
  return;
}


