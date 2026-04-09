// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioSource
// Entry Point: 00b0fa4c
// Size: 40 bytes
// Signature: undefined __thiscall ~SoftAudioSource(SoftAudioSource * this)


/* non-virtual thunk to SoftAudioSource::~SoftAudioSource() */

void __thiscall SoftAudioSource::~SoftAudioSource(SoftAudioSource *this)

{
  ~SoftAudioSource(this + -8);
  operator_delete(this + -8);
  return;
}


