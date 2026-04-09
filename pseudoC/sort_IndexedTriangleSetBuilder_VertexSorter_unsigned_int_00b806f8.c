// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
// Entry Point: 00b806f8
// Size: 1248 bytes
// Signature: void __cdecl __sort<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>(uint * param_1, uint * param_2, VertexSorter * param_3)


/* void std::__ndk1::__sort<IndexedTriangleSetBuilder::VertexSorter&, unsigned int*>(unsigned int*,
   unsigned int*, IndexedTriangleSetBuilder::VertexSorter&) */

void std::__ndk1::__sort<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
               (uint *param_1,uint *param_2,VertexSorter *param_3)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  
LAB_00b80724:
  puVar12 = param_2 + -1;
  puVar10 = param_1;
LAB_00b8072c:
  param_1 = puVar10;
  uVar11 = (long)param_2 - (long)param_1;
  uVar9 = (long)uVar11 >> 2;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_00b80a68_caseD_0;
  case 2:
    iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                      ((Vertex *)(**(long **)param_3 + (ulong)param_2[-1] * 0x70),
                       (Vertex *)(**(long **)param_3 + (ulong)*param_1 * 0x70));
    if (iVar8 < 0) {
      uVar7 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar7;
      return;
    }
    return;
  case 3:
    __sort3<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
              (param_1,param_1 + 1,puVar12,param_3);
    return;
  case 4:
    __sort4<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
              (param_1,param_1 + 1,param_1 + 2,puVar12,param_3);
    return;
  case 5:
    FUN_00b80e2c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar12,param_3);
    return;
  default:
    if (0x7b < (long)uVar11) {
      uVar1 = uVar9;
      if ((long)uVar9 < 0) {
        uVar1 = uVar9 + 1;
      }
      puVar10 = (uint *)((long)param_1 + (uVar1 & 0x7ffffffffffffffe) * 2);
      if (uVar11 < 0xf9d) {
        uVar7 = __sort3<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
                          (param_1,puVar10,puVar12,param_3);
      }
      else {
        uVar11 = uVar9 + 3;
        if (-1 < (long)uVar9) {
          uVar11 = uVar9;
        }
        uVar7 = FUN_00b80e2c(param_1,(long)param_1 + (uVar11 & 0xfffffffffffffffc),puVar10,
                             (long)puVar10 + (uVar11 & 0xfffffffffffffffc),puVar12,param_3);
      }
      iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                        ((Vertex *)(**(long **)param_3 + (ulong)*param_1 * 0x70),
                         (Vertex *)(**(long **)param_3 + (ulong)*puVar10 * 0x70));
      puVar14 = puVar12;
      if (-1 < iVar8) break;
      goto LAB_00b80818;
    }
    __sort3<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar13 = 0;
    puVar10 = param_1 + 3;
    puVar12 = param_1 + 2;
    goto LAB_00b80b44;
  }
  while (puVar14 = puVar14 + -1, puVar14 != param_1) {
    iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                      ((Vertex *)(**(long **)param_3 + (ulong)*puVar14 * 0x70),
                       (Vertex *)(**(long **)param_3 + (ulong)*puVar10 * 0x70));
    if (iVar8 < 0) goto code_r0x00b80804;
  }
  puVar14 = param_1 + 1;
  iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                    ((Vertex *)(**(long **)param_3 + (ulong)*param_1 * 0x70),
                     (Vertex *)(**(long **)param_3 + (ulong)*puVar12 * 0x70));
  puVar10 = puVar14;
  if (-1 < iVar8) {
    while( true ) {
      if (puVar10 == puVar12) {
        return;
      }
      iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                        ((Vertex *)(**(long **)param_3 + (ulong)*param_1 * 0x70),
                         (Vertex *)(**(long **)param_3 + (ulong)*puVar10 * 0x70));
      if (iVar8 < 0) break;
      puVar10 = puVar10 + 1;
    }
    uVar7 = *puVar10;
    puVar14 = puVar10 + 1;
    *puVar10 = *puVar12;
    *puVar12 = uVar7;
  }
  puVar16 = puVar12;
  if (puVar14 == puVar12) {
    return;
  }
  while( true ) {
    puVar10 = puVar14 + -1;
    do {
      puVar14 = puVar10;
      puVar10 = puVar14 + 1;
      iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                        ((Vertex *)(**(long **)param_3 + (ulong)*param_1 * 0x70),
                         (Vertex *)(**(long **)param_3 + (ulong)*puVar10 * 0x70));
    } while (-1 < iVar8);
    puVar14 = puVar14 + 2;
    do {
      puVar16 = puVar16 + -1;
      iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                        ((Vertex *)(**(long **)param_3 + (ulong)*param_1 * 0x70),
                         (Vertex *)(**(long **)param_3 + (ulong)*puVar16 * 0x70));
    } while (iVar8 < 0);
    if (puVar16 <= puVar10) break;
    uVar7 = *puVar10;
    *puVar10 = *puVar16;
    *puVar16 = uVar7;
  }
  goto LAB_00b8072c;
