// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
// Entry Point: 00b80bd8
// Size: 328 bytes
// Signature: uint __cdecl __sort3<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>(uint * param_1, uint * param_2, uint * param_3, VertexSorter * param_4)


/* unsigned int std::__ndk1::__sort3<IndexedTriangleSetBuilder::VertexSorter&, unsigned
   int*>(unsigned int*, unsigned int*, unsigned int*, IndexedTriangleSetBuilder::VertexSorter&) */

uint std::__ndk1::__sort3<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
               (uint *param_1,uint *param_2,uint *param_3,VertexSorter *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  iVar2 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                    ((Vertex *)(**(long **)param_4 + (ulong)*param_2 * 0x70),
                     (Vertex *)(**(long **)param_4 + (ulong)*param_1 * 0x70));
  iVar3 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                    ((Vertex *)(**(long **)param_4 + (ulong)*param_3 * 0x70),
                     (Vertex *)(**(long **)param_4 + (ulong)*param_2 * 0x70));
  if (iVar2 < 0) {
    uVar1 = *param_1;
    if (iVar3 < 0) {
      *param_1 = *param_3;
      *param_3 = uVar1;
      return 1;
    }
    plVar4 = *(long **)param_4;
    *param_1 = *param_2;
    *param_2 = uVar1;
    iVar2 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                      ((Vertex *)(*plVar4 + (ulong)*param_3 * 0x70),
                       (Vertex *)(*plVar4 + (ulong)uVar1 * 0x70));
    if (iVar2 < 0) {
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      return 2;
    }
  }
  else {
    if (-1 < iVar3) {
      return 0;
    }
    uVar1 = *param_2;
    plVar4 = *(long **)param_4;
    *param_2 = *param_3;
    *param_3 = uVar1;
    iVar2 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                      ((Vertex *)(*plVar4 + (ulong)*param_2 * 0x70),
                       (Vertex *)(*plVar4 + (ulong)*param_1 * 0x70));
    if (iVar2 < 0) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
      return 2;
    }
  }
  return 1;
}


