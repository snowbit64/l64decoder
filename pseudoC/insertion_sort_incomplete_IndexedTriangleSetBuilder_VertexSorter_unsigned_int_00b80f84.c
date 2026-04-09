// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
// Entry Point: 00b80f84
// Size: 492 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>(uint * param_1, uint * param_2, VertexSorter * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<IndexedTriangleSetBuilder::VertexSorter&, unsigned
   int*>(unsigned int*, unsigned int*, IndexedTriangleSetBuilder::VertexSorter&) */

bool std::__ndk1::
     __insertion_sort_incomplete<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
               (uint *param_1,uint *param_2,VertexSorter *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    iVar3 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                      ((Vertex *)(**(long **)param_3 + (ulong)param_2[-1] * 0x70),
                       (Vertex *)(**(long **)param_3 + (ulong)*param_1 * 0x70));
    if (iVar3 < 0) {
      uVar1 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar1;
      return true;
    }
    break;
  case 3:
    __sort3<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
              (param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    __sort4<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00b80e2c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    __sort3<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar3 = 0;
      puVar5 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar6 = puVar5;
        iVar4 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                          ((Vertex *)(**(long **)param_3 + (ulong)*puVar6 * 0x70),
                           (Vertex *)(**(long **)param_3 + (ulong)*puVar7 * 0x70));
        if (iVar4 < 0) {
          uVar1 = *puVar6;
          lVar2 = lVar8;
          do {
            lVar9 = lVar2;
            *(undefined4 *)((long)param_1 + lVar9 + 0xc) =
                 *(undefined4 *)((long)param_1 + lVar9 + 8);
            puVar5 = param_1;
            if (lVar9 == -8) goto LAB_00b81050;
            iVar4 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                              ((Vertex *)(**(long **)param_3 + (ulong)uVar1 * 0x70),
                               (Vertex *)
                               (**(long **)param_3 +
                               (ulong)*(uint *)((long)param_1 + lVar9 + 4) * 0x70));
            lVar2 = lVar9 + -4;
          } while (iVar4 < 0);
          puVar5 = (uint *)((long)param_1 + lVar9 + 8);
LAB_00b81050:
          iVar3 = iVar3 + 1;
          *puVar5 = uVar1;
          if (iVar3 == 8) {
            return puVar6 + 1 == param_2;
          }
        }
        lVar8 = lVar8 + 4;
        puVar5 = puVar6 + 1;
        puVar7 = puVar6;
      } while (puVar6 + 1 != param_2);
    }
  }
  return true;
}


