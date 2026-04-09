// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserveVertices
// Entry Point: 00b7e5dc
// Size: 8 bytes
// Signature: undefined __thiscall reserveVertices(IndexedTriangleSetBuilder * this, uint param_1)


/* IndexedTriangleSetBuilder::reserveVertices(unsigned int) */

void __thiscall
IndexedTriangleSetBuilder::reserveVertices(IndexedTriangleSetBuilder *this,uint param_1)

{
  std::__ndk1::
  vector<IndexedTriangleSetBuilder::Vertex,std::__ndk1::allocator<IndexedTriangleSetBuilder::Vertex>>
  ::reserve((vector<IndexedTriangleSetBuilder::Vertex,std::__ndk1::allocator<IndexedTriangleSetBuilder::Vertex>>
             *)this,(ulong)param_1);
  return;
}


