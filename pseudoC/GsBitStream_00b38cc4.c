// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsBitStream
// Entry Point: 00b38cc4
// Size: 48 bytes
// Signature: undefined __thiscall ~GsBitStream(GsBitStream * this)


/* GsBitStream::~GsBitStream() */

void __thiscall GsBitStream::~GsBitStream(GsBitStream *this)

{
  if (*this != (GsBitStream)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


