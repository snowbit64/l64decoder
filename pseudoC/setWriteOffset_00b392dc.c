// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWriteOffset
// Entry Point: 00b392dc
// Size: 8 bytes
// Signature: undefined __thiscall setWriteOffset(GsBitStream * this, uint param_1)


/* GsBitStream::setWriteOffset(unsigned int) */

void __thiscall GsBitStream::setWriteOffset(GsBitStream *this,uint param_1)

{
  *(uint *)(this + 0x18) = param_1;
  return;
}


