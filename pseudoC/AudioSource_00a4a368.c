// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioSource
// Entry Point: 00a4a368
// Size: 36 bytes
// Signature: undefined __thiscall ~AudioSource(AudioSource * this)


/* AudioSource::~AudioSource() */

void __thiscall AudioSource::~AudioSource(AudioSource *this)

{
  ~AudioSource(this);
  operator_delete(this);
  return;
}