code_r0x00b80804:
  uVar7 = uVar7 + 1;
  uVar3 = *param_1;
  *param_1 = *puVar14;
  *puVar14 = uVar3;
LAB_00b80818:
  puVar16 = param_1 + 1;
  puVar15 = puVar16;
  if (puVar16 < puVar14) {
    while( true ) {
      puVar16 = puVar15 + -1;
      do {
        puVar15 = puVar16;
        puVar16 = puVar15 + 1;
        iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                          ((Vertex *)(**(long **)param_3 + (ulong)*puVar16 * 0x70),
                           (Vertex *)(**(long **)param_3 + (ulong)*puVar10 * 0x70));
      } while (iVar8 < 0);
      puVar15 = puVar15 + 2;
      do {
        puVar14 = puVar14 + -1;
        iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                          ((Vertex *)(**(long **)param_3 + (ulong)*puVar14 * 0x70),
                           (Vertex *)(**(long **)param_3 + (ulong)*puVar10 * 0x70));
      } while (-1 < iVar8);
      if (puVar14 < puVar16) break;
      uVar3 = *puVar16;
      uVar7 = uVar7 + 1;
      puVar2 = puVar14;
      if (puVar16 != puVar10) {
        puVar2 = puVar10;
      }
      *puVar16 = *puVar14;
      *puVar14 = uVar3;
      puVar10 = puVar2;
    }
  }
  if ((puVar16 == puVar10) ||
     (iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                        ((Vertex *)(**(long **)param_3 + (ulong)*puVar10 * 0x70),
                         (Vertex *)(**(long **)param_3 + (ulong)*puVar16 * 0x70)), -1 < iVar8)) {
    if (uVar7 != 0) goto LAB_00b80980;
  }
  else {
    uVar3 = *puVar16;
    *puVar16 = *puVar10;
    *puVar10 = uVar3;
    if (uVar7 != 0xffffffff) goto LAB_00b80980;
  }
  bVar5 = __insertion_sort_incomplete<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
                    (param_1,puVar16,param_3);
  bVar6 = __insertion_sort_incomplete<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
                    (puVar16 + 1,param_2,param_3);
  if (bVar6) goto LAB_00b80a48;
  puVar10 = puVar16 + 1;
  if (bVar5) goto LAB_00b8072c;
LAB_00b80980:
  if ((long)param_2 - (long)puVar16 <= (long)puVar16 - (long)param_1) {
    __sort<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>(puVar16 + 1,param_2,param_3);
    param_2 = puVar16;
    goto LAB_00b80724;
  }
  __sort<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>(param_1,puVar16,param_3);
  puVar10 = puVar16 + 1;
  goto LAB_00b8072c;
LAB_00b80a48:
  param_2 = puVar16;
  if (bVar5) {
    return;
  }
  goto LAB_00b80724;
LAB_00b80b44:
  puVar14 = puVar10;
  iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                    ((Vertex *)(**(long **)param_3 + (ulong)*puVar14 * 0x70),
                     (Vertex *)(**(long **)param_3 + (ulong)*puVar12 * 0x70));
  if (iVar8 < 0) {
    uVar7 = *puVar14;
    lVar4 = lVar13;
    do {
      lVar17 = lVar4;
      *(undefined4 *)((long)param_1 + lVar17 + 0xc) = *(undefined4 *)((long)param_1 + lVar17 + 8);
      puVar10 = param_1;
      if (lVar17 == -8) goto LAB_00b80b30;
      iVar8 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                        ((Vertex *)(**(long **)param_3 + (ulong)uVar7 * 0x70),
                         (Vertex *)
                         (**(long **)param_3 + (ulong)*(uint *)((long)param_1 + lVar17 + 4) * 0x70))
      ;
      lVar4 = lVar17 + -4;
    } while (iVar8 < 0);
    puVar10 = (uint *)((long)param_1 + lVar17 + 8);
LAB_00b80b30:
    *puVar10 = uVar7;
  }
  lVar13 = lVar13 + 4;
  puVar10 = puVar14 + 1;
  puVar12 = puVar14;
  if (puVar14 + 1 == param_2) {
switchD_00b80a68_caseD_0:
    return;
  }
  goto LAB_00b80b44;
}


