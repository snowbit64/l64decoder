// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00b7f310
// Size: 28 bytes
// Signature: undefined __thiscall operator==(Vertex * this, Vertex * param_1)


/* IndexedTriangleSetBuilder::Vertex::TEMPNAMEPLACEHOLDERVALUE(IndexedTriangleSetBuilder::Vertex
   const&) const */

bool __thiscall IndexedTriangleSetBuilder::Vertex::operator==(Vertex *this,Vertex *param_1)

{
  int iVar1;
  
  iVar1 = cmpVertex(this,param_1);
  return iVar1 == 0;
}


