// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioSource
// Entry Point: 00b0fa28
// Size: 36 bytes
// Signature: undefined __thiscall ~SoftAudioSource(SoftAudioSource * this)


/* SoftAudioSource::~SoftAudioSource() */

void __thiscall SoftAudioSource::~SoftAudioSource(SoftAudioSource *this)

{
  ~SoftAudioSource(this);
  operator_delete(this);
  return;
}


