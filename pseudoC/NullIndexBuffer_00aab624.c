// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullIndexBuffer
// Entry Point: 00aab624
// Size: 48 bytes
// Signature: undefined __thiscall ~NullIndexBuffer(NullIndexBuffer * this)


/* NullIndexBuffer::~NullIndexBuffer() */

void __thiscall NullIndexBuffer::~NullIndexBuffer(NullIndexBuffer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 300);
  *(undefined ***)this = &PTR__NullIndexBuffer_00fe5bf0;
  *(uint *)(*(long *)(this + 0x10) + 300) = iVar1 - (*(int *)(this + 0xc) + 0xffU & 0xffffff00);
  return;
}


