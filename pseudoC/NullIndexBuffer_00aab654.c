// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullIndexBuffer
// Entry Point: 00aab654
// Size: 32 bytes
// Signature: undefined __thiscall ~NullIndexBuffer(NullIndexBuffer * this)


/* NullIndexBuffer::~NullIndexBuffer() */

void __thiscall NullIndexBuffer::~NullIndexBuffer(NullIndexBuffer *this)

{
  *(uint *)(*(long *)(this + 0x10) + 300) =
       *(int *)(*(long *)(this + 0x10) + 300) - (*(int *)(this + 0xc) + 0xffU & 0xffffff00);
  operator_delete(this);
  return;
}


