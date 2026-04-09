// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
// Entry Point: 00a302e0
// Size: 616 bytes
// Signature: uint __cdecl __sort4<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>(RenderQueueItemSortKey * param_1, RenderQueueItemSortKey * param_2, RenderQueueItemSortKey * param_3, RenderQueueItemSortKey * param_4, SortForRendering * param_5)


/* unsigned int std::__ndk1::__sort4<RenderQueueItemSortKey::SortForRendering<true, false>&,
   RenderQueueItemSortKey*>(RenderQueueItemSortKey*, RenderQueueItemSortKey*,
   RenderQueueItemSortKey*, RenderQueueItemSortKey*, RenderQueueItemSortKey::SortForRendering<true,
   false>&) */

uint std::__ndk1::
     __sort4<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
               (RenderQueueItemSortKey *param_1,RenderQueueItemSortKey *param_2,
               RenderQueueItemSortKey *param_3,RenderQueueItemSortKey *param_4,
               SortForRendering *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  uVar5 = __sort3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
                    (param_1,param_2,param_3,param_5);
  uVar6 = uVar5;
  if (*(float *)(param_4 + 0x20) == *(float *)(param_3 + 0x20)) {
    uVar1 = *(uint *)(param_4 + 0x24) >> 0x1e & 1;
    uVar2 = *(uint *)(param_3 + 0x24) >> 0x1e & 1;
    bVar4 = uVar2 <= uVar1;
    if ((((uVar1 == uVar2) &&
         (bVar4 = *(ulong *)(param_3 + 8) <= *(ulong *)(param_4 + 8),
         *(ulong *)(param_4 + 8) == *(ulong *)(param_3 + 8))) &&
        (bVar4 = *(ulong *)param_3 <= *(ulong *)param_4, *(ulong *)param_4 == *(ulong *)param_3)) &&
       ((bVar4 = *(ulong *)(param_3 + 0x10) <= *(ulong *)(param_4 + 0x10),
        *(ulong *)(param_4 + 0x10) == *(ulong *)(param_3 + 0x10) &&
        (bVar4 = *(ulong *)(param_3 + 0x18) <= *(ulong *)(param_4 + 0x18),
        *(ulong *)(param_4 + 0x18) == *(ulong *)(param_3 + 0x18))))) {
      if (*(uint *)(param_3 + 0x24) >> 0x1f <= *(uint *)(param_4 + 0x24) >> 0x1f) goto LAB_00a304a8;
    }
    else if (bVar4) goto LAB_00a304a8;
  }
  else if (*(float *)(param_4 + 0x20) <= *(float *)(param_3 + 0x20)) goto LAB_00a304a8;
  uVar11 = *(undefined8 *)param_4;
  uVar10 = *(undefined8 *)(param_4 + 0x18);
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  uVar13 = *(undefined8 *)(param_3 + 8);
  uVar12 = *(undefined8 *)param_3;
  uVar15 = *(undefined8 *)(param_3 + 0x18);
  uVar14 = *(undefined8 *)(param_3 + 0x10);
  uVar8 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)param_3 = uVar11;
  *(undefined8 *)(param_3 + 0x18) = uVar10;
  *(undefined8 *)(param_3 + 0x10) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = uVar8;
  uVar6 = uVar5 + 1;
  *(undefined8 *)(param_4 + 0x20) = uVar9;
  *(undefined8 *)(param_4 + 8) = uVar13;
  *(undefined8 *)param_4 = uVar12;
  *(undefined8 *)(param_4 + 0x18) = uVar15;
  *(undefined8 *)(param_4 + 0x10) = uVar14;
  if (*(float *)(param_3 + 0x20) == *(float *)(param_2 + 0x20)) {
    uVar1 = *(uint *)(param_3 + 0x24) >> 0x1e & 1;
    uVar2 = *(uint *)(param_2 + 0x24) >> 0x1e & 1;
    bVar4 = uVar2 <= uVar1;
    if (((uVar1 == uVar2) &&
        (bVar4 = *(ulong *)(param_2 + 8) <= *(ulong *)(param_3 + 8),
        *(ulong *)(param_3 + 8) == *(ulong *)(param_2 + 8))) &&
       ((bVar4 = *(ulong *)param_2 <= *(ulong *)param_3, *(ulong *)param_3 == *(ulong *)param_2 &&
        ((bVar4 = *(ulong *)(param_2 + 0x10) <= *(ulong *)(param_3 + 0x10),
         *(ulong *)(param_3 + 0x10) == *(ulong *)(param_2 + 0x10) &&
         (bVar4 = *(ulong *)(param_2 + 0x18) <= *(ulong *)(param_3 + 0x18),
         *(ulong *)(param_3 + 0x18) == *(ulong *)(param_2 + 0x18))))))) {
      if (*(uint *)(param_2 + 0x24) >> 0x1f <= *(uint *)(param_3 + 0x24) >> 0x1f) goto LAB_00a304a8;
    }
    else if (bVar4) goto LAB_00a304a8;
  }
  else if (*(float *)(param_3 + 0x20) <= *(float *)(param_2 + 0x20)) goto LAB_00a304a8;
  uVar11 = *(undefined8 *)param_3;
  uVar10 = *(undefined8 *)(param_3 + 0x18);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 8);
  uVar12 = *(undefined8 *)param_2;
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar11;
  *(undefined8 *)(param_2 + 0x18) = uVar10;
  *(undefined8 *)(param_2 + 0x10) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar8;
  uVar6 = uVar5 + 2;
  *(undefined8 *)(param_3 + 0x20) = uVar9;
  *(undefined8 *)(param_3 + 8) = uVar13;
  *(undefined8 *)param_3 = uVar12;
  *(undefined8 *)(param_3 + 0x18) = uVar15;
  *(undefined8 *)(param_3 + 0x10) = uVar14;
  if (*(float *)(param_2 + 0x20) == *(float *)(param_1 + 0x20)) {
    uVar1 = *(uint *)(param_2 + 0x24) >> 0x1e & 1;
    uVar2 = *(uint *)(param_1 + 0x24) >> 0x1e & 1;
    bVar4 = uVar2 <= uVar1;
    if ((((uVar1 == uVar2) &&
         (bVar4 = *(ulong *)(param_1 + 8) <= *(ulong *)(param_2 + 8),
         *(ulong *)(param_2 + 8) == *(ulong *)(param_1 + 8))) &&
        (bVar4 = *(ulong *)param_1 <= *(ulong *)param_2, *(ulong *)param_2 == *(ulong *)param_1)) &&
       ((bVar4 = *(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10),
        *(ulong *)(param_2 + 0x10) == *(ulong *)(param_1 + 0x10) &&
        (bVar4 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_2 + 0x18),
        *(ulong *)(param_2 + 0x18) == *(ulong *)(param_1 + 0x18))))) {
      if (*(uint *)(param_1 + 0x24) >> 0x1f <= *(uint *)(param_2 + 0x24) >> 0x1f) goto LAB_00a304a8;
    }
    else if (bVar4) goto LAB_00a304a8;
  }
  else if (*(float *)(param_2 + 0x20) <= *(float *)(param_1 + 0x20)) goto LAB_00a304a8;
  uVar11 = *(undefined8 *)param_2;
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar12 = *(undefined8 *)param_1;
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar11;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  *(undefined8 *)(param_2 + 0x20) = uVar9;
  *(undefined8 *)(param_2 + 8) = uVar13;
  *(undefined8 *)param_2 = uVar12;
  *(undefined8 *)(param_2 + 0x18) = uVar15;
  *(undefined8 *)(param_2 + 0x10) = uVar14;
  uVar6 = uVar5 + 3;
LAB_00a304a8:
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


