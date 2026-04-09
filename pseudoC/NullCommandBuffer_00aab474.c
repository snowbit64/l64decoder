// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullCommandBuffer
// Entry Point: 00aab474
// Size: 4 bytes
// Signature: undefined __thiscall ~NullCommandBuffer(NullCommandBuffer * this)


/* NullCommandBuffer::~NullCommandBuffer() */

void __thiscall NullCommandBuffer::~NullCommandBuffer(NullCommandBuffer *this)

{
  operator_delete(this);
  return;
}


