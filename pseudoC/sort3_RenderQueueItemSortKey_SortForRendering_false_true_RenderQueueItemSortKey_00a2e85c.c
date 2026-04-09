// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
// Entry Point: 00a2e85c
// Size: 848 bytes
// Signature: uint __cdecl __sort3<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>(RenderQueueItemSortKey * param_1, RenderQueueItemSortKey * param_2, RenderQueueItemSortKey * param_3, SortForRendering * param_4)


/* unsigned int std::__ndk1::__sort3<RenderQueueItemSortKey::SortForRendering<false, true>&,
   RenderQueueItemSortKey*>(RenderQueueItemSortKey*, RenderQueueItemSortKey*,
   RenderQueueItemSortKey*, RenderQueueItemSortKey::SortForRendering<false, true>&) */

uint std::__ndk1::
     __sort3<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
               (RenderQueueItemSortKey *param_1,RenderQueueItemSortKey *param_2,
               RenderQueueItemSortKey *param_3,SortForRendering *param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar4 = *(uint *)(param_2 + 0x24);
  fVar9 = *(float *)(param_2 + 0x20);
  uVar1 = uVar4 >> 0x1e & 1;
  uVar7 = *(uint *)(param_1 + 0x24) >> 0x1e & 1;
  bVar3 = uVar7 <= uVar1;
  if ((((uVar1 != uVar7) ||
       (bVar3 = *(ulong *)(param_1 + 8) <= *(ulong *)(param_2 + 8),
       *(ulong *)(param_2 + 8) != *(ulong *)(param_1 + 8))) ||
      (bVar3 = *(ulong *)param_1 <= *(ulong *)param_2, *(ulong *)param_2 != *(ulong *)param_1)) ||
     (((bVar3 = *(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10),
       *(ulong *)(param_2 + 0x10) != *(ulong *)(param_1 + 0x10) ||
       (bVar3 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_2 + 0x18),
       *(ulong *)(param_2 + 0x18) != *(ulong *)(param_1 + 0x18))) ||
      (uVar7 = -((int)*(uint *)(param_1 + 0x24) >> 0x1f), bVar3 = uVar7 <= uVar4 >> 0x1f,
      uVar4 >> 0x1f != uVar7)))) {
    if (bVar3) goto LAB_00a2e8ec;
LAB_00a2e964:
    uVar7 = *(uint *)(param_3 + 0x24) >> 0x1e & 1;
    bVar3 = uVar1 <= uVar7;
    if (((uVar7 != uVar1) ||
        (bVar3 = *(ulong *)(param_2 + 8) <= *(ulong *)(param_3 + 8),
        *(ulong *)(param_3 + 8) != *(ulong *)(param_2 + 8))) ||
       ((bVar3 = *(ulong *)param_2 <= *(ulong *)param_3, *(ulong *)param_3 != *(ulong *)param_2 ||
        (((bVar3 = *(ulong *)(param_2 + 0x10) <= *(ulong *)(param_3 + 0x10),
          *(ulong *)(param_3 + 0x10) != *(ulong *)(param_2 + 0x10) ||
          (bVar3 = *(ulong *)(param_2 + 0x18) <= *(ulong *)(param_3 + 0x18),
          *(ulong *)(param_3 + 0x18) != *(ulong *)(param_2 + 0x18))) ||
         (uVar1 = *(uint *)(param_3 + 0x24) >> 0x1f, uVar4 = -((int)uVar4 >> 0x1f),
         bVar3 = uVar4 <= uVar1, uVar1 != uVar4)))))) {
      if (bVar3) goto LAB_00a2e9d0;
LAB_00a2eb10:
      uVar11 = *(undefined8 *)param_3;
      uVar10 = *(undefined8 *)(param_3 + 0x18);
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      uVar13 = *(undefined8 *)(param_1 + 8);
      uVar12 = *(undefined8 *)param_1;
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar11;
      *(undefined8 *)(param_1 + 0x18) = uVar10;
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      uVar4 = 1;
LAB_00a2eb50:
      *(undefined8 *)(param_3 + 0x20) = uVar8;
      *(undefined8 *)(param_3 + 8) = uVar13;
      *(undefined8 *)param_3 = uVar12;
      *(undefined8 *)(param_3 + 0x18) = uVar15;
      *(undefined8 *)(param_3 + 0x10) = uVar14;
      goto LAB_00a2eb8c;
    }
    if (*(float *)(param_3 + 0x20) < fVar9) goto LAB_00a2eb10;
LAB_00a2e9d0:
    uVar11 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar12 = *(undefined8 *)param_1;
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar11;
    *(undefined8 *)(param_1 + 0x18) = uVar10;
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_2 + 0x20) = uVar8;
    *(undefined8 *)(param_2 + 8) = uVar13;
    *(undefined8 *)param_2 = uVar12;
    *(undefined8 *)(param_2 + 0x18) = uVar15;
    *(undefined8 *)(param_2 + 0x10) = uVar14;
    uVar7 = (uint)((ulong)uVar8 >> 0x20);
    uVar4 = uVar7 >> 0x1e & 1;
    uVar1 = *(uint *)(param_3 + 0x24) >> 0x1e & 1;
    bVar3 = uVar4 <= uVar1;
    if ((((uVar1 == uVar4) &&
         (bVar3 = *(ulong *)(param_2 + 8) <= *(ulong *)(param_3 + 8),
         *(ulong *)(param_3 + 8) == *(ulong *)(param_2 + 8))) &&
        ((bVar3 = *(ulong *)param_2 <= *(ulong *)param_3, *(ulong *)param_3 == *(ulong *)param_2 &&
         ((bVar3 = *(ulong *)(param_2 + 0x10) <= *(ulong *)(param_3 + 0x10),
          *(ulong *)(param_3 + 0x10) == *(ulong *)(param_2 + 0x10) &&
          (bVar3 = *(ulong *)(param_2 + 0x18) <= *(ulong *)(param_3 + 0x18),
          *(ulong *)(param_3 + 0x18) == *(ulong *)(param_2 + 0x18))))))) &&
       (uVar4 = *(uint *)(param_3 + 0x24) >> 0x1f, uVar1 = -((int)uVar7 >> 0x1f),
       bVar3 = uVar1 <= uVar4, uVar4 == uVar1)) {
      if (*(float *)(param_3 + 0x20) < *(float *)(param_2 + 0x20)) {
LAB_00a2eb34:
        uVar11 = *(undefined8 *)param_3;
        uVar10 = *(undefined8 *)(param_3 + 0x18);
        uVar8 = *(undefined8 *)(param_3 + 0x10);
        uVar4 = 2;
        uVar13 = *(undefined8 *)(param_2 + 8);
        uVar12 = *(undefined8 *)param_2;
        uVar15 = *(undefined8 *)(param_2 + 0x18);
        uVar14 = *(undefined8 *)(param_2 + 0x10);
        uVar6 = *(undefined8 *)(param_3 + 0x20);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)param_2 = uVar11;
        *(undefined8 *)(param_2 + 0x18) = uVar10;
        *(undefined8 *)(param_2 + 0x10) = uVar8;
        uVar8 = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(param_2 + 0x20) = uVar6;
        goto LAB_00a2eb50;
      }
    }
    else if (!bVar3) goto LAB_00a2eb34;
    goto LAB_00a2eb88;
  }
  if (fVar9 < *(float *)(param_1 + 0x20)) goto LAB_00a2e964;
