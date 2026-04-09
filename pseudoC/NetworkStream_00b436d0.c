// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NetworkStream
// Entry Point: 00b436d0
// Size: 84 bytes
// Signature: undefined __thiscall NetworkStream(NetworkStream * this, uint param_1)


/* NetworkStream::NetworkStream(unsigned int) */

void __thiscall NetworkStream::NetworkStream(NetworkStream *this,uint param_1)

{
  Entity::Entity((Entity *)this,"NetworkStream",true);
  *(uint *)(this + 0x30) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__NetworkStream_00fe9c28;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 1;
  return;
}


