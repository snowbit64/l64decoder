// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullAudioSource
// Entry Point: 00b0a74c
// Size: 60 bytes
// Signature: undefined __thiscall ~NullAudioSource(NullAudioSource * this)


/* NullAudioSource::~NullAudioSource() */

void __thiscall NullAudioSource::~NullAudioSource(NullAudioSource *this)

{
  *(undefined ***)this = &PTR__NullAudioSource_00fe7628;
                    /* try { // try from 00b0a770 to 00b0a777 has its CatchHandler @ 00b0a788 */
  NullAudioDevice::removeAudioSource(*(NullAudioDevice **)(this + 0x28),this);
  operator_delete(this);
  return;
}


