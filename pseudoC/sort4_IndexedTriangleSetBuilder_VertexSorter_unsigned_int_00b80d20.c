// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
// Entry Point: 00b80d20
// Size: 268 bytes
// Signature: uint __cdecl __sort4<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>(uint * param_1, uint * param_2, uint * param_3, uint * param_4, VertexSorter * param_5)


/* unsigned int std::__ndk1::__sort4<IndexedTriangleSetBuilder::VertexSorter&, unsigned
   int*>(unsigned int*, unsigned int*, unsigned int*, unsigned int*,
   IndexedTriangleSetBuilder::VertexSorter&) */

uint std::__ndk1::__sort4<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,VertexSorter *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  
  uVar2 = __sort3<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
                    (param_1,param_2,param_3,param_5);
  iVar3 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                    ((Vertex *)(**(long **)param_5 + (ulong)*param_4 * 0x70),
                     (Vertex *)(**(long **)param_5 + (ulong)*param_3 * 0x70));
  if (iVar3 < 0) {
    uVar1 = *param_3;
    plVar4 = *(long **)param_5;
    *param_3 = *param_4;
    *param_4 = uVar1;
    iVar3 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                      ((Vertex *)(*plVar4 + (ulong)*param_3 * 0x70),
                       (Vertex *)(*plVar4 + (ulong)*param_2 * 0x70));
    if (iVar3 < 0) {
      uVar1 = *param_2;
      plVar4 = *(long **)param_5;
      *param_2 = *param_3;
      *param_3 = uVar1;
      iVar3 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                        ((Vertex *)(*plVar4 + (ulong)*param_2 * 0x70),
                         (Vertex *)(*plVar4 + (ulong)*param_1 * 0x70));
      if (iVar3 < 0) {
        uVar2 = uVar2 + 3;
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
      else {
        uVar2 = uVar2 + 2;
      }
    }
    else {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}


