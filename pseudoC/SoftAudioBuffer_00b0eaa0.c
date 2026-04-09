// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioBuffer
// Entry Point: 00b0eaa0
// Size: 36 bytes
// Signature: undefined __thiscall ~SoftAudioBuffer(SoftAudioBuffer * this)


/* SoftAudioBuffer::~SoftAudioBuffer() */

void __thiscall SoftAudioBuffer::~SoftAudioBuffer(SoftAudioBuffer *this)

{
  ~SoftAudioBuffer(this);
  operator_delete(this);
  return;
}


