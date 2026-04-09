// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullStagingBuffer
// Entry Point: 00aaa864
// Size: 4 bytes
// Signature: undefined __thiscall ~NullStagingBuffer(NullStagingBuffer * this)


/* NullStagingBuffer::~NullStagingBuffer() */

void __thiscall NullStagingBuffer::~NullStagingBuffer(NullStagingBuffer *this)

{
  operator_delete(this);
  return;
}


