// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullAudioSource
// Entry Point: 00b0a71c
// Size: 44 bytes
// Signature: undefined __thiscall ~NullAudioSource(NullAudioSource * this)


/* NullAudioSource::~NullAudioSource() */

void __thiscall NullAudioSource::~NullAudioSource(NullAudioSource *this)

{
  *(undefined ***)this = &PTR__NullAudioSource_00fe7628;
                    /* try { // try from 00b0a73c to 00b0a73f has its CatchHandler @ 00b0a748 */
  NullAudioDevice::removeAudioSource(*(NullAudioDevice **)(this + 0x28),this);
  return;
}


