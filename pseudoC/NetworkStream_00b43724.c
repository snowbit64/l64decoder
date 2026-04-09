// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NetworkStream
// Entry Point: 00b43724
// Size: 112 bytes
// Signature: undefined __thiscall ~NetworkStream(NetworkStream * this)


/* NetworkStream::~NetworkStream() */

void __thiscall NetworkStream::~NetworkStream(NetworkStream *this)

{
  GsBitStream *this_00;
  GsBitStream *this_01;
  
  this_00 = *(GsBitStream **)(this + 0x20);
  this_01 = *(GsBitStream **)(this + 0x28);
  *(undefined ***)this = &PTR__NetworkStream_00fe9c28;
  if ((this_01 != this_00) && (this_00 != (GsBitStream *)0x0)) {
    GsBitStream::~GsBitStream(this_00);
    operator_delete(this_00);
    this_01 = *(GsBitStream **)(this + 0x28);
  }
  if (this_01 != (GsBitStream *)0x0) {
    GsBitStream::~GsBitStream(this_01);
    operator_delete(this_01);
  }
  Entity::~Entity((Entity *)this);
  return;
}


