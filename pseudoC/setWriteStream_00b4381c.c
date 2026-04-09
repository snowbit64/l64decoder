// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWriteStream
// Entry Point: 00b4381c
// Size: 8 bytes
// Signature: undefined __thiscall setWriteStream(NetworkStream * this, GsBitStream * param_1)


/* NetworkStream::setWriteStream(GsBitStream*) */

void __thiscall NetworkStream::setWriteStream(NetworkStream *this,GsBitStream *param_1)

{
  *(GsBitStream **)(this + 0x28) = param_1;
  return;
}


