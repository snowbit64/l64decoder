// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AddVertex
// Entry Point: 00d4cd2c
// Size: 104 bytes
// Signature: undefined AddVertex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::Graph::AddVertex() */

long HACD::Graph::AddVertex(void)

{
  long in_x0;
  long lVar1;
  long *this;
  long lVar2;
  long lVar3;
  
  this = (long *)(in_x0 + 0x38);
  lVar3 = *(long *)(in_x0 + 0x40) - *this;
  lVar2 = (lVar3 >> 4) * 0x7d6343eb1a1f58d1;
  std::__ndk1::vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>>::resize
            ((vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> *)this,lVar2 + 1);
  lVar1 = *(long *)(in_x0 + 0x10);
  *(long *)(*this + lVar3) = lVar2;
  *(long *)(in_x0 + 0x10) = lVar1 + 1;
  return lVar2;
}


