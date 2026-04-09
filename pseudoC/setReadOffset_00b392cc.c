// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setReadOffset
// Entry Point: 00b392cc
// Size: 8 bytes
// Signature: undefined __thiscall setReadOffset(GsBitStream * this, uint param_1)


/* GsBitStream::setReadOffset(unsigned int) */

void __thiscall GsBitStream::setReadOffset(GsBitStream *this,uint param_1)

{
  *(uint *)(this + 0x14) = param_1;
  return;
}


