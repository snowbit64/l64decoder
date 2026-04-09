// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullConstantBuffer
// Entry Point: 00aab794
// Size: 4 bytes
// Signature: undefined __thiscall ~NullConstantBuffer(NullConstantBuffer * this)


/* NullConstantBuffer::~NullConstantBuffer() */

void __thiscall NullConstantBuffer::~NullConstantBuffer(NullConstantBuffer *this)

{
  operator_delete(this);
  return;
}


