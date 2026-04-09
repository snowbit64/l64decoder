// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullVertexBuffer
// Entry Point: 00aac510
// Size: 48 bytes
// Signature: undefined __thiscall ~NullVertexBuffer(NullVertexBuffer * this)


/* NullVertexBuffer::~NullVertexBuffer() */

void __thiscall NullVertexBuffer::~NullVertexBuffer(NullVertexBuffer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x18) + 0x128);
  *(undefined ***)this = &PTR__NullVertexBuffer_00fe5df0;
  *(uint *)(*(long *)(this + 0x18) + 0x128) = iVar1 - (*(int *)(this + 0xc) + 0xffU & 0xffffff00);
  return;
}


