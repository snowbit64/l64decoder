// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addIndexedTriangleSet
// Entry Point: 00b7e9e4
// Size: 1108 bytes
// Signature: undefined __thiscall addIndexedTriangleSet(IndexedTriangleSetBuilder * this, IndexedTriangleSet * param_1)


/* IndexedTriangleSetBuilder::addIndexedTriangleSet(IndexedTriangleSet*) */

void __thiscall
IndexedTriangleSetBuilder::addIndexedTriangleSet
          (IndexedTriangleSetBuilder *this,IndexedTriangleSet *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  void *__src;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 local_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = TriangleSet::getNumVertices();
  uVar7 = TriangleSet::getNumVertices();
  std::__ndk1::
  vector<IndexedTriangleSetBuilder::Vertex,std::__ndk1::allocator<IndexedTriangleSetBuilder::Vertex>>
  ::reserve((vector<IndexedTriangleSetBuilder::Vertex,std::__ndk1::allocator<IndexedTriangleSetBuilder::Vertex>>
             *)this,(ulong)(uVar4 + (int)((ulong)(*(long *)(this + 8) - *(long *)this) >> 4) *
                                    -0x49249249));
  __src = *(void **)(this + 0x18);
  uVar11 = *(long *)(this + 0x20) - (long)__src;
  uVar7 = (ulong)(uint)((int)((uVar7 & 0xffffffff) / 3) + (int)(uVar11 >> 4));
  if ((ulong)(*(long *)(this + 0x28) - (long)__src >> 4) < uVar7) {
    uVar7 = uVar7 * 0x10;
    __dest = operator_new(uVar7);
    if (0 < (long)uVar11) {
      memcpy(__dest,__src,uVar11);
    }
    *(void **)(this + 0x18) = __dest;
    *(ulong *)(this + 0x20) = (long)__dest + uVar11;
    *(void **)(this + 0x28) = (void *)((long)__dest + uVar7);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      uVar6 = *(uint *)(param_1 + 0xc);
      uStack_88 = 0;
      local_90 = 0;
      auStack_78[0] = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      local_b4 = 0;
      uStack_c0 = 0;
      local_bc = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      local_e0 = 0;
      lVar8 = TriangleSet::getPositions();
      iVar5 = (int)uVar7;
      uVar11 = (ulong)(uint)(iVar5 * 2);
      puVar1 = (ulong *)(lVar8 + (ulong)(uint)(iVar5 * 3) * 4);
      local_e0 = *puVar1;
      uStack_d8 = *(uint *)(puVar1 + 1);
      if ((((byte)this[0x30] >> 1 & 1) != 0) &&
         (lVar8 = TriangleSet::getTexCoords((TriangleSet *)param_1,0), lVar8 != 0)) {
        lVar8 = TriangleSet::getTexCoords((TriangleSet *)param_1,0);
        uVar10 = *(undefined8 *)(lVar8 + uVar11 * 4);
        uStack_d4 = (uint)uVar10;
        uStack_d0 = (undefined4)((ulong)uVar10 >> 0x20);
      }
      if ((((byte)this[0x30] >> 2 & 1) != 0) &&
         (lVar8 = TriangleSet::getTexCoords((TriangleSet *)param_1,1), lVar8 != 0)) {
        lVar8 = TriangleSet::getTexCoords((TriangleSet *)param_1,1);
        uVar10 = *(undefined8 *)(lVar8 + uVar11 * 4);
        uStack_cc = (undefined4)uVar10;
        uStack_c8 = (undefined4)((ulong)uVar10 >> 0x20);
      }
      if ((((byte)this[0x30] >> 3 & 1) != 0) &&
         (lVar8 = TriangleSet::getTexCoords((TriangleSet *)param_1,2), lVar8 != 0)) {
        lVar8 = TriangleSet::getTexCoords((TriangleSet *)param_1,2);
        uVar10 = *(undefined8 *)(lVar8 + uVar11 * 4);
        uStack_c4 = (undefined4)uVar10;
        uStack_c0 = (undefined4)((ulong)uVar10 >> 0x20);
      }
      if ((((byte)this[0x30] >> 4 & 1) != 0) &&
         (lVar8 = TriangleSet::getTexCoords((TriangleSet *)param_1,3), lVar8 != 0)) {
        lVar8 = TriangleSet::getTexCoords((TriangleSet *)param_1,3);
        uVar10 = *(undefined8 *)(lVar8 + uVar11 * 4);
        local_bc = (undefined4)uVar10;
        uStack_b8 = (undefined4)((ulong)uVar10 >> 0x20);
      }
      iVar12 = 4;
      if ((uVar6 & 0x100) != 0) {
        iVar12 = 1;
      }
      if ((((*(uint *)(this + 0x30) & 1) != 0) || ((*(uint *)(this + 0x30) & 0x140) == 0x140)) &&
         (lVar8 = TriangleSet::getNormals(), lVar8 != 0)) {
        lVar8 = TriangleSet::getNormals();
        puVar2 = (undefined8 *)(lVar8 + (ulong)(uint)(iVar5 * 3) * 4);
        uVar10 = *puVar2;
        uStack_ac = *(undefined4 *)(puVar2 + 1);
        local_b4 = (undefined4)uVar10;
        uStack_b0 = (undefined4)((ulong)uVar10 >> 0x20);
      }
      if ((*(uint *)(this + 0x30) & 0x140) == 0x40) {
        lVar8 = TriangleSet::getBlendIndices();
        if (lVar8 != 0) {
          lVar8 = TriangleSet::getBlendIndices();
          __memcpy_chk(auStack_78,lVar8 + (ulong)(uint)(iVar12 * iVar5),iVar12,8);
        }
        lVar8 = TriangleSet::getBlendWeights();
        if (lVar8 != 0) {
          lVar8 = TriangleSet::getBlendWeights();
          __memcpy_chk(&uStack_88,lVar8 + (ulong)(uint)(iVar12 * iVar5) * 4,iVar12 << 2,0x18);
        }
      }
      if ((((byte)this[0x30] >> 5 & 1) != 0) && (lVar8 = TriangleSet::getColors(), lVar8 != 0)) {
        lVar8 = TriangleSet::getColors();
        puVar2 = (undefined8 *)(lVar8 + (ulong)(uint)(iVar5 << 2) * 4);
        uStack_a0 = puVar2[1];
        uStack_a8 = *puVar2;
      }
      FUN_00b7e764(this,&local_e0);
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar4);
  }
  iVar5 = IndexedTriangleSet::getNumSubsets();
  if (iVar5 != 0) {
    uVar4 = 0;
    do {
      lVar8 = IndexedTriangleSet::getSubset(param_1,uVar4);
      if (*(int *)(lVar8 + 0xc) != 0) {
        uVar6 = 0;
        do {
          local_e0 = 0;
          uVar7 = IndexedTriangleSet::is16Bit();
          if ((uVar7 & 1) == 0) {
            lVar9 = IndexedTriangleSet::getIndices32();
            local_e0 = CONCAT44(local_e0._4_4_,
                                *(undefined4 *)(lVar9 + (ulong)(uVar6 + *(int *)(lVar8 + 8)) * 4));
            lVar9 = IndexedTriangleSet::getIndices32();
            local_e0 = CONCAT44(*(undefined4 *)
                                 (lVar9 + (ulong)(uVar6 + *(int *)(lVar8 + 8) + 1) * 4),
                                (undefined4)local_e0);
            lVar9 = IndexedTriangleSet::getIndices32();
            uStack_d8 = *(uint *)(lVar9 + (ulong)(uVar6 + *(int *)(lVar8 + 8) + 2) * 4);
          }
          else {
            lVar9 = IndexedTriangleSet::getIndices16();
            local_e0 = CONCAT44(local_e0._4_4_,
                                (uint)*(ushort *)(lVar9 + (ulong)(uVar6 + *(int *)(lVar8 + 8)) * 2))
            ;
            lVar9 = IndexedTriangleSet::getIndices16();
            local_e0 = (ulong)CONCAT24(*(undefined2 *)
                                        (lVar9 + (ulong)(uVar6 + *(int *)(lVar8 + 8) + 1) * 2),
                                       (undefined4)local_e0);
            lVar9 = IndexedTriangleSet::getIndices16();
            uStack_d8 = (uint)*(ushort *)(lVar9 + (ulong)(uVar6 + *(int *)(lVar8 + 8) + 2) * 2);
          }
          uStack_d4 = uVar4;
          addTriangle(this,(Triangle *)&local_e0);
          uVar6 = uVar6 + 3;
        } while (uVar6 < *(uint *)(lVar8 + 0xc));
      }
      uVar4 = uVar4 + 1;
      uVar6 = IndexedTriangleSet::getNumSubsets();
    } while (uVar4 < uVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


