// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<
// Entry Point: 00b7ffe0
// Size: 24 bytes
// Signature: undefined __thiscall operator<(Vertex * this, Vertex * param_1)


/* IndexedTriangleSetBuilder::Vertex::TEMPNAMEPLACEHOLDERVALUE(IndexedTriangleSetBuilder::Vertex
   const&) const */

ulong __thiscall IndexedTriangleSetBuilder::Vertex::operator<(Vertex *this,Vertex *param_1)

{
  ulong uVar1;
  
  uVar1 = cmpVertex(this,param_1);
  return uVar1 >> 0x1f & 1;
}


