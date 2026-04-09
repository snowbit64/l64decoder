// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullAudioStreamedBuffer
// Entry Point: 00b0a90c
// Size: 40 bytes
// Signature: undefined __thiscall ~NullAudioStreamedBuffer(NullAudioStreamedBuffer * this)


/* NullAudioStreamedBuffer::~NullAudioStreamedBuffer() */

void __thiscall NullAudioStreamedBuffer::~NullAudioStreamedBuffer(NullAudioStreamedBuffer *this)

{
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__NullAudioBuffer_00fe75a8;
  if (((byte)this[0x28] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x38));
  return;
}


