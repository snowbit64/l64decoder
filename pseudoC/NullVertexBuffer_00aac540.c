// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullVertexBuffer
// Entry Point: 00aac540
// Size: 32 bytes
// Signature: undefined __thiscall ~NullVertexBuffer(NullVertexBuffer * this)


/* NullVertexBuffer::~NullVertexBuffer() */

void __thiscall NullVertexBuffer::~NullVertexBuffer(NullVertexBuffer *this)

{
  *(uint *)(*(long *)(this + 0x18) + 0x128) =
       *(int *)(*(long *)(this + 0x18) + 0x128) - (*(int *)(this + 0xc) + 0xffU & 0xffffff00);
  operator_delete(this);
  return;
}


