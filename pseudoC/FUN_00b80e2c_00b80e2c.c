// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b80e2c
// Entry Point: 00b80e2c
// Size: 344 bytes
// Signature: undefined FUN_00b80e2c(void)


uint FUN_00b80e2c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                 long **param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  
  uVar2 = std::__ndk1::__sort4<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
                    (param_1,param_2,param_3,param_4,(VertexSorter *)param_6);
  iVar3 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                    ((Vertex *)(**param_6 + (ulong)*param_5 * 0x70),
                     (Vertex *)(**param_6 + (ulong)*param_4 * 0x70));
  if (iVar3 < 0) {
    uVar1 = *param_4;
    plVar4 = *param_6;
    *param_4 = *param_5;
    *param_5 = uVar1;
    iVar3 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                      ((Vertex *)(*plVar4 + (ulong)*param_4 * 0x70),
                       (Vertex *)(*plVar4 + (ulong)*param_3 * 0x70));
    if (iVar3 < 0) {
      uVar1 = *param_3;
      plVar4 = *param_6;
      *param_3 = *param_4;
      *param_4 = uVar1;
      iVar3 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                        ((Vertex *)(*plVar4 + (ulong)*param_3 * 0x70),
                         (Vertex *)(*plVar4 + (ulong)*param_2 * 0x70));
      if (iVar3 < 0) {
        uVar1 = *param_2;
        plVar4 = *param_6;
        *param_2 = *param_3;
        *param_3 = uVar1;
        iVar3 = IndexedTriangleSetBuilder::Vertex::cmpVertex
                          ((Vertex *)(*plVar4 + (ulong)*param_2 * 0x70),
                           (Vertex *)(*plVar4 + (ulong)*param_1 * 0x70));
        if (iVar3 < 0) {
          uVar2 = uVar2 + 4;
          uVar1 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar1;
        }
        else {
          uVar2 = uVar2 + 3;
        }
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


