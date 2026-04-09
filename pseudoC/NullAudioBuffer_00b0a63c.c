// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullAudioBuffer
// Entry Point: 00b0a63c
// Size: 64 bytes
// Signature: undefined __thiscall ~NullAudioBuffer(NullAudioBuffer * this)


/* NullAudioBuffer::~NullAudioBuffer() */

void __thiscall NullAudioBuffer::~NullAudioBuffer(NullAudioBuffer *this)

{
  *(undefined ***)this = &PTR__NullAudioBuffer_00fe75a8;
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  operator_delete(this);
  return;
}


