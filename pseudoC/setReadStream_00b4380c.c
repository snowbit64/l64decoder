// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setReadStream
// Entry Point: 00b4380c
// Size: 8 bytes
// Signature: undefined __thiscall setReadStream(NetworkStream * this, GsBitStream * param_1)


/* NetworkStream::setReadStream(GsBitStream*) */

void __thiscall NetworkStream::setReadStream(NetworkStream *this,GsBitStream *param_1)

{
  *(GsBitStream **)(this + 0x20) = param_1;
  return;
}


