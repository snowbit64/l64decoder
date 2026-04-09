// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VertexBufferPool
// Entry Point: 008e3ca0
// Size: 432 bytes
// Signature: undefined __thiscall VertexBufferPool(VertexBufferPool * this, uint param_1)


/* VertexBufferPool::VertexBufferPool(unsigned int) */

void __thiscall VertexBufferPool::VertexBufferPool(VertexBufferPool *this,uint param_1)

{
  *(uint *)this = param_1;
  *(undefined4 *)(this + 0x3c80) = 0;
  memset(this + 8,0,0x404);
  memset(this + 0x410,0,0x404);
  memset(this + 0x818,0,0x404);
  memset(this + 0xc20,0,0x404);
  memset(this + 0x1028,0,0x404);
  memset(this + 0x1430,0,0x404);
  memset(this + 0x1838,0,0x404);
  memset(this + 0x1c40,0,0x404);
  memset(this + 0x2048,0,0x404);
  memset(this + 0x2450,0,0x404);
  memset(this + 0x2858,0,0x404);
  memset(this + 0x2c60,0,0x404);
  memset(this + 0x3068,0,0x404);
  memset(this + 0x3470,0,0x404);
  memset(this + 0x3878,0,0x404);
  return;
}


