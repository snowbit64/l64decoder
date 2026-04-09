// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullStructBuffer
// Entry Point: 00aabe68
// Size: 28 bytes
// Signature: undefined __thiscall NullStructBuffer(NullStructBuffer * this, StructBufferDesc * param_1)


/* NullStructBuffer::NullStructBuffer(StructBufferDesc const&) */

void __thiscall NullStructBuffer::NullStructBuffer(NullStructBuffer *this,StructBufferDesc *param_1)

{
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined ***)this = &PTR__NullStructBuffer_00fe5cb0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