LAB_00a2e8ec:
  uVar7 = *(uint *)(param_3 + 0x24) >> 0x1e & 1;
  bVar3 = uVar1 <= uVar7;
  if (((((uVar7 == uVar1) &&
        (bVar3 = *(ulong *)(param_2 + 8) <= *(ulong *)(param_3 + 8),
        *(ulong *)(param_3 + 8) == *(ulong *)(param_2 + 8))) &&
       (bVar3 = *(ulong *)param_2 <= *(ulong *)param_3, *(ulong *)param_3 == *(ulong *)param_2)) &&
      ((bVar3 = *(ulong *)(param_2 + 0x10) <= *(ulong *)(param_3 + 0x10),
       *(ulong *)(param_3 + 0x10) == *(ulong *)(param_2 + 0x10) &&
       (bVar3 = *(ulong *)(param_2 + 0x18) <= *(ulong *)(param_3 + 0x18),
       *(ulong *)(param_3 + 0x18) == *(ulong *)(param_2 + 0x18))))) &&
     (uVar1 = *(uint *)(param_3 + 0x24) >> 0x1f, uVar4 = -((int)uVar4 >> 0x1f),
     bVar3 = uVar4 <= uVar1, uVar1 == uVar4)) {
    if (*(float *)(param_3 + 0x20) < fVar9) {
LAB_00a2ea70:
      uVar11 = *(undefined8 *)param_3;
      uVar10 = *(undefined8 *)(param_3 + 0x18);
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      uVar13 = *(undefined8 *)(param_2 + 8);
      uVar12 = *(undefined8 *)param_2;
      uVar15 = *(undefined8 *)(param_2 + 0x18);
      uVar14 = *(undefined8 *)(param_2 + 0x10);
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar11;
      *(undefined8 *)(param_2 + 0x18) = uVar10;
      *(undefined8 *)(param_2 + 0x10) = uVar8;
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x20) = uVar6;
      *(undefined8 *)(param_3 + 0x20) = uVar8;
      *(undefined8 *)(param_3 + 8) = uVar13;
      *(undefined8 *)param_3 = uVar12;
      *(undefined8 *)(param_3 + 0x18) = uVar15;
      *(undefined8 *)(param_3 + 0x10) = uVar14;
      uVar4 = *(uint *)(param_2 + 0x24) >> 0x1e & 1;
      uVar1 = *(uint *)(param_1 + 0x24) >> 0x1e & 1;
      bVar3 = uVar1 <= uVar4;
      if (((uVar4 == uVar1) &&
          (bVar3 = *(ulong *)(param_1 + 8) <= *(ulong *)(param_2 + 8),
          *(ulong *)(param_2 + 8) == *(ulong *)(param_1 + 8))) &&
         ((bVar3 = *(ulong *)param_1 <= *(ulong *)param_2, *(ulong *)param_2 == *(ulong *)param_1 &&
          (((bVar3 = *(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10),
            *(ulong *)(param_2 + 0x10) == *(ulong *)(param_1 + 0x10) &&
            (bVar3 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_2 + 0x18),
            *(ulong *)(param_2 + 0x18) == *(ulong *)(param_1 + 0x18))) &&
           (uVar4 = *(uint *)(param_2 + 0x24) >> 0x1f,
           uVar1 = -((int)*(uint *)(param_1 + 0x24) >> 0x1f), bVar3 = uVar1 <= uVar4, uVar4 == uVar1
           )))))) {
        if (*(float *)(param_2 + 0x20) < *(float *)(param_1 + 0x20)) {
LAB_00a2eb60:
          uVar11 = *(undefined8 *)param_2;
          uVar10 = *(undefined8 *)(param_2 + 0x18);
          uVar8 = *(undefined8 *)(param_2 + 0x10);
          uVar13 = *(undefined8 *)(param_1 + 8);
          uVar12 = *(undefined8 *)param_1;
          uVar15 = *(undefined8 *)(param_1 + 0x18);
          uVar14 = *(undefined8 *)(param_1 + 0x10);
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)param_1 = uVar11;
          *(undefined8 *)(param_1 + 0x18) = uVar10;
          *(undefined8 *)(param_1 + 0x10) = uVar8;
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = uVar6;
          uVar4 = 2;
          *(undefined8 *)(param_2 + 0x20) = uVar8;
          *(undefined8 *)(param_2 + 8) = uVar13;
          *(undefined8 *)param_2 = uVar12;
          *(undefined8 *)(param_2 + 0x18) = uVar15;
          *(undefined8 *)(param_2 + 0x10) = uVar14;
          goto LAB_00a2eb8c;
        }
      }
      else if (!bVar3) goto LAB_00a2eb60;
LAB_00a2eb88:
      uVar4 = 1;
      goto LAB_00a2eb8c;
    }
  }
  else if (!bVar3) goto LAB_00a2ea70;
  uVar4 = 0;
LAB_00a2eb8c:
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


